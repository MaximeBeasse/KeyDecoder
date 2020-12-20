import 'dart:io';
import 'dart:ui';

import 'package:flutter/gestures.dart';
import 'package:flutter/material.dart';
import 'package:flutter/scheduler.dart';
import 'package:flutter/services.dart';
import 'package:image_size_getter/image_size_getter.dart' hide Size;
import 'package:moor_flutter/moor_flutter.dart';
import 'package:provider/provider.dart';
import 'projects/pictures/shapes.dart';
import 'utils/gesture_x_detector.dart';
import 'utils/utils.dart';
import 'package:vector_math/vector_math_64.dart' hide Colors;
import 'dart:math';

const double ISOwidth = 85.60;
const double ISOheight = 53.98;

class ShapeNotifier extends ChangeNotifier {

	List<Line> lineShapes = [];
	List<Circle> draggableShapes = [];
	List<Shape> miscellaneous = [];

	List<Crosshair> markers = [];

	List<Shape> get all => miscellaneous + lineShapes + draggableShapes + markers;

	void rescaleDelta(double scaleDelta) {
		all?.forEach((element) {
			if (element == null)
				return;
				
			if (element is Circle)
				element.radius = element.radius / scaleDelta;

			if (element is Crosshair) {
				if (element.textStyle?.fontSize != null)
					element.textPainter.textScaleFactor /= scaleDelta;
			}

		});
	}

	void rescale(double scale) {
		all?.forEach((element) {
			if (element == null)
				return;

			if (element is Crosshair) {
				element.paint.strokeWidth = Crosshair.strokeWidth / scale;
				element.size = element.baseSize / scale;
			}
			else
				element.paint?.strokeWidth = Shape.strokeWidth / scale;
			
		});
	}

	void changed() {
		notifyListeners();
	}

}

class EditorPainter extends CustomPainter {

	EditorPainter(this.context, {this.shapes});

	final BuildContext context;
	final List<Shape> shapes;

	@override
	void paint(Canvas canvas, Size size) {

		if (shapes == null)
			return;

		for (var shape in shapes) {
			if (shape == null || shape.hidden)
				continue;
			shape.draw(canvas, context);
		}
	}

	@override
	bool shouldRepaint(CustomPainter oldDelegate) => true;
}

class _ValueUpdater<T> {
	final T Function(T oldValue, T newValue) onUpdate;
	T value;

	_ValueUpdater({this.onUpdate});

	T update(T newValue) {
		T updated = onUpdate(value, newValue);
		value = newValue;
		return updated;
	}
}

class EditorBase extends StatefulWidget {

	EditorBase({
		Key key,
		this.imageData,
		this.shapes,
		this.portrait = false,
		this.onInitialization,
		this.onRotation,
		this.onTap
	}) : super(key: key);

	EditorBase.fromFile({
		Key key,
		File imageFile,
		this.shapes,
		this.portrait = false,
		this.onInitialization,
		this.onRotation,
		this.onTap
	}) : imageData = imageFile.readAsBytesSync(), super(key: key);

	@required
	final Uint8List imageData;

	@required
	final ShapeNotifier shapes;

	@required
	final bool portrait;

	final void Function() onInitialization;

	final void Function(double) onRotation;

	final void Function(Offset) onTap;

	/// touch radius in centimeter
	static const double touchDiameterCm = 0.60;

	/// actual touch radius (38 logical dots per cm)
	static const double touchRadius = touchDiameterCm * 38.0 / 2.0;

	/// actual touch radius is [touchRadius * touchSizeFactor]
	static const double touchSizeFactor = 1.8;

	static const double strokeWidth = Shape.strokeWidth;

	static Future initEditorBase() async {
		await SystemChrome.setEnabledSystemUIOverlays([]);
		return landscapeModeOnly();
	}

	static Future disposeEditorBase() async {
		await SystemChrome.setEnabledSystemUIOverlays(SystemUiOverlay.values);
		return enableRotation();
	}

	@override
	EditorBaseState createState() => EditorBaseState();
}

class EditorBaseState extends State<EditorBase> {

	GlobalKey painterKey = GlobalKey();

	void Function() onInitialization;

	Circle _drag;

	Matrix4 translationDeltaMatrix = Matrix4.identity();
	Matrix4 scaleDeltaMatrix = Matrix4.identity();
	Matrix4 rotationDeltaMatrix = Matrix4.identity();
	Matrix4 matrix = Matrix4.identity();

	MediaQueryData _mediaQuery;
	Size _mediaQuerySize;

	double _initScale = 1.0;

	bool _fromPortrait;

	Size _imageSize;
	
	GlobalKey _imageKey = GlobalKey(debugLabel: 'image global key');
	GlobalKey _baseKey = GlobalKey(debugLabel: 'base global key');

	RenderBox get imageRenderBox => _imageKey?.currentContext?.findRenderObject();

	RenderObject get ancestor => _baseKey?.currentContext?.findRenderObject();

	double get scaleFactor => imageRenderBox.getTransformTo(ancestor).getColumn(0).length;

	double get isoRatio => (ISOheight / _imageSize.height);

	double px2mm(double dist) {
        return dist * isoRatio;
    }

	double get angle {
		Matrix4 m = imageRenderBox.getTransformTo(null);	
		Matrix3 m3 = m.getRotation().scaled(1/scaleFactor);
		double res = acos((m3.trace()-1)/2);
		return res.isNaN ? pi : res;
	}

	@override
	void initState() {

		final tmp = ImageSizeGetter.getSize(MemoryInput(widget.imageData));
		_imageSize = Size(tmp.width.toDouble(), tmp.height.toDouble());

		if(widget.portrait)
			_imageSize = _imageSize.flipped;

		onInitialization = widget.onInitialization;

		super.initState();
	}

	@override
	void dispose() {
		super.dispose();
	}

	Offset globalToLocal(Offset o) {

		if (imageRenderBox == null)
			return Offset.zero;

		Offset out = (widget.portrait) ? Offset(o.dy, o.dx) : Offset(o.dx, o.dy);

		Offset globalZero = imageRenderBox.localToGlobal(Offset.zero, ancestor: ancestor);
		Offset localZero = imageRenderBox.globalToLocal(Offset.zero, ancestor: ancestor);

		if (_fromPortrait) {
			if (widget.portrait) {
				out = out.scale(-1, 1).translate(_mediaQuerySize.shortestSide, 0);
				out = imageRenderBox.globalToLocal(out, ancestor: ancestor);
			} else {
				localZero = invertOffset(imageRenderBox.globalToLocal(globalZero, ancestor: ancestor));
				if (matrix.isIdentity())
					out += globalZero;
				out = imageRenderBox.globalToLocal(out, ancestor: ancestor);
			}
		} else {
			if (widget.portrait) {
				localZero = Offset.zero;
				out = out.scale(-1, 1).translate(_mediaQuerySize.shortestSide, 0);
			} else {
				localZero = imageRenderBox.globalToLocal(globalZero, ancestor: ancestor);
			}

			out = imageRenderBox.globalToLocal(out, ancestor: ancestor) - localZero;
		}

		return out;
	}

	void _onMoveStart(int pointer, Offset localPos, Offset position) {

		if (localPos == null || imageRenderBox == null)
			return;

		int closest = -1;
		double dmin = double.infinity;
		
		Offset transformed = globalToLocal(localPos);

		final _draggable = widget.shapes.draggableShapes;

		for (int i = 0; i < _draggable.length; i++) {
			Circle elt = _draggable[i];
			final d = (transformed - elt.center).distance;

			if (d > elt.radius * EditorBase.touchSizeFactor)
				continue;

			if (d < dmin) {
				dmin = d;
				closest = i;
			}
		}

		if (closest < 0) {
			if (widget.onTap != null)
				widget.onTap(transformed);
			return;
		}

		_drag = _draggable[closest];
	}

	void _onMoveUpdate(Offset localPos, Offset position, Offset localDelta, Offset delta) {
		
		if (_drag == null) {

			// handle matrix translating
			if(widget.portrait)
				localDelta = Offset(-localDelta.dy, localDelta.dx);

			translationDeltaMatrix = _translate(localDelta / _initScale);

			setState(() {
				matrix = translationDeltaMatrix * matrix;
			});

			widget.shapes.changed();

		} else {
			setState(() {
				_drag.center = globalToLocal(position);
				widget.shapes.changed();
			});
		}
	}

	void _onMoveEnd(int pointer, Offset localPos, Offset position) {
		setState(() {
			_drag = null;
		});
	}

	@override
	Widget build(BuildContext context) {

		if (_mediaQuery == null) {

			_mediaQuery = MediaQuery.of(context);
			_mediaQuerySize = _mediaQuery.size;

			if ((_mediaQuerySize.width > _mediaQuerySize.height && _imageSize.width > _imageSize.height)
				 || (_mediaQuerySize.width < _mediaQuerySize.height && _imageSize.width < _imageSize.height)) {
				// When launching portrait in portrait mode
				// or launching landscape in landscape mode
				_fromPortrait = widget.portrait;
				_mediaQuerySize = _mediaQuerySize.flipped;
			}
			else {
				// When launching portrait in landscape mode
				// or launching landscape in portrait mode
				_fromPortrait = !widget.portrait;
			}

			_initScale = _mediaQuerySize.shortestSide / _imageSize.shortestSide;
		}

		Size imageSize = _imageSize;

		return WillPopScope(
			onWillPop: _onWillPop,
			child: ChangeNotifierProvider<ShapeNotifier>.value(
				value: widget.shapes,
				child: XGestureDetector(
					onScaleStart: onScaleStart,
					onScaleUpdate: onScaleUpdate,
					onMoveStart: _onMoveStart,
					onMoveUpdate: _onMoveUpdate,
					onMoveEnd: _onMoveEnd,
					child: RotatedBox(
						quarterTurns: (widget.portrait) ? -1 : 0,
						child: Builder(
							builder: (stackContext) => Transform.scale(
								key: _baseKey,
								scale: _initScale,
								child: Transform(
									transform: matrix,
									child: Builder(
										builder: (stackContext) => OverflowBox(
											minWidth: imageSize.width,
											minHeight: imageSize.height,
											maxWidth: imageSize.width,
											maxHeight: imageSize.height,
											child: Stack(
												alignment: Alignment.center,
												fit: StackFit.loose,
												clipBehavior: Clip.none,
												children: [
													Image.memory(
														widget.imageData,
														key: _imageKey,
														frameBuilder: (context, child, frame, wasSynchronouslyLoaded) {
															if (wasSynchronouslyLoaded) {
																return child;
															}
															
															if (frame == null)
																return Transform.scale(
																	scale: 10,
																	child: CircularProgressIndicator()
																);
															else {
																if (onInitialization != null) {
																	SchedulerBinding.instance.addPostFrameCallback((timeStamp) {
																		onInitialization();
																		onInitialization = null;
																	});
																}
																return child;
															}
														},
														gaplessPlayback: true,
														filterQuality: FilterQuality.high,
														width: imageSize.width,
														height: imageSize.height,
													),
													Consumer<ShapeNotifier>(
														builder: (painterContext, value, child) {
															return CustomPaint(
																key: painterKey,
																size: _imageSize,
																painter: EditorPainter(painterContext, shapes: value.all),
															);
														},
													)
												]
											),
										),
									)
								),
							),
						),
					),
				),
			),
		);
	}

	Future<bool> _onWillPop() async {
		await EditorBase.disposeEditorBase();
		return Future.value(true);
	}

	_ValueUpdater<Offset> translationUpdater = _ValueUpdater(
		onUpdate: (oldVal, newVal) => newVal - oldVal,
	);
	_ValueUpdater<double> rotationUpdater = _ValueUpdater(
		onUpdate: (oldVal, newVal) => newVal - oldVal,
	);
	_ValueUpdater<double> scaleUpdater = _ValueUpdater(
		onUpdate: (oldVal, newVal) => newVal / oldVal,
	);

	void onScaleStart(Offset focalPoint) {
		translationUpdater.value = focalPoint;
		rotationUpdater.value = double.nan;
		scaleUpdater.value = 1.0;
	}

	void onScaleUpdate(Offset focalPoint, double scale, double rotation) {

		rotation *= -1;

		translationDeltaMatrix = Matrix4.identity();
		scaleDeltaMatrix = Matrix4.identity();
		rotationDeltaMatrix = Matrix4.identity();

		// handle matrix translating
		Offset translationDelta = translationUpdater.update(focalPoint);
		if(widget.portrait)
			translationDelta = Offset(-translationDelta.dy, translationDelta.dx);
		translationDeltaMatrix = _translate(translationDelta / _initScale);

		matrix = translationDeltaMatrix * matrix;

		// handle matrix scaling
		if (scale != 1.0) {
			double scaleDelta = scaleUpdater.update(scale);

			scaleDeltaMatrix = _scale(scaleDelta, focalPoint);
			matrix = scaleDeltaMatrix * matrix;

			widget.shapes.rescaleDelta(scaleDelta);
			widget.shapes.rescale(scaleFactor);
		}

		// handle matrix rotating
		if (rotation != 0.0) {
			if (rotationUpdater.value.isNaN) {
				rotationUpdater.value = rotation;
			} else {
				double rotationDelta = rotationUpdater.update(rotation);
				rotationDeltaMatrix = _rotate(rotationDelta, focalPoint);
				matrix = rotationDeltaMatrix * matrix;

				if(widget.onRotation != null)
					widget.onRotation(rotationDelta);
			}
		}

		widget.shapes.changed();

		setState(() {});
  	}

	Matrix4 _translate(Offset translation) {
		var dx = translation.dx;
		var dy = translation.dy;

		//  ..[0]  = 1       # x scale
		//  ..[5]  = 1       # y scale
		//  ..[10] = 1       # diagonal "one"
		//  ..[12] = dx      # x translation
		//  ..[13] = dy      # y translation
		//  ..[15] = 1       # diagonal "one"
		return Matrix4(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, dx, dy, 0, 1);
	}

	Matrix4 _scale(double scale, Offset focalPoint) {
		var dx = (1 - scale) * focalPoint.dx;
		var dy = (1 - scale) * focalPoint.dy;

		//  ..[0]  = scale   # x scale
		//  ..[5]  = scale   # y scale
		//  ..[10] = 1       # diagonal "one"
		//  ..[12] = dx      # x translation
		//  ..[13] = dy      # y translation
		//  ..[15] = 1       # diagonal "one"
		return Matrix4(scale, 0, 0, 0, 0, scale, 0, 0, 0, 0, 1, 0, dx, dy, 0, 1);
	}

	Matrix4 _rotate(double angle, Offset focalPoint) {
		var c = cos(angle);
		var s = sin(angle);
		var dx = (1 - c) * focalPoint.dx + s * focalPoint.dy;
		var dy = (1 - c) * focalPoint.dy - s * focalPoint.dx;

		//  ..[0]  = c       # x scale
		//  ..[1]  = s       # y skew
		//  ..[4]  = -s      # x skew
		//  ..[5]  = c       # y scale
		//  ..[10] = 1       # diagonal "one"
		//  ..[12] = dx      # x translation
		//  ..[13] = dy      # y translation
		//  ..[15] = 1       # diagonal "one"
		return Matrix4(c, s, 0, 0, -s, c, 0, 0, 0, 0, 1, 0, dx, dy, 0, 1);
	}
}
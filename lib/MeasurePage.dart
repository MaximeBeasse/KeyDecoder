import 'dart:io';
import 'dart:math';
import 'dart:typed_data';

import 'package:community_material_icon/community_material_icon.dart';
import 'package:flutter/material.dart';
import 'package:flutter/scheduler.dart';
import 'package:fluttericon/entypo_icons.dart';
import 'package:image_size_getter/image_size_getter.dart' as size_getter;
import 'package:keydecoder/projects/model/projects.dart';
import 'EditorBase.dart';
import 'projects/pictures/shapes.dart' hide Rect;

import 'utils/gesture_x_detector.dart';
import 'utils/utils.dart';

class MeasurePage extends StatefulWidget {

	MeasurePage(this.project);

	final Project project;

	static const routeName = '/measure';
	static Route<dynamic> route(Object args) {
		return MaterialPageRoute(
            builder: (BuildContext context) {
				if (args is Project)
					return MeasurePage(args);
				throw ArgumentError;
			},
        );
	}

	@override
	MeasurePageState createState() => MeasurePageState();
}

class MeasurePageState extends State<MeasurePage> {

	GlobalKey editorKey = GlobalKey();

	ShapeNotifier shapeNotifier;

	bool _canAdd = true;
	bool _canRemove = false;
	bool _canAccept = false;

	Size imageSize;

	Uint8List _imageData;

	final ValueNotifier<int> _currentStep = ValueNotifier<int>(0);
	int _curStep = 0;

	Matrix4 _subMatrix;
	double _baseAngle = 0.0;
	double _mAngle;

	List<Offset> _markers = List<Offset>();

	final Color _colorDisable = Color(0xFFe0f2f1);
	final Color _colorActive = Colors.lightBlue[400];
	final Color _colorDone = Colors.lightGreen[400];

	EditorBaseState get _editorBaseState => (editorKey.currentState as EditorBaseState);

	String _coordinates = '';

	@override
	void initState() {
		
		shapeNotifier = ShapeNotifier();
		
		// Snaps daggrable circles to current line
		shapeNotifier.addListener(() {
			if (shapeNotifier.draggableShapes.isEmpty || shapeNotifier.lineShapes.isEmpty)
				return;

			// Make the line follow the first draggable
			shapeNotifier.lineShapes.last.a = shapeNotifier.draggableShapes[0].center;

			// Make the line follow the second draggable
			if (shapeNotifier.draggableShapes.length > 1)
				shapeNotifier.lineShapes.last.b = shapeNotifier.draggableShapes[1].center;
		});

		_imageData = File(widget.project.pathCroppedPic).readAsBytesSync();

		size_getter.Size tmp = size_getter.ImageSizeGetter.getSize(size_getter.MemoryInput(_imageData));
		imageSize = Size(tmp.width.toDouble(), tmp.height.toDouble());

		super.initState();

		SchedulerBinding.instance.addPostFrameCallback((timeStamp) {

			Future.delayed(Duration(seconds: 1)).then((_) {

				initStep();

				_currentStep.addListener(() {
					if (_currentStep.value == _curStep)
						return;

					bool isNext = _currentStep.value > _curStep;
					_curStep = _currentStep.value;

					if (isNext) 
						nextStep();
					else
						prevStep();
				});
			});
		});
	}

	void initStep() {

		if (widget.project.angle == null)
			return;

		_mAngle = _baseAngle + widget.project.angle;
		Offset origin = Offset(widget.project.originX, widget.project.originY);

		double angle = _mAngle - _baseAngle;
		angle = (angle < -pi) ? angle + 2*pi: angle;
		angle = (angle > pi) ? angle - 2*pi: angle;

		_subMatrix = Matrix4.translationValues(origin.dx, origin.dy, 0.0)..rotateZ(angle);

		shapeNotifier.lineShapes.clear();
		shapeNotifier.draggableShapes.clear();

		final Paint _mainAxisPaint = Paint()
			..color = Colors.red[600]
			..strokeWidth = EditorBase.strokeWidth / _editorBaseState.scaleFactor
			..style = PaintingStyle.stroke;

		Line mainAxis = Line.fromAngle(
			origin,
			_mAngle,
			_mainAxisPaint
		);

		final Paint _crossAxisPaint = Paint()
			..color = Colors.blue[600]
			..strokeWidth = EditorBase.strokeWidth / _editorBaseState.scaleFactor
			..style = PaintingStyle.stroke;

		Line crossAxis = Line.perpendicular(
			mainAxis,
			origin,
			_crossAxisPaint,
		)..fixAngle = true;
	
		shapeNotifier.lineShapes.add(mainAxis);
		shapeNotifier.lineShapes.add(crossAxis);

		shapeNotifier.markers.clear();

		_markers = fromBlob(widget.project.markers);
		_markers.forEach((center) {
			addMarker(center);
		});

		shapeNotifier.changed();

		_currentStep.value = 2;

		setState(() {
			_curStep = 2;
			_canAdd = true;
			_canRemove = true;
			_canAccept = true;
		});
	}

	void nextStep() {
		switch (_curStep) {
			case 3:
				Navigator.of(context).pop();
				break;
			case 2:

				shapeNotifier.draggableShapes.clear();

				shapeNotifier.lineShapes[1].b = shapeNotifier.lineShapes[0].xtersect(shapeNotifier.lineShapes[1]);
				Offset origin = shapeNotifier.lineShapes[1].b;

				setState(() {
					_mAngle = _baseAngle + shapeNotifier.lineShapes[0].mAngle;
					_canAdd = true;
					_canRemove = true;
					_canAccept = true;
				});

				widget.project.originX = origin.dx;
				widget.project.originY = origin.dy;
				widget.project.angle = shapeNotifier.lineShapes[0].mAngle;
				widget.project.isoRatio = _editorBaseState.isoRatio;

				ProjectsDatabase.dao.updateProject(widget.project);
				
				double angle = _mAngle - _baseAngle;
				angle = (angle < -pi) ? angle + 2*pi: angle;
				angle = (angle > pi) ? angle - 2*pi: angle;

				_subMatrix = Matrix4.translationValues(origin.dx, origin.dy, 0.0)..rotateZ(angle);

				shapeNotifier.addListener(() {
					Offset coords = _editorBaseState.globalToLocal(MediaQuery.of(context).size.center(Offset.zero));
					coords = transformOffset(Matrix4.inverted(_subMatrix), coords);
					coords = Offset(_editorBaseState.px2mm(coords.dx), _editorBaseState.px2mm(coords.dy));
					setState(() {
						_coordinates = "${coords.dx.toStringAsFixed(3)}, ${coords.dy.toStringAsFixed(3)}";
					}); 
				});

				break;
			case 1:

				if (shapeNotifier.lineShapes.length > 1) {
					shapeNotifier.lineShapes.removeRange(1, shapeNotifier.lineShapes.length);
				}

				final Paint _crossAxisPaint = Paint()
					..color = Colors.blue[600]
					..strokeWidth = EditorBase.strokeWidth / _editorBaseState.scaleFactor
					..style = PaintingStyle.stroke;

				Line crossAxis = Line.perpendicular(shapeNotifier.lineShapes.first,
					_editorBaseState.globalToLocal(MediaQuery.of(context).size.center(Offset.zero)),
					_crossAxisPaint
				);

				shapeNotifier.lineShapes.add(crossAxis);

				shapeNotifier.draggableShapes.clear();
				shapeNotifier.draggableShapes.add(Circle(crossAxis.a, EditorBase.touchRadius / _editorBaseState.scaleFactor, _crossAxisPaint));

				setState(() {
					_canAdd = true;
					_canRemove = true;
					_canAccept = false;
				});
				break;
			case 0:
			default:

				Size mediaSize = MediaQuery.of(context).size;

				double longestSide = mediaSize.longestSide;
				double shortestSide = mediaSize.shortestSide;

				double scaleFactor = _editorBaseState.scaleFactor;

				final Paint _mainAxisPaint = Paint()
					..color = Colors.red[600]
					..strokeWidth = EditorBase.strokeWidth / _editorBaseState.scaleFactor
					..style = PaintingStyle.stroke;

				if (shapeNotifier.lineShapes.isEmpty) {

					Line mainAxis = Line(
						_editorBaseState.globalToLocal(Offset(longestSide * 1/4, shortestSide * 1/2)),
						_editorBaseState.globalToLocal(Offset(longestSide * 3/4, shortestSide * 1/2)),
						_mainAxisPaint
					);

					shapeNotifier.lineShapes.add(mainAxis);
					shapeNotifier.draggableShapes.add(Circle(mainAxis.a, EditorBase.touchRadius / scaleFactor, _mainAxisPaint));
					shapeNotifier.draggableShapes.add(Circle(mainAxis.b, EditorBase.touchRadius / scaleFactor, _mainAxisPaint));
					
				} else {
					shapeNotifier.lineShapes.removeRange(1, shapeNotifier.lineShapes.length);

					Line mainAxis = shapeNotifier.lineShapes.first;

					shapeNotifier.draggableShapes.clear();
					shapeNotifier.draggableShapes.add(Circle(mainAxis.a, EditorBase.touchRadius / scaleFactor, _mainAxisPaint));
					shapeNotifier.draggableShapes.add(Circle(mainAxis.b, EditorBase.touchRadius / scaleFactor, _mainAxisPaint));
				}
				
				shapeNotifier.changed();

				setState(() {
					_canAdd = true;
					_canRemove = false;
					_canAccept = false;
				});

				break;
		}
	}

	void prevStep() {
		switch (_curStep) {
			case 1:

				widget.project.originX = null;
				widget.project.originX = null;
				widget.project.angle = null;
				widget.project.markers = null;
				ProjectsDatabase.dao.updateProject(widget.project);

				shapeNotifier.markers.clear();
				_markers.clear();

				_mAngle = null;

				final Paint _crossAxisPaint = Paint()
					..color = Colors.blue[600]
					..strokeWidth = EditorBase.strokeWidth / _editorBaseState.scaleFactor
					..style = PaintingStyle.stroke;

				Line crossAxis = shapeNotifier.lineShapes[1];

				shapeNotifier.lineShapes.add(crossAxis);

				shapeNotifier.draggableShapes.clear();
				shapeNotifier.draggableShapes.add(Circle(crossAxis.a, EditorBase.touchRadius / _editorBaseState.scaleFactor, _crossAxisPaint));

				setState(() {
					_canAdd = true;
					_canRemove = true;
					_canAccept = false;
				});
				break;
			case 0:
			default:

				Size mediaSize = MediaQuery.of(context).size;

				double longestSide = mediaSize.longestSide;
				double shortestSide = mediaSize.shortestSide;

				double scaleFactor = _editorBaseState.scaleFactor;

				final Paint _mainAxisPaint = Paint()
					..color = Colors.red[600]
					..strokeWidth = EditorBase.strokeWidth / scaleFactor
					..style = PaintingStyle.stroke;

				if (shapeNotifier.lineShapes.isEmpty) {

					Line mainAxis = Line(
						_editorBaseState.globalToLocal(Offset(longestSide * 1/4, shortestSide * 1/2)),
						_editorBaseState.globalToLocal(Offset(longestSide * 3/4, shortestSide * 1/2)),
						_mainAxisPaint
					);

					shapeNotifier.lineShapes.add(mainAxis);
					shapeNotifier.draggableShapes.add(Circle(mainAxis.a, EditorBase.touchRadius / scaleFactor, _mainAxisPaint));
					shapeNotifier.draggableShapes.add(Circle(mainAxis.b, EditorBase.touchRadius / scaleFactor, _mainAxisPaint));
					
				} else {
					shapeNotifier.lineShapes.removeRange(1, shapeNotifier.lineShapes.length);

					Line mainAxis = shapeNotifier.lineShapes.first;

					shapeNotifier.draggableShapes.clear();
					shapeNotifier.draggableShapes.add(Circle(mainAxis.a, EditorBase.touchRadius / scaleFactor, _mainAxisPaint));
					shapeNotifier.draggableShapes.add(Circle(mainAxis.b, EditorBase.touchRadius / scaleFactor, _mainAxisPaint));
				}
				
				shapeNotifier.changed();

				setState(() {
					_canAdd = true;
					_canRemove = false;
					_canAccept = false;
				});

				break;
		}
	}

	void addMarker([Offset center]) {

		double angle = _mAngle - _baseAngle;
		angle = (angle < -pi) ? angle + 2*pi: angle;
		angle = (angle > pi) ? angle - 2*pi: angle;

		Offset _offset = center ?? _editorBaseState.globalToLocal(MediaQuery.of(context).size.center(Offset.zero));

		Matrix4 m = Matrix4.inverted(_subMatrix);

		Crosshair ch = Crosshair(_offset, angle, transformOffset(m, _offset) * _editorBaseState.isoRatio, Crosshair.markerPaint, _editorBaseState.scaleFactor);

		ch.size = ch.baseSize / _editorBaseState.scaleFactor;
		ch.paint.strokeWidth = Crosshair.strokeWidth / _editorBaseState.scaleFactor;
	
		if (center != null) {
			shapeNotifier.markers.add(ch);
			return;
		}

		int i;

		List<Offset> transformed = List<Offset>();

		for (i = 0; i < _markers.length; i++) {
			transformed.add(transformOffset(m, _markers[i]));
		}

		for (i = 1; i < _markers.length; i++) {
			if (transformed[i - 1].dy.abs() > transformed[i].dy.abs())
				break;
		}

		i -= 1;

		_markers.insert(i, ch.center);
		shapeNotifier.markers.insert(i, ch);

		shapeNotifier.changed();

		updateDB();
	}

	void removeMarker(Offset position) {

		Crosshair ch;

		ch = shapeNotifier.markers.firstWhere(
			(element) => (element.center - position).distance < (element.size),
			orElse: () => null
		);

		if (ch == null)
			return;

		int idx = _markers.indexOf(ch.center);

		if (idx < 0)
			return;

		_markers.removeAt(idx);
		shapeNotifier.markers.removeAt(idx);
		shapeNotifier.changed();

		updateDB();
	}

	void updateDB() {
		widget.project.markers = toBlob(_markers);
		ProjectsDatabase.dao.updateProject(widget.project);
	}

	@override
	void dispose() {
		shapeNotifier?.dispose();
		super.dispose();
	}

	Widget buttonUI() {
		return Align(
			alignment: Alignment.centerRight,
			child: Column(
				crossAxisAlignment: CrossAxisAlignment.end,
				mainAxisAlignment: MainAxisAlignment.end,
				mainAxisSize: MainAxisSize.max,
				children: [
					VisibleButton(
						child: Icon(Icons.check, size: 56.0, color: Colors.green,),
						onTap: () => _currentStep.value++,
						visible: _canAccept,
					),
					Spacer(),
					VisibleButton(
						child: Icon(Icons.undo_outlined, size: 56.0, color: Colors.red,),
						onTap: () => _currentStep.value--,
						visible: _canRemove,
					),
					VisibleButton(
						child: Icon((_curStep < 2) ? Icons.chevron_right : Icons.add, size: 56.0, color: Colors.white70,),
						onTap: () => (_curStep < 2) ? _currentStep.value++ : addMarker(),
						visible: _canAdd,
						keepSpace: true
					),
				],
			)
		);
	}

	Widget stepper() {
		return DefaultTextStyle(
			style: TextStyle(
				color: Colors.white,
			),
			child: Align(
				alignment: Alignment.topLeft,
				child: Row(
					mainAxisSize: MainAxisSize.min,
					children: [
						Padding(
							padding: const EdgeInsets.all(4.0),
							child: Row(
								mainAxisSize: MainAxisSize.min,
								mainAxisAlignment: MainAxisAlignment.start,
								children: [

									// First Step: Main Axis
									RoundIconContainer(
										tick: (_currentStep.value > 0),
										color: (_currentStep.value < 1) ? _colorActive : _colorDone,
										child: Transform.rotate(
											angle: pi/4,
											child: Icon(Entypo.flow_line),
										),
									),
									Visibility(
										visible: (_currentStep.value == 0),
										child: Padding(
											padding: const EdgeInsets.all(4.0),
											child: InvertedColorText(
												text: Text('Main axis',),
											)
										)
									),
									Container(
										height: 5,
										width: 25,
										decoration: BoxDecoration(borderRadius: BorderRadius.circular(2), color: Colors.blueGrey[800],),
									),
									
									// Second Step: Cross Axis
									RoundIconContainer(
										tick: (_currentStep.value > 1),
										color: (_currentStep.value < 1) ? _colorDisable : (_currentStep.value > 1) ? _colorDone : _colorActive,
										child: Icon(CommunityMaterialIcons.angle_right),
									),
									Visibility(
										visible: (_currentStep.value == 1),
										child: Padding(
											padding: const EdgeInsets.all(4.0),
											child: InvertedColorText(
												text: Text('Cross axis',),
											)
										)
									),
									Container(
										height: 5,
										width: 25,
										decoration: BoxDecoration(borderRadius: BorderRadius.circular(2), color: Colors.blueGrey[800],),
									),

									// Third Step: Measure
									RoundIconContainer(
										color: (_currentStep.value < 2) ? _colorDisable : (_currentStep.value > 2) ? _colorDone : _colorActive,
										child: Transform.rotate(
											angle: pi/4,
											child: Icon(Icons.straighten, size: 20),
										),
									),
									Visibility(
										visible: (_currentStep.value == 2),
										child: Padding(
											padding: const EdgeInsets.all(4.0),
											child: InvertedColorText(
												text: Text('Measure',),
											),
										)
									),
								],
							),
						)
					],
				),
			),
		);
	}

	Widget crosshair(angle) {
		return Align(
			child: CustomPaint(
				child: Container(),
				foregroundPainter: MarkerUiPainter(angle),
				size: MediaQuery.of(context).size,
			),
			alignment: Alignment.center,
		);
	}

	Widget coordinates() {
		if (_curStep != 2)
			return Container(width: 0, height: 0);
		
		return Visibility(
			visible: _curStep == 2,
			child: Align(
				alignment: Alignment.bottomLeft,
				child: Text(
					_coordinates,
					style: TextStyle(
						fontSize: 12,
						color: Colors.black87,
						backgroundColor: Colors.white54,
						decoration: TextDecoration.none
					),
				),
			)
		);
	}

	@override
	Widget build(BuildContext context) {
		return Stack(
			fit: StackFit.expand,
			children: [
				EditorBase(
					key: editorKey,
					imageData: _imageData,
					shapes: shapeNotifier,
					onInitialization: nextStep,
					onRotation: (delta) {
						if (_baseAngle == null)
							return;
						setState(() {
							_baseAngle += delta;
							_baseAngle = _baseAngle > pi ? _baseAngle - 2*pi : _baseAngle;
							_baseAngle = _baseAngle < -pi ? _baseAngle + 2*pi : _baseAngle;
							if (_curStep == 2)
								_mAngle = _baseAngle + shapeNotifier.lineShapes[0].mAngle;
						});
					},
					onTap: removeMarker
				),
				crosshair(_mAngle),
				buttonUI(),
				stepper(),
				coordinates()
			],
		);
	}
}

class MarkerUiPainter extends CustomPainter {

  	double angle;

	double length = 20.0;

	MarkerUiPainter(this.angle) : super();

	@override
	void paint(Canvas canvas, Size size) {

		if (angle == null)
			return;

		Offset center = size.center(Offset.zero);

		double mAngle = angle;

		Offset a = center.translate(length * cos(mAngle), length * sin(mAngle));
		Offset b = center.translate(-length * cos(mAngle), -length * sin(mAngle));

		mAngle += pi/2.0;
		Offset c = center.translate(length * cos(mAngle), length * sin(mAngle));
		Offset d = center.translate(-length * cos(mAngle), -length * sin(mAngle));

		final Rect crossSection = center.translate(-Crosshair.strokeWidth/2, -Crosshair.strokeWidth/2) & Size(Crosshair.strokeWidth, Crosshair.strokeWidth);

		canvas.drawLine(a, b, Crosshair.markerPaint);
		canvas.drawLine(c, d, Crosshair.markerPaint);
		canvas.drawRect(crossSection, Crosshair.markerPaint);
	}
	
	@override
	bool shouldRepaint(covariant CustomPainter oldDelegate) => true;

}
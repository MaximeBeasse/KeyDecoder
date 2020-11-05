import 'dart:io';
import 'dart:typed_data';

import 'package:flutter/material.dart';
import 'package:image_metadata/image_metadata.dart';
import 'EditorBase.dart';
import 'projects/pictures/shapes.dart';
import 'package:native_cv/native_cv.dart';

import 'package:path/path.dart' as p;
import 'utils/utils.dart';

class CropPage extends StatefulWidget {

	CropPage.fromFile(this.imageFile) : imageData = imageFile.readAsBytesSync();

	@required
	final File imageFile;

	@required
	final Uint8List imageData;

	static const routeName = '/crop';
	static Route<dynamic> route(Object args) {
		return MaterialPageRoute(
            builder: (BuildContext context) {
				if (args is File)
					return CropPage.fromFile(args);
				throw ArgumentError;
			},
        );
	}

	@override
	CropPageState createState() => CropPageState();
}

class CropPageState extends State<CropPage> {

	GlobalKey editorKey = GlobalKey();

	ShapeNotifier shapeNotifier;

	bool _canAdd = true;
	bool _canRemove = false;
	bool _canAccept = false;

	bool _portrait = false;

	Size imageSize;

	EditorBaseState get _editorBaseState => (editorKey.currentState as EditorBaseState);

	@override
	void initState() {
		
		shapeNotifier = ShapeNotifier();
		
		// Snaps daggrable circles to current line
		shapeNotifier.addListener(() {
			if (shapeNotifier.draggableShapes.isEmpty || shapeNotifier.lineShapes.isEmpty)
				return;

			shapeNotifier.lineShapes.last.a = shapeNotifier.draggableShapes[0].center;
			shapeNotifier.lineShapes.last.b = shapeNotifier.draggableShapes[1].center;
		});

		// Read Exif meta data to get image width and height
		var imageData = ImageData(ImageType.JPEG, widget.imageData);
		var metadataReader = ImageMetadataReader(imageData);
  		var imageMetadata = metadataReader.read();

		imageSize = Size(imageMetadata.getImageWidth().toDouble(), imageMetadata.getImageHeight().toDouble());

		final orientation = imageMetadata.getImageOrientation();

		switch (orientation) {
			case ImageOrientation.ORIENTATION_0:
			case ImageOrientation.ORIENTATION_0_FLIP:
				_portrait = false;
				break;
			case ImageOrientation.ORIENTATION_180:
			case ImageOrientation.ORIENTATION_180_FLIP:
				_portrait = false;
				break;
			case ImageOrientation.ORIENTATION_270:
			case ImageOrientation.ORIENTATION_270_FLIP:
				_portrait = true;
				break;
			case ImageOrientation.ORIENTATION_90:
			case ImageOrientation.ORIENTATION_90_FLIP:
				_portrait = true;
				break;
		}

		if(imageSize.width < imageSize.height && !_portrait) {
			_portrait = true;
		}

		if (_portrait)
			imageSize = imageSize.flipped;

		super.initState();
	}

	void addLine() {

		if (shapeNotifier?.lineShapes?.length == 4) {
			if(!_canAccept || _canAdd) {
				setState(() {
					_canAccept = true;
					_canAdd = false;
				});
			}
			return;
		}

		Size mediaSize = MediaQuery.of(context).size;

		double longestSide = mediaSize.longestSide;
		double shortestSide = mediaSize.shortestSide;

		double scaleFactor = _editorBaseState.scaleFactor;

		final Paint _cropPaint = Paint()
			..color = Colors.green
			..strokeWidth = EditorBase.strokeWidth / scaleFactor
			..style = PaintingStyle.stroke;

		Line newLine = Line(
			_editorBaseState.globalToLocal(Offset(longestSide * 1/4, shortestSide * 1/2)),
			_editorBaseState.globalToLocal(Offset(longestSide * 3/4, shortestSide * 1/2)),
			_cropPaint
		);

		print('NewLine: $newLine');

		shapeNotifier.lineShapes.add(newLine);

		if(shapeNotifier.draggableShapes.length >= 2) {
			shapeNotifier.draggableShapes[0].center = newLine.a;
			shapeNotifier.draggableShapes[1].center = newLine.b;
		} else {
			shapeNotifier.draggableShapes.clear();
			shapeNotifier.draggableShapes.add(Circle(newLine.a, EditorBase.touchRadius / scaleFactor, _cropPaint));
			shapeNotifier.draggableShapes.add(Circle(newLine.b, EditorBase.touchRadius / scaleFactor, _cropPaint));
		}

		if (shapeNotifier?.lineShapes?.length == 4) {
			setState(() {
				_canAccept = true;
				_canAdd = false;
			});

		}

		// Add listener for changes and update last line with draggables centers
		shapeNotifier.changed();

		if (!_canRemove && shapeNotifier.lineShapes.length > 1) {
			setState(() {
				_canRemove = true;
			});
		}

		print("A: ${shapeNotifier.draggableShapes[0].center}");
		print("B: ${shapeNotifier.draggableShapes[1].center}");

		if (shapeNotifier.draggableShapes.length > 2)
			print("Origin: ${shapeNotifier.draggableShapes[2].center}");

		/*shapeNotifier.miscellaneous.clear();

		shapeNotifier.miscellaneous.add(Segment(
			_editorBaseState.globalToLocal(Offset(0, 0)),
			_editorBaseState.globalToLocal(Offset(longestSide, shortestSide)),
			Paint()..color = Colors.blue
		));

		shapeNotifier.miscellaneous.add(Segment(
			_editorBaseState.globalToLocal(Offset(0, shortestSide)),
			_editorBaseState.globalToLocal(Offset(longestSide, 0)),
			Paint()..color = Colors.red
		));

		List<Segment> seg = shapeNotifier.miscellaneous.cast<Segment>();

		print("Corners: ${seg[0].a} / ${seg[1].b} / ${seg[0].b} / ${seg[1].a}");*/
	}

	void removeLine() {

		if (shapeNotifier.lineShapes.isEmpty)
			return;

		shapeNotifier.lineShapes.removeLast();
		
		if (shapeNotifier.lineShapes.isEmpty) {
			if(_canRemove) {
				setState(() {
					_canRemove = false;
				});
			}
			return;
		}

		Line lastLine = shapeNotifier.lineShapes.last;

		if(shapeNotifier.draggableShapes.length >= 2) {
			shapeNotifier.draggableShapes[0].center = lastLine.a;
			shapeNotifier.draggableShapes[1].center = lastLine.b;
		} else {

			double scaleFactor = _editorBaseState.scaleFactor;

			final Paint _cropPaint = Paint()
				..color = Colors.green
				..strokeWidth = EditorBase.strokeWidth / scaleFactor
				..style = PaintingStyle.stroke;

			shapeNotifier.draggableShapes.clear();
			shapeNotifier.draggableShapes.add(Circle(lastLine.a, EditorBase.touchRadius / scaleFactor, _cropPaint));
			shapeNotifier.draggableShapes.add(Circle(lastLine.b, EditorBase.touchRadius / scaleFactor, _cropPaint));
		}

		// Add listener for changes and update last line with draggables centers
		shapeNotifier.changed();

		if (shapeNotifier.lineShapes.length == 1) {
			setState(() {
				_canRemove = false;
			});
		}

		if (!_canAdd) {
			setState(() {
				_canAdd = true;
			});
		}

		if (_canAccept) {
			setState(() {
				_canAccept = false;
			});
		}
	}

	Future cropImage() async {

		List<Line> lines = shapeNotifier.lineShapes.cast<Line>();

		List<Offset> intersections = [];
		
		var i, j;

		for (i = 0; i < 3; i++) {
			for (j = i + 1; j < 4; j++) {
				Offset p = lines[i].xtersect(lines[j]);

				if(p == null)
					continue;

				if(p.dx >= 0 && p.dx < imageSize.width && p.dy >= 0 && p.dy < imageSize.height)
					intersections.add(p);
			}
		}

		// Wrong number of corners. Inform user that he has made a mistake
		if(intersections.length != 4) {
			return showDialog(
				context: context,
				builder: (context) => AlertDialog(
					title: Text('Wrong number of corners'),
					content: Text('Please fix your crop to have 4 corners within the image bounds'),
					actions: [
						FlatButton(
							child: Text('Ok'),
							onPressed: Navigator.of(context).pop,
						)
					],
				),
				barrierDismissible: true,
			);
		}

		// Sort points and return DartIntersection
		DartIntersection dinter = _computeClosedPath(intersections);

		// Verify Quadrilateral is the correct orientation
        // check that [0 - 1] + [2 - 3] / 2 is longer than [1 - 2] + [3 - 0] / 2
        double d1 = ((dinter.topLeft - dinter.topRight).distanceSquared + (dinter.bottomRight - dinter.bottomLeft).distanceSquared) / 2.0;
        double d2 = ((dinter.topRight - dinter.bottomRight).distanceSquared + (dinter.bottomLeft - dinter.topLeft).distanceSquared) / 2.0;

        if(d1 < d2) {
            // then shift every points by one
            Offset tmp = dinter.topLeft;
            dinter.topLeft = dinter.topRight;
            dinter.topRight = dinter.bottomRight;
            dinter.bottomRight = dinter.bottomLeft;
            dinter.bottomLeft = tmp;
        }

		print(dinter);

		final resultPath = p.join(widget.imageFile.parent.path, 'crop_' + p.basenameWithoutExtension(widget.imageFile.path) + '.png');

		int res = await HomographyWarp.homographyWarp(dinter, widget.imageFile.path, resultPath);

		if (res < 0)
			throw Exception('homographyWarp failed');

		Navigator.of(context).pop(resultPath);
	}

	DartIntersection _computeClosedPath(List<Offset> points) {
		
		// Find Simple Closed Path for a given set of points
        // (cf. https://www.geeksforgeeks.org/find-simple-closed-path-for-a-given-set-of-points/)

		// Find the point the less distant with (0,0)
    	var i, j;
        double dmin = points[0].distanceSquared;
        double tmp;
        var min = 0;

        for (i = 1; i < 4; i++) {
            // compute this point's distance with origin
            tmp = points[i].distanceSquared;

            if (tmp < dmin) {
                dmin = tmp;
                min = i;
            }
        }

		// Place the origin point at first position
        Offset swap = Offset(points[0].dx, points[0].dy);
        points[0] = Offset(points[min].dx, points[min].dy);
        points[min] = Offset(swap.dx, swap.dy);

        for (i = 0; i < 3; i++) {
            // Last i elements are already in place
            for (j = 1; j < 3-i; j++) {
                if (compare(points[j], points[j+1], points[0]) > 0) {
					Offset swap = Offset(points[j].dx, points[j].dy);
					points[j] = Offset(points[j+1].dx, points[j+1].dy);
					points[j+1] = Offset(swap.dx, swap.dy);
                }
            }
        }

		return DartIntersection.fromList(points);
	}

	// To find orientation of ordered triplet (p, q, r).
    // The function returns following values
    // 0 --> p, q and r are colinear
    // 1 --> Clockwise
    // 2 --> Counterclockwise
    int orientation(Offset p, Offset q, Offset r) {
    	double val = (q.dy - p.dy) * (r.dx - q.dx) - (q.dx - p.dx) * (r.dy - q.dy);

        if (val == 0) return 0;  // colinear
        return (val > 0)? 1: 2; // clockwise or counterclock wise
    }

	int compare(Offset p1, Offset p2, Offset ref) {
        // Find orientation
        int o = orientation(ref, p1, p2);
        if (o == 0)
            return ((ref-p2).distanceSquared >= (ref-p1).distanceSquared) ? -1 : 1;

        return (o == 2)? -1: 1;
    }

	@override
	void dispose() {
		shapeNotifier?.dispose();
		super.dispose();
	}

	@override
	Widget build(BuildContext context) {
		return Center(
		  child: Stack(
		      	fit: StackFit.expand,
		      	children: [
		      		EditorBase(
						key: editorKey,
						imageData: widget.imageData,
		      			shapes: shapeNotifier,
						portrait: _portrait,
						onInitialization: addLine
		      		),
		      		Align(
		      			alignment: Alignment.bottomRight,
		      			child: Column(
							crossAxisAlignment: CrossAxisAlignment.end,
							mainAxisAlignment: MainAxisAlignment.end,
							mainAxisSize: MainAxisSize.max,
		      				children: [
								VisibleButton(
									child: Icon(Icons.undo_rounded, size: 56.0, color: Colors.red[600],),
									onTap: removeLine,
									visible: _canRemove,
								),
								VisibleButton(
									child: Icon(Icons.add, size: 56.0, color: Colors.white70,),
									onTap: addLine,
									visible: _canAdd,
									keepSpace: true
								),
		      				],
		      			)
		      		),
		      		Align(
		      			alignment: Alignment.topLeft,
		      			child: VisibleButton(
							child: Icon(Icons.check, size: 56.0, color: Colors.green,),
							onTap: cropImage,
							visible: _canAccept,
						),
		      		)
		      	],
		    ),
		);
	}
}
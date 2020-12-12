import 'dart:io';

import 'package:animate_icons/animate_icons.dart';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:flutter_keyboard_visibility/flutter_keyboard_visibility.dart';
import 'package:keydecoder/CropPage.dart';
import 'package:image_picker/image_picker.dart' show ImageSource;
import 'package:keydecoder/utils/gesture_x_detector.dart';
import 'package:provider/provider.dart';

import 'package:highlighter_coachmark/highlighter_coachmark.dart';

import 'EditorBase.dart';
import 'MeasurePage.dart';
import 'projects/model/projects.dart';
import 'projects/pictures/picture.dart';
import 'utils/utils.dart';

class ProjectPage extends StatefulWidget {

	ProjectPage(this.project);

	final Project project;
	final String title = 'Project Page';

	static const routeName = '/project';
	static Route<dynamic> route(Object args) {
		return MaterialPageRoute(
            builder: (BuildContext context) => ProjectPage(args as Project),
        );
	}

	@override
	ProjectPageState createState() => ProjectPageState();
}

class ProjectPageState extends State<ProjectPage> {

	TextEditingController _titleController;
	TextEditingController _descriptionController;

	FocusNode _fnTitle;
	FocusNode _fnBrief;
  	FocusNode _fnFabs;

	Project project;

	bool _updated = false;

	@override
	void initState() {

		project = widget.project;

		_titleController = TextEditingController.fromValue(
			TextEditingValue(
				text: project.title,
			),
		);

		_fnTitle = FocusNode();

		_descriptionController = TextEditingController.fromValue(
			TextEditingValue(
				text: project.description,
			),
		);

		_fnBrief = FocusNode();

		_fnFabs = FocusNode();

		KeyboardVisibility.onChange.listen((bool visible) {
			if (!visible) {
				_fnTitle?.unfocus();
				_fnBrief?.unfocus();
				_fnFabs?.unfocus();
			}
		});

		super.initState();
	}

	@override
	void dispose() {
		_titleController?.dispose();
		_fnTitle?.dispose();

		_descriptionController?.dispose();
		_fnBrief?.dispose();

		_fnFabs?.dispose();

		super.dispose();
	}

	title() {
		return Padding(
			padding: EdgeInsets.all(10.0),
			child: TextField(
				decoration: InputDecoration(),
				autofocus: false,
				showCursor: true,
				maxLines: 1,
				inputFormatters:[
					LengthLimitingTextInputFormatter(32),
				],
				controller: _titleController,
				onChanged: (text) {
					project.title = text;
					_updated = true;
				},
				focusNode: _fnTitle,
			),
		);
	}

	description() {
		return Padding(
			padding: EdgeInsets.all(10.0),
			child: TextField(
				decoration: InputDecoration(),
				autofocus: false,
				showCursor: true,
				maxLines: 2,
				controller: _descriptionController,
				onChanged: (text) {
					project.description = text;
					_updated = true;
				},
				focusNode: _fnBrief,
			),
		);
	}

	Widget generateTableForAxis(List<Offset> markers) {
		List<double> depths = <double>[];
		List<double> gaps = <double>[];
		List<Widget> depthsText = <Widget>[];
		List<Widget> gapsText = <Widget>[];
		Matrix4 bittingMat = Matrix4.inverted(Matrix4.translationValues(project.originX, project.originY, 0)..rotateZ(project.angle));

		for (var i = 0; i < markers.length; i++) {
			markers[i] = transformOffset(bittingMat, markers[i]);
			depths.add(markers[i].dy.abs() * project.isoRatio);
			if (i > 0)
				gaps.add((markers[i-1].dx.abs() - markers[i].dx.abs()).abs() * project.isoRatio);
		}

		depths.forEach((d) {
			depthsText.add(
				Center(
					child: Container(
						padding: EdgeInsets.symmetric(vertical: 2),
						child: Text('${d.toStringAsFixed(3)}')
					)
				)
			);
		});

		gaps.forEach((g) {
			gapsText.add(
				Center(
					child: Container(
						padding: EdgeInsets.symmetric(vertical: 2),
						child: Text('${g.toStringAsFixed(3)}')
					)
				)
			);
		});
		
		return DefaultTextStyle(
			style: TextStyle(
				fontSize: 12 + (10 - depthsText.length) / 4,
				color: Colors.black,
			),
			child: Column(
				children: [
					Table(
						border: TableBorder.all(),
						children: [
							TableRow(
								children: depthsText
							)
						]
					),
					Padding(
						padding: EdgeInsets.symmetric(horizontal: MediaQuery.of(context).size.width / depthsText.length / 2),
						child: Table(
							border: TableBorder(
								bottom: BorderSide(),
								left: BorderSide(),
								right: BorderSide(),
								verticalInside: BorderSide(),
							),
							children: [
								TableRow(
									children: gapsText
								)
							]
						),
					),
				],
			),
		);
	}

	body() {
		return SingleChildScrollView(
			primary: true,
			child: Column(
				children: [
					title(),
					Divider(height: 10.0,),
					description(),
					Visibility(
						visible: project.markers != null && project.markers.isNotEmpty,
						child: Padding(
							padding: const EdgeInsets.all(8.0),
							child: Column(
								children: [
									Builder(
										builder: (ctxt) {
											List<Offset> markers = fromBlob(project.markers);
											if (markers.length >= 2)
												return generateTableForAxis(markers.reversed.toList());
											return Container();
										},
									)
								],
							),
						),
					),
				],
			),
		);
	}

	void selectedImageSource(ImageSource src) async {
		File savedFile = await Picture.getImageFromSource(src);

		// Image picker canceled
		if (savedFile == null)
			return;

		if (project.pathRawPic.isNotEmpty)
			File(project.pathRawPic).deleteSync();

		setState(() {
			project.pathRawPic = savedFile.path;
		});

		ProjectsDatabase.dao.updateProject(project);

		EditorBase.initEditorBase().then((_)
			=> cropRawImage().then((cropped) {
			if(cropped)
				measureCuts().then((_) {
					EditorBase.disposeEditorBase();
					setState(() {});
				});
			else
				EditorBase.disposeEditorBase();
		}));
	}

	Future<bool> cropRawImage() async {

		final result = await Navigator.of(context).pushNamed(CropPage.routeName, arguments: File(project.pathRawPic));

		// Crop canceled
		if (result == null)
			return false;

		// Existing file overwritten
		setState(() {
			project.pathCroppedPic = result as String;
		});

		project.originX = null;
		project.originX = null;
		project.angle = null;
		project.markers = null;
		ProjectsDatabase.dao.updateProject(widget.project);

		await ProjectsDatabase.dao.updateProject(project);

		return true;
	}

	Future measureCuts() async {
		await Navigator.of(context).pushNamed(MeasurePage.routeName, arguments: project);
		
		await ProjectsDatabase.dao.updateProject(project);
		
		setState(() {});
	}

	Future<bool> _onBackPressed() async {
		if(_updated) {
			final dao = Provider.of<ProjectsDao>(context);
			await dao.updateProject(project);
		}

		Navigator.pop(context);
		return false;
	}

	@override
	Widget build(BuildContext context) {
		return WillPopScope(
			child: Scaffold(
				appBar: AppBar(
					title: Text(widget.title),
				),
				body: Stack(
					children: [
						body(),
						ProjectFloatingActionButton(),
					]
				),
				resizeToAvoidBottomPadding: false,
			), 
			onWillPop: _onBackPressed,
		);
	}
}

class ProjectFloatingActionButton extends StatefulWidget {

	ProjectFloatingActionButton();

	@override
	State<StatefulWidget> createState() => ProjectFloatingActionButtonState();
}

class ProjectFloatingActionButtonState extends State<ProjectFloatingActionButton> with SingleTickerProviderStateMixin {

	ProjectPageState get parent => context.findAncestorStateOfType<ProjectPageState>();
	
	bool isOpened = false;
  	AnimationController _animationController;
	Animation<Color> _buttonColor;
	AnimateIconController _animateIcon;
	Animation<double> _translateButton;
	Curve _curve = Curves.easeOut;
	double _fabHeight = 56.0;

	final Color _colorDisable = Colors.grey[600];
	final Color _colorActive = Colors.blue;
	final Color _colorDone = Colors.lightGreen[400];

	@override
	initState() {
		
		parent._fnTitle.addListener(() {
			animate(forceClose: true);
			_animateIcon.animateToStart();
		});

		parent._fnBrief.addListener(() {
			animate(forceClose: true);
			_animateIcon.animateToStart();
		});

		_animationController =
			AnimationController(vsync: this, duration: Duration(milliseconds: 500))
			..addListener(() {
				setState(() {});
			});
		_animateIcon = AnimateIconController();

		_translateButton = Tween<double>(
			begin: _fabHeight,
			end: -14.0,
		).animate(CurvedAnimation(
			parent: _animationController,
			curve: Interval(
				0.0,
				0.75,
				curve: _curve,
			),
		));

		super.initState();
	}

	@override
	dispose() {
		_animationController.dispose();
		super.dispose();
	}

	animate({bool forceClose = false}) {
		if (forceClose) {
			if(isOpened) {
				_animateIcon.animateToStart();
				_animationController.reverse();
			}
			isOpened = false;
			return;
		}
		if (!isOpened) {
			_animateIcon.animateToEnd();
			_animationController.forward();
		} else {
			_animateIcon.animateToStart();
			_animationController.reverse();
		}
		isOpened = !isOpened;
	}

	List<Widget> content() {
		List<FloatingActionButton> fabs = <FloatingActionButton>[];
		
		// Description edit
		fabs.add(FloatingActionButton(
			child: Icon(Icons.photo_camera),
			tooltip: "Take Picture", 
			onPressed: () {
				animate(forceClose: true);
				_animateIcon.animateToStart();
				parent.selectedImageSource(ImageSource.camera);
			},
			heroTag: 'editBrief',
		));

		// Pick Image
		fabs.add(FloatingActionButton(
			child: Icon(Icons.photo_library),
			tooltip: "Pick from gallery", 
			onPressed: () {
				animate(forceClose: true);
				_animateIcon.animateToStart();
				parent.selectedImageSource(ImageSource.gallery);
			},
			heroTag: 'pickImage',
		));

		return List.generate(fabs.length, (index) => Transform(
			transform: Matrix4.translationValues(
				0.0,
				_translateButton.value * (fabs.length - index),
				0.0,
			),
			child: Visibility(
				visible: !_translateButton.isDismissed,
				child: Container(
					child: fabs[index],
				),
			),
		));
	}
	
	Widget fab() {
		_buttonColor = ColorTween(
			begin: (parent.project.pathRawPic.isEmpty) ? _colorActive: _colorDone,
			end: Colors.red,
		).animate(CurvedAnimation(
			parent: _animationController,
				curve: Interval(
					0.00,
					1.00,
					curve: Curves.linear,
				),
			)
		);

		return Container(
			child: FloatingActionButton(
				backgroundColor: _buttonColor.value,
				onPressed: animate,
				tooltip: 'Pick source',
				child: AnimateIcons(
					startIcon: Icons.image,
					endIcon: Icons.close,
					size: 24.0,
					onStartIconPress: () {
						animate();
						return true;
					},
					onEndIconPress: () {
						animate();
						return true;
					},
					duration: Duration(milliseconds: 500),
					color: Colors.white,
					clockwise: false,
					controller: _animateIcon,
				),
				heroTag: 'fab',
			),
		);
	}

	Widget cropFab({bool active = false, bool completed = false}) {
		return Container(
			child: FloatingActionButton(
				onPressed: (active || completed) ? () => EditorBase.initEditorBase()
					.then((_) => parent.cropRawImage()
						.then((_) => EditorBase.disposeEditorBase())) : null,
				tooltip: 'Crop image',
				child: Icon(Icons.crop),
				heroTag: 'crop',
				elevation: 12,
				backgroundColor: completed ? _colorDone : active ? _colorActive : _colorDisable,
			),
		);
	}

	Widget measureFab({bool active = false, bool completed = false}) {
		return Container(
			child: FloatingActionButton(
				onPressed: (active || completed) ? () => EditorBase.initEditorBase()
					.then((_) => parent.measureCuts()
						.then((_) => EditorBase.disposeEditorBase())) : null,
				tooltip: 'Measure key',
				child: Icon(Icons.straighten),
				heroTag: 'measure',
				elevation: 12,
				backgroundColor: completed ? _colorDone : active ? _colorActive : _colorDisable,
			),
		);
	}

	lineDiv({bool show = true}) {
		if (!show)
			return Container();
		return Container(
			height: _fabHeight, 
			child: Center(
				child: Container(
				height: 5,
				width: MediaQuery.of(context).size.width / 8,
				decoration: BoxDecoration(borderRadius: BorderRadius.circular(2), color: Colors.blueGrey[800],),
				),
			),
		);
	}

	@override
	Widget build(BuildContext context) {
		return Stack(
			alignment: Alignment.bottomCenter,
			children: [
				Positioned(
					width: MediaQuery.of(context).size.width,
					bottom: 20,
					child: Row(
						crossAxisAlignment: CrossAxisAlignment.end,
						mainAxisAlignment: MainAxisAlignment.spaceEvenly,
						mainAxisSize: MainAxisSize.min,
						children: [
							Column(
								mainAxisAlignment: MainAxisAlignment.center,
								crossAxisAlignment: CrossAxisAlignment.start,
								children: content()..add(fab()),
							),
							lineDiv(show: true),
							cropFab(active: parent.project.pathCroppedPic.isEmpty && parent.project.pathRawPic.isNotEmpty, completed: parent.project.pathCroppedPic.isNotEmpty),
							lineDiv(show: true),
							measureFab(active: parent.project.pathCroppedPic.isNotEmpty, completed: parent.project.markers != null)
						],
					),
				)
			],
		);
	}
}
import 'dart:io';

import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:keyboard_visibility/keyboard_visibility.dart';
import 'package:keydecoder/CropPage.dart';
import 'package:image_picker/image_picker.dart' show ImageSource;
import 'package:keydecoder/utils/gesture_x_detector.dart';
import 'package:provider/provider.dart';

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

	Project project;

	bool _updated;

	KeyboardVisibilityNotification _kvn;

	@override
	void initState() {
		project = widget.project;
		print(project);

		_updated = false;

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

		_kvn = KeyboardVisibilityNotification()..addNewListener(
			onChange: (bool visible) {
				if (!visible) {
					_fnTitle.unfocus();
					_fnBrief.unfocus();
				}
			},
		);

		super.initState();
	}

	@override
	void dispose() {
		_titleController?.dispose();
		_fnTitle?.dispose();

		_descriptionController?.dispose();
		_fnBrief?.dispose();

		_kvn?.dispose();
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
				maxLines: 5,
				// inputFormatters:[
				// 	LengthLimitingTextInputFormatter(32),
				// ],
				controller: _descriptionController,
				onChanged: (text) {
					project.description = text;
					_updated = true;
				},
				focusNode: _fnBrief,
			),
		);
	}

	body() {
		return SingleChildScrollView(
			child: Column(
				children: [
					title(),
					Divider(height: 10.0,),
					description(),
					Visibility(
						visible: project.markers != null,
						child: Padding(
							padding: const EdgeInsets.all(8.0),
							child: Column(
								children: [
									Builder(
										builder: (ctxt) {
											List<Offset> markers = fromBlob(project.markers);
											List<double> depths = List<double>();
											List<double> gaps = List<double>();
											List<Widget> depthsText = List<Widget>();
											List<Widget> gapsText = List<Widget>();
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
															padding: EdgeInsets.all(2),
															child: Text('${d.toStringAsFixed(3)}')
														)
													)
												);
											});

											gaps.forEach((g) {
												gapsText.add(
													Center(
														child: Container(
															padding: EdgeInsets.all(2),
															child: Text('${g.toStringAsFixed(3)}')
														)
													)
												);
											});
											
											return Column(
												children: [
													Table(
														border: TableBorder.all(),
														children: [
															TableRow(
																children: depthsText
															)
														]
													),
													Table(
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
												],
											);
										},
									)
								],
							),
						),
					),
					/*
					Visibility(
						visible: project.pathRawPic != null && project.pathRawPic.isNotEmpty,
						child: Padding(
							padding: const EdgeInsets.all(8.0),
							child: Image.file(File(project.pathRawPic)),
						),
					),
					Visibility(
						visible: project.pathCroppedPic != null && project.pathCroppedPic.isNotEmpty,
						child: Padding(
							padding: const EdgeInsets.all(8.0),
							child: Image.file(File(project.pathCroppedPic)),
						),
					),*/
				],
			),
		);
	}

	floatingActionButtons() {
		// Icons.crop_free
		// Use Stack
		return FloatingActionButton(
			onPressed: _rawImageSourcePicker,
			tooltip: 'Take new picture',
			child: const Icon(Icons.insert_photo), 
	  	);
	}

	void _rawImageSourcePicker() async {

		_fnTitle.unfocus();
		_fnBrief.unfocus();

		// Choose raw image source
		ImageSource selection = await showModalBottomSheet(
			context: context,
			enableDrag: true,
			isScrollControlled: true,
			builder: (BuildContext context) {
				return Column(
					mainAxisSize: MainAxisSize.min,
					children: [
						/**
						 * Each ListTile should pop showModalBottomSheet with the return value
						 */
						ListTile(
							leading: Icon(Icons.camera_alt),
							title: Text('Take Picture from camera'),
							onTap: () => Navigator.pop(context, ImageSource.camera),
						),
						ListTile(
							leading: Icon(Icons.photo_library),
							title: Text('Import from gallery'),
							onTap: () => Navigator.pop(context, ImageSource.gallery),
						),
						Visibility(
							visible: project.pathRawPic != null && project.pathRawPic.isNotEmpty,
							child: ListTile(
								leading: Icon(Icons.crop),
								title: Text('Crop raw image'),
								onTap: () {
									cropRawImage().then((_) => Navigator.pop(context, null));
								},
							),
						),
						Visibility(
							visible: project.pathCroppedPic != null && project.pathCroppedPic.isNotEmpty,
							child: ListTile(
								leading: Icon(Icons.straighten_sharp),
								title: Text('Measure cuts'),
								onTap: () {
									measureCuts().then((_) => Navigator.pop(context, null));
								},
							),
						),
						ListTile(
							leading: Icon(Icons.clear),
							title: Text('Cancel'),
							onTap: () => Navigator.pop(context, null),
						)
					],
				);
			},
		);
		
		if (selection == null)
			return;

		File savedFile = await Picture.getImageFromSource(selection);

		// Image picker canceled
		if (savedFile == null)
			return;

		if (project.pathRawPic.isNotEmpty)
			File(project.pathRawPic).deleteSync();

		setState(() {
			project.pathRawPic = savedFile.path;
		});

		ProjectsDatabase.dao.updateProject(project);

		cropRawImage().then((cropped) {
			if(cropped)
				measureCuts().then((_) => setState(() {}));
		});
	}

	Future<bool> cropRawImage() async {

		await EditorBase.initEditorBase();
		final result = await Navigator.of(context).pushNamed(CropPage.routeName, arguments: File(project.pathRawPic));
		await EditorBase.disposeEditorBase();

		// Crop canceled
		if (result == null)
			return false;

		// Overwrite existing file
		if (project.pathCroppedPic.isNotEmpty)
			File(project.pathCroppedPic).deleteSync();

		setState(() {
			project.pathCroppedPic = result as String;
		});

		await ProjectsDatabase.dao.updateProject(project);

		return true;
	}

	Future measureCuts() async {
		await EditorBase.initEditorBase();
		await Navigator.of(context).pushNamed(MeasurePage.routeName, arguments: project);
		await EditorBase.disposeEditorBase();
		
		await ProjectsDatabase.dao.updateProject(project);
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
				body: body(),
				floatingActionButton: floatingActionButtons(),
			), 
			onWillPop: _onBackPressed,
		);
	}
}
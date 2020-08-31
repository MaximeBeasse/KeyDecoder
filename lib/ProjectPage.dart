import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:provider/provider.dart';

import 'projects/model/projects.dart';

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
	_ProjectPageState createState() => _ProjectPageState();
}

class _ProjectPageState extends State<ProjectPage> {

	TextEditingController _titleController;
	TextEditingController _descriptionController;

	Project project;

	@override
	void initState() {
		super.initState();

		project = widget.project;

		_titleController = TextEditingController.fromValue(
			TextEditingValue(
				text: project.title,
			),
		);

		_descriptionController = TextEditingController.fromValue(
			TextEditingValue(
				text: project.description,
			),
		);
	}

	@override
	void dispose() {
		_titleController.dispose();
		super.dispose();
	}

	title() {
		return Padding(
			padding: EdgeInsets.all(10.0),
			child: TextField(
				decoration: InputDecoration(),
				autofocus: false,
				showCursor: false,
				maxLines: 1,
				inputFormatters:[
					LengthLimitingTextInputFormatter(32),
				],
				controller: _titleController,
				onSubmitted: (text) {
					final dao = Provider.of<ProjectsDao>(context);
					project = project.copyWith(title: text);
					dao.updateProject(project);
				},
			),
		);
	}

	description() {
		return Padding(
			padding: EdgeInsets.all(10.0),
			child: TextField(
				decoration: InputDecoration(),
				autofocus: false,
				showCursor: false,
				maxLines: 5,
				// inputFormatters:[
				// 	LengthLimitingTextInputFormatter(32),
				// ],
				controller: _descriptionController,
				onSubmitted: (text) {
					final dao = Provider.of<ProjectsDao>(context);
					project = project.copyWith(description: text);
					dao.updateProject(project);
				},
			),
		);
	}

	body() {
		return Column(
			children: [
				title(),
				Divider(height: 10.0,),
				description(),
			],
		);
	}

	floatingActionButtons() {
		// Icons.crop_free
		// Use Stack
		return FloatingActionButton(
			onPressed: null,
			tooltip: 'Take new picture',
			child: const Icon(Icons.insert_photo), 
	  	);
	}

	Future<bool> _onBackPressed() async {
		Navigator.pop(context, project);
		return true;
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
import 'package:flutter/material.dart';
import 'package:moor_flutter/moor_flutter.dart' as moor;
import 'projects/model/projects.dart';
import 'package:provider/provider.dart';
import 'package:flutter_slidable/flutter_slidable.dart';

import 'projects/projectview.dart';

class MenuPage extends StatefulWidget {
	MenuPage({this.title}) : super();

	final String title;

	@override
  	MenuPageState createState() => MenuPageState();
}

class MenuPageState extends State<MenuPage> {

	void addProject() {
		print("addProject");
		TextEditingController _c = new TextEditingController();
		showDialog(
			context: context,
			builder: (BuildContext context) {
				return Dialog(
					shape: RoundedRectangleBorder(
						borderRadius:
							BorderRadius.circular(10.0)), //this right here
					child: Container(
					height: 200,
					child: Padding(
						padding: const EdgeInsets.all(12.0),
						child: Column(
							mainAxisAlignment: MainAxisAlignment.center,
							crossAxisAlignment: CrossAxisAlignment.start,
							children: <Widget>[
								TextField(
									decoration: InputDecoration(
										border: InputBorder.none,
										hintText: 'Title'
									),
									controller: _c,
								),
								SizedBox(
									width: 320.0,
									child: RaisedButton(
										onPressed: () {
											final dao = Provider.of<ProjectsDao>(context);
											final newProject = ProjectsCompanion(
												title: moor.Value(_c.text), 
												description: moor.Value("Decription of ${_c.text}"),
											);
											dao.insertProject(newProject);
										},
										child: Text(
										"Add",
										style: TextStyle(color: Colors.white),
										),
										color: const Color(0xFF1BC0C5),
									),
								)
							]
						),
					),
					),
				);
			}
		);
	}

  	@override
  	Widget build(BuildContext context) {
		return Scaffold(
	  		appBar: AppBar(title: Text(widget.title)),
	  		body: Column(
					children: <Widget>[
						Expanded(child: buildProjectList(context))
				  	],
				  ),
			floatingActionButton: FloatingActionButton(
				onPressed: addProject,
				tooltip: 'Add Project',
				child: const Icon(Icons.add),
	  		),
		);
  	}

	StreamBuilder<List<Project>> buildProjectList(BuildContext context) {
		final dao = Provider.of<ProjectsDao>(context);
		return StreamBuilder(
			stream: dao.watchAll(),
			builder: (context, AsyncSnapshot<List<Project>> snapshot) {
				final projects = snapshot.data ?? List();

				return ListView.builder(
					itemCount: projects.length,
					itemBuilder: (_, index) {
						final item = projects[index];
						return buildListItem(item, dao);
					},
				);
			},
		);
	}

	Widget buildListItem(Project item, ProjectsDao dao) {
		return Slidable(
			actionPane: SlidableDrawerActionPane(),
			child: ProjectThumbnail(project: item,),
			secondaryActions: <Widget>[
				
			],
		);
  	}
}

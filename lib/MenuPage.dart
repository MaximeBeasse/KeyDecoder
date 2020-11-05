import 'dart:io';

import 'package:flutter/material.dart';
import 'package:flutter_slidable/flutter_slidable.dart';
import 'package:moor_flutter/moor_flutter.dart' as moor;
import 'ProjectPage.dart';
import 'projects/model/projects.dart';
import 'package:provider/provider.dart';

import 'projects/projectview.dart';

class MenuPage extends StatefulWidget {
	MenuPage() : super();

	final String title = 'Projects';

	static const routeName = '/menu';
	static Route<dynamic> route(Object args) {
		return MaterialPageRoute(
            builder: (BuildContext context) => MenuPage(),
        );
	}

	@override
  	MenuPageState createState() => MenuPageState();
}

class MenuPageState extends State<MenuPage> {

	final pad = 12.0;

  	BuildContext _context;

	void addProject() async {
		final dao = ProjectsDatabase.dao;

		final nb = (await dao.allProjects).length + 1;
		final newProject = ProjectCompanion(
			title: moor.Value("Project #$nb"), 
			description: moor.Value(""),
		);
		
		dao.insertProject(newProject).then((id) async {
			openProject(await dao.getProjectByID(id));
		});
	}

  	@override
  	Widget build(BuildContext context) {
		return Scaffold(
	  		appBar: AppBar(title: Text(widget.title)),
	  		body: Column(
					children: <Widget>[
						Expanded(
							child: buildProjectList(context)
			  			),
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
				_context = context;
				final projects = snapshot.data ?? List();

				return ListView.builder(
					padding: EdgeInsets.only(bottom: pad),
					itemCount: projects.length,
					itemBuilder: (_, index) {
						final item = projects[index];
						return buildListItem(context, item, dao);
					},
				);
			},
		);
	}

	openProject(item) {
		Scaffold.of(_context).removeCurrentSnackBar();
		Navigator.pushNamed(context, ProjectPage.routeName, arguments: item);
	}

	deleteProject(BuildContext context, Project item, ProjectsDao dao) {
		dao.deleteProject(item);
		Scaffold.of(context).removeCurrentSnackBar();
		ScaffoldFeatureController<SnackBar, SnackBarClosedReason> controller = Scaffold.of(context)
        	.showSnackBar(SnackBar(
				content: Text("${item.title} deleted"),
				action: SnackBarAction(
					label: 'Undo',
					onPressed: () => dao.insertProject(item)
				),
			),
		);

		controller.closed.then((SnackBarClosedReason value) {
			switch (value) {
				case SnackBarClosedReason.dismiss:
				case SnackBarClosedReason.swipe:
				case SnackBarClosedReason.hide:
				case SnackBarClosedReason.remove:
				case SnackBarClosedReason.timeout:
					// confirm deletion
					try {
						if (item.pathCroppedPic.isNotEmpty)
							File(item.pathCroppedPic).deleteSync();

						if (item.pathRawPic.isNotEmpty)
							File(item.pathRawPic).deleteSync();
					} catch (_){}
					break;
				case SnackBarClosedReason.action:
					// do nothing
					break;
			}
		});
	}

	Widget buildListItem(BuildContext context, Project item, ProjectsDao dao) {
		return Padding(
			padding: EdgeInsets.only(left:pad, top:pad, right:pad),
			child: InkWell(
				onTap: () => openProject(item),
				child: Slidable(
					key: ValueKey(item.id),
					actionPane: SlidableDrawerActionPane(),
					child: ProjectThumbnail(project: item),
					closeOnScroll: true,
					actionExtentRatio: 0.0,
					secondaryActions: [
						IconSlideAction(
							caption: 'Delete',
							color: Colors.red,
							icon: Icons.delete,
						),
					],
					dismissal: SlidableDismissal(
						dismissThresholds: { SlideActionType.secondary : 0.5 },
						child: SlidableDrawerDismissal(),
						onDismissed: (direction) => deleteProject(context, item, dao),
						closeOnCanceled: true,
					),
				),
			),
		);
  	}
}

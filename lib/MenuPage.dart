import 'dart:io';

import 'package:flutter/material.dart';
import 'package:flutter_slidable/flutter_slidable.dart';
import 'package:highlighter_coachmark/highlighter_coachmark.dart';
import 'package:keydecoder/disclamer_dialog.dart';
import 'package:keydecoder/utils/utils.dart';
import 'package:moor_flutter/moor_flutter.dart' as moor;
import 'package:shared_preferences/shared_preferences.dart';
import 'package:url_launcher/url_launcher.dart';
import 'ProjectPage.dart';
import 'projects/model/projects.dart';
import 'package:provider/provider.dart';

import 'projects/projectview.dart';
import 'tutorial_dialog.dart';

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

	static const List<PopupMenuEntry<int>> _settings = [
		PopupMenuItem(
			value: 0,
			child: Text("Tutorial"),
		),
		PopupMenuItem(
			value: 1,
			child: Text("Disclamer"),
		),
		PopupMenuItem(
			value: 2,
			child: Text("FAQ"),
		),
		PopupMenuItem(
			value: 3,
			child: Text("About"),
		),
	];

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
		SharedPreferences.getInstance().then((prefs) async {
			if (!prefs.containsKey('discamer_displayed') || !prefs.getBool('discamer_displayed')) {
				await _showDisclaimer();
				prefs.setBool('discamer_displayed', true);
				await Future.delayed(Duration(seconds: 1));
			}

			if (!prefs.containsKey('tutorial_displayed') || !prefs.getBool('tutorial_displayed')) {
				await _showTutorial();
				prefs.setBool('tutorial_displayed', true);
			}
		});
		return WillPopScope(
			onWillPop: _onWillPop,
			child: Scaffold(
				appBar: AppBar(
					title: Text(widget.title),
					actions: [
						PopupMenuButton<int>(
							onSelected: choiceSetting,
							itemBuilder: (context) {
								return _settings;
							},
						)
					],
				),
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
			),
		);
  	}

	Future<bool> _onWillPop() {
		enableRotation();
		return Future.value(true);
	}

	StreamBuilder<List<Project>> buildProjectList(BuildContext context) {
		final dao = Provider.of<ProjectsDao>(context);
		return StreamBuilder(
			stream: dao.watchAll(),
			builder: (context, AsyncSnapshot<List<Project>> snapshot) {
				final projects = snapshot.data ?? List.empty();

				return ListView.builder(
					padding: EdgeInsets.only(bottom: pad),
					itemCount: projects.length,
					itemBuilder: (_, index) {
						final item = projects[index];
						return buildListItem(item, dao);
					},
				);
			},
		);
	}

	openProject(item) {
		ScaffoldMessenger.of(context).removeCurrentSnackBar();
		Navigator.pushNamed(context, ProjectPage.routeName, arguments: item);
	}

	deleteProject(Project item, ProjectsDao dao) {
		dao.deleteProject(item);
		ScaffoldMessenger.of(context).removeCurrentSnackBar();
		ScaffoldFeatureController<SnackBar, SnackBarClosedReason> controller = ScaffoldMessenger.of(context)
        	.showSnackBar(SnackBar(
				content: Text("${item.title} deleted"),
				action: SnackBarAction(
					label: 'Undo',
					onPressed: () => dao.insertProject(item)
				),
				duration: Duration(seconds: 3),
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

	Widget buildListItem(Project item, ProjectsDao dao) {
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
						onDismissed: (direction) => deleteProject(item, dao),
						closeOnCanceled: true,
					),
				),
			),
		);
  	}

	void choiceSetting(int choice) {
		switch (choice) {
			case 0:
				_showTutorial();
				break;
			case 1:
				_showDisclaimer();
				break;
			case 2:
				_showFAQ();
				break;
			case 3:
				_showAbout();
				break;
		  default:
		}
	}

	Future _showTutorial() {
		return showDialog(
			context: context, 
			builder: (context) {
				return TutorialDialog();
			},
			barrierDismissible: false	
		);
	}

	Future _showDisclaimer() {
		return showDialog(
			context: context, 
			builder: (context) {
				return DisclamerDialog();
			},
			barrierDismissible: false	
		);
	}

	void _showFAQ() {
		showDialog(
			context: context, 
			builder: (context) {
				return AlertDialog(
					title: Text("FAQ"),
					content: SingleChildScrollView(
						child: Column(
							children: [
								Text("What is the purpose of this application?\n", style: TextStyle(
									fontWeight: FontWeight.bold
								)),
								Text("This application is a key decoder tool helping you getting the depths and spaces for a key you own or have legally access to. The decoded data can then be used with the help of a locksmith to obtain a duplicate of the pictured key.\n", textAlign: TextAlign.justify,),
								Text("What is the intended public for using this app?\n", style: TextStyle(
									fontWeight: FontWeight.bold
								)),
								Text("The KeyDecoder app is built for security professionnals such as Pentesters and other security enthusiasts to be able to decode their own keys, or keys of the location they have a legal contract for.\n", textAlign: TextAlign.justify,),
								Text("What do you do with my pictures and decoded data?\n", style: TextStyle(
									fontWeight: FontWeight.bold
								)),
								Text("""Nothing. 
We do not transmit the pictures over the network, we do not retrieve any decoded data.
Everything the user does with the app, is done locally on his/her phone. As a user, you are responsible for making sure that nobody else gets access to your pictures and decoded data.\n""", textAlign: TextAlign.justify,),
								Text("Is this app helping criminals to copy my keys without my consent?\n", style: TextStyle(
									fontWeight: FontWeight.bold
								)),
								Text("""No. 
If you make sure to handle your keys with the care they deserve, no criminal will be able to use this application to copy your keys.
Same as a Password or a Credit Card, a mechanical Key is a sensitive data that you should not share with anybody, and that you should not leave unattended. Otherwise, someone can easily go to a nearby locksmith, or make a molding duplicate in seconds.
Additionnaly, the need for an ISO sized card as a dimensionnal reference prevents any decoding using a picture taken "on the fly". A criminal could copy your keys with this app only if you let them do it.\n""", textAlign: TextAlign.justify,),
								Text("LIMITED WARRANTY\n", style: TextStyle(
									fontWeight: FontWeight.bold
								)),
								Text("""THE PROGRAM IS PROVIDED TO YOU "AS IS," WITHOUT WARRANTY. THERE IS NO WARRANTY FOR THE PROGRAM, EITHER EXPRESSED OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT OF THIRD PARTY RIGHTS. THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE PROGRAM IS WITH YOU. SHOULD THE PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING, REPAIR OR CORRECTION.\n""", textAlign: TextAlign.justify,),
							]
						),
					),
					actions: [
						FlatButton(
							child: Text('Close'),
							onPressed: () => Navigator.pop(context),
						)
					],
				);
			},
			barrierDismissible: false	
		);
	}

	void _showAbout() {
		showAboutDialog(
			context: context,
			children: [
				Text("App developped by :",),
				Text("BEASSE Maxime", textAlign: TextAlign.center,),
				Text("CLEMENT Quentin", textAlign: TextAlign.center,),
				Text("\n\nSponsored by ATS 1851\n"),
				InkWell(
					onTap: () {
						canLaunch('https://www.ats1851.com').then((canLaunch) => (canLaunch) ? launch('https://www.ats1851.com') : null);
					},
					child: Image.asset("assets/logo_ATS.png", alignment: Alignment.center,),
				),
			]
		);
	}
}

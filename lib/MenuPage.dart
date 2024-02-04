import 'dart:io';

import 'package:flutter/material.dart';
import 'package:flutter_slidable/flutter_slidable.dart';
import 'package:keydecoder/disclamer_dialog.dart';
import 'package:keydecoder/utils/utils.dart';
import 'package:drift/drift.dart' as drift;
import 'package:shared_preferences/shared_preferences.dart';
import 'package:url_launcher/url_launcher_string.dart';
import 'ProjectPage.dart';
import 'projects/model/projects.dart';
import 'package:provider/provider.dart';

import 'projects/projectview.dart';
import 'tutorial_dialog.dart';

class MenuPage extends StatefulWidget {
	MenuPage() : super();

	final String title = 'Projects';

	static const routeName = '/menu';
	static Route<dynamic> route(Object? args) {
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
			child: Text("Disclaimer"),
		),
		PopupMenuItem(
			value: 2,
			child: Text("FAQ"),
		),
		PopupMenuItem(
			value: 3,
			child: Text("License"),
		),
		PopupMenuItem(
			value: 4,
			child: Text("About"),
		),
	];

	void addProject() async {
		final dao = ProjectsDatabase.dao;

		final nb = (await dao.allProjects).length + 1;
		final newProject = ProjectsCompanion(
			title: drift.Value("Project #$nb"), 
			description: drift.Value(""),
		);
		
		dao.insertProject(newProject).then((id) async {
			openProject(await dao.getProjectByID(id));
		});
	}

  	@override
  	Widget build(BuildContext context) {
		SharedPreferences.getInstance().then((prefs) async {
			if (!prefs.containsKey('discaimer_displayed') || !prefs.getBool('discaimer_displayed')!) {
				await _showDisclaimer();
				prefs.setBool('discaimer_displayed', true);
				await Future.delayed(Duration(seconds: 1));
			}

			if (!prefs.containsKey('tutorial_displayed') || !prefs.getBool('tutorial_displayed')!) {
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
		ScaffoldMessenger.of(context).hideCurrentSnackBar();
		Navigator.pushNamed(context, ProjectPage.routeName, arguments: item);
	}

	deleteProject(Project item, ProjectsDao dao) {
		dao.deleteProject(item);
		ScaffoldMessenger.of(context).hideCurrentSnackBar();
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
					child: ProjectThumbnail(project: item),
					closeOnScroll: true,
					endActionPane: ActionPane(
						motion: const DrawerMotion(),
						extentRatio: 0.35,
						children: [
							SlidableAction(
								onPressed: (_) => deleteProject(item, dao),
								icon: Icons.delete, 
								label: 'Delete', 
								backgroundColor: Colors.red
							)
						],
						dismissible: DismissiblePane(
							onDismissed: () => deleteProject(item, dao),
							closeOnCancel: true,
							dismissThreshold: 0.6,
						),
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
				_showLicense();
				break;
			case 4:
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
						TextButton(
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
		double txtscale = 0.8;
		showAboutDialog(
			context: context,
			applicationIcon: Image(
				image: AssetImage('assets/icon.png'),
				color: null, 
				width: MediaQuery.of(context).size.width / 8, 
				height: MediaQuery.of(context).size.width / 8,
				fit: BoxFit.scaleDown,
			),
			applicationVersion: "v1.1.0",
			applicationLegalese: "© AT Security SAS",
			children: [
				Text("\nApp developped by :", textScaleFactor: txtscale),
				Text("BEASSE Maxime", textAlign: TextAlign.center, textScaleFactor: txtscale),
				Center(
					child: InkWell(
						onTap: () {
              try {
							  launchUrlString('https://twitter.com/maxime_beasse');
              } catch (e) {
                print(e);
              }
						},
						child: Text("@maxime_beasse", style: TextStyle(color: Colors.blue, decoration: TextDecoration.underline,), textScaleFactor: txtscale)
					),
				),
				Text("\n", textScaleFactor: txtscale/4,),
				Text("CLEMENT Quentin", textAlign: TextAlign.center, textScaleFactor: txtscale,),
				Center(
					child: InkWell(
						onTap: () {
              try {
							  launchUrlString('https://twitter.com/0x2f2f');
              } catch (e) {
                print(e);
              }
						},
						child: Text("@0x2f2f", style: TextStyle(color: Colors.blue, decoration: TextDecoration.underline,), textScaleFactor: txtscale),
					),
				),
				Text("\n\n", textScaleFactor: txtscale/4),
				Align(
          alignment: Alignment.centerLeft,
          child: InkWell(
            onTap: () {
              try {
                launchUrlString('https://github.com/MaximeBeasse/KeyDecoder');
              } catch (e) {
                print(e);
              }
            },
            child: Text("GitHub Repository", style: TextStyle(color: Colors.blue, decoration: TextDecoration.underline,), textScaleFactor: txtscale),
          ),
        ),
				Text("\n\nIn partnership with FrenchKey ", textScaleFactor: txtscale),
				Center(
					child: InkWell(
						onTap: () {
              try {
							  launchUrlString('https://twitter.com/frenchkey_fr');
              } catch (e) {
                print(e);
              }
						},
						child: Text("@FrenchKey_fr", style: TextStyle(color: Colors.blue, decoration: TextDecoration.underline,), textScaleFactor: txtscale),
					),
				),
			]
		);
	}

	void _showLicense() {
		showDialog(
			context: context,
			builder: (context) => AlertDialog(
				actions: [
					TextButton(
						child: Text('Close'),
						onPressed: () => Navigator.pop(context),
					)
				],
				content: SingleChildScrollView(
					child: Text("""TL;DR : 
You ARE NOT ALLOWED to make money (directly or indirectly) by distributing this application, 
its source code or a modification of them, or selling keys made with the help of this app. 
Of course, you ARE NOT ALLOWED to perform any illegal activity using this application.

You ARE ALLOWED to install, use, read, modify and distribute this application and its source code at no fee. 
You ARE ALLOWED to produce keys for your own use or to perform a pentest audits, both at your own risks.

You MUST give credit to original authors and copyright holders when you share this software or a modification of this software, 
and share it under the same conditions.

If you don't agree, delete it from your device.

The logo is under copyright and shall not be used without prior written consent of the copyright holder.
The only use of the logo authorised is the use for this application and its derivatives as long as they respect the law and ethics.



FULL LICENSE:
Aladdin Free Public License
(Version 9, September 18, 2000)

Copyright (C) 1994, 1995, 1997, 1998, 1999, 2000 Aladdin Enterprises,
Menlo Park, California, U.S.A. All rights reserved.

NOTE: This License is not the same as any of the GNU Licenses published by the Free Software Foundation. Its terms are substantially different from those of the GNU Licenses. If you are familiar with the GNU Licenses, please read this license with extra care.

Aladdin Enterprises hereby grants to anyone the permission to apply
this License to their own work, as long as the entire License (including
the above notices and this paragraph) is copied with no changes, additions,
or deletions except for changing the first paragraph of Section 0 to include
a suitable description of the work to which the license is being applied
and of the person or entity that holds the copyright in the work, and,
if the License is being applied to a work created in a country other than
the United States, replacing the first paragraph of Section 6 with an appropriate
reference to the laws of the appropriate country.

This License is not an Open Source license: among other things, it places
restrictions on distribution of the Program, specifically including sale
of the Program. While Aladdin Enterprises respects and supports the philosophy
of the Open Source Definition, and shares the desire of the GNU project
to keep licensed software freely redistributable in both source and object
form, we feel that Open Source licenses unfairly prevent developers of
useful software from being compensated proportionately when others profit
financially from their work. This License attempts to ensure that those
who receive, redistribute, and contribute to the licensed Program according
to the Open Source and Free Software philosophies have the right to do
so, while retaining for the developer(s) of the Program the power to make
those who use the Program to enhance the value of commercial products pay
for the privilege of doing so.

0. Subject Matter
This License applies to the application know as "KeyDecoder", 
an application designed to help decoding a machanical key code using a picture. 
The "Program", below, refers to such application. The Program is a copyrighted 
work whose copyright is held by AT Security SAS, located in Lyon, France (the "Licensor"). 

A "work based on the Program" means either the Program or any derivative
work of the Program, as defined in the United States Copyright Act of 1976,
such as a translation or a modification.

BY MODIFYING OR DISTRIBUTING THE PROGRAM (OR ANY WORK BASED ON THE
PROGRAM), YOU INDICATE YOUR ACCEPTANCE OF THIS LICENSE TO DO SO, AND ALL
ITS TERMS AND CONDITIONS FOR COPYING, DISTRIBUTING OR MODIFYING THE PROGRAM
OR WORKS BASED ON IT. NOTHING OTHER THAN THIS LICENSE GRANTS YOU PERMISSION
TO MODIFY OR DISTRIBUTE THE PROGRAM OR ITS DERIVATIVE WORKS. THESE ACTIONS
ARE PROHIBITED BY LAW. IF YOU DO NOT ACCEPT THESE TERMS AND CONDITIONS,
DO NOT MODIFY OR DISTRIBUTE THE PROGRAM.

1. Licenses.
Licensor hereby grants you the following rights, provided that you comply
with all of the restrictions set forth in this License and provided, further,
that you distribute an unmodified copy of this License with the Program:

(a)
You may copy and distribute literal (i.e., verbatim) copies of the Program's
source code as you receive it throughout the world, in any medium.

(b)
You may modify the Program, create works based on the Program and distribute
copies of such throughout the world, in any medium.


2. Restrictions.
This license is subject to the following restrictions:

(a)
Distribution of the Program or any work based on the Program by a commercial
organization to any third party is prohibited if any payment is made in
connection with such distribution, whether directly (as in payment for
a copy of the Program) or indirectly (as in payment for some service related
to the Program, or payment for some product or service that includes a
copy of the Program "without charge"; these are only examples, and not
an exhaustive enumeration of prohibited activities). The following methods
of distribution involving payment shall not in and of themselves be a violation
of this restriction:

(i)
Posting the Program on a public access information storage and retrieval
service for which a fee is received for retrieving information (such as
an on-line service), provided that the fee is not content-dependent (i.e.,
the fee would be the same for retrieving the same volume of information
consisting of random data) and that access to the service and to the Program
is available independent of any other product or service. An example of
a service that does not fall under this section is an on-line service that
is operated by a company and that is only available to customers of that
company. (This is not an exhaustive enumeration.)

(ii)
Distributing the Program on removable computer-readable media, provided
that the files containing the Program are reproduced entirely and verbatim
on such media, that all information on such media be redistributable for
non-commercial purposes without charge, and that such media are distributed
by themselves (except for accompanying documentation) independent of any
other product or service. Examples of such media include CD-ROM, magnetic
tape, and optical storage media. (This is not intended to be an exhaustive
list.) An example of a distribution that does not fall under this section
is a CD-ROM included in a book or magazine. (This is not an exhaustive
enumeration.)

(b)
Activities other than copying, distribution and modification of the Program
are not subject to this License and they are outside its scope. Functional
use (running) of the Program is not restricted, and any output produced
through the use of the Program is subject to this license only if its contents
constitute a work based on the Program (independent of having been made
by running the Program).

(c)
You must meet all of the following conditions with respect to any work
that you distribute or publish that in whole or in part contains or is
derived from the Program or any part thereof ("the Work"):

(i)
If you have modified the Program, you must cause the Work to carry prominent
notices stating that you have modified the Program's files and the date
of any change. In each source file that you have modified, you must include
a prominent notice that you have modified the file, including your name,
your e-mail address (if any), and the date and purpose of the change;

(ii)
You must cause the Work to be licensed as a whole and at no charge to all
third parties under the terms of this License;

(iii)
If the Work normally reads commands interactively when run, you must cause
it, at each time the Work commences operation, to print or display an announcement
including an appropriate copyright notice and a notice that there is no
warranty (or else, saying that you provide a warranty). Such notice must
also state that users may redistribute the Work only under the conditions
of this License and tell the user how to view the copy of this License
included with the Work. (Exceptions: if the Program is interactive but
normally prints or displays such an announcement only at the request of
a user, such as in an "About box", the Work is required to print or display
the notice only under the same circumstances; if the Program itself is
interactive but does not normally print such an announcement, the Work
is not required to print an announcement.);

(iv)
You must accompany the Work with the complete corresponding machine-readable
source code, delivered on a medium customarily used for software interchange.
The source code for a work means the preferred form of the work for making
modifications to it. For an executable work, complete source code means
all the source code for all modules it contains, plus any associated interface
definition files, plus the scripts used to control compilation and installation
of the executable code. If you distribute with the Work any component that
is normally distributed (in either source or binary form) with the major
components (compiler, kernel, and so on) of the operating system on which
the executable runs, you must also distribute the source code of that component
if you have it and are allowed to do so;

(v)
If you distribute any written or printed material at all with the Work,
such material must include either a written copy of this License, or a
prominent written indication that the Work is covered by this License and
written instructions for printing and/or displaying the copy of the License
on the distribution medium;

(vi)
You may not impose any further restrictions on the recipient's exercise
of the rights granted herein.

If distribution of executable or object code is made by offering the equivalent
ability to copy from a designated place, then offering equivalent ability
to copy the source code from the same place counts as distribution of the
source code, even though third parties are not compelled to copy the source
code along with the object code.

3. Reservation of Rights.
No rights are granted to the Program except as expressly set forth herein.
You may not copy, modify, sublicense, or distribute the Program except
as expressly provided under this License. Any attempt otherwise to copy,
modify, sublicense or distribute the Program is void, and will automatically
terminate your rights under this License. However, parties who have received
copies, or rights, from you under this License will not have their licenses
terminated so long as such parties remain in full compliance.

4. Other Restrictions.
If the distribution and/or use of the Program is restricted in certain
countries for any reason, Licensor may add an explicit geographical distribution
limitation excluding those countries, so that distribution is permitted
only in or among countries not thus excluded. In such case, this License
incorporates the limitation as if written in the body of this License.

5. Limitations.
THE PROGRAM IS PROVIDED TO YOU "AS IS," WITHOUT WARRANTY. THERE IS NO
WARRANTY FOR THE PROGRAM, EITHER EXPRESSED OR IMPLIED, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
PARTICULAR PURPOSE AND NONINFRINGEMENT OF THIRD PARTY RIGHTS. THE ENTIRE
RISK AS TO THE QUALITY AND PERFORMANCE OF THE PROGRAM IS WITH YOU. SHOULD
THE PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING,
REPAIR OR CORRECTION.

IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING
WILL LICENSOR, OR ANY OTHER PARTY WHO MAY MODIFY AND/OR REDISTRIBUTE THE
PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY
GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE
USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED TO LOSS
OF DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY YOU OR
THIRD PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER PROGRAMS),
EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE POSSIBILITY
OF SUCH DAMAGES.

6. General.
This License is governed by the laws of the State of California, U.S.A., excluding choice of law rules.

If any part of this License is found to be in conflict with the law, that part shall be interpreted in its broadest meaning consistent with the law, and no other parts of the License shall be affected.

For United States Government users, the Program is provided with RESTRICTED RIGHTS. If you are a unit or agency of the United States Government or are acquiring the Program for any such unit or agency, the following apply:

If the unit or agency is the Department of Defense ("DOD"),
the Program and its documentation are classified as "commercial computer
software" and "commercial computer software documentation" respectively
and, pursuant to DFAR Section 227.7202, the Government is acquiring the
Program and its documentation in accordance with the terms of this License.
If the unit or agency is other than DOD, the Program and its documentation
are classified as "commercial computer software" and "commercial computer
software documentation" respectively and, pursuant to FAR Section 12.212,
the Government is acquiring the Program and its documentation in accordance
with the terms of this License.

""")
				),
			)
		);
	}
}

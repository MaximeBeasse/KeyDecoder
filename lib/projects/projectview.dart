import 'dart:io';
import 'dart:math';

import 'package:flutter/material.dart';
import 'package:material_design_icons_flutter/material_design_icons_flutter.dart';
import '../utils/utils.dart';
import 'model/projects.dart';

class ProjectThumbnail extends StatelessWidget {
	ProjectThumbnail({Key key, this.project}) : super(key: key);
  	
	final Project project;

	@override
	Widget build(BuildContext context) {
		return SizedBox (
			height: MediaQuery.of(context).size.height * 0.23,
			child: Card(
				elevation: 2.0,
				child: Column(
					children: [
						ListTile(
							title: Text(project.title,),
							subtitle: Text(project.description, maxLines: 3, overflow: TextOverflow.fade,),
							trailing: (project.pathCroppedPic.isEmpty) ? null : Image.file(File(project.pathCroppedPic)),
							isThreeLine: false,
							dense: true,
						),
						projectStepper(project)
					],
				),
			),
		);
	}
}

Widget projectStepper(Project project) {

	final Color _colorDisable = Colors.grey[600];
	final Color _colorActive = Colors.lightBlue[400];
	final Color _colorDone = Colors.lightGreen[400];

	int curStep = 0;

	if (project.pathRawPic.isNotEmpty)
		curStep = 1;
	if (project.pathCroppedPic.isNotEmpty)
		curStep = 2;
	if (project.markers != null)
		curStep = 3;

	return Padding(
		padding: const EdgeInsets.all(8.0),
		child: Row(
			mainAxisAlignment: MainAxisAlignment.center,
			crossAxisAlignment: CrossAxisAlignment.center,
			mainAxisSize: MainAxisSize.min,
			children: [
				RoundIconContainer(
					tick: (curStep > 0),
					color: (curStep > 0) ? _colorDone : (curStep == 0) ? _colorActive : _colorDisable,
					child: Icon(MdiIcons.keyVariant),
				),
				Container(
					height: 5,
					width: 35,
					decoration: BoxDecoration(borderRadius: BorderRadius.circular(2), color: Colors.blueGrey[800],),
				),
				RoundIconContainer(
					tick: (curStep > 1),
					color: (curStep > 1) ? _colorDone : (curStep == 1) ? _colorActive : _colorDisable,
					child: Icon(Icons.crop),
				),
				Container(
					height: 5,
					width: 35,
					decoration: BoxDecoration(borderRadius: BorderRadius.circular(2), color: Colors.blueGrey[800],),
				),
				RoundIconContainer(
					tick: (curStep > 2),
					color: (curStep > 2) ? _colorDone : (curStep == 2) ? _colorActive : _colorDisable,
					child: Transform.rotate(
						angle: pi/4,
						child: Icon(Icons.straighten, size: 20),
					),
				),
			],
		),
	);
}
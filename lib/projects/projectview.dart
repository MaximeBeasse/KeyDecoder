import 'package:flutter/material.dart';
import 'model/projects.dart';

class ProjectThumbnail extends StatefulWidget {
	ProjectThumbnail({Key key, this.project}) : super(key: key);
  	
	final Project project;
	
  	@override
  	ProjectThumbnailState createState() => ProjectThumbnailState(project);
}

class ProjectThumbnailState extends State<ProjectThumbnail> {

	Project project;

	ProjectThumbnailState(this.project);

	@override
	Widget build(BuildContext context) {
		return Container(
			width: double.infinity,
			height: 100,
			color: Colors.blue,
			child: Column(
				children: <Widget>[
					Text(project.title,),
					Text(project.description,),
				],
			),				
		);
	}
}
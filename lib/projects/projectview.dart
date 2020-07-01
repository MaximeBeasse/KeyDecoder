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
		return Padding(
			padding: EdgeInsets.all(16.0),
			child: Container(
				width: 200,
				height: 100,
				color: Colors.blue,
				child: Column(
					children: <Widget>[
						Text(project.title,),
						Text(project.description,),
					],
				),
			)
		);
	}
	
}
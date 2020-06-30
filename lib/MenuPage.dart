import 'package:flutter/material.dart';

class MenuPage extends StatefulWidget {
  	MenuPage({Key key, this.title}) : super(key: key);
  	final String title;

  	@override
  	MenuPageState createState() => MenuPageState();
}

class MenuPageState extends State<MenuPage> {
  	int _count;

  	MenuPageState() {
		_count = 0;
  	}

  	void increase() => setState(() => _count++);

  	@override
  	Widget build(BuildContext context) {
		return Scaffold(
	  		appBar: AppBar(title: Text(widget.title)),
	  		body: Column(
				mainAxisSize: MainAxisSize.max,
				mainAxisAlignment: MainAxisAlignment.center,
				crossAxisAlignment: CrossAxisAlignment.center,
				children: <Widget>[
		  			Text("Count : $_count"),
					Row(
						mainAxisSize: MainAxisSize.max,
						mainAxisAlignment: MainAxisAlignment.center,
						children: <Widget>[
							RaisedButton(onPressed: increase, child: Icon(Icons.add))
						],
					)
				],
	  		),
		);
  	}
}

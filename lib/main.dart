// Copyright 2018 The Flutter team. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import 'package:flutter/material.dart';
import 'MenuPage.dart';
// import 'package:opencv/opencv.dart';
// import 'package:moor/moor.dart';

void main() => runApp(App());

class App extends StatelessWidget {
	@override
  	Widget build(BuildContext context) {
		return MaterialApp(
	  		title: 'Flutter Demo',
	  		theme: ThemeData(primaryColor: Colors.blue),
	  		home: MenuPage(title: "Flutter Demo Home Page"),
		);
  	}
}

import 'dart:typed_data';

import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:moor_flutter/moor_flutter.dart';

/// blocks rotation; sets orientation to: portrait
Future landscapeModeOnly() {
	return SystemChrome.setPreferredOrientations([
		DeviceOrientation.landscapeLeft,
		DeviceOrientation.landscapeRight,
	]);
}

Future enableRotation() {
	return SystemChrome.setPreferredOrientations([
		DeviceOrientation.portraitUp,
		DeviceOrientation.landscapeLeft,
		DeviceOrientation.landscapeRight
	]);
}

class VisibleButton extends StatelessWidget {

  	final bool visible;
	final void Function() onTap;
	final double padding;
	final bool keepSpace;
  	final Widget child;

	VisibleButton({
		Key key,
		this.visible,
		this.onTap,
		this.padding = 8.0,
		this.keepSpace = false,
		this.child
	}) : super(key: key);

	@override
	Widget build(BuildContext context) {
		return Visibility(
			visible: visible,
			maintainState: keepSpace,
			maintainSize: keepSpace,
			maintainAnimation: keepSpace,
			child: Padding(
				padding: EdgeInsets.all(padding),
				child: GestureDetector(
					child: child,
					onTap: onTap,
				),
			),
		);
	}
}

class RoundIconContainer extends StatelessWidget {

	RoundIconContainer({Key key, this.color, this.size = 40, this.padding = 4.0, this.tick = false, this.child}) : super(key: key);

	final Color color;

	final double size;

	final double padding;

	final Widget child;

	final bool tick;

	@override
	Widget build(BuildContext context) {
		return Padding(
			padding: EdgeInsets.all(padding),
			child: Stack(
				children: [
					Container(
						width: size,
						height: size,
						child: child,
						decoration: BoxDecoration(
							shape: BoxShape.circle,
							color: color
						),
					),
					Visibility(
						visible: tick,
						child: Positioned(
							bottom: -2,
							right: -2,
							child: Icon(Icons.check, color: Colors.green, size: 24)
						),
					)
				]
					),
		);
	}
}

class InvertedColorText extends StatelessWidget {

	InvertedColorText({
		Key key,
		this.text
	}) : super(key: key);

	final Text text;

	@override
	Widget build(BuildContext context) {
		return ShaderMask(
			blendMode: BlendMode.difference,
			shaderCallback: (bounds) => LinearGradient(colors: [Color(0x00)], stops: [0.0]).createShader(bounds),
			child: text,
		);
	}
}

List<Offset> fromBlob(Uint8List blob) {
	Float64x2List lf2 = Float64x2List.view(blob.buffer);
	List<Offset> res = List<Offset>();
	lf2.forEach((elt) {
		res.add(Offset(elt.x, elt.y));
	});
	return res;
}

Uint8List toBlob(List<Offset> markers) {
	Float64x2List lf2 = Float64x2List(markers.length);
	for (var i = 0; i < markers.length; i++) {
		lf2[i] = Float64x2(markers[i].dx, markers[i].dy);
	}
	return Uint8List.fromList(lf2.buffer.asUint8List());
}
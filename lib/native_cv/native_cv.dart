import 'dart:async';
import 'dart:ffi';
import 'dart:io';
import 'dart:ui';
import 'package:ffi/ffi.dart';
import 'package:flutter/material.dart';

class Coordinate extends Struct {
	@Double()
	double x;

	@Double()
	double y;

	factory Coordinate.allocate(double x, double y) => 
		allocate<Coordinate>().ref
			..x = x
			..y = y;

	factory Coordinate.fromOffset(Offset o) => 
		allocate<Coordinate>().ref
			..x = o.dx
			..y = o.dy;
}

class NativeIntersection extends Struct {
	Pointer<Coordinate> topLeft;
	Pointer<Coordinate> topRight;
	Pointer<Coordinate> bottomLeft;
	Pointer<Coordinate> bottomRight;
	
	factory NativeIntersection.allocate(
		Pointer<Coordinate> topLeft,
		Pointer<Coordinate> topRight,
		Pointer<Coordinate> bottomLeft,
		Pointer<Coordinate> bottomRight) =>
		allocate<NativeIntersection>().ref
			..topLeft = topLeft
			..topRight = topRight
			..bottomLeft = bottomLeft
			..bottomRight = bottomRight;

	factory NativeIntersection.fromDart(DartIntersection dinter) =>
		allocate<NativeIntersection>().ref
			..topLeft = Coordinate.fromOffset(dinter.topLeft).addressOf
			..topRight = Coordinate.fromOffset(dinter.topRight).addressOf
			..bottomLeft = Coordinate.fromOffset(dinter.bottomLeft).addressOf
			..bottomRight = Coordinate.fromOffset(dinter.bottomRight).addressOf;
}

class DartIntersection {
	DartIntersection({
		@required this.topLeft,
		@required this.topRight,
		@required this.bottomLeft,
		@required this.bottomRight,
	});

	DartIntersection.fromList(List<Offset> l) {
		if (l.length != 4)
			throw ArgumentError('DartIntersection.fromList(): Given list length != 4');

		topLeft = l[0];
		topRight = l[1];
		bottomRight = l[2];
		bottomLeft = l[3];
	}

	Offset topLeft;
	Offset topRight;
	Offset bottomLeft;
	Offset bottomRight;

	@override
	String toString() {
		return """DartIntersection : {
	topLeft: $topLeft
	topRight: $topRight
	bottomLeft: $bottomLeft
	bottomRight: $bottomRight
}""";
	}
}

typedef homogaphy_warp_function = Int8 Function(
  	Pointer<NativeIntersection> points, Pointer<Utf8> src, Pointer<Utf8> dst
);

typedef HomogaphyWarpFunction = int Function(
	Pointer<NativeIntersection> points,
	Pointer<Utf8> src,
	Pointer<Utf8> dst
);

class HomographyWarp {
  static Future<int> homographyWarp(DartIntersection points, String src, String dst) async {
    DynamicLibrary nativeCvLib = _getDynamicLibrary();

    var lookup = nativeCvLib.lookup<NativeFunction<homogaphy_warp_function>>("homography_warp");
	final homographicWarp = lookup.asFunction<HomogaphyWarpFunction>();

	NativeIntersection ninter = NativeIntersection.fromDart(points);

    return homographicWarp(ninter.addressOf, Utf8.toUtf8(src), Utf8.toUtf8(dst));
  }
  static DynamicLibrary _getDynamicLibrary() {
    final DynamicLibrary nativeCvLib = Platform.isAndroid
        ? DynamicLibrary.open("libnative_cv.so")
        : DynamicLibrary.process();
    return nativeCvLib;
  }
}
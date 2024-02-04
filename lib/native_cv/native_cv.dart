import 'dart:async';
import 'dart:ffi';
import 'dart:io';
import 'package:ffi/ffi.dart';
import 'package:flutter/material.dart';

final class Coordinate extends Struct {
	@Double()
	external double x;

	@Double()
	external double y;
}

final class NativeIntersection extends Struct {
	external Coordinate topLeft;
	external Coordinate topRight;
	external Coordinate bottomLeft;
	external Coordinate bottomRight;
}

class DartIntersection {
	DartIntersection({
		required this.topLeft,
		required this.topRight,
		required this.bottomLeft,
		required this.bottomRight,
	});

	DartIntersection.fromList(List<Offset> l) {
		if (l.length != 4)
			throw ArgumentError('DartIntersection.fromList(): Given list length != 4');

		topLeft = l[0];
		topRight = l[1];
		bottomLeft = l[3];
		bottomRight = l[2];
	}

	late Offset topLeft;
	late Offset topRight;
	late Offset bottomLeft;
	late Offset bottomRight;

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

typedef CreateCoordinateNative = Coordinate Function(Double x, Double y);
typedef CreateCoordinate = Coordinate Function(double x, double y);

typedef CreateNativeIntersectionNative = NativeIntersection Function(
	Coordinate topLeft,
	Coordinate topRight,
	Coordinate bottomLeft,
	Coordinate bottomRight
);
typedef CreateNativeIntersection = NativeIntersection Function(
	Coordinate topLeft,
	Coordinate topRight,
	Coordinate bottomLeft,
	Coordinate bottomRight
);

typedef HomogaphyWarpFunctionNative = Int8 Function(
  	NativeIntersection points, Pointer<Utf8> src, Pointer<Utf8> dst
);
typedef HomogaphyWarpFunction = int Function(
	NativeIntersection points,
	Pointer<Utf8> src,
	Pointer<Utf8> dst
);

typedef CroplessWarpFunctionNative = Double Function(
  	NativeIntersection points, Pointer<Utf8> src, Pointer<Utf8> dst, Double width, Double length
);
typedef CroplessWarpFunction = double Function(
	NativeIntersection points,
	Pointer<Utf8> src,
	Pointer<Utf8> dst,
	double width,
	double length
);

NativeIntersection createNativeIntersectionFromDart(DynamicLibrary dynamicLibrary, DartIntersection points) {

	final createCoordinate = dynamicLibrary.lookupFunction<CreateCoordinateNative, CreateCoordinate>("create_coordinate");
	final createIntersection = dynamicLibrary.lookupFunction<CreateNativeIntersectionNative, CreateNativeIntersection>("create_intersection");

	Coordinate topLeft = createCoordinate(points.topLeft.dx, points.topLeft.dy);
	Coordinate topRight = createCoordinate(points.topRight.dx, points.topRight.dy);
	Coordinate bottomLeft = createCoordinate(points.bottomLeft.dx, points.bottomLeft.dy);
	Coordinate bottomRight = createCoordinate(points.bottomRight.dx, points.bottomRight.dy);

	return createIntersection(topLeft, topRight, bottomLeft, bottomRight);
}

class HomographyWarp {
	static Future<int> homographyWarp(DartIntersection points, String src, String dst) async {
		DynamicLibrary nativeCvLib = _getDynamicLibrary();

		final homographicWarp = nativeCvLib.lookupFunction<HomogaphyWarpFunctionNative, HomogaphyWarpFunction>("homography_warp");

		NativeIntersection ninter = createNativeIntersectionFromDart(nativeCvLib, points);

		return homographicWarp(ninter, src.toNativeUtf8(), dst.toNativeUtf8());
	}

	static Future<double> croplessWarp(DartIntersection points, String src, String dst, double width, double length) async {
		DynamicLibrary nativeCvLib = _getDynamicLibrary();
		
		final croplessWarp = nativeCvLib.lookupFunction<CroplessWarpFunctionNative, CroplessWarpFunction>("cropless_warp");

		NativeIntersection ninter = createNativeIntersectionFromDart(nativeCvLib, points);

		return croplessWarp(ninter, src.toNativeUtf8(), dst.toNativeUtf8(), width, length);
	}

	static DynamicLibrary _getDynamicLibrary() {
		final DynamicLibrary nativeCvLib = Platform.isAndroid
			? DynamicLibrary.open("libnative_cv.so")
			: DynamicLibrary.process();
		return nativeCvLib;
	}
}
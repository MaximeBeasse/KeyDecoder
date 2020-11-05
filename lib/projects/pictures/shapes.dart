import 'dart:math';

import 'package:flutter/material.dart' hide Rect;
import 'dart:ui' as ui;
import 'package:keydecoder/utils/gesture_x_detector.dart';
import 'package:vector_math/vector_math_64.dart' hide Colors;

abstract class Shape {

	static double get strokeWidth => 1.5;

	Shape(this.paint);

	bool hidden = false;

	Paint paint;

	void draw(Canvas canvas, BuildContext context);
}

class Circle extends Shape {

	Circle(this.center, this.radius, Paint paint) : super(paint);

	Offset center;
	double radius;

	@override
	void draw(Canvas canvas, BuildContext context) {
		canvas.drawCircle(center, radius, paint);
	}
}

class Segment extends Shape {

	Segment(this.a, this.b, Paint paint) : super(paint);

	Offset a;
	Offset b;

	@override
	void draw(Canvas canvas, BuildContext context) {
		canvas.drawLine(a, b, paint);
	}
}

class Line extends Shape {

	Line(this.a, this.b, Paint paint) : super(paint) {
		mAngle = computeAngle();
	}

	// Constructor from a point and an angle
	Line.fromAngle(this.a, this.mAngle, Paint paint, { double distance = 500.0 }) : super(paint) {
		b = Offset(a.dx + distance * cos(mAngle), a.dy + distance * sin(mAngle));
		a = Offset(a.dx - distance * cos(mAngle), a.dy - distance * sin(mAngle));
	}

	Line.perpendicular(Line l, Offset p, Paint paint) : super(paint) {
		fixAngle = true;
		mAngle = l.mAngle + pi/2;
		a = Offset.fromDirection(mAngle) + p;
		b = xtersect(l);
	}

	bool fixAngle = false;

	Offset a;
	Offset b;

	double mAngle;

	double computeAngle() {
		return (b-a).direction;
	}

	double computeSlope() {
        if (a.dx == b.dx)
            return double.infinity;
    	return (b.dy - a.dy) / (b.dx - a.dx);
    }

	void transform(Matrix4 matrix) {
		a = transformOffset(matrix, a);
		b = transformOffset(matrix, b);
		mAngle = computeAngle();
	}

	double _far = 1000000.0;

	/*
		function xsect(x0, y0, a0, x1, y1, a1) {
			if ((((a0-a1) % 180) + 180) % 180 === 0) throw parallelError
			if (((a0 % 180) + 180) % 180 === 90) {
				// vertical line at x = x0
				return [x0, Math.tan(a1*toRad) * (x0-x1) + y1]
			}
			else if (((a1 % 180) + 180) % 180 === 90) {
				// vertical line at x = x0
				return [x1, Math.tan(a0*toRan) * (x1-x0) + y0]
			}
			let m0 = Math.tan(a0*toRad) // Line 0: y = m0 (x - x0) + y0
			let m1 = Math.tan(a1*toRad) // Line 1: y = m1 (x - x1) + y1
			let x = ((m0 * x0 - m1 * x1) - (y0 - y1)) / (m0 - m1)
			return [x, m0 * (x - x0) + y0]
		}
	*/

	Offset xtersect(Line other) {
		if ((((mAngle - other.mAngle) % pi) + pi) % pi == 0) return null;
		if (((mAngle % pi) + pi) % pi == pi/2.0) {
				// vertical line at x = a.dx
				return Offset(a.dx, tan(other.mAngle) * (a.dx-other.a.dx) + other.a.dy);
			}
			else if (((other.mAngle % pi) + pi) % pi == pi/2.0) {
				// vertical line at x = a.dx
				return Offset(other.a.dx, tan(mAngle) * (other.a.dx-a.dx) + a.dy);
			}
			var m0 = tan(mAngle); // Line 0: y = m0 (x - a.dx) + a.dy
			var m1 = tan(other.mAngle); // Line 1: y = m1 (x - other.a.dx) + other.a.dy
			var x = ((m0 * a.dx - m1 * other.a.dx) - (a.dy - other.a.dy)) / (m0 - m1);
			return Offset(x, m0 * (x - a.dx) + a.dy);
	}

	List<Offset> xtersectList(List<Line> others) {
		
		var m0 = tan(mAngle);

		for (Line other in others) {

			if ((((mAngle - other.mAngle) % pi) + pi) % pi == 0)
				continue;
			
		}

		return [];
		// TODO 
		/*if ((((mAngle - other.mAngle) % pi) + pi) % pi == 0) return null;
		if (((mAngle % pi) + pi) % pi == pi/2.0) {
				// vertical line at x = a.dx
				return Offset(a.dx, tan(other.mAngle) * (a.dx-other.a.dx) + other.a.dy);
			}
			else if (((other.mAngle % pi) + pi) % pi == pi/2.0) {
				// vertical line at x = a.dx
				return Offset(other.a.dx, tan(mAngle) * (other.a.dx-a.dx) + a.dy);
			}
			var m0 = tan(mAngle); // Line 0: y = m0 (x - a.dx) + a.dy
			var m1 = tan(other.mAngle); // Line 1: y = m1 (x - other.a.dx) + other.a.dy
			var x = ((m0 * a.dx - m1 * other.a.dx) - (a.dy - other.a.dy)) / (m0 - m1);
			return Offset(x, m0 * (x - a.dx) + a.dy);*/
	}

	@override
	String toString() {
		return """Line:
	a: $a
	b: $b
	mAngle: $mAngle
""";
	}

	@override
	void draw(Canvas canvas, BuildContext context) {
		if(!fixAngle)
			mAngle = computeAngle();

		Offset abis = Offset(a.dx + _far * cos(mAngle), a.dy + _far * sin(mAngle));
		Offset bbis = Offset(a.dx - _far * cos(mAngle), a.dy - _far * sin(mAngle));

        canvas.drawLine(abis, bbis, paint);
	}
}

class Rect extends Shape {

	Rect(this.rect, Paint paint) : super(paint);

	Rect.from(this.rect, Paint paint) : super(paint);

	ui.Rect rect;

	@override
	void draw(Canvas canvas, BuildContext context) {
		canvas.drawRect(rect, paint);
	}
}

class RotatedRect extends Shape {

	RotatedRect(ui.Rect rect, double angle, Paint paint) : super(paint) {
		Matrix4 rot = Matrix4.rotationZ(angle);

		List<Offset> summits = [
			transformOffset(rot, rect.topLeft.translate(-rect.center.dx, -rect.center.dy)).translate(rect.center.dx, rect.center.dy),
			transformOffset(rot, rect.topRight.translate(-rect.center.dx, -rect.center.dy)).translate(rect.center.dx, rect.center.dy),
			transformOffset(rot, rect.bottomRight.translate(-rect.center.dx, -rect.center.dy)).translate(rect.center.dx, rect.center.dy),
			transformOffset(rot, rect.bottomLeft.translate(-rect.center.dx, -rect.center.dy)).translate(rect.center.dx, rect.center.dy)
		];

		vertices = ui.Vertices(ui.VertexMode.triangleFan, summits);
	}

	ui.Vertices vertices;

	@override
	void draw(Canvas canvas, BuildContext context) {
		canvas.drawVertices(vertices, paint.blendMode, paint);
	}
}

// private void drawCrosshair(PointF center, Canvas canvas, Paint paint) {

// 	float fixedSize = sizeCrosshair * scaleFactor();

// 	float angle;

// 	// following back axis
// 	backline.computeAngle();
// 	PointF pa = new PointF(center.x + fixedSize * (float)Math.cos(backline.mAngle), center.y + fixedSize * (float)Math.sin(backline.mAngle));
// 	PointF pb = new PointF(center.x - fixedSize * (float)Math.cos(backline.mAngle), center.y - fixedSize * (float)Math.sin(backline.mAngle));
// 	canvas.drawLine(pa.x, pa.y, pb.x, pb.y, paint);

// 	// following shoulder axis
// 	angle = backline.mAngle + (float)Math.PI / 2f;
// 	pa.set(center.x + fixedSize * (float)Math.cos(angle), center.y + fixedSize * (float)Math.sin(angle));
// 	pb.set(center.x - fixedSize * (float)Math.cos(angle), center.y - fixedSize * (float)Math.sin(angle));
// 	canvas.drawLine(pa.x, pa.y, pb.x, pb.y, paint);
// }

class Crosshair extends Shape {

	static double get basefontSize => 16.0;

	Crosshair(this.center, this.angle, this.measures, Paint paint, double scale, {this.baseSize = 20.0}) : size = baseSize, super(paint) {
		textStyle = TextStyle(
			fontSize: basefontSize / scale,
			fontWeight: FontWeight.w700,
			fontFamily: 'Roboto'
		);
		textSpan = TextSpan(
			style: textStyle,
			text: "000.000"
		);
		textPainter = TextPainter(
			text: textSpan,
			textAlign: TextAlign.left,
			textDirection: TextDirection.ltr
		);
	}

	void drawText(Canvas context, String txt, Color color, double x, double y, double rads) {
		context.save();
			context.translate(x, y);
			context.rotate(rads);

			textStyle = textStyle.copyWith(color: color,);

			textSpan = TextSpan(
				style: textStyle,
				text: txt
			);
			textPainter = TextPainter(
				textScaleFactor: textPainter.textScaleFactor,
				text: textSpan,
				textAlign: TextAlign.left,
				textDirection: TextDirection.ltr
			);
			textPainter.layout();
			textPainter.paint(context, Offset(0.0,0.0));
		context.restore();
	}

	Offset center;

	final double baseSize;
	double size;
	RotatedRect rr;

	double angle;

	Offset measures;

	TextPainter textPainter;
	TextStyle textStyle;
	TextSpan textSpan;

	static Paint get markerPaint => Paint()
			..color = Color(0xFFCCCCCC)
			..strokeWidth = Crosshair.strokeWidth
			..blendMode = BlendMode.difference
			..style = PaintingStyle.fill;

	static double get strokeWidth => Shape.strokeWidth * 2;

	@override
	void draw(Canvas canvas, BuildContext context) {

		final RotatedRect rr = RotatedRect(center.translate(-paint.strokeWidth/2, -paint.strokeWidth/2) & Size(paint.strokeWidth, paint.strokeWidth), angle, paint);

		canvas.drawLine(
			center.translate(size * cos(angle), size * sin(angle)),
			center.translate(-size * cos(angle), -size * sin(angle)), 
			paint
		);
		canvas.drawLine(
			center.translate(size * sin(angle), size * -cos(angle)),
			center.translate(-size * sin(angle), -size * -cos(angle)),
			paint
		);
		rr.draw(canvas, context);

		if (measures != null) {

			textPainter = TextPainter(
				textScaleFactor: textPainter.textScaleFactor,
				text: textSpan,
				textAlign: TextAlign.left,
				textDirection: TextDirection.ltr
			);
			textPainter.layout();

			// Cross measures
			double sign = measures.dx.sign;
			String crossStr = measures.dx.abs().toStringAsFixed(3);
			drawText(canvas, crossStr, Colors.blue[700], center.dx - (sign * textPainter.width + size*4/3) * cos(angle), center.dy - ((sign < 0) ? (-textPainter.height*4) : (textPainter.height/2)) * sin(angle), angle);

			// Main measures
			sign = measures.dy.sign;
			String mainStr = measures.dy.abs().toStringAsFixed(3);
			drawText(canvas, mainStr, Colors.red[700], center.dx + sign * ((sign < 0) ? (textPainter.height*4) : (textPainter.height/2)) * sin(angle), center.dy + (sign * textPainter.width + size*3/4) * -cos(angle), angle + pi/2);
		}
	}
}
library gesture_x_detector;

import 'dart:async';
import 'package:flutter/widgets.dart';
import 'dart:math' as math;
import 'package:vector_math/vector_math_64.dart' hide Colors;

///  A widget that detects gestures.
/// * Supports Tap, DoubleTap, Move(start, update, end), Scale(start, update, end) and Long Press
/// * All callbacks be used simultaneously
///
/// For handle rotate event, please use rotateAngle on onScaleUpdate.
class XGestureDetector extends StatefulWidget {
  /// Creates a widget that detects gestures.
  XGestureDetector({
    required this.child,
    this.onTap,
    this.onMoveUpdate,
    this.onMoveEnd,
    this.onMoveStart,
    this.onScaleStart,
    this.onScaleUpdate,
    this.onScaleEnd,
    this.onDoubleTap,
    this.bypassTapEventOnDoubleTap = false,
    this.doubleTapTimeConsider = 250,
    this.longPressTimeConsider = 350,
    this.onLongPress
  });

  /// The widget below this widget in the tree.
  ///
  /// {@macro flutter.widgets.child}
  final Widget child;

  /// a flag to enable/disable tap event when double tap event occurs.
  ///
  /// By default it is false, that mean when user double tap on screen: it will trigge 1 double tap event and 2 single tap events
  final bool bypassTapEventOnDoubleTap;

  /// A specific duration to detect double tap
  final int doubleTapTimeConsider;

  /// The pointer that previously triggered the onTapDown has also triggered onTapUp which ends up causing a tap.
  final void Function(int pointer, Offset localPos, Offset position)? onTap;

  /// A pointer has contacted the screen with a primary button and has begun to
  /// move.
  final void Function(int pointer, Offset localPos, Offset position)?
      onMoveStart;

  /// A pointer that is in contact with the screen with a primary button and
  /// moving has moved again.
  final void Function(
          Offset localPos, Offset position, Offset localDelta, Offset delta)?
      onMoveUpdate;

  /// A pointer that was previously in contact with the screen with a primary
  /// button and moving is no longer in contact with the screen and was moving
  /// at a specific velocity when it stopped contacting the screen.
  final void Function(int pointer, Offset localPosition, Offset position)?
      onMoveEnd;

  /// The pointers in contact with the screen have established a focal point and
  /// initial scale of 1.0.
  final void Function(Offset initialFocusPoint)? onScaleStart;

  /// The pointers in contact with the screen have indicated a new focal point
  /// and/or scale.
  ///
  /// =============================================
  ///
  /// **changedFocusPoint** the current focus point
  ///
  /// **scale** the scale value
  ///
  /// **rotationAngle** the rotate angle in radians - using for rotate
  final void Function(
          Offset changedFocusPoint, double scale, double rotationAngle)?
      onScaleUpdate;

  /// The pointers are no longer in contact with the screen.
  final void Function()? onScaleEnd;

  /// The user has tapped the screen at the same location twice in quick succession.
  final void Function(Offset localPos, Offset position)? onDoubleTap;

  /// A pointer has remained in contact with the screen at the same location for a long period of time
  ///
  /// @param
  final void Function(int pointer, Offset localPos, Offset position)?
      onLongPress;

  /// A specific duration to detect long press
  final int longPressTimeConsider;

  @override
  _XGestureDetectorState createState() => _XGestureDetectorState();
}

enum _GestureState {
  PointerDown,
  MoveStart,
  ScaleStart,
  Scalling,
  LongPress,
  Unknown
}

class _XGestureDetectorState extends State<XGestureDetector> {
  List<_Touch> touches = [];
  double initialScaleDistance = 0.0;
  _GestureState state = _GestureState.Unknown;
  Timer? doubleTapTimer;
  Timer? longPressTimer;
  Offset lastTouchUpPos = Offset(0, 0);

  @override
  Widget build(BuildContext context) {
    return Listener(
      child: widget.child,
      onPointerDown: onPointerDown,
      onPointerUp: onPointerUp,
      onPointerMove: onPointerMove,
      onPointerCancel: onPointerUp,
	  behavior: HitTestBehavior.translucent,
    );
  }

  void onPointerDown(PointerDownEvent event) {
    touches.add(_Touch(event.pointer, event.localPosition));

    if (touchCount == 1) {
      state = _GestureState.PointerDown;
      startLongPressTimer(event.pointer, event.localPosition, event.position);
    } else if (touchCount == 2) {
      state = _GestureState.ScaleStart;
    } else {
      state = _GestureState.Unknown;
    }
  }

  void initScaleAndRotate() {
    initialScaleDistance =
        (touches[0].currentOffset - touches[1].currentOffset).distance;
  }

  void onPointerMove(PointerMoveEvent event) {
    final touch = touches.firstWhere((touch) => touch.id == event.pointer);
    touch.currentOffset = event.localPosition;
    cleanupTimer();

    switch (state) {
      case _GestureState.PointerDown:
        state = _GestureState.MoveStart;
        touch.startOffset = event.localPosition;
        if (widget.onMoveStart != null)
          widget.onMoveStart!(
              event.pointer, event.localPosition, event.position);
        break;
      case _GestureState.MoveStart:
        if (widget.onMoveUpdate != null)
          widget.onMoveUpdate!(event.localPosition, event.position,
              event.localDelta, event.delta);
        break;
      case _GestureState.ScaleStart:
        touch.startOffset = touch.currentOffset;
        state = _GestureState.Scalling;
        initScaleAndRotate();
        if (widget.onScaleStart != null) {
          final centerOffset =
              (touches[0].currentOffset + touches[1].currentOffset) / 2;
          widget.onScaleStart!(centerOffset);
        }
        break;
      case _GestureState.Scalling:
        if (widget.onScaleUpdate != null) {
          var rotation = angleBetweenLines(touches[0], touches[1]);
          final newDistance =
              (touches[0].currentOffset - touches[1].currentOffset).distance;
          final centerOffset =
              (touches[0].currentOffset + touches[1].currentOffset) / 2;
          widget.onScaleUpdate!(
              centerOffset, newDistance / initialScaleDistance, rotation);
        }
        break;
      default:
        touch.startOffset = touch.currentOffset;
        break;
    }
  }

  double angleBetweenLines(_Touch f, _Touch s) {
    double angle1 = math.atan2(f.startOffset.dy - s.startOffset.dy,
        f.startOffset.dx - s.startOffset.dx);
    double angle2 = math.atan2(f.currentOffset.dy - s.currentOffset.dy,
        f.currentOffset.dx - s.currentOffset.dx);

    double angle = degrees(angle1 - angle2) % 360;
    if (angle < -180.0) angle += 360.0;
    if (angle > 180.0) angle -= 360.0;
    return radians(angle);
  }

  void onPointerUp(PointerEvent event) {
    touches.removeWhere((touch) => touch.id == event.pointer);

    if (state == _GestureState.PointerDown) {
      if (!widget.bypassTapEventOnDoubleTap || widget.onDoubleTap == null) {
        callOnTap(event.pointer, event.localPosition, event.position);
      }
      if (widget.onDoubleTap != null) {
        if (doubleTapTimer == null) {
          startDoubleTapTimer(
              event.pointer, event.localPosition, event.position);
        } else {
          cleanupTimer();
          if ((event.localPosition - lastTouchUpPos).distanceSquared < 200) {
            widget.onDoubleTap!(event.localPosition, event.position);
          } else {
            startDoubleTapTimer(
                event.pointer, event.localPosition, event.position);
          }
        }
      }
    } else if (state == _GestureState.ScaleStart ||
        state == _GestureState.Scalling) {
      state = _GestureState.Unknown;
      if (widget.onScaleEnd != null) widget.onScaleEnd!();
    } else if (state == _GestureState.MoveStart) {
      state = _GestureState.Unknown;
      if (widget.onMoveEnd != null)
        widget.onMoveEnd!(event.pointer, event.localPosition, event.position);
    } else if (state == _GestureState.Unknown && touchCount == 2) {
      state = _GestureState.ScaleStart;
    } else {
      state = _GestureState.Unknown;
    }

    lastTouchUpPos = event.localPosition;
  }

  void startLongPressTimer(int pointer, Offset localPos, Offset position) {
    if (widget.onLongPress != null) {
      if (longPressTimer != null) {
        longPressTimer!.cancel();
        longPressTimer = null;
      }
      longPressTimer =
          Timer(Duration(milliseconds: widget.longPressTimeConsider), () {
        if (touchCount == 1 && touches[0].id == pointer) {
          state = _GestureState.LongPress;
          widget.onLongPress!(pointer, localPos, position);
          cleanupTimer();
        }
      });
    }
  }

  void startDoubleTapTimer(int pointer, Offset localPos, Offset globalPos) {
    doubleTapTimer =
        Timer(Duration(milliseconds: widget.doubleTapTimeConsider), () {
      state = _GestureState.Unknown;
      cleanupTimer();
      if (widget.bypassTapEventOnDoubleTap) {
        callOnTap(pointer, localPos, globalPos);
      }
    });
  }

  void cleanupTimer() {
    if (doubleTapTimer != null) {
      doubleTapTimer!.cancel();
      doubleTapTimer = null;
    }
    if (longPressTimer != null) {
      longPressTimer!.cancel();
      longPressTimer = null;
    }
  }

  void callOnTap(int pointer, Offset localPos, Offset globalPos) {
    if (widget.onTap != null) {
      widget.onTap!(pointer, localPos, globalPos);
    }
  }

  get touchCount => touches.length;

  /// Constant factor to convert and angle from degrees to radians.
  final double degrees2Radians = math.pi / 180.0;

  /// Constant factor to convert and angle from radians to degrees.
  final double radians2Degrees = 180.0 / math.pi;

  double degrees(double radians) => radians * radians2Degrees;

  /// Convert [degrees] to radians.
  double radians(double degrees) => degrees * degrees2Radians;
}

class _Touch {
  int id;
  Offset startOffset;
  late Offset currentOffset;

  _Touch(this.id, this.startOffset) {
    this.currentOffset = startOffset;
  }
}

Offset transformOffset(Matrix4 matrix, Offset offset) {
	return Offset(
		(matrix[0] * offset.dx) + (matrix[4] * offset.dy) + matrix[12],
    	(matrix[1] * offset.dx) + (matrix[5] * offset.dy) + matrix[13],
	);
}

Offset vect2Offset(Vector2 v) => Offset(v.x, v.y);
Vector2 offset2Vect(Offset o) => Vector2(o.dx, o.dy);

Offset invertOffset(Offset o) => Offset(o.dy, o.dx);
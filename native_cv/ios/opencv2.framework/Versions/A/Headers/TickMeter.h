//
// This file is auto-generated. Please don't modify it!
//
#pragma once

#ifdef __cplusplus
#import "opencv.hpp"

#else
#define CV_EXPORTS
#endif

#import <Foundation/Foundation.h>






NS_ASSUME_NONNULL_BEGIN

// C++: class TickMeter
/**
 * a Class to measure passing time.
 *
 * The class computes passing time by counting the number of ticks per second. That is, the following code computes the
 * execution time in seconds:
 * SNIPPET: snippets/core_various.cpp TickMeter_total
 *
 * It is also possible to compute the average time over multiple runs:
 * SNIPPET: snippets/core_various.cpp TickMeter_average
 *
 * @see getTickCount, getTickFrequency
 *
 * Member of `Core`
 */
CV_EXPORTS @interface TickMeter : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::TickMeter> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::TickMeter>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::TickMeter>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::TickMeter::TickMeter()
//
- (instancetype)init;


//
//  double cv::TickMeter::getAvgTimeMilli()
//
- (double)getAvgTimeMilli NS_SWIFT_NAME(getAvgTimeMilli());


//
//  double cv::TickMeter::getAvgTimeSec()
//
- (double)getAvgTimeSec NS_SWIFT_NAME(getAvgTimeSec());


//
//  double cv::TickMeter::getFPS()
//
- (double)getFPS NS_SWIFT_NAME(getFPS());


//
//  double cv::TickMeter::getTimeMicro()
//
- (double)getTimeMicro NS_SWIFT_NAME(getTimeMicro());


//
//  double cv::TickMeter::getTimeMilli()
//
- (double)getTimeMilli NS_SWIFT_NAME(getTimeMilli());


//
//  double cv::TickMeter::getTimeSec()
//
- (double)getTimeSec NS_SWIFT_NAME(getTimeSec());


//
//  int64 cv::TickMeter::getCounter()
//
- (long)getCounter NS_SWIFT_NAME(getCounter());


//
//  int64 cv::TickMeter::getTimeTicks()
//
- (long)getTimeTicks NS_SWIFT_NAME(getTimeTicks());


//
//  void cv::TickMeter::reset()
//
- (void)reset NS_SWIFT_NAME(reset());


//
//  void cv::TickMeter::start()
//
- (void)start NS_SWIFT_NAME(start());


//
//  void cv::TickMeter::stop()
//
- (void)stop NS_SWIFT_NAME(stop());



@end

NS_ASSUME_NONNULL_END



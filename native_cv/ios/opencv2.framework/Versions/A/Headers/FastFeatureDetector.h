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
#import "Feature2D.h"




// C++: enum FastDetectorType
typedef NS_ENUM(int, FastDetectorType) {
    TYPE_5_8 = 0,
    TYPE_7_12 = 1,
    TYPE_9_16 = 2
};



NS_ASSUME_NONNULL_BEGIN

// C++: class FastFeatureDetector
/**
 * Wrapping class for feature detection using the FAST method. :
 *
 * Member of `Features2d`
 */
CV_EXPORTS @interface FastFeatureDetector : Feature2D


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::FastFeatureDetector> nativePtrFastFeatureDetector;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::FastFeatureDetector>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::FastFeatureDetector>)nativePtr;
#endif


#pragma mark - Class Constants


@property (class, readonly) int THRESHOLD NS_SWIFT_NAME(THRESHOLD);
@property (class, readonly) int NONMAX_SUPPRESSION NS_SWIFT_NAME(NONMAX_SUPPRESSION);
@property (class, readonly) int FAST_N NS_SWIFT_NAME(FAST_N);

#pragma mark - Methods


//
//  FastFeatureDetector_DetectorType cv::FastFeatureDetector::getType()
//
- (FastDetectorType)getType NS_SWIFT_NAME(getType());


//
// static Ptr_FastFeatureDetector cv::FastFeatureDetector::create(int threshold = 10, bool nonmaxSuppression = true, FastFeatureDetector_DetectorType type = FastFeatureDetector::TYPE_9_16)
//
+ (FastFeatureDetector*)create:(int)threshold nonmaxSuppression:(BOOL)nonmaxSuppression type:(FastDetectorType)type NS_SWIFT_NAME(create(threshold:nonmaxSuppression:type:));

+ (FastFeatureDetector*)create:(int)threshold nonmaxSuppression:(BOOL)nonmaxSuppression NS_SWIFT_NAME(create(threshold:nonmaxSuppression:));

+ (FastFeatureDetector*)create:(int)threshold NS_SWIFT_NAME(create(threshold:));

+ (FastFeatureDetector*)create NS_SWIFT_NAME(create());


//
//  String cv::FastFeatureDetector::getDefaultName()
//
- (NSString*)getDefaultName NS_SWIFT_NAME(getDefaultName());


//
//  bool cv::FastFeatureDetector::getNonmaxSuppression()
//
- (BOOL)getNonmaxSuppression NS_SWIFT_NAME(getNonmaxSuppression());


//
//  int cv::FastFeatureDetector::getThreshold()
//
- (int)getThreshold NS_SWIFT_NAME(getThreshold());


//
//  void cv::FastFeatureDetector::setNonmaxSuppression(bool f)
//
- (void)setNonmaxSuppression:(BOOL)f NS_SWIFT_NAME(setNonmaxSuppression(f:));


//
//  void cv::FastFeatureDetector::setThreshold(int threshold)
//
- (void)setThreshold:(int)threshold NS_SWIFT_NAME(setThreshold(threshold:));


//
//  void cv::FastFeatureDetector::setType(FastFeatureDetector_DetectorType type)
//
- (void)setType:(FastDetectorType)type NS_SWIFT_NAME(setType(type:));



@end

NS_ASSUME_NONNULL_END



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




// C++: enum AgastDetectorType
typedef NS_ENUM(int, AgastDetectorType) {
    AGAST_5_8 = 0,
    AGAST_7_12d = 1,
    AGAST_7_12s = 2,
    OAST_9_16 = 3
};



NS_ASSUME_NONNULL_BEGIN

// C++: class AgastFeatureDetector
/**
 * Wrapping class for feature detection using the AGAST method. :
 *
 * Member of `Features2d`
 */
CV_EXPORTS @interface AgastFeatureDetector : Feature2D


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::AgastFeatureDetector> nativePtrAgastFeatureDetector;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::AgastFeatureDetector>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::AgastFeatureDetector>)nativePtr;
#endif


#pragma mark - Class Constants


@property (class, readonly) int THRESHOLD NS_SWIFT_NAME(THRESHOLD);
@property (class, readonly) int NONMAX_SUPPRESSION NS_SWIFT_NAME(NONMAX_SUPPRESSION);

#pragma mark - Methods


//
//  AgastFeatureDetector_DetectorType cv::AgastFeatureDetector::getType()
//
- (AgastDetectorType)getType NS_SWIFT_NAME(getType());


//
// static Ptr_AgastFeatureDetector cv::AgastFeatureDetector::create(int threshold = 10, bool nonmaxSuppression = true, AgastFeatureDetector_DetectorType type = AgastFeatureDetector::OAST_9_16)
//
+ (AgastFeatureDetector*)create:(int)threshold nonmaxSuppression:(BOOL)nonmaxSuppression type:(AgastDetectorType)type NS_SWIFT_NAME(create(threshold:nonmaxSuppression:type:));

+ (AgastFeatureDetector*)create:(int)threshold nonmaxSuppression:(BOOL)nonmaxSuppression NS_SWIFT_NAME(create(threshold:nonmaxSuppression:));

+ (AgastFeatureDetector*)create:(int)threshold NS_SWIFT_NAME(create(threshold:));

+ (AgastFeatureDetector*)create NS_SWIFT_NAME(create());


//
//  String cv::AgastFeatureDetector::getDefaultName()
//
- (NSString*)getDefaultName NS_SWIFT_NAME(getDefaultName());


//
//  bool cv::AgastFeatureDetector::getNonmaxSuppression()
//
- (BOOL)getNonmaxSuppression NS_SWIFT_NAME(getNonmaxSuppression());


//
//  int cv::AgastFeatureDetector::getThreshold()
//
- (int)getThreshold NS_SWIFT_NAME(getThreshold());


//
//  void cv::AgastFeatureDetector::setNonmaxSuppression(bool f)
//
- (void)setNonmaxSuppression:(BOOL)f NS_SWIFT_NAME(setNonmaxSuppression(f:));


//
//  void cv::AgastFeatureDetector::setThreshold(int threshold)
//
- (void)setThreshold:(int)threshold NS_SWIFT_NAME(setThreshold(threshold:));


//
//  void cv::AgastFeatureDetector::setType(AgastFeatureDetector_DetectorType type)
//
- (void)setType:(AgastDetectorType)type NS_SWIFT_NAME(setType(type:));



@end

NS_ASSUME_NONNULL_END



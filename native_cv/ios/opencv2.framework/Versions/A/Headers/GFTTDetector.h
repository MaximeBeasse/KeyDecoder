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





NS_ASSUME_NONNULL_BEGIN

// C++: class GFTTDetector
/**
 * Wrapping class for feature detection using the goodFeaturesToTrack function. :
 *
 * Member of `Features2d`
 */
CV_EXPORTS @interface GFTTDetector : Feature2D


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::GFTTDetector> nativePtrGFTTDetector;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::GFTTDetector>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::GFTTDetector>)nativePtr;
#endif


#pragma mark - Methods


//
// static Ptr_GFTTDetector cv::GFTTDetector::create(int maxCorners, double qualityLevel, double minDistance, int blockSize, int gradiantSize, bool useHarrisDetector = false, double k = 0.04)
//
+ (GFTTDetector*)create:(int)maxCorners qualityLevel:(double)qualityLevel minDistance:(double)minDistance blockSize:(int)blockSize gradiantSize:(int)gradiantSize useHarrisDetector:(BOOL)useHarrisDetector k:(double)k NS_SWIFT_NAME(create(maxCorners:qualityLevel:minDistance:blockSize:gradiantSize:useHarrisDetector:k:));

+ (GFTTDetector*)create:(int)maxCorners qualityLevel:(double)qualityLevel minDistance:(double)minDistance blockSize:(int)blockSize gradiantSize:(int)gradiantSize useHarrisDetector:(BOOL)useHarrisDetector NS_SWIFT_NAME(create(maxCorners:qualityLevel:minDistance:blockSize:gradiantSize:useHarrisDetector:));

+ (GFTTDetector*)create:(int)maxCorners qualityLevel:(double)qualityLevel minDistance:(double)minDistance blockSize:(int)blockSize gradiantSize:(int)gradiantSize NS_SWIFT_NAME(create(maxCorners:qualityLevel:minDistance:blockSize:gradiantSize:));


//
// static Ptr_GFTTDetector cv::GFTTDetector::create(int maxCorners = 1000, double qualityLevel = 0.01, double minDistance = 1, int blockSize = 3, bool useHarrisDetector = false, double k = 0.04)
//
+ (GFTTDetector*)create:(int)maxCorners qualityLevel:(double)qualityLevel minDistance:(double)minDistance blockSize:(int)blockSize useHarrisDetector:(BOOL)useHarrisDetector k:(double)k NS_SWIFT_NAME(create(maxCorners:qualityLevel:minDistance:blockSize:useHarrisDetector:k:));

+ (GFTTDetector*)create:(int)maxCorners qualityLevel:(double)qualityLevel minDistance:(double)minDistance blockSize:(int)blockSize useHarrisDetector:(BOOL)useHarrisDetector NS_SWIFT_NAME(create(maxCorners:qualityLevel:minDistance:blockSize:useHarrisDetector:));

+ (GFTTDetector*)create:(int)maxCorners qualityLevel:(double)qualityLevel minDistance:(double)minDistance blockSize:(int)blockSize NS_SWIFT_NAME(create(maxCorners:qualityLevel:minDistance:blockSize:));

+ (GFTTDetector*)create:(int)maxCorners qualityLevel:(double)qualityLevel minDistance:(double)minDistance NS_SWIFT_NAME(create(maxCorners:qualityLevel:minDistance:));

+ (GFTTDetector*)create:(int)maxCorners qualityLevel:(double)qualityLevel NS_SWIFT_NAME(create(maxCorners:qualityLevel:));

+ (GFTTDetector*)create:(int)maxCorners NS_SWIFT_NAME(create(maxCorners:));

+ (GFTTDetector*)create NS_SWIFT_NAME(create());


//
//  String cv::GFTTDetector::getDefaultName()
//
- (NSString*)getDefaultName NS_SWIFT_NAME(getDefaultName());


//
//  bool cv::GFTTDetector::getHarrisDetector()
//
- (BOOL)getHarrisDetector NS_SWIFT_NAME(getHarrisDetector());


//
//  double cv::GFTTDetector::getK()
//
- (double)getK NS_SWIFT_NAME(getK());


//
//  double cv::GFTTDetector::getMinDistance()
//
- (double)getMinDistance NS_SWIFT_NAME(getMinDistance());


//
//  double cv::GFTTDetector::getQualityLevel()
//
- (double)getQualityLevel NS_SWIFT_NAME(getQualityLevel());


//
//  int cv::GFTTDetector::getBlockSize()
//
- (int)getBlockSize NS_SWIFT_NAME(getBlockSize());


//
//  int cv::GFTTDetector::getMaxFeatures()
//
- (int)getMaxFeatures NS_SWIFT_NAME(getMaxFeatures());


//
//  void cv::GFTTDetector::setBlockSize(int blockSize)
//
- (void)setBlockSize:(int)blockSize NS_SWIFT_NAME(setBlockSize(blockSize:));


//
//  void cv::GFTTDetector::setHarrisDetector(bool val)
//
- (void)setHarrisDetector:(BOOL)val NS_SWIFT_NAME(setHarrisDetector(val:));


//
//  void cv::GFTTDetector::setK(double k)
//
- (void)setK:(double)k NS_SWIFT_NAME(setK(k:));


//
//  void cv::GFTTDetector::setMaxFeatures(int maxFeatures)
//
- (void)setMaxFeatures:(int)maxFeatures NS_SWIFT_NAME(setMaxFeatures(maxFeatures:));


//
//  void cv::GFTTDetector::setMinDistance(double minDistance)
//
- (void)setMinDistance:(double)minDistance NS_SWIFT_NAME(setMinDistance(minDistance:));


//
//  void cv::GFTTDetector::setQualityLevel(double qlevel)
//
- (void)setQualityLevel:(double)qlevel NS_SWIFT_NAME(setQualityLevel(qlevel:));



@end

NS_ASSUME_NONNULL_END



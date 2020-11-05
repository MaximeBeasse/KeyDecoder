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
#import "Algorithm.h"

@class Mat;



NS_ASSUME_NONNULL_BEGIN

// C++: class Tonemap
/**
 * Base class for tonemapping algorithms - tools that are used to map HDR image to 8-bit range.
 *
 * Member of `Photo`
 */
CV_EXPORTS @interface Tonemap : Algorithm


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::Tonemap> nativePtrTonemap;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::Tonemap>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::Tonemap>)nativePtr;
#endif


#pragma mark - Methods


//
//  float cv::Tonemap::getGamma()
//
- (float)getGamma NS_SWIFT_NAME(getGamma());


//
//  void cv::Tonemap::process(Mat src, Mat& dst)
//
/**
 * Tonemaps image
 *
 * @param src source image - CV_32FC3 Mat (float 32 bits 3 channels)
 * @param dst destination image - CV_32FC3 Mat with values in [0, 1] range
 */
- (void)process:(Mat*)src dst:(Mat*)dst NS_SWIFT_NAME(process(src:dst:));


//
//  void cv::Tonemap::setGamma(float gamma)
//
- (void)setGamma:(float)gamma NS_SWIFT_NAME(setGamma(gamma:));



@end

NS_ASSUME_NONNULL_END



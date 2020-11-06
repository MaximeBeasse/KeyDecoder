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

// C++: class AlignExposures
/**
 * The base class for algorithms that align images of the same scene with different exposures
 *
 * Member of `Photo`
 */
CV_EXPORTS @interface AlignExposures : Algorithm


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::AlignExposures> nativePtrAlignExposures;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::AlignExposures>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::AlignExposures>)nativePtr;
#endif


#pragma mark - Methods


//
//  void cv::AlignExposures::process(vector_Mat src, vector_Mat dst, Mat times, Mat response)
//
/**
 * Aligns images
 *
 * @param src vector of input images
 * @param dst vector of aligned images
 * @param times vector of exposure time values for each image
 * @param response 256x1 matrix with inverse camera response function for each pixel value, it should
 *     have the same number of channels as images.
 */
- (void)process:(NSArray<Mat*>*)src dst:(NSArray<Mat*>*)dst times:(Mat*)times response:(Mat*)response NS_SWIFT_NAME(process(src:dst:times:response:));



@end

NS_ASSUME_NONNULL_END



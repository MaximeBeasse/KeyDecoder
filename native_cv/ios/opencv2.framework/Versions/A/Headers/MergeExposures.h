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

// C++: class MergeExposures
/**
 * The base class algorithms that can merge exposure sequence to a single image.
 *
 * Member of `Photo`
 */
CV_EXPORTS @interface MergeExposures : Algorithm


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::MergeExposures> nativePtrMergeExposures;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::MergeExposures>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::MergeExposures>)nativePtr;
#endif


#pragma mark - Methods


//
//  void cv::MergeExposures::process(vector_Mat src, Mat& dst, Mat times, Mat response)
//
/**
 * Merges images.
 *
 * @param src vector of input images
 * @param dst result image
 * @param times vector of exposure time values for each image
 * @param response 256x1 matrix with inverse camera response function for each pixel value, it should
 *     have the same number of channels as images.
 */
- (void)process:(NSArray<Mat*>*)src dst:(Mat*)dst times:(Mat*)times response:(Mat*)response NS_SWIFT_NAME(process(src:dst:times:response:));



@end

NS_ASSUME_NONNULL_END



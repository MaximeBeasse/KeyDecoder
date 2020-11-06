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
#import "MergeExposures.h"

@class Mat;



NS_ASSUME_NONNULL_BEGIN

// C++: class MergeMertens
/**
 * Pixels are weighted using contrast, saturation and well-exposedness measures, than images are
 * combined using laplacian pyramids.
 *
 * The resulting image weight is constructed as weighted average of contrast, saturation and
 * well-exposedness measures.
 *
 * The resulting image doesn't require tonemapping and can be converted to 8-bit image by multiplying
 * by 255, but it's recommended to apply gamma correction and/or linear tonemapping.
 *
 * For more information see CITE: MK07 .
 *
 * Member of `Photo`
 */
CV_EXPORTS @interface MergeMertens : MergeExposures


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::MergeMertens> nativePtrMergeMertens;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::MergeMertens>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::MergeMertens>)nativePtr;
#endif


#pragma mark - Methods


//
//  float cv::MergeMertens::getContrastWeight()
//
- (float)getContrastWeight NS_SWIFT_NAME(getContrastWeight());


//
//  float cv::MergeMertens::getExposureWeight()
//
- (float)getExposureWeight NS_SWIFT_NAME(getExposureWeight());


//
//  float cv::MergeMertens::getSaturationWeight()
//
- (float)getSaturationWeight NS_SWIFT_NAME(getSaturationWeight());


//
//  void cv::MergeMertens::process(vector_Mat src, Mat& dst, Mat times, Mat response)
//
- (void)process:(NSArray<Mat*>*)src dst:(Mat*)dst times:(Mat*)times response:(Mat*)response NS_SWIFT_NAME(process(src:dst:times:response:));


//
//  void cv::MergeMertens::process(vector_Mat src, Mat& dst)
//
/**
 * Short version of process, that doesn't take extra arguments.
 *
 * @param src vector of input images
 * @param dst result image
 */
- (void)process:(NSArray<Mat*>*)src dst:(Mat*)dst NS_SWIFT_NAME(process(src:dst:));


//
//  void cv::MergeMertens::setContrastWeight(float contrast_weiht)
//
- (void)setContrastWeight:(float)contrast_weiht NS_SWIFT_NAME(setContrastWeight(contrast_weiht:));


//
//  void cv::MergeMertens::setExposureWeight(float exposure_weight)
//
- (void)setExposureWeight:(float)exposure_weight NS_SWIFT_NAME(setExposureWeight(exposure_weight:));


//
//  void cv::MergeMertens::setSaturationWeight(float saturation_weight)
//
- (void)setSaturationWeight:(float)saturation_weight NS_SWIFT_NAME(setSaturationWeight(saturation_weight:));



@end

NS_ASSUME_NONNULL_END



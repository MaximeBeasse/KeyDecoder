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

// C++: class CalibrateCRF
/**
 * The base class for camera response calibration algorithms.
 *
 * Member of `Photo`
 */
CV_EXPORTS @interface CalibrateCRF : Algorithm


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::CalibrateCRF> nativePtrCalibrateCRF;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::CalibrateCRF>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::CalibrateCRF>)nativePtr;
#endif


#pragma mark - Methods


//
//  void cv::CalibrateCRF::process(vector_Mat src, Mat& dst, Mat times)
//
/**
 * Recovers inverse camera response.
 *
 * @param src vector of input images
 * @param dst 256x1 matrix with inverse camera response function
 * @param times vector of exposure time values for each image
 */
- (void)process:(NSArray<Mat*>*)src dst:(Mat*)dst times:(Mat*)times NS_SWIFT_NAME(process(src:dst:times:));



@end

NS_ASSUME_NONNULL_END



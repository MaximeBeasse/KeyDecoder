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
@class Size2i;



NS_ASSUME_NONNULL_BEGIN

// C++: class CLAHE
/**
 * Base class for Contrast Limited Adaptive Histogram Equalization.
 *
 * Member of `Imgproc`
 */
CV_EXPORTS @interface CLAHE : Algorithm


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::CLAHE> nativePtrCLAHE;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::CLAHE>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::CLAHE>)nativePtr;
#endif


#pragma mark - Methods


//
//  Size cv::CLAHE::getTilesGridSize()
//
- (Size2i*)getTilesGridSize NS_SWIFT_NAME(getTilesGridSize());


//
//  double cv::CLAHE::getClipLimit()
//
- (double)getClipLimit NS_SWIFT_NAME(getClipLimit());


//
//  void cv::CLAHE::apply(Mat src, Mat& dst)
//
/**
 * Equalizes the histogram of a grayscale image using Contrast Limited Adaptive Histogram Equalization.
 *
 * @param src Source image of type CV_8UC1 or CV_16UC1.
 * @param dst Destination image.
 */
- (void)apply:(Mat*)src dst:(Mat*)dst NS_SWIFT_NAME(apply(src:dst:));


//
//  void cv::CLAHE::collectGarbage()
//
- (void)collectGarbage NS_SWIFT_NAME(collectGarbage());


//
//  void cv::CLAHE::setClipLimit(double clipLimit)
//
/**
 * Sets threshold for contrast limiting.
 *
 * @param clipLimit threshold value.
 */
- (void)setClipLimit:(double)clipLimit NS_SWIFT_NAME(setClipLimit(clipLimit:));


//
//  void cv::CLAHE::setTilesGridSize(Size tileGridSize)
//
/**
 * Sets size of grid for histogram equalization. Input image will be divided into
 *     equally sized rectangular tiles.
 *
 * @param tileGridSize defines the number of tiles in row and column.
 */
- (void)setTilesGridSize:(Size2i*)tileGridSize NS_SWIFT_NAME(setTilesGridSize(tileGridSize:));



@end

NS_ASSUME_NONNULL_END



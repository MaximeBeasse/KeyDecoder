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
#import "AlignExposures.h"

@class Mat;
@class Point2i;



NS_ASSUME_NONNULL_BEGIN

// C++: class AlignMTB
/**
 * This algorithm converts images to median threshold bitmaps (1 for pixels brighter than median
 * luminance and 0 otherwise) and than aligns the resulting bitmaps using bit operations.
 *
 * It is invariant to exposure, so exposure values and camera response are not necessary.
 *
 * In this implementation new image regions are filled with zeros.
 *
 * For more information see CITE: GW03 .
 *
 * Member of `Photo`
 */
CV_EXPORTS @interface AlignMTB : AlignExposures


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::AlignMTB> nativePtrAlignMTB;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::AlignMTB>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::AlignMTB>)nativePtr;
#endif


#pragma mark - Methods


//
//  Point cv::AlignMTB::calculateShift(Mat img0, Mat img1)
//
/**
 * Calculates shift between two images, i. e. how to shift the second image to correspond it with the
 *     first.
 *
 * @param img0 first image
 * @param img1 second image
 */
- (Point2i*)calculateShift:(Mat*)img0 img1:(Mat*)img1 NS_SWIFT_NAME(calculateShift(img0:img1:));


//
//  bool cv::AlignMTB::getCut()
//
- (BOOL)getCut NS_SWIFT_NAME(getCut());


//
//  int cv::AlignMTB::getExcludeRange()
//
- (int)getExcludeRange NS_SWIFT_NAME(getExcludeRange());


//
//  int cv::AlignMTB::getMaxBits()
//
- (int)getMaxBits NS_SWIFT_NAME(getMaxBits());


//
//  void cv::AlignMTB::computeBitmaps(Mat img, Mat& tb, Mat& eb)
//
/**
 * Computes median threshold and exclude bitmaps of given image.
 *
 * @param img input image
 * @param tb median threshold bitmap
 * @param eb exclude bitmap
 */
- (void)computeBitmaps:(Mat*)img tb:(Mat*)tb eb:(Mat*)eb NS_SWIFT_NAME(computeBitmaps(img:tb:eb:));


//
//  void cv::AlignMTB::process(vector_Mat src, vector_Mat dst, Mat times, Mat response)
//
- (void)process:(NSArray<Mat*>*)src dst:(NSArray<Mat*>*)dst times:(Mat*)times response:(Mat*)response NS_SWIFT_NAME(process(src:dst:times:response:));


//
//  void cv::AlignMTB::process(vector_Mat src, vector_Mat dst)
//
/**
 * Short version of process, that doesn't take extra arguments.
 *
 * @param src vector of input images
 * @param dst vector of aligned images
 */
- (void)process:(NSArray<Mat*>*)src dst:(NSArray<Mat*>*)dst NS_SWIFT_NAME(process(src:dst:));


//
//  void cv::AlignMTB::setCut(bool value)
//
- (void)setCut:(BOOL)value NS_SWIFT_NAME(setCut(value:));


//
//  void cv::AlignMTB::setExcludeRange(int exclude_range)
//
- (void)setExcludeRange:(int)exclude_range NS_SWIFT_NAME(setExcludeRange(exclude_range:));


//
//  void cv::AlignMTB::setMaxBits(int max_bits)
//
- (void)setMaxBits:(int)max_bits NS_SWIFT_NAME(setMaxBits(max_bits:));


//
//  void cv::AlignMTB::shiftMat(Mat src, Mat& dst, Point shift)
//
/**
 * Helper function, that shift Mat filling new regions with zeros.
 *
 * @param src input image
 * @param dst result image
 * @param shift shift value
 */
- (void)shiftMat:(Mat*)src dst:(Mat*)dst shift:(Point2i*)shift NS_SWIFT_NAME(shiftMat(src:dst:shift:));



@end

NS_ASSUME_NONNULL_END



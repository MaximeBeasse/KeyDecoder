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

// C++: class StereoMatcher
/**
 * The base class for stereo correspondence algorithms.
 *
 * Member of `Calib3d`
 */
CV_EXPORTS @interface StereoMatcher : Algorithm


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::StereoMatcher> nativePtrStereoMatcher;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::StereoMatcher>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::StereoMatcher>)nativePtr;
#endif


#pragma mark - Class Constants


@property (class, readonly) int DISP_SHIFT NS_SWIFT_NAME(DISP_SHIFT);
@property (class, readonly) int DISP_SCALE NS_SWIFT_NAME(DISP_SCALE);

#pragma mark - Methods


//
//  int cv::StereoMatcher::getBlockSize()
//
- (int)getBlockSize NS_SWIFT_NAME(getBlockSize());


//
//  int cv::StereoMatcher::getDisp12MaxDiff()
//
- (int)getDisp12MaxDiff NS_SWIFT_NAME(getDisp12MaxDiff());


//
//  int cv::StereoMatcher::getMinDisparity()
//
- (int)getMinDisparity NS_SWIFT_NAME(getMinDisparity());


//
//  int cv::StereoMatcher::getNumDisparities()
//
- (int)getNumDisparities NS_SWIFT_NAME(getNumDisparities());


//
//  int cv::StereoMatcher::getSpeckleRange()
//
- (int)getSpeckleRange NS_SWIFT_NAME(getSpeckleRange());


//
//  int cv::StereoMatcher::getSpeckleWindowSize()
//
- (int)getSpeckleWindowSize NS_SWIFT_NAME(getSpeckleWindowSize());


//
//  void cv::StereoMatcher::compute(Mat left, Mat right, Mat& disparity)
//
/**
 * Computes disparity map for the specified stereo pair
 *
 * @param left Left 8-bit single-channel image.
 * @param right Right image of the same size and the same type as the left one.
 * @param disparity Output disparity map. It has the same size as the input images. Some algorithms,
 *     like StereoBM or StereoSGBM compute 16-bit fixed-point disparity map (where each disparity value
 *     has 4 fractional bits), whereas other algorithms output 32-bit floating-point disparity map.
 */
- (void)compute:(Mat*)left right:(Mat*)right disparity:(Mat*)disparity NS_SWIFT_NAME(compute(left:right:disparity:));


//
//  void cv::StereoMatcher::setBlockSize(int blockSize)
//
- (void)setBlockSize:(int)blockSize NS_SWIFT_NAME(setBlockSize(blockSize:));


//
//  void cv::StereoMatcher::setDisp12MaxDiff(int disp12MaxDiff)
//
- (void)setDisp12MaxDiff:(int)disp12MaxDiff NS_SWIFT_NAME(setDisp12MaxDiff(disp12MaxDiff:));


//
//  void cv::StereoMatcher::setMinDisparity(int minDisparity)
//
- (void)setMinDisparity:(int)minDisparity NS_SWIFT_NAME(setMinDisparity(minDisparity:));


//
//  void cv::StereoMatcher::setNumDisparities(int numDisparities)
//
- (void)setNumDisparities:(int)numDisparities NS_SWIFT_NAME(setNumDisparities(numDisparities:));


//
//  void cv::StereoMatcher::setSpeckleRange(int speckleRange)
//
- (void)setSpeckleRange:(int)speckleRange NS_SWIFT_NAME(setSpeckleRange(speckleRange:));


//
//  void cv::StereoMatcher::setSpeckleWindowSize(int speckleWindowSize)
//
- (void)setSpeckleWindowSize:(int)speckleWindowSize NS_SWIFT_NAME(setSpeckleWindowSize(speckleWindowSize:));



@end

NS_ASSUME_NONNULL_END



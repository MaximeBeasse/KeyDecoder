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
#import "StereoMatcher.h"

@class Rect2i;



NS_ASSUME_NONNULL_BEGIN

// C++: class StereoBM
/**
 * Class for computing stereo correspondence using the block matching algorithm, introduced and
 * contributed to OpenCV by K. Konolige.
 *
 * Member of `Calib3d`
 */
CV_EXPORTS @interface StereoBM : StereoMatcher


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::StereoBM> nativePtrStereoBM;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::StereoBM>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::StereoBM>)nativePtr;
#endif


#pragma mark - Class Constants


@property (class, readonly) int PREFILTER_NORMALIZED_RESPONSE NS_SWIFT_NAME(PREFILTER_NORMALIZED_RESPONSE);
@property (class, readonly) int PREFILTER_XSOBEL NS_SWIFT_NAME(PREFILTER_XSOBEL);

#pragma mark - Methods


//
// static Ptr_StereoBM cv::StereoBM::create(int numDisparities = 0, int blockSize = 21)
//
/**
 * Creates StereoBM object
 *
 * @param numDisparities the disparity search range. For each pixel algorithm will find the best
 *     disparity from 0 (default minimum disparity) to numDisparities. The search range can then be
 *     shifted by changing the minimum disparity.
 * @param blockSize the linear size of the blocks compared by the algorithm. The size should be odd
 *     (as the block is centered at the current pixel). Larger block size implies smoother, though less
 *     accurate disparity map. Smaller block size gives more detailed disparity map, but there is higher
 *     chance for algorithm to find a wrong correspondence.
 *
 *     The function create StereoBM object. You can then call StereoBM::compute() to compute disparity for
 *     a specific stereo pair.
 */
+ (StereoBM*)create:(int)numDisparities blockSize:(int)blockSize NS_SWIFT_NAME(create(numDisparities:blockSize:));

/**
 * Creates StereoBM object
 *
 * @param numDisparities the disparity search range. For each pixel algorithm will find the best
 *     disparity from 0 (default minimum disparity) to numDisparities. The search range can then be
 *     shifted by changing the minimum disparity.
 *     (as the block is centered at the current pixel). Larger block size implies smoother, though less
 *     accurate disparity map. Smaller block size gives more detailed disparity map, but there is higher
 *     chance for algorithm to find a wrong correspondence.
 *
 *     The function create StereoBM object. You can then call StereoBM::compute() to compute disparity for
 *     a specific stereo pair.
 */
+ (StereoBM*)create:(int)numDisparities NS_SWIFT_NAME(create(numDisparities:));

/**
 * Creates StereoBM object
 *
 *     disparity from 0 (default minimum disparity) to numDisparities. The search range can then be
 *     shifted by changing the minimum disparity.
 *     (as the block is centered at the current pixel). Larger block size implies smoother, though less
 *     accurate disparity map. Smaller block size gives more detailed disparity map, but there is higher
 *     chance for algorithm to find a wrong correspondence.
 *
 *     The function create StereoBM object. You can then call StereoBM::compute() to compute disparity for
 *     a specific stereo pair.
 */
+ (StereoBM*)create NS_SWIFT_NAME(create());


//
//  Rect cv::StereoBM::getROI1()
//
- (Rect2i*)getROI1 NS_SWIFT_NAME(getROI1());


//
//  Rect cv::StereoBM::getROI2()
//
- (Rect2i*)getROI2 NS_SWIFT_NAME(getROI2());


//
//  int cv::StereoBM::getPreFilterCap()
//
- (int)getPreFilterCap NS_SWIFT_NAME(getPreFilterCap());


//
//  int cv::StereoBM::getPreFilterSize()
//
- (int)getPreFilterSize NS_SWIFT_NAME(getPreFilterSize());


//
//  int cv::StereoBM::getPreFilterType()
//
- (int)getPreFilterType NS_SWIFT_NAME(getPreFilterType());


//
//  int cv::StereoBM::getSmallerBlockSize()
//
- (int)getSmallerBlockSize NS_SWIFT_NAME(getSmallerBlockSize());


//
//  int cv::StereoBM::getTextureThreshold()
//
- (int)getTextureThreshold NS_SWIFT_NAME(getTextureThreshold());


//
//  int cv::StereoBM::getUniquenessRatio()
//
- (int)getUniquenessRatio NS_SWIFT_NAME(getUniquenessRatio());


//
//  void cv::StereoBM::setPreFilterCap(int preFilterCap)
//
- (void)setPreFilterCap:(int)preFilterCap NS_SWIFT_NAME(setPreFilterCap(preFilterCap:));


//
//  void cv::StereoBM::setPreFilterSize(int preFilterSize)
//
- (void)setPreFilterSize:(int)preFilterSize NS_SWIFT_NAME(setPreFilterSize(preFilterSize:));


//
//  void cv::StereoBM::setPreFilterType(int preFilterType)
//
- (void)setPreFilterType:(int)preFilterType NS_SWIFT_NAME(setPreFilterType(preFilterType:));


//
//  void cv::StereoBM::setROI1(Rect roi1)
//
- (void)setROI1:(Rect2i*)roi1 NS_SWIFT_NAME(setROI1(roi1:));


//
//  void cv::StereoBM::setROI2(Rect roi2)
//
- (void)setROI2:(Rect2i*)roi2 NS_SWIFT_NAME(setROI2(roi2:));


//
//  void cv::StereoBM::setSmallerBlockSize(int blockSize)
//
- (void)setSmallerBlockSize:(int)blockSize NS_SWIFT_NAME(setSmallerBlockSize(blockSize:));


//
//  void cv::StereoBM::setTextureThreshold(int textureThreshold)
//
- (void)setTextureThreshold:(int)textureThreshold NS_SWIFT_NAME(setTextureThreshold(textureThreshold:));


//
//  void cv::StereoBM::setUniquenessRatio(int uniquenessRatio)
//
- (void)setUniquenessRatio:(int)uniquenessRatio NS_SWIFT_NAME(setUniquenessRatio(uniquenessRatio:));



@end

NS_ASSUME_NONNULL_END



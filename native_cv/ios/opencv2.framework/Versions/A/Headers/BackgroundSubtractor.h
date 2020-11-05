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

// C++: class BackgroundSubtractor
/**
 * Base class for background/foreground segmentation. :
 *
 * The class is only used to define the common interface for the whole family of background/foreground
 * segmentation algorithms.
 *
 * Member of `Video`
 */
CV_EXPORTS @interface BackgroundSubtractor : Algorithm


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::BackgroundSubtractor> nativePtrBackgroundSubtractor;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::BackgroundSubtractor>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::BackgroundSubtractor>)nativePtr;
#endif


#pragma mark - Methods


//
//  void cv::BackgroundSubtractor::apply(Mat image, Mat& fgmask, double learningRate = -1)
//
/**
 * Computes a foreground mask.
 *
 * @param image Next video frame.
 * @param fgmask The output foreground mask as an 8-bit binary image.
 * @param learningRate The value between 0 and 1 that indicates how fast the background model is
 *     learnt. Negative parameter value makes the algorithm to use some automatically chosen learning
 *     rate. 0 means that the background model is not updated at all, 1 means that the background model
 *     is completely reinitialized from the last frame.
 */
- (void)apply:(Mat*)image fgmask:(Mat*)fgmask learningRate:(double)learningRate NS_SWIFT_NAME(apply(image:fgmask:learningRate:));

/**
 * Computes a foreground mask.
 *
 * @param image Next video frame.
 * @param fgmask The output foreground mask as an 8-bit binary image.
 *     learnt. Negative parameter value makes the algorithm to use some automatically chosen learning
 *     rate. 0 means that the background model is not updated at all, 1 means that the background model
 *     is completely reinitialized from the last frame.
 */
- (void)apply:(Mat*)image fgmask:(Mat*)fgmask NS_SWIFT_NAME(apply(image:fgmask:));


//
//  void cv::BackgroundSubtractor::getBackgroundImage(Mat& backgroundImage)
//
/**
 * Computes a background image.
 *
 * @param backgroundImage The output background image.
 *
 *     @note Sometimes the background image can be very blurry, as it contain the average background
 *     statistics.
 */
- (void)getBackgroundImage:(Mat*)backgroundImage NS_SWIFT_NAME(getBackgroundImage(backgroundImage:));



@end

NS_ASSUME_NONNULL_END



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

// C++: class DenseOpticalFlow
/**
 * Base class for dense optical flow algorithms
 *
 * Member of `Video`
 */
CV_EXPORTS @interface DenseOpticalFlow : Algorithm


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::DenseOpticalFlow> nativePtrDenseOpticalFlow;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::DenseOpticalFlow>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::DenseOpticalFlow>)nativePtr;
#endif


#pragma mark - Methods


//
//  void cv::DenseOpticalFlow::calc(Mat I0, Mat I1, Mat& flow)
//
/**
 * Calculates an optical flow.
 *
 * @param I0 first 8-bit single-channel input image.
 * @param I1 second input image of the same size and the same type as prev.
 * @param flow computed flow image that has the same size as prev and type CV_32FC2.
 */
- (void)calc:(Mat*)I0 I1:(Mat*)I1 flow:(Mat*)flow NS_SWIFT_NAME(calc(I0:I1:flow:));


//
//  void cv::DenseOpticalFlow::collectGarbage()
//
/**
 * Releases all inner buffers.
 */
- (void)collectGarbage NS_SWIFT_NAME(collectGarbage());



@end

NS_ASSUME_NONNULL_END



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

// C++: class SparseOpticalFlow
/**
 * Base interface for sparse optical flow algorithms.
 *
 * Member of `Video`
 */
CV_EXPORTS @interface SparseOpticalFlow : Algorithm


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::SparseOpticalFlow> nativePtrSparseOpticalFlow;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::SparseOpticalFlow>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::SparseOpticalFlow>)nativePtr;
#endif


#pragma mark - Methods


//
//  void cv::SparseOpticalFlow::calc(Mat prevImg, Mat nextImg, Mat prevPts, Mat& nextPts, Mat& status, Mat& err = cv::Mat())
//
/**
 * Calculates a sparse optical flow.
 *
 * @param prevImg First input image.
 * @param nextImg Second input image of the same size and the same type as prevImg.
 * @param prevPts Vector of 2D points for which the flow needs to be found.
 * @param nextPts Output vector of 2D points containing the calculated new positions of input features in the second image.
 * @param status Output status vector. Each element of the vector is set to 1 if the
 *                   flow for the corresponding features has been found. Otherwise, it is set to 0.
 * @param err Optional output vector that contains error response for each point (inverse confidence).
 */
- (void)calc:(Mat*)prevImg nextImg:(Mat*)nextImg prevPts:(Mat*)prevPts nextPts:(Mat*)nextPts status:(Mat*)status err:(Mat*)err NS_SWIFT_NAME(calc(prevImg:nextImg:prevPts:nextPts:status:err:));

/**
 * Calculates a sparse optical flow.
 *
 * @param prevImg First input image.
 * @param nextImg Second input image of the same size and the same type as prevImg.
 * @param prevPts Vector of 2D points for which the flow needs to be found.
 * @param nextPts Output vector of 2D points containing the calculated new positions of input features in the second image.
 * @param status Output status vector. Each element of the vector is set to 1 if the
 *                   flow for the corresponding features has been found. Otherwise, it is set to 0.
 */
- (void)calc:(Mat*)prevImg nextImg:(Mat*)nextImg prevPts:(Mat*)prevPts nextPts:(Mat*)nextPts status:(Mat*)status NS_SWIFT_NAME(calc(prevImg:nextImg:prevPts:nextPts:status:));



@end

NS_ASSUME_NONNULL_END



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

// C++: class MergeRobertson
/**
 * The resulting HDR image is calculated as weighted average of the exposures considering exposure
 * values and camera response.
 *
 * For more information see CITE: RB99 .
 *
 * Member of `Photo`
 */
CV_EXPORTS @interface MergeRobertson : MergeExposures


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::MergeRobertson> nativePtrMergeRobertson;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::MergeRobertson>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::MergeRobertson>)nativePtr;
#endif


#pragma mark - Methods


//
//  void cv::MergeRobertson::process(vector_Mat src, Mat& dst, Mat times, Mat response)
//
- (void)process:(NSArray<Mat*>*)src dst:(Mat*)dst times:(Mat*)times response:(Mat*)response NS_SWIFT_NAME(process(src:dst:times:response:));


//
//  void cv::MergeRobertson::process(vector_Mat src, Mat& dst, Mat times)
//
- (void)process:(NSArray<Mat*>*)src dst:(Mat*)dst times:(Mat*)times NS_SWIFT_NAME(process(src:dst:times:));



@end

NS_ASSUME_NONNULL_END



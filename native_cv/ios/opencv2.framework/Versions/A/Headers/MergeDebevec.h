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

// C++: class MergeDebevec
/**
 * The resulting HDR image is calculated as weighted average of the exposures considering exposure
 * values and camera response.
 *
 * For more information see CITE: DM97 .
 *
 * Member of `Photo`
 */
CV_EXPORTS @interface MergeDebevec : MergeExposures


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::MergeDebevec> nativePtrMergeDebevec;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::MergeDebevec>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::MergeDebevec>)nativePtr;
#endif


#pragma mark - Methods


//
//  void cv::MergeDebevec::process(vector_Mat src, Mat& dst, Mat times, Mat response)
//
- (void)process:(NSArray<Mat*>*)src dst:(Mat*)dst times:(Mat*)times response:(Mat*)response NS_SWIFT_NAME(process(src:dst:times:response:));


//
//  void cv::MergeDebevec::process(vector_Mat src, Mat& dst, Mat times)
//
- (void)process:(NSArray<Mat*>*)src dst:(Mat*)dst times:(Mat*)times NS_SWIFT_NAME(process(src:dst:times:));



@end

NS_ASSUME_NONNULL_END



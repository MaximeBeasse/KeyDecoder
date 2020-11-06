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
#import "DescriptorMatcher.h"





NS_ASSUME_NONNULL_BEGIN

// C++: class FlannBasedMatcher
/**
 * Flann-based descriptor matcher.
 *
 * This matcher trains cv::flann::Index on a train descriptor collection and calls its nearest search
 * methods to find the best matches. So, this matcher may be faster when matching a large train
 * collection than the brute force matcher. FlannBasedMatcher does not support masking permissible
 * matches of descriptor sets because flann::Index does not support this. :
 *
 * Member of `Features2d`
 */
CV_EXPORTS @interface FlannBasedMatcher : DescriptorMatcher


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::FlannBasedMatcher> nativePtrFlannBasedMatcher;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::FlannBasedMatcher>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::FlannBasedMatcher>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::FlannBasedMatcher::FlannBasedMatcher( _hidden_  indexParams = cv::makePtr<cv::flann::KDTreeIndexParams>(),  _hidden_  searchParams = cv::makePtr<cv::flann::SearchParams>())
//
- (instancetype)initWithIndexParams;


//
// static Ptr_FlannBasedMatcher cv::FlannBasedMatcher::create()
//
+ (FlannBasedMatcher*)create NS_SWIFT_NAME(create());



@end

NS_ASSUME_NONNULL_END



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
#import "BOWTrainer.h"

@class Mat;
@class TermCriteria;



NS_ASSUME_NONNULL_BEGIN

// C++: class BOWKMeansTrainer
/**
 * kmeans -based class to train visual vocabulary using the *bag of visual words* approach. :
 *
 * Member of `Features2d`
 */
CV_EXPORTS @interface BOWKMeansTrainer : BOWTrainer


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::BOWKMeansTrainer> nativePtrBOWKMeansTrainer;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::BOWKMeansTrainer>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::BOWKMeansTrainer>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::BOWKMeansTrainer::BOWKMeansTrainer(int clusterCount, TermCriteria termcrit = TermCriteria(), int attempts = 3, int flags = KMEANS_PP_CENTERS)
//
/**
 * The constructor.
 *
 *     @see `cv::kmeans`
 */
- (instancetype)initWithClusterCount:(int)clusterCount termcrit:(TermCriteria*)termcrit attempts:(int)attempts flags:(int)flags;

/**
 * The constructor.
 *
 *     @see `cv::kmeans`
 */
- (instancetype)initWithClusterCount:(int)clusterCount termcrit:(TermCriteria*)termcrit attempts:(int)attempts;

/**
 * The constructor.
 *
 *     @see `cv::kmeans`
 */
- (instancetype)initWithClusterCount:(int)clusterCount termcrit:(TermCriteria*)termcrit;

/**
 * The constructor.
 *
 *     @see `cv::kmeans`
 */
- (instancetype)initWithClusterCount:(int)clusterCount;


//
//  Mat cv::BOWKMeansTrainer::cluster(Mat descriptors)
//
- (Mat*)cluster:(Mat*)descriptors NS_SWIFT_NAME(cluster(descriptors:));


//
//  Mat cv::BOWKMeansTrainer::cluster()
//
- (Mat*)cluster NS_SWIFT_NAME(cluster());



@end

NS_ASSUME_NONNULL_END



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


@class Mat;



NS_ASSUME_NONNULL_BEGIN

// C++: class BOWTrainer
/**
 * Abstract base class for training the *bag of visual words* vocabulary from a set of descriptors.
 *
 * For details, see, for example, *Visual Categorization with Bags of Keypoints* by Gabriella Csurka,
 * Christopher R. Dance, Lixin Fan, Jutta Willamowski, Cedric Bray, 2004. :
 *
 * Member of `Features2d`
 */
CV_EXPORTS @interface BOWTrainer : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::BOWTrainer> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::BOWTrainer>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::BOWTrainer>)nativePtr;
#endif


#pragma mark - Methods


//
//  Mat cv::BOWTrainer::cluster(Mat descriptors)
//
/**
 * Clusters train descriptors.
 *
 * @param descriptors Descriptors to cluster. Each row of the descriptors matrix is a descriptor.
 *     Descriptors are not added to the inner train descriptor set.
 *
 *     The vocabulary consists of cluster centers. So, this method returns the vocabulary. In the first
 *     variant of the method, train descriptors stored in the object are clustered. In the second variant,
 *     input descriptors are clustered.
 */
- (Mat*)cluster:(Mat*)descriptors NS_SWIFT_NAME(cluster(descriptors:));


//
//  Mat cv::BOWTrainer::cluster()
//
- (Mat*)cluster NS_SWIFT_NAME(cluster());


//
//  int cv::BOWTrainer::descriptorsCount()
//
/**
 * Returns the count of all descriptors stored in the training set.
 */
- (int)descriptorsCount NS_SWIFT_NAME(descriptorsCount());


//
//  vector_Mat cv::BOWTrainer::getDescriptors()
//
/**
 * Returns a training set of descriptors.
 */
- (NSArray<Mat*>*)getDescriptors NS_SWIFT_NAME(getDescriptors());


//
//  void cv::BOWTrainer::add(Mat descriptors)
//
/**
 * Adds descriptors to a training set.
 *
 * @param descriptors Descriptors to add to a training set. Each row of the descriptors matrix is a
 *     descriptor.
 *
 *     The training set is clustered using clustermethod to construct the vocabulary.
 */
- (void)add:(Mat*)descriptors NS_SWIFT_NAME(add(descriptors:));


//
//  void cv::BOWTrainer::clear()
//
- (void)clear NS_SWIFT_NAME(clear());



@end

NS_ASSUME_NONNULL_END



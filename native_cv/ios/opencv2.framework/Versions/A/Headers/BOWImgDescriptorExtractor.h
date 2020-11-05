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


@class KeyPoint;
@class Mat;



NS_ASSUME_NONNULL_BEGIN

// C++: class BOWImgDescriptorExtractor
/**
 * Class to compute an image descriptor using the *bag of visual words*.
 *
 * Such a computation consists of the following steps:
 *
 * 1.  Compute descriptors for a given image and its keypoints set.
 * 2.  Find the nearest visual words from the vocabulary for each keypoint descriptor.
 * 3.  Compute the bag-of-words image descriptor as is a normalized histogram of vocabulary words
 * encountered in the image. The i-th bin of the histogram is a frequency of i-th word of the
 * vocabulary in the given image.
 *
 * Member of `Features2d`
 */
CV_EXPORTS @interface BOWImgDescriptorExtractor : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::BOWImgDescriptorExtractor> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::BOWImgDescriptorExtractor>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::BOWImgDescriptorExtractor>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::BOWImgDescriptorExtractor::BOWImgDescriptorExtractor(Ptr_DescriptorExtractor dextractor, Ptr_DescriptorMatcher dmatcher)
//
// Unknown type 'Ptr_DescriptorExtractor' (I), skipping the function


//
//  Mat cv::BOWImgDescriptorExtractor::getVocabulary()
//
/**
 * Returns the set vocabulary.
 */
- (Mat*)getVocabulary NS_SWIFT_NAME(getVocabulary());


//
//  int cv::BOWImgDescriptorExtractor::descriptorSize()
//
/**
 * Returns an image descriptor size if the vocabulary is set. Otherwise, it returns 0.
 */
- (int)descriptorSize NS_SWIFT_NAME(descriptorSize());


//
//  int cv::BOWImgDescriptorExtractor::descriptorType()
//
/**
 * Returns an image descriptor type.
 */
- (int)descriptorType NS_SWIFT_NAME(descriptorType());


//
//  void cv::BOWImgDescriptorExtractor::compute2(Mat image, vector_KeyPoint keypoints, Mat& imgDescriptor)
//
/**
 *
 * @param imgDescriptor Computed output image descriptor.
 *     pointIdxsOfClusters[i] are keypoint indices that belong to the i -th cluster (word of vocabulary)
 *     returned if it is non-zero.
 */
- (void)compute:(Mat*)image keypoints:(NSArray<KeyPoint*>*)keypoints imgDescriptor:(Mat*)imgDescriptor NS_SWIFT_NAME(compute2(image:keypoints:imgDescriptor:));


//
//  void cv::BOWImgDescriptorExtractor::setVocabulary(Mat vocabulary)
//
/**
 * Sets a visual vocabulary.
 *
 * @param vocabulary Vocabulary (can be trained using the inheritor of BOWTrainer ). Each row of the
 *     vocabulary is a visual word (cluster center).
 */
- (void)setVocabulary:(Mat*)vocabulary NS_SWIFT_NAME(setVocabulary(vocabulary:));



@end

NS_ASSUME_NONNULL_END



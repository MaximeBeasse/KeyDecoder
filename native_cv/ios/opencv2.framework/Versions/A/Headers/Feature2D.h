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

@class KeyPoint;
@class Mat;



NS_ASSUME_NONNULL_BEGIN

// C++: class Feature2D
/**
 * Abstract base class for 2D image feature detectors and descriptor extractors
 *
 * Member of `Features2d`
 */
CV_EXPORTS @interface Feature2D : Algorithm


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::Feature2D> nativePtrFeature2D;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::Feature2D>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::Feature2D>)nativePtr;
#endif


#pragma mark - Methods


//
//  String cv::Feature2D::getDefaultName()
//
- (NSString*)getDefaultName NS_SWIFT_NAME(getDefaultName());


//
//  bool cv::Feature2D::empty()
//
- (BOOL)empty NS_SWIFT_NAME(empty());


//
//  int cv::Feature2D::defaultNorm()
//
- (int)defaultNorm NS_SWIFT_NAME(defaultNorm());


//
//  int cv::Feature2D::descriptorSize()
//
- (int)descriptorSize NS_SWIFT_NAME(descriptorSize());


//
//  int cv::Feature2D::descriptorType()
//
- (int)descriptorType NS_SWIFT_NAME(descriptorType());


//
//  void cv::Feature2D::compute(Mat image, vector_KeyPoint& keypoints, Mat& descriptors)
//
/**
 * Computes the descriptors for a set of keypoints detected in an image (first variant) or image set
 *     (second variant).
 *
 * @param image Image.
 * @param keypoints Input collection of keypoints. Keypoints for which a descriptor cannot be
 *     computed are removed. Sometimes new keypoints can be added, for example: SIFT duplicates keypoint
 *     with several dominant orientations (for each orientation).
 * @param descriptors Computed descriptors. In the second variant of the method descriptors[i] are
 *     descriptors computed for a keypoints[i]. Row j is the keypoints (or keypoints[i]) is the
 *     descriptor for keypoint j-th keypoint.
 */
- (void)compute:(Mat*)image keypoints:(NSMutableArray<KeyPoint*>*)keypoints descriptors:(Mat*)descriptors NS_SWIFT_NAME(compute(image:keypoints:descriptors:));


//
//  void cv::Feature2D::compute(vector_Mat images, vector_vector_KeyPoint& keypoints, vector_Mat& descriptors)
//
/**
 *
 *
 * @param images Image set.
 * @param keypoints Input collection of keypoints. Keypoints for which a descriptor cannot be
 *     computed are removed. Sometimes new keypoints can be added, for example: SIFT duplicates keypoint
 *     with several dominant orientations (for each orientation).
 * @param descriptors Computed descriptors. In the second variant of the method descriptors[i] are
 *     descriptors computed for a keypoints[i]. Row j is the keypoints (or keypoints[i]) is the
 *     descriptor for keypoint j-th keypoint.
 */
- (void)compute2:(NSArray<Mat*>*)images keypoints:(NSMutableArray<NSMutableArray<KeyPoint*>*>*)keypoints descriptors:(NSMutableArray<Mat*>*)descriptors NS_SWIFT_NAME(compute(images:keypoints:descriptors:));


//
//  void cv::Feature2D::detect(Mat image, vector_KeyPoint& keypoints, Mat mask = Mat())
//
/**
 * Detects keypoints in an image (first variant) or image set (second variant).
 *
 * @param image Image.
 * @param keypoints The detected keypoints. In the second variant of the method keypoints[i] is a set
 *     of keypoints detected in images[i] .
 * @param mask Mask specifying where to look for keypoints (optional). It must be a 8-bit integer
 *     matrix with non-zero values in the region of interest.
 */
- (void)detect:(Mat*)image keypoints:(NSMutableArray<KeyPoint*>*)keypoints mask:(Mat*)mask NS_SWIFT_NAME(detect(image:keypoints:mask:));

/**
 * Detects keypoints in an image (first variant) or image set (second variant).
 *
 * @param image Image.
 * @param keypoints The detected keypoints. In the second variant of the method keypoints[i] is a set
 *     of keypoints detected in images[i] .
 *     matrix with non-zero values in the region of interest.
 */
- (void)detect:(Mat*)image keypoints:(NSMutableArray<KeyPoint*>*)keypoints NS_SWIFT_NAME(detect(image:keypoints:));


//
//  void cv::Feature2D::detect(vector_Mat images, vector_vector_KeyPoint& keypoints, vector_Mat masks = vector_Mat())
//
/**
 *
 * @param images Image set.
 * @param keypoints The detected keypoints. In the second variant of the method keypoints[i] is a set
 *     of keypoints detected in images[i] .
 * @param masks Masks for each input image specifying where to look for keypoints (optional).
 *     masks[i] is a mask for images[i].
 */
- (void)detect2:(NSArray<Mat*>*)images keypoints:(NSMutableArray<NSMutableArray<KeyPoint*>*>*)keypoints masks:(NSArray<Mat*>*)masks NS_SWIFT_NAME(detect(images:keypoints:masks:));

/**
 *
 * @param images Image set.
 * @param keypoints The detected keypoints. In the second variant of the method keypoints[i] is a set
 *     of keypoints detected in images[i] .
 *     masks[i] is a mask for images[i].
 */
- (void)detect2:(NSArray<Mat*>*)images keypoints:(NSMutableArray<NSMutableArray<KeyPoint*>*>*)keypoints NS_SWIFT_NAME(detect(images:keypoints:));


//
//  void cv::Feature2D::detectAndCompute(Mat image, Mat mask, vector_KeyPoint& keypoints, Mat& descriptors, bool useProvidedKeypoints = false)
//
/**
 * Detects keypoints and computes the descriptors
 */
- (void)detectAndCompute:(Mat*)image mask:(Mat*)mask keypoints:(NSMutableArray<KeyPoint*>*)keypoints descriptors:(Mat*)descriptors useProvidedKeypoints:(BOOL)useProvidedKeypoints NS_SWIFT_NAME(detectAndCompute(image:mask:keypoints:descriptors:useProvidedKeypoints:));

/**
 * Detects keypoints and computes the descriptors
 */
- (void)detectAndCompute:(Mat*)image mask:(Mat*)mask keypoints:(NSMutableArray<KeyPoint*>*)keypoints descriptors:(Mat*)descriptors NS_SWIFT_NAME(detectAndCompute(image:mask:keypoints:descriptors:));


//
//  void cv::Feature2D::read(FileNode arg1)
//
// Unknown type 'FileNode' (I), skipping the function


//
//  void cv::Feature2D::read(String fileName)
//
- (void)read:(NSString*)fileName NS_SWIFT_NAME(read(fileName:));


//
//  void cv::Feature2D::write(Ptr_FileStorage fs, String name = String())
//
// Unknown type 'Ptr_FileStorage' (I), skipping the function


//
//  void cv::Feature2D::write(String fileName)
//
- (void)write:(NSString*)fileName NS_SWIFT_NAME(write(fileName:));



@end

NS_ASSUME_NONNULL_END



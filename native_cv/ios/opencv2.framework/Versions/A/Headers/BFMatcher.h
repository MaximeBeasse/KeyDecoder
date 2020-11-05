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

#import "Core.h"



NS_ASSUME_NONNULL_BEGIN

// C++: class BFMatcher
/**
 * Brute-force descriptor matcher.
 *
 * For each descriptor in the first set, this matcher finds the closest descriptor in the second set
 * by trying each one. This descriptor matcher supports masking permissible matches of descriptor
 * sets.
 *
 * Member of `Features2d`
 */
CV_EXPORTS @interface BFMatcher : DescriptorMatcher


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::BFMatcher> nativePtrBFMatcher;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::BFMatcher>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::BFMatcher>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::BFMatcher::BFMatcher(NormTypes normType = NORM_L2, bool crossCheck = false)
//
/**
 * Brute-force matcher constructor (obsolete). Please use BFMatcher.create()
 *
 *
 */
- (instancetype)initWithNormType:(NormTypes)normType crossCheck:(BOOL)crossCheck;

/**
 * Brute-force matcher constructor (obsolete). Please use BFMatcher.create()
 *
 *
 */
- (instancetype)initWithNormType:(NormTypes)normType;

/**
 * Brute-force matcher constructor (obsolete). Please use BFMatcher.create()
 *
 *
 */
- (instancetype)init;


//
// static Ptr_BFMatcher cv::BFMatcher::create(NormTypes normType = NORM_L2, bool crossCheck = false)
//
/**
 * Brute-force matcher create method.
 * @param normType One of NORM_L1, NORM_L2, NORM_HAMMING, NORM_HAMMING2. L1 and L2 norms are
 *     preferable choices for SIFT and SURF descriptors, NORM_HAMMING should be used with ORB, BRISK and
 *     BRIEF, NORM_HAMMING2 should be used with ORB when WTA_K==3 or 4 (see ORB::ORB constructor
 *     description).
 * @param crossCheck If it is false, this is will be default BFMatcher behaviour when it finds the k
 *     nearest neighbors for each query descriptor. If crossCheck==true, then the knnMatch() method with
 *     k=1 will only return pairs (i,j) such that for i-th query descriptor the j-th descriptor in the
 *     matcher's collection is the nearest and vice versa, i.e. the BFMatcher will only return consistent
 *     pairs. Such technique usually produces best results with minimal number of outliers when there are
 *     enough matches. This is alternative to the ratio test, used by D. Lowe in SIFT paper.
 */
+ (BFMatcher*)createBFMatcher:(NormTypes)normType crossCheck:(BOOL)crossCheck NS_SWIFT_NAME(create(normType:crossCheck:));

/**
 * Brute-force matcher create method.
 * @param normType One of NORM_L1, NORM_L2, NORM_HAMMING, NORM_HAMMING2. L1 and L2 norms are
 *     preferable choices for SIFT and SURF descriptors, NORM_HAMMING should be used with ORB, BRISK and
 *     BRIEF, NORM_HAMMING2 should be used with ORB when WTA_K==3 or 4 (see ORB::ORB constructor
 *     description).
 *     nearest neighbors for each query descriptor. If crossCheck==true, then the knnMatch() method with
 *     k=1 will only return pairs (i,j) such that for i-th query descriptor the j-th descriptor in the
 *     matcher's collection is the nearest and vice versa, i.e. the BFMatcher will only return consistent
 *     pairs. Such technique usually produces best results with minimal number of outliers when there are
 *     enough matches. This is alternative to the ratio test, used by D. Lowe in SIFT paper.
 */
+ (BFMatcher*)createBFMatcher:(NormTypes)normType NS_SWIFT_NAME(create(normType:));

/**
 * Brute-force matcher create method.
 *     preferable choices for SIFT and SURF descriptors, NORM_HAMMING should be used with ORB, BRISK and
 *     BRIEF, NORM_HAMMING2 should be used with ORB when WTA_K==3 or 4 (see ORB::ORB constructor
 *     description).
 *     nearest neighbors for each query descriptor. If crossCheck==true, then the knnMatch() method with
 *     k=1 will only return pairs (i,j) such that for i-th query descriptor the j-th descriptor in the
 *     matcher's collection is the nearest and vice versa, i.e. the BFMatcher will only return consistent
 *     pairs. Such technique usually produces best results with minimal number of outliers when there are
 *     enough matches. This is alternative to the ratio test, used by D. Lowe in SIFT paper.
 */
+ (BFMatcher*)createBFMatcher NS_SWIFT_NAME(create());



@end

NS_ASSUME_NONNULL_END



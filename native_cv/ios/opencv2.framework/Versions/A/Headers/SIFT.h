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
#import "Feature2D.h"





NS_ASSUME_NONNULL_BEGIN

// C++: class SIFT
/**
 * Class for extracting keypoints and computing descriptors using the Scale Invariant Feature Transform
 * (SIFT) algorithm by D. Lowe CITE: Lowe04 .
 *
 * Member of `Features2d`
 */
CV_EXPORTS @interface SIFT : Feature2D


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::SIFT> nativePtrSIFT;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::SIFT>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::SIFT>)nativePtr;
#endif


#pragma mark - Methods


//
// static Ptr_SIFT cv::SIFT::create(int nfeatures = 0, int nOctaveLayers = 3, double contrastThreshold = 0.04, double edgeThreshold = 10, double sigma = 1.6)
//
/**
 * @param nfeatures The number of best features to retain. The features are ranked by their scores
 *     (measured in SIFT algorithm as the local contrast)
 *
 * @param nOctaveLayers The number of layers in each octave. 3 is the value used in D. Lowe paper. The
 *     number of octaves is computed automatically from the image resolution.
 *
 * @param contrastThreshold The contrast threshold used to filter out weak features in semi-uniform
 *     (low-contrast) regions. The larger the threshold, the less features are produced by the detector.
 *
 *     @note The contrast threshold will be divided by nOctaveLayers when the filtering is applied. When
 *     nOctaveLayers is set to default and if you want to use the value used in D. Lowe paper, 0.03, set
 *     this argument to 0.09.
 *
 * @param edgeThreshold The threshold used to filter out edge-like features. Note that the its meaning
 *     is different from the contrastThreshold, i.e. the larger the edgeThreshold, the less features are
 *     filtered out (more features are retained).
 *
 * @param sigma The sigma of the Gaussian applied to the input image at the octave \#0. If your image
 *     is captured with a weak camera with soft lenses, you might want to reduce the number.
 */
+ (SIFT*)create:(int)nfeatures nOctaveLayers:(int)nOctaveLayers contrastThreshold:(double)contrastThreshold edgeThreshold:(double)edgeThreshold sigma:(double)sigma NS_SWIFT_NAME(create(nfeatures:nOctaveLayers:contrastThreshold:edgeThreshold:sigma:));

/**
 * @param nfeatures The number of best features to retain. The features are ranked by their scores
 *     (measured in SIFT algorithm as the local contrast)
 *
 * @param nOctaveLayers The number of layers in each octave. 3 is the value used in D. Lowe paper. The
 *     number of octaves is computed automatically from the image resolution.
 *
 * @param contrastThreshold The contrast threshold used to filter out weak features in semi-uniform
 *     (low-contrast) regions. The larger the threshold, the less features are produced by the detector.
 *
 *     @note The contrast threshold will be divided by nOctaveLayers when the filtering is applied. When
 *     nOctaveLayers is set to default and if you want to use the value used in D. Lowe paper, 0.03, set
 *     this argument to 0.09.
 *
 * @param edgeThreshold The threshold used to filter out edge-like features. Note that the its meaning
 *     is different from the contrastThreshold, i.e. the larger the edgeThreshold, the less features are
 *     filtered out (more features are retained).
 *
 *     is captured with a weak camera with soft lenses, you might want to reduce the number.
 */
+ (SIFT*)create:(int)nfeatures nOctaveLayers:(int)nOctaveLayers contrastThreshold:(double)contrastThreshold edgeThreshold:(double)edgeThreshold NS_SWIFT_NAME(create(nfeatures:nOctaveLayers:contrastThreshold:edgeThreshold:));

/**
 * @param nfeatures The number of best features to retain. The features are ranked by their scores
 *     (measured in SIFT algorithm as the local contrast)
 *
 * @param nOctaveLayers The number of layers in each octave. 3 is the value used in D. Lowe paper. The
 *     number of octaves is computed automatically from the image resolution.
 *
 * @param contrastThreshold The contrast threshold used to filter out weak features in semi-uniform
 *     (low-contrast) regions. The larger the threshold, the less features are produced by the detector.
 *
 *     @note The contrast threshold will be divided by nOctaveLayers when the filtering is applied. When
 *     nOctaveLayers is set to default and if you want to use the value used in D. Lowe paper, 0.03, set
 *     this argument to 0.09.
 *
 *     is different from the contrastThreshold, i.e. the larger the edgeThreshold, the less features are
 *     filtered out (more features are retained).
 *
 *     is captured with a weak camera with soft lenses, you might want to reduce the number.
 */
+ (SIFT*)create:(int)nfeatures nOctaveLayers:(int)nOctaveLayers contrastThreshold:(double)contrastThreshold NS_SWIFT_NAME(create(nfeatures:nOctaveLayers:contrastThreshold:));

/**
 * @param nfeatures The number of best features to retain. The features are ranked by their scores
 *     (measured in SIFT algorithm as the local contrast)
 *
 * @param nOctaveLayers The number of layers in each octave. 3 is the value used in D. Lowe paper. The
 *     number of octaves is computed automatically from the image resolution.
 *
 *     (low-contrast) regions. The larger the threshold, the less features are produced by the detector.
 *
 *     @note The contrast threshold will be divided by nOctaveLayers when the filtering is applied. When
 *     nOctaveLayers is set to default and if you want to use the value used in D. Lowe paper, 0.03, set
 *     this argument to 0.09.
 *
 *     is different from the contrastThreshold, i.e. the larger the edgeThreshold, the less features are
 *     filtered out (more features are retained).
 *
 *     is captured with a weak camera with soft lenses, you might want to reduce the number.
 */
+ (SIFT*)create:(int)nfeatures nOctaveLayers:(int)nOctaveLayers NS_SWIFT_NAME(create(nfeatures:nOctaveLayers:));

/**
 * @param nfeatures The number of best features to retain. The features are ranked by their scores
 *     (measured in SIFT algorithm as the local contrast)
 *
 *     number of octaves is computed automatically from the image resolution.
 *
 *     (low-contrast) regions. The larger the threshold, the less features are produced by the detector.
 *
 *     @note The contrast threshold will be divided by nOctaveLayers when the filtering is applied. When
 *     nOctaveLayers is set to default and if you want to use the value used in D. Lowe paper, 0.03, set
 *     this argument to 0.09.
 *
 *     is different from the contrastThreshold, i.e. the larger the edgeThreshold, the less features are
 *     filtered out (more features are retained).
 *
 *     is captured with a weak camera with soft lenses, you might want to reduce the number.
 */
+ (SIFT*)create:(int)nfeatures NS_SWIFT_NAME(create(nfeatures:));

/**
 *     (measured in SIFT algorithm as the local contrast)
 *
 *     number of octaves is computed automatically from the image resolution.
 *
 *     (low-contrast) regions. The larger the threshold, the less features are produced by the detector.
 *
 *     @note The contrast threshold will be divided by nOctaveLayers when the filtering is applied. When
 *     nOctaveLayers is set to default and if you want to use the value used in D. Lowe paper, 0.03, set
 *     this argument to 0.09.
 *
 *     is different from the contrastThreshold, i.e. the larger the edgeThreshold, the less features are
 *     filtered out (more features are retained).
 *
 *     is captured with a weak camera with soft lenses, you might want to reduce the number.
 */
+ (SIFT*)create NS_SWIFT_NAME(create());


//
//  String cv::SIFT::getDefaultName()
//
- (NSString*)getDefaultName NS_SWIFT_NAME(getDefaultName());



@end

NS_ASSUME_NONNULL_END



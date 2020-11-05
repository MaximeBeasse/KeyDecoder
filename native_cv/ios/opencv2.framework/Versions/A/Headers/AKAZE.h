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

#import "KAZE.h"


// C++: enum DescriptorType
typedef NS_ENUM(int, DescriptorType) {
    DESCRIPTOR_KAZE_UPRIGHT = 2,
    DESCRIPTOR_KAZE = 3,
    DESCRIPTOR_MLDB_UPRIGHT = 4,
    DESCRIPTOR_MLDB = 5
};



NS_ASSUME_NONNULL_BEGIN

// C++: class AKAZE
/**
 * Class implementing the AKAZE keypoint detector and descriptor extractor, described in CITE: ANB13.
 *
 * AKAZE descriptors can only be used with KAZE or AKAZE keypoints. This class is thread-safe.
 *
 * @note When you need descriptors use Feature2D::detectAndCompute, which
 * provides better performance. When using Feature2D::detect followed by
 * Feature2D::compute scale space pyramid is computed twice.
 *
 * @note AKAZE implements T-API. When image is passed as UMat some parts of the algorithm
 * will use OpenCL.
 *
 * @note [ANB13] Fast Explicit Diffusion for Accelerated Features in Nonlinear
 * Scale Spaces. Pablo F. Alcantarilla, Jesús Nuevo and Adrien Bartoli. In
 * British Machine Vision Conference (BMVC), Bristol, UK, September 2013.
 *
 * Member of `Features2d`
 */
CV_EXPORTS @interface AKAZE : Feature2D


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::AKAZE> nativePtrAKAZE;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::AKAZE>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::AKAZE>)nativePtr;
#endif


#pragma mark - Methods


//
//  AKAZE_DescriptorType cv::AKAZE::getDescriptorType()
//
- (DescriptorType)getDescriptorType NS_SWIFT_NAME(getDescriptorType());


//
//  KAZE_DiffusivityType cv::AKAZE::getDiffusivity()
//
- (DiffusivityType)getDiffusivity NS_SWIFT_NAME(getDiffusivity());


//
// static Ptr_AKAZE cv::AKAZE::create(AKAZE_DescriptorType descriptor_type = AKAZE::DESCRIPTOR_MLDB, int descriptor_size = 0, int descriptor_channels = 3, float threshold = 0.001f, int nOctaves = 4, int nOctaveLayers = 4, KAZE_DiffusivityType diffusivity = KAZE::DIFF_PM_G2)
//
/**
 * The AKAZE constructor
 *
 * @param descriptor_type Type of the extracted descriptor: DESCRIPTOR_KAZE,
 *     DESCRIPTOR_KAZE_UPRIGHT, DESCRIPTOR_MLDB or DESCRIPTOR_MLDB_UPRIGHT.
 * @param descriptor_size Size of the descriptor in bits. 0 -\> Full size
 * @param descriptor_channels Number of channels in the descriptor (1, 2, 3)
 * @param threshold Detector response threshold to accept point
 * @param nOctaves Maximum octave evolution of the image
 * @param nOctaveLayers Default number of sublevels per scale level
 * @param diffusivity Diffusivity type. DIFF_PM_G1, DIFF_PM_G2, DIFF_WEICKERT or
 *     DIFF_CHARBONNIER
 */
+ (AKAZE*)create:(DescriptorType)descriptor_type descriptor_size:(int)descriptor_size descriptor_channels:(int)descriptor_channels threshold:(float)threshold nOctaves:(int)nOctaves nOctaveLayers:(int)nOctaveLayers diffusivity:(DiffusivityType)diffusivity NS_SWIFT_NAME(create(descriptor_type:descriptor_size:descriptor_channels:threshold:nOctaves:nOctaveLayers:diffusivity:));

/**
 * The AKAZE constructor
 *
 * @param descriptor_type Type of the extracted descriptor: DESCRIPTOR_KAZE,
 *     DESCRIPTOR_KAZE_UPRIGHT, DESCRIPTOR_MLDB or DESCRIPTOR_MLDB_UPRIGHT.
 * @param descriptor_size Size of the descriptor in bits. 0 -\> Full size
 * @param descriptor_channels Number of channels in the descriptor (1, 2, 3)
 * @param threshold Detector response threshold to accept point
 * @param nOctaves Maximum octave evolution of the image
 * @param nOctaveLayers Default number of sublevels per scale level
 *     DIFF_CHARBONNIER
 */
+ (AKAZE*)create:(DescriptorType)descriptor_type descriptor_size:(int)descriptor_size descriptor_channels:(int)descriptor_channels threshold:(float)threshold nOctaves:(int)nOctaves nOctaveLayers:(int)nOctaveLayers NS_SWIFT_NAME(create(descriptor_type:descriptor_size:descriptor_channels:threshold:nOctaves:nOctaveLayers:));

/**
 * The AKAZE constructor
 *
 * @param descriptor_type Type of the extracted descriptor: DESCRIPTOR_KAZE,
 *     DESCRIPTOR_KAZE_UPRIGHT, DESCRIPTOR_MLDB or DESCRIPTOR_MLDB_UPRIGHT.
 * @param descriptor_size Size of the descriptor in bits. 0 -\> Full size
 * @param descriptor_channels Number of channels in the descriptor (1, 2, 3)
 * @param threshold Detector response threshold to accept point
 * @param nOctaves Maximum octave evolution of the image
 *     DIFF_CHARBONNIER
 */
+ (AKAZE*)create:(DescriptorType)descriptor_type descriptor_size:(int)descriptor_size descriptor_channels:(int)descriptor_channels threshold:(float)threshold nOctaves:(int)nOctaves NS_SWIFT_NAME(create(descriptor_type:descriptor_size:descriptor_channels:threshold:nOctaves:));

/**
 * The AKAZE constructor
 *
 * @param descriptor_type Type of the extracted descriptor: DESCRIPTOR_KAZE,
 *     DESCRIPTOR_KAZE_UPRIGHT, DESCRIPTOR_MLDB or DESCRIPTOR_MLDB_UPRIGHT.
 * @param descriptor_size Size of the descriptor in bits. 0 -\> Full size
 * @param descriptor_channels Number of channels in the descriptor (1, 2, 3)
 * @param threshold Detector response threshold to accept point
 *     DIFF_CHARBONNIER
 */
+ (AKAZE*)create:(DescriptorType)descriptor_type descriptor_size:(int)descriptor_size descriptor_channels:(int)descriptor_channels threshold:(float)threshold NS_SWIFT_NAME(create(descriptor_type:descriptor_size:descriptor_channels:threshold:));

/**
 * The AKAZE constructor
 *
 * @param descriptor_type Type of the extracted descriptor: DESCRIPTOR_KAZE,
 *     DESCRIPTOR_KAZE_UPRIGHT, DESCRIPTOR_MLDB or DESCRIPTOR_MLDB_UPRIGHT.
 * @param descriptor_size Size of the descriptor in bits. 0 -\> Full size
 * @param descriptor_channels Number of channels in the descriptor (1, 2, 3)
 *     DIFF_CHARBONNIER
 */
+ (AKAZE*)create:(DescriptorType)descriptor_type descriptor_size:(int)descriptor_size descriptor_channels:(int)descriptor_channels NS_SWIFT_NAME(create(descriptor_type:descriptor_size:descriptor_channels:));

/**
 * The AKAZE constructor
 *
 * @param descriptor_type Type of the extracted descriptor: DESCRIPTOR_KAZE,
 *     DESCRIPTOR_KAZE_UPRIGHT, DESCRIPTOR_MLDB or DESCRIPTOR_MLDB_UPRIGHT.
 * @param descriptor_size Size of the descriptor in bits. 0 -\> Full size
 *     DIFF_CHARBONNIER
 */
+ (AKAZE*)create:(DescriptorType)descriptor_type descriptor_size:(int)descriptor_size NS_SWIFT_NAME(create(descriptor_type:descriptor_size:));

/**
 * The AKAZE constructor
 *
 * @param descriptor_type Type of the extracted descriptor: DESCRIPTOR_KAZE,
 *     DESCRIPTOR_KAZE_UPRIGHT, DESCRIPTOR_MLDB or DESCRIPTOR_MLDB_UPRIGHT.
 *     DIFF_CHARBONNIER
 */
+ (AKAZE*)create:(DescriptorType)descriptor_type NS_SWIFT_NAME(create(descriptor_type:));

/**
 * The AKAZE constructor
 *
 *     DESCRIPTOR_KAZE_UPRIGHT, DESCRIPTOR_MLDB or DESCRIPTOR_MLDB_UPRIGHT.
 *     DIFF_CHARBONNIER
 */
+ (AKAZE*)create NS_SWIFT_NAME(create());


//
//  String cv::AKAZE::getDefaultName()
//
- (NSString*)getDefaultName NS_SWIFT_NAME(getDefaultName());


//
//  double cv::AKAZE::getThreshold()
//
- (double)getThreshold NS_SWIFT_NAME(getThreshold());


//
//  int cv::AKAZE::getDescriptorChannels()
//
- (int)getDescriptorChannels NS_SWIFT_NAME(getDescriptorChannels());


//
//  int cv::AKAZE::getDescriptorSize()
//
- (int)getDescriptorSize NS_SWIFT_NAME(getDescriptorSize());


//
//  int cv::AKAZE::getNOctaveLayers()
//
- (int)getNOctaveLayers NS_SWIFT_NAME(getNOctaveLayers());


//
//  int cv::AKAZE::getNOctaves()
//
- (int)getNOctaves NS_SWIFT_NAME(getNOctaves());


//
//  void cv::AKAZE::setDescriptorChannels(int dch)
//
- (void)setDescriptorChannels:(int)dch NS_SWIFT_NAME(setDescriptorChannels(dch:));


//
//  void cv::AKAZE::setDescriptorSize(int dsize)
//
- (void)setDescriptorSize:(int)dsize NS_SWIFT_NAME(setDescriptorSize(dsize:));


//
//  void cv::AKAZE::setDescriptorType(AKAZE_DescriptorType dtype)
//
- (void)setDescriptorType:(DescriptorType)dtype NS_SWIFT_NAME(setDescriptorType(dtype:));


//
//  void cv::AKAZE::setDiffusivity(KAZE_DiffusivityType diff)
//
- (void)setDiffusivity:(DiffusivityType)diff NS_SWIFT_NAME(setDiffusivity(diff:));


//
//  void cv::AKAZE::setNOctaveLayers(int octaveLayers)
//
- (void)setNOctaveLayers:(int)octaveLayers NS_SWIFT_NAME(setNOctaveLayers(octaveLayers:));


//
//  void cv::AKAZE::setNOctaves(int octaves)
//
- (void)setNOctaves:(int)octaves NS_SWIFT_NAME(setNOctaves(octaves:));


//
//  void cv::AKAZE::setThreshold(double threshold)
//
- (void)setThreshold:(double)threshold NS_SWIFT_NAME(setThreshold(threshold:));



@end

NS_ASSUME_NONNULL_END



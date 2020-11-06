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




// C++: enum DiffusivityType
typedef NS_ENUM(int, DiffusivityType) {
    DIFF_PM_G1 = 0,
    DIFF_PM_G2 = 1,
    DIFF_WEICKERT = 2,
    DIFF_CHARBONNIER = 3
};



NS_ASSUME_NONNULL_BEGIN

// C++: class KAZE
/**
 * Class implementing the KAZE keypoint detector and descriptor extractor, described in CITE: ABD12 .
 *
 * @note AKAZE descriptor can only be used with KAZE or AKAZE keypoints .. [ABD12] KAZE Features. Pablo
 * F. Alcantarilla, Adrien Bartoli and Andrew J. Davison. In European Conference on Computer Vision
 * (ECCV), Fiorenze, Italy, October 2012.
 *
 * Member of `Features2d`
 */
CV_EXPORTS @interface KAZE : Feature2D


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::KAZE> nativePtrKAZE;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::KAZE>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::KAZE>)nativePtr;
#endif


#pragma mark - Methods


//
//  KAZE_DiffusivityType cv::KAZE::getDiffusivity()
//
- (DiffusivityType)getDiffusivity NS_SWIFT_NAME(getDiffusivity());


//
// static Ptr_KAZE cv::KAZE::create(bool extended = false, bool upright = false, float threshold = 0.001f, int nOctaves = 4, int nOctaveLayers = 4, KAZE_DiffusivityType diffusivity = KAZE::DIFF_PM_G2)
//
/**
 * The KAZE constructor
 *
 * @param extended Set to enable extraction of extended (128-byte) descriptor.
 * @param upright Set to enable use of upright descriptors (non rotation-invariant).
 * @param threshold Detector response threshold to accept point
 * @param nOctaves Maximum octave evolution of the image
 * @param nOctaveLayers Default number of sublevels per scale level
 * @param diffusivity Diffusivity type. DIFF_PM_G1, DIFF_PM_G2, DIFF_WEICKERT or
 *     DIFF_CHARBONNIER
 */
+ (KAZE*)create:(BOOL)extended upright:(BOOL)upright threshold:(float)threshold nOctaves:(int)nOctaves nOctaveLayers:(int)nOctaveLayers diffusivity:(DiffusivityType)diffusivity NS_SWIFT_NAME(create(extended:upright:threshold:nOctaves:nOctaveLayers:diffusivity:));

/**
 * The KAZE constructor
 *
 * @param extended Set to enable extraction of extended (128-byte) descriptor.
 * @param upright Set to enable use of upright descriptors (non rotation-invariant).
 * @param threshold Detector response threshold to accept point
 * @param nOctaves Maximum octave evolution of the image
 * @param nOctaveLayers Default number of sublevels per scale level
 *     DIFF_CHARBONNIER
 */
+ (KAZE*)create:(BOOL)extended upright:(BOOL)upright threshold:(float)threshold nOctaves:(int)nOctaves nOctaveLayers:(int)nOctaveLayers NS_SWIFT_NAME(create(extended:upright:threshold:nOctaves:nOctaveLayers:));

/**
 * The KAZE constructor
 *
 * @param extended Set to enable extraction of extended (128-byte) descriptor.
 * @param upright Set to enable use of upright descriptors (non rotation-invariant).
 * @param threshold Detector response threshold to accept point
 * @param nOctaves Maximum octave evolution of the image
 *     DIFF_CHARBONNIER
 */
+ (KAZE*)create:(BOOL)extended upright:(BOOL)upright threshold:(float)threshold nOctaves:(int)nOctaves NS_SWIFT_NAME(create(extended:upright:threshold:nOctaves:));

/**
 * The KAZE constructor
 *
 * @param extended Set to enable extraction of extended (128-byte) descriptor.
 * @param upright Set to enable use of upright descriptors (non rotation-invariant).
 * @param threshold Detector response threshold to accept point
 *     DIFF_CHARBONNIER
 */
+ (KAZE*)create:(BOOL)extended upright:(BOOL)upright threshold:(float)threshold NS_SWIFT_NAME(create(extended:upright:threshold:));

/**
 * The KAZE constructor
 *
 * @param extended Set to enable extraction of extended (128-byte) descriptor.
 * @param upright Set to enable use of upright descriptors (non rotation-invariant).
 *     DIFF_CHARBONNIER
 */
+ (KAZE*)create:(BOOL)extended upright:(BOOL)upright NS_SWIFT_NAME(create(extended:upright:));

/**
 * The KAZE constructor
 *
 * @param extended Set to enable extraction of extended (128-byte) descriptor.
 *     DIFF_CHARBONNIER
 */
+ (KAZE*)create:(BOOL)extended NS_SWIFT_NAME(create(extended:));

/**
 * The KAZE constructor
 *
 *     DIFF_CHARBONNIER
 */
+ (KAZE*)create NS_SWIFT_NAME(create());


//
//  String cv::KAZE::getDefaultName()
//
- (NSString*)getDefaultName NS_SWIFT_NAME(getDefaultName());


//
//  bool cv::KAZE::getExtended()
//
- (BOOL)getExtended NS_SWIFT_NAME(getExtended());


//
//  bool cv::KAZE::getUpright()
//
- (BOOL)getUpright NS_SWIFT_NAME(getUpright());


//
//  double cv::KAZE::getThreshold()
//
- (double)getThreshold NS_SWIFT_NAME(getThreshold());


//
//  int cv::KAZE::getNOctaveLayers()
//
- (int)getNOctaveLayers NS_SWIFT_NAME(getNOctaveLayers());


//
//  int cv::KAZE::getNOctaves()
//
- (int)getNOctaves NS_SWIFT_NAME(getNOctaves());


//
//  void cv::KAZE::setDiffusivity(KAZE_DiffusivityType diff)
//
- (void)setDiffusivity:(DiffusivityType)diff NS_SWIFT_NAME(setDiffusivity(diff:));


//
//  void cv::KAZE::setExtended(bool extended)
//
- (void)setExtended:(BOOL)extended NS_SWIFT_NAME(setExtended(extended:));


//
//  void cv::KAZE::setNOctaveLayers(int octaveLayers)
//
- (void)setNOctaveLayers:(int)octaveLayers NS_SWIFT_NAME(setNOctaveLayers(octaveLayers:));


//
//  void cv::KAZE::setNOctaves(int octaves)
//
- (void)setNOctaves:(int)octaves NS_SWIFT_NAME(setNOctaves(octaves:));


//
//  void cv::KAZE::setThreshold(double threshold)
//
- (void)setThreshold:(double)threshold NS_SWIFT_NAME(setThreshold(threshold:));


//
//  void cv::KAZE::setUpright(bool upright)
//
- (void)setUpright:(BOOL)upright NS_SWIFT_NAME(setUpright(upright:));



@end

NS_ASSUME_NONNULL_END



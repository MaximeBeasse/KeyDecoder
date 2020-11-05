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

@class FloatVector;
@class IntVector;



NS_ASSUME_NONNULL_BEGIN

// C++: class BRISK
/**
 * Class implementing the BRISK keypoint detector and descriptor extractor, described in CITE: LCS11 .
 *
 * Member of `Features2d`
 */
CV_EXPORTS @interface BRISK : Feature2D


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::BRISK> nativePtrBRISK;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::BRISK>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::BRISK>)nativePtr;
#endif


#pragma mark - Methods


//
// static Ptr_BRISK cv::BRISK::create(int thresh, int octaves, vector_float radiusList, vector_int numberList, float dMax = 5.85f, float dMin = 8.2f, vector_int indexChange = std::vector<int>())
//
/**
 * The BRISK constructor for a custom pattern, detection threshold and octaves
 *
 * @param thresh AGAST detection threshold score.
 * @param octaves detection octaves. Use 0 to do single scale.
 * @param radiusList defines the radii (in pixels) where the samples around a keypoint are taken (for
 *     keypoint scale 1).
 * @param numberList defines the number of sampling points on the sampling circle. Must be the same
 *     size as radiusList..
 * @param dMax threshold for the short pairings used for descriptor formation (in pixels for keypoint
 *     scale 1).
 * @param dMin threshold for the long pairings used for orientation determination (in pixels for
 *     keypoint scale 1).
 * @param indexChange index remapping of the bits.
 */
+ (BRISK*)create:(int)thresh octaves:(int)octaves radiusList:(FloatVector*)radiusList numberList:(IntVector*)numberList dMax:(float)dMax dMin:(float)dMin indexChange:(IntVector*)indexChange NS_SWIFT_NAME(create(thresh:octaves:radiusList:numberList:dMax:dMin:indexChange:));

/**
 * The BRISK constructor for a custom pattern, detection threshold and octaves
 *
 * @param thresh AGAST detection threshold score.
 * @param octaves detection octaves. Use 0 to do single scale.
 * @param radiusList defines the radii (in pixels) where the samples around a keypoint are taken (for
 *     keypoint scale 1).
 * @param numberList defines the number of sampling points on the sampling circle. Must be the same
 *     size as radiusList..
 * @param dMax threshold for the short pairings used for descriptor formation (in pixels for keypoint
 *     scale 1).
 * @param dMin threshold for the long pairings used for orientation determination (in pixels for
 *     keypoint scale 1).
 */
+ (BRISK*)create:(int)thresh octaves:(int)octaves radiusList:(FloatVector*)radiusList numberList:(IntVector*)numberList dMax:(float)dMax dMin:(float)dMin NS_SWIFT_NAME(create(thresh:octaves:radiusList:numberList:dMax:dMin:));

/**
 * The BRISK constructor for a custom pattern, detection threshold and octaves
 *
 * @param thresh AGAST detection threshold score.
 * @param octaves detection octaves. Use 0 to do single scale.
 * @param radiusList defines the radii (in pixels) where the samples around a keypoint are taken (for
 *     keypoint scale 1).
 * @param numberList defines the number of sampling points on the sampling circle. Must be the same
 *     size as radiusList..
 * @param dMax threshold for the short pairings used for descriptor formation (in pixels for keypoint
 *     scale 1).
 *     keypoint scale 1).
 */
+ (BRISK*)create:(int)thresh octaves:(int)octaves radiusList:(FloatVector*)radiusList numberList:(IntVector*)numberList dMax:(float)dMax NS_SWIFT_NAME(create(thresh:octaves:radiusList:numberList:dMax:));

/**
 * The BRISK constructor for a custom pattern, detection threshold and octaves
 *
 * @param thresh AGAST detection threshold score.
 * @param octaves detection octaves. Use 0 to do single scale.
 * @param radiusList defines the radii (in pixels) where the samples around a keypoint are taken (for
 *     keypoint scale 1).
 * @param numberList defines the number of sampling points on the sampling circle. Must be the same
 *     size as radiusList..
 *     scale 1).
 *     keypoint scale 1).
 */
+ (BRISK*)create:(int)thresh octaves:(int)octaves radiusList:(FloatVector*)radiusList numberList:(IntVector*)numberList NS_SWIFT_NAME(create(thresh:octaves:radiusList:numberList:));


//
// static Ptr_BRISK cv::BRISK::create(int thresh = 30, int octaves = 3, float patternScale = 1.0f)
//
/**
 * The BRISK constructor
 *
 * @param thresh AGAST detection threshold score.
 * @param octaves detection octaves. Use 0 to do single scale.
 * @param patternScale apply this scale to the pattern used for sampling the neighbourhood of a
 *     keypoint.
 */
+ (BRISK*)create:(int)thresh octaves:(int)octaves patternScale:(float)patternScale NS_SWIFT_NAME(create(thresh:octaves:patternScale:));

/**
 * The BRISK constructor
 *
 * @param thresh AGAST detection threshold score.
 * @param octaves detection octaves. Use 0 to do single scale.
 *     keypoint.
 */
+ (BRISK*)create:(int)thresh octaves:(int)octaves NS_SWIFT_NAME(create(thresh:octaves:));

/**
 * The BRISK constructor
 *
 * @param thresh AGAST detection threshold score.
 *     keypoint.
 */
+ (BRISK*)create:(int)thresh NS_SWIFT_NAME(create(thresh:));

/**
 * The BRISK constructor
 *
 *     keypoint.
 */
+ (BRISK*)create NS_SWIFT_NAME(create());


//
// static Ptr_BRISK cv::BRISK::create(vector_float radiusList, vector_int numberList, float dMax = 5.85f, float dMin = 8.2f, vector_int indexChange = std::vector<int>())
//
/**
 * The BRISK constructor for a custom pattern
 *
 * @param radiusList defines the radii (in pixels) where the samples around a keypoint are taken (for
 *     keypoint scale 1).
 * @param numberList defines the number of sampling points on the sampling circle. Must be the same
 *     size as radiusList..
 * @param dMax threshold for the short pairings used for descriptor formation (in pixels for keypoint
 *     scale 1).
 * @param dMin threshold for the long pairings used for orientation determination (in pixels for
 *     keypoint scale 1).
 * @param indexChange index remapping of the bits.
 */
+ (BRISK*)create:(FloatVector*)radiusList numberList:(IntVector*)numberList dMax:(float)dMax dMin:(float)dMin indexChange:(IntVector*)indexChange NS_SWIFT_NAME(create(radiusList:numberList:dMax:dMin:indexChange:));

/**
 * The BRISK constructor for a custom pattern
 *
 * @param radiusList defines the radii (in pixels) where the samples around a keypoint are taken (for
 *     keypoint scale 1).
 * @param numberList defines the number of sampling points on the sampling circle. Must be the same
 *     size as radiusList..
 * @param dMax threshold for the short pairings used for descriptor formation (in pixels for keypoint
 *     scale 1).
 * @param dMin threshold for the long pairings used for orientation determination (in pixels for
 *     keypoint scale 1).
 */
+ (BRISK*)create:(FloatVector*)radiusList numberList:(IntVector*)numberList dMax:(float)dMax dMin:(float)dMin NS_SWIFT_NAME(create(radiusList:numberList:dMax:dMin:));

/**
 * The BRISK constructor for a custom pattern
 *
 * @param radiusList defines the radii (in pixels) where the samples around a keypoint are taken (for
 *     keypoint scale 1).
 * @param numberList defines the number of sampling points on the sampling circle. Must be the same
 *     size as radiusList..
 * @param dMax threshold for the short pairings used for descriptor formation (in pixels for keypoint
 *     scale 1).
 *     keypoint scale 1).
 */
+ (BRISK*)create:(FloatVector*)radiusList numberList:(IntVector*)numberList dMax:(float)dMax NS_SWIFT_NAME(create(radiusList:numberList:dMax:));

/**
 * The BRISK constructor for a custom pattern
 *
 * @param radiusList defines the radii (in pixels) where the samples around a keypoint are taken (for
 *     keypoint scale 1).
 * @param numberList defines the number of sampling points on the sampling circle. Must be the same
 *     size as radiusList..
 *     scale 1).
 *     keypoint scale 1).
 */
+ (BRISK*)create:(FloatVector*)radiusList numberList:(IntVector*)numberList NS_SWIFT_NAME(create(radiusList:numberList:));


//
//  String cv::BRISK::getDefaultName()
//
- (NSString*)getDefaultName NS_SWIFT_NAME(getDefaultName());


//
//  int cv::BRISK::getOctaves()
//
- (int)getOctaves NS_SWIFT_NAME(getOctaves());


//
//  int cv::BRISK::getThreshold()
//
- (int)getThreshold NS_SWIFT_NAME(getThreshold());


//
//  void cv::BRISK::setOctaves(int octaves)
//
/**
 * Set detection octaves.
 * @param octaves detection octaves. Use 0 to do single scale.
 */
- (void)setOctaves:(int)octaves NS_SWIFT_NAME(setOctaves(octaves:));


//
//  void cv::BRISK::setThreshold(int threshold)
//
/**
 * Set detection threshold.
 * @param threshold AGAST detection threshold score.
 */
- (void)setThreshold:(int)threshold NS_SWIFT_NAME(setThreshold(threshold:));



@end

NS_ASSUME_NONNULL_END



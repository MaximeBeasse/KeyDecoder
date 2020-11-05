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




// C++: enum ScoreType
typedef NS_ENUM(int, ScoreType) {
    HARRIS_SCORE = 0,
    FAST_SCORE = 1
};



NS_ASSUME_NONNULL_BEGIN

// C++: class ORB
/**
 * Class implementing the ORB (*oriented BRIEF*) keypoint detector and descriptor extractor
 *
 * described in CITE: RRKB11 . The algorithm uses FAST in pyramids to detect stable keypoints, selects
 * the strongest features using FAST or Harris response, finds their orientation using first-order
 * moments and computes the descriptors using BRIEF (where the coordinates of random point pairs (or
 * k-tuples) are rotated according to the measured orientation).
 *
 * Member of `Features2d`
 */
CV_EXPORTS @interface ORB : Feature2D


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::ORB> nativePtrORB;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::ORB>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::ORB>)nativePtr;
#endif


#pragma mark - Methods


//
//  ORB_ScoreType cv::ORB::getScoreType()
//
- (ScoreType)getScoreType NS_SWIFT_NAME(getScoreType());


//
// static Ptr_ORB cv::ORB::create(int nfeatures = 500, float scaleFactor = 1.2f, int nlevels = 8, int edgeThreshold = 31, int firstLevel = 0, int WTA_K = 2, ORB_ScoreType scoreType = ORB::HARRIS_SCORE, int patchSize = 31, int fastThreshold = 20)
//
/**
 * The ORB constructor
 *
 * @param nfeatures The maximum number of features to retain.
 * @param scaleFactor Pyramid decimation ratio, greater than 1. scaleFactor==2 means the classical
 *     pyramid, where each next level has 4x less pixels than the previous, but such a big scale factor
 *     will degrade feature matching scores dramatically. On the other hand, too close to 1 scale factor
 *     will mean that to cover certain scale range you will need more pyramid levels and so the speed
 *     will suffer.
 * @param nlevels The number of pyramid levels. The smallest level will have linear size equal to
 *     input_image_linear_size/pow(scaleFactor, nlevels - firstLevel).
 * @param edgeThreshold This is size of the border where the features are not detected. It should
 *     roughly match the patchSize parameter.
 * @param firstLevel The level of pyramid to put source image to. Previous layers are filled
 *     with upscaled source image.
 * @param WTA_K The number of points that produce each element of the oriented BRIEF descriptor. The
 *     default value 2 means the BRIEF where we take a random point pair and compare their brightnesses,
 *     so we get 0/1 response. Other possible values are 3 and 4. For example, 3 means that we take 3
 *     random points (of course, those point coordinates are random, but they are generated from the
 *     pre-defined seed, so each element of BRIEF descriptor is computed deterministically from the pixel
 *     rectangle), find point of maximum brightness and output index of the winner (0, 1 or 2). Such
 *     output will occupy 2 bits, and therefore it will need a special variant of Hamming distance,
 *     denoted as NORM_HAMMING2 (2 bits per bin). When WTA_K=4, we take 4 random points to compute each
 *     bin (that will also occupy 2 bits with possible values 0, 1, 2 or 3).
 * @param scoreType The default HARRIS_SCORE means that Harris algorithm is used to rank features
 *     (the score is written to KeyPoint::score and is used to retain best nfeatures features);
 *     FAST_SCORE is alternative value of the parameter that produces slightly less stable keypoints,
 *     but it is a little faster to compute.
 * @param patchSize size of the patch used by the oriented BRIEF descriptor. Of course, on smaller
 *     pyramid layers the perceived image area covered by a feature will be larger.
 * @param fastThreshold the fast threshold
 */
+ (ORB*)create:(int)nfeatures scaleFactor:(float)scaleFactor nlevels:(int)nlevels edgeThreshold:(int)edgeThreshold firstLevel:(int)firstLevel WTA_K:(int)WTA_K scoreType:(ScoreType)scoreType patchSize:(int)patchSize fastThreshold:(int)fastThreshold NS_SWIFT_NAME(create(nfeatures:scaleFactor:nlevels:edgeThreshold:firstLevel:WTA_K:scoreType:patchSize:fastThreshold:));

/**
 * The ORB constructor
 *
 * @param nfeatures The maximum number of features to retain.
 * @param scaleFactor Pyramid decimation ratio, greater than 1. scaleFactor==2 means the classical
 *     pyramid, where each next level has 4x less pixels than the previous, but such a big scale factor
 *     will degrade feature matching scores dramatically. On the other hand, too close to 1 scale factor
 *     will mean that to cover certain scale range you will need more pyramid levels and so the speed
 *     will suffer.
 * @param nlevels The number of pyramid levels. The smallest level will have linear size equal to
 *     input_image_linear_size/pow(scaleFactor, nlevels - firstLevel).
 * @param edgeThreshold This is size of the border where the features are not detected. It should
 *     roughly match the patchSize parameter.
 * @param firstLevel The level of pyramid to put source image to. Previous layers are filled
 *     with upscaled source image.
 * @param WTA_K The number of points that produce each element of the oriented BRIEF descriptor. The
 *     default value 2 means the BRIEF where we take a random point pair and compare their brightnesses,
 *     so we get 0/1 response. Other possible values are 3 and 4. For example, 3 means that we take 3
 *     random points (of course, those point coordinates are random, but they are generated from the
 *     pre-defined seed, so each element of BRIEF descriptor is computed deterministically from the pixel
 *     rectangle), find point of maximum brightness and output index of the winner (0, 1 or 2). Such
 *     output will occupy 2 bits, and therefore it will need a special variant of Hamming distance,
 *     denoted as NORM_HAMMING2 (2 bits per bin). When WTA_K=4, we take 4 random points to compute each
 *     bin (that will also occupy 2 bits with possible values 0, 1, 2 or 3).
 * @param scoreType The default HARRIS_SCORE means that Harris algorithm is used to rank features
 *     (the score is written to KeyPoint::score and is used to retain best nfeatures features);
 *     FAST_SCORE is alternative value of the parameter that produces slightly less stable keypoints,
 *     but it is a little faster to compute.
 * @param patchSize size of the patch used by the oriented BRIEF descriptor. Of course, on smaller
 *     pyramid layers the perceived image area covered by a feature will be larger.
 */
+ (ORB*)create:(int)nfeatures scaleFactor:(float)scaleFactor nlevels:(int)nlevels edgeThreshold:(int)edgeThreshold firstLevel:(int)firstLevel WTA_K:(int)WTA_K scoreType:(ScoreType)scoreType patchSize:(int)patchSize NS_SWIFT_NAME(create(nfeatures:scaleFactor:nlevels:edgeThreshold:firstLevel:WTA_K:scoreType:patchSize:));

/**
 * The ORB constructor
 *
 * @param nfeatures The maximum number of features to retain.
 * @param scaleFactor Pyramid decimation ratio, greater than 1. scaleFactor==2 means the classical
 *     pyramid, where each next level has 4x less pixels than the previous, but such a big scale factor
 *     will degrade feature matching scores dramatically. On the other hand, too close to 1 scale factor
 *     will mean that to cover certain scale range you will need more pyramid levels and so the speed
 *     will suffer.
 * @param nlevels The number of pyramid levels. The smallest level will have linear size equal to
 *     input_image_linear_size/pow(scaleFactor, nlevels - firstLevel).
 * @param edgeThreshold This is size of the border where the features are not detected. It should
 *     roughly match the patchSize parameter.
 * @param firstLevel The level of pyramid to put source image to. Previous layers are filled
 *     with upscaled source image.
 * @param WTA_K The number of points that produce each element of the oriented BRIEF descriptor. The
 *     default value 2 means the BRIEF where we take a random point pair and compare their brightnesses,
 *     so we get 0/1 response. Other possible values are 3 and 4. For example, 3 means that we take 3
 *     random points (of course, those point coordinates are random, but they are generated from the
 *     pre-defined seed, so each element of BRIEF descriptor is computed deterministically from the pixel
 *     rectangle), find point of maximum brightness and output index of the winner (0, 1 or 2). Such
 *     output will occupy 2 bits, and therefore it will need a special variant of Hamming distance,
 *     denoted as NORM_HAMMING2 (2 bits per bin). When WTA_K=4, we take 4 random points to compute each
 *     bin (that will also occupy 2 bits with possible values 0, 1, 2 or 3).
 * @param scoreType The default HARRIS_SCORE means that Harris algorithm is used to rank features
 *     (the score is written to KeyPoint::score and is used to retain best nfeatures features);
 *     FAST_SCORE is alternative value of the parameter that produces slightly less stable keypoints,
 *     but it is a little faster to compute.
 *     pyramid layers the perceived image area covered by a feature will be larger.
 */
+ (ORB*)create:(int)nfeatures scaleFactor:(float)scaleFactor nlevels:(int)nlevels edgeThreshold:(int)edgeThreshold firstLevel:(int)firstLevel WTA_K:(int)WTA_K scoreType:(ScoreType)scoreType NS_SWIFT_NAME(create(nfeatures:scaleFactor:nlevels:edgeThreshold:firstLevel:WTA_K:scoreType:));

/**
 * The ORB constructor
 *
 * @param nfeatures The maximum number of features to retain.
 * @param scaleFactor Pyramid decimation ratio, greater than 1. scaleFactor==2 means the classical
 *     pyramid, where each next level has 4x less pixels than the previous, but such a big scale factor
 *     will degrade feature matching scores dramatically. On the other hand, too close to 1 scale factor
 *     will mean that to cover certain scale range you will need more pyramid levels and so the speed
 *     will suffer.
 * @param nlevels The number of pyramid levels. The smallest level will have linear size equal to
 *     input_image_linear_size/pow(scaleFactor, nlevels - firstLevel).
 * @param edgeThreshold This is size of the border where the features are not detected. It should
 *     roughly match the patchSize parameter.
 * @param firstLevel The level of pyramid to put source image to. Previous layers are filled
 *     with upscaled source image.
 * @param WTA_K The number of points that produce each element of the oriented BRIEF descriptor. The
 *     default value 2 means the BRIEF where we take a random point pair and compare their brightnesses,
 *     so we get 0/1 response. Other possible values are 3 and 4. For example, 3 means that we take 3
 *     random points (of course, those point coordinates are random, but they are generated from the
 *     pre-defined seed, so each element of BRIEF descriptor is computed deterministically from the pixel
 *     rectangle), find point of maximum brightness and output index of the winner (0, 1 or 2). Such
 *     output will occupy 2 bits, and therefore it will need a special variant of Hamming distance,
 *     denoted as NORM_HAMMING2 (2 bits per bin). When WTA_K=4, we take 4 random points to compute each
 *     bin (that will also occupy 2 bits with possible values 0, 1, 2 or 3).
 *     (the score is written to KeyPoint::score and is used to retain best nfeatures features);
 *     FAST_SCORE is alternative value of the parameter that produces slightly less stable keypoints,
 *     but it is a little faster to compute.
 *     pyramid layers the perceived image area covered by a feature will be larger.
 */
+ (ORB*)create:(int)nfeatures scaleFactor:(float)scaleFactor nlevels:(int)nlevels edgeThreshold:(int)edgeThreshold firstLevel:(int)firstLevel WTA_K:(int)WTA_K NS_SWIFT_NAME(create(nfeatures:scaleFactor:nlevels:edgeThreshold:firstLevel:WTA_K:));

/**
 * The ORB constructor
 *
 * @param nfeatures The maximum number of features to retain.
 * @param scaleFactor Pyramid decimation ratio, greater than 1. scaleFactor==2 means the classical
 *     pyramid, where each next level has 4x less pixels than the previous, but such a big scale factor
 *     will degrade feature matching scores dramatically. On the other hand, too close to 1 scale factor
 *     will mean that to cover certain scale range you will need more pyramid levels and so the speed
 *     will suffer.
 * @param nlevels The number of pyramid levels. The smallest level will have linear size equal to
 *     input_image_linear_size/pow(scaleFactor, nlevels - firstLevel).
 * @param edgeThreshold This is size of the border where the features are not detected. It should
 *     roughly match the patchSize parameter.
 * @param firstLevel The level of pyramid to put source image to. Previous layers are filled
 *     with upscaled source image.
 *     default value 2 means the BRIEF where we take a random point pair and compare their brightnesses,
 *     so we get 0/1 response. Other possible values are 3 and 4. For example, 3 means that we take 3
 *     random points (of course, those point coordinates are random, but they are generated from the
 *     pre-defined seed, so each element of BRIEF descriptor is computed deterministically from the pixel
 *     rectangle), find point of maximum brightness and output index of the winner (0, 1 or 2). Such
 *     output will occupy 2 bits, and therefore it will need a special variant of Hamming distance,
 *     denoted as NORM_HAMMING2 (2 bits per bin). When WTA_K=4, we take 4 random points to compute each
 *     bin (that will also occupy 2 bits with possible values 0, 1, 2 or 3).
 *     (the score is written to KeyPoint::score and is used to retain best nfeatures features);
 *     FAST_SCORE is alternative value of the parameter that produces slightly less stable keypoints,
 *     but it is a little faster to compute.
 *     pyramid layers the perceived image area covered by a feature will be larger.
 */
+ (ORB*)create:(int)nfeatures scaleFactor:(float)scaleFactor nlevels:(int)nlevels edgeThreshold:(int)edgeThreshold firstLevel:(int)firstLevel NS_SWIFT_NAME(create(nfeatures:scaleFactor:nlevels:edgeThreshold:firstLevel:));

/**
 * The ORB constructor
 *
 * @param nfeatures The maximum number of features to retain.
 * @param scaleFactor Pyramid decimation ratio, greater than 1. scaleFactor==2 means the classical
 *     pyramid, where each next level has 4x less pixels than the previous, but such a big scale factor
 *     will degrade feature matching scores dramatically. On the other hand, too close to 1 scale factor
 *     will mean that to cover certain scale range you will need more pyramid levels and so the speed
 *     will suffer.
 * @param nlevels The number of pyramid levels. The smallest level will have linear size equal to
 *     input_image_linear_size/pow(scaleFactor, nlevels - firstLevel).
 * @param edgeThreshold This is size of the border where the features are not detected. It should
 *     roughly match the patchSize parameter.
 *     with upscaled source image.
 *     default value 2 means the BRIEF where we take a random point pair and compare their brightnesses,
 *     so we get 0/1 response. Other possible values are 3 and 4. For example, 3 means that we take 3
 *     random points (of course, those point coordinates are random, but they are generated from the
 *     pre-defined seed, so each element of BRIEF descriptor is computed deterministically from the pixel
 *     rectangle), find point of maximum brightness and output index of the winner (0, 1 or 2). Such
 *     output will occupy 2 bits, and therefore it will need a special variant of Hamming distance,
 *     denoted as NORM_HAMMING2 (2 bits per bin). When WTA_K=4, we take 4 random points to compute each
 *     bin (that will also occupy 2 bits with possible values 0, 1, 2 or 3).
 *     (the score is written to KeyPoint::score and is used to retain best nfeatures features);
 *     FAST_SCORE is alternative value of the parameter that produces slightly less stable keypoints,
 *     but it is a little faster to compute.
 *     pyramid layers the perceived image area covered by a feature will be larger.
 */
+ (ORB*)create:(int)nfeatures scaleFactor:(float)scaleFactor nlevels:(int)nlevels edgeThreshold:(int)edgeThreshold NS_SWIFT_NAME(create(nfeatures:scaleFactor:nlevels:edgeThreshold:));

/**
 * The ORB constructor
 *
 * @param nfeatures The maximum number of features to retain.
 * @param scaleFactor Pyramid decimation ratio, greater than 1. scaleFactor==2 means the classical
 *     pyramid, where each next level has 4x less pixels than the previous, but such a big scale factor
 *     will degrade feature matching scores dramatically. On the other hand, too close to 1 scale factor
 *     will mean that to cover certain scale range you will need more pyramid levels and so the speed
 *     will suffer.
 * @param nlevels The number of pyramid levels. The smallest level will have linear size equal to
 *     input_image_linear_size/pow(scaleFactor, nlevels - firstLevel).
 *     roughly match the patchSize parameter.
 *     with upscaled source image.
 *     default value 2 means the BRIEF where we take a random point pair and compare their brightnesses,
 *     so we get 0/1 response. Other possible values are 3 and 4. For example, 3 means that we take 3
 *     random points (of course, those point coordinates are random, but they are generated from the
 *     pre-defined seed, so each element of BRIEF descriptor is computed deterministically from the pixel
 *     rectangle), find point of maximum brightness and output index of the winner (0, 1 or 2). Such
 *     output will occupy 2 bits, and therefore it will need a special variant of Hamming distance,
 *     denoted as NORM_HAMMING2 (2 bits per bin). When WTA_K=4, we take 4 random points to compute each
 *     bin (that will also occupy 2 bits with possible values 0, 1, 2 or 3).
 *     (the score is written to KeyPoint::score and is used to retain best nfeatures features);
 *     FAST_SCORE is alternative value of the parameter that produces slightly less stable keypoints,
 *     but it is a little faster to compute.
 *     pyramid layers the perceived image area covered by a feature will be larger.
 */
+ (ORB*)create:(int)nfeatures scaleFactor:(float)scaleFactor nlevels:(int)nlevels NS_SWIFT_NAME(create(nfeatures:scaleFactor:nlevels:));

/**
 * The ORB constructor
 *
 * @param nfeatures The maximum number of features to retain.
 * @param scaleFactor Pyramid decimation ratio, greater than 1. scaleFactor==2 means the classical
 *     pyramid, where each next level has 4x less pixels than the previous, but such a big scale factor
 *     will degrade feature matching scores dramatically. On the other hand, too close to 1 scale factor
 *     will mean that to cover certain scale range you will need more pyramid levels and so the speed
 *     will suffer.
 *     input_image_linear_size/pow(scaleFactor, nlevels - firstLevel).
 *     roughly match the patchSize parameter.
 *     with upscaled source image.
 *     default value 2 means the BRIEF where we take a random point pair and compare their brightnesses,
 *     so we get 0/1 response. Other possible values are 3 and 4. For example, 3 means that we take 3
 *     random points (of course, those point coordinates are random, but they are generated from the
 *     pre-defined seed, so each element of BRIEF descriptor is computed deterministically from the pixel
 *     rectangle), find point of maximum brightness and output index of the winner (0, 1 or 2). Such
 *     output will occupy 2 bits, and therefore it will need a special variant of Hamming distance,
 *     denoted as NORM_HAMMING2 (2 bits per bin). When WTA_K=4, we take 4 random points to compute each
 *     bin (that will also occupy 2 bits with possible values 0, 1, 2 or 3).
 *     (the score is written to KeyPoint::score and is used to retain best nfeatures features);
 *     FAST_SCORE is alternative value of the parameter that produces slightly less stable keypoints,
 *     but it is a little faster to compute.
 *     pyramid layers the perceived image area covered by a feature will be larger.
 */
+ (ORB*)create:(int)nfeatures scaleFactor:(float)scaleFactor NS_SWIFT_NAME(create(nfeatures:scaleFactor:));

/**
 * The ORB constructor
 *
 * @param nfeatures The maximum number of features to retain.
 *     pyramid, where each next level has 4x less pixels than the previous, but such a big scale factor
 *     will degrade feature matching scores dramatically. On the other hand, too close to 1 scale factor
 *     will mean that to cover certain scale range you will need more pyramid levels and so the speed
 *     will suffer.
 *     input_image_linear_size/pow(scaleFactor, nlevels - firstLevel).
 *     roughly match the patchSize parameter.
 *     with upscaled source image.
 *     default value 2 means the BRIEF where we take a random point pair and compare their brightnesses,
 *     so we get 0/1 response. Other possible values are 3 and 4. For example, 3 means that we take 3
 *     random points (of course, those point coordinates are random, but they are generated from the
 *     pre-defined seed, so each element of BRIEF descriptor is computed deterministically from the pixel
 *     rectangle), find point of maximum brightness and output index of the winner (0, 1 or 2). Such
 *     output will occupy 2 bits, and therefore it will need a special variant of Hamming distance,
 *     denoted as NORM_HAMMING2 (2 bits per bin). When WTA_K=4, we take 4 random points to compute each
 *     bin (that will also occupy 2 bits with possible values 0, 1, 2 or 3).
 *     (the score is written to KeyPoint::score and is used to retain best nfeatures features);
 *     FAST_SCORE is alternative value of the parameter that produces slightly less stable keypoints,
 *     but it is a little faster to compute.
 *     pyramid layers the perceived image area covered by a feature will be larger.
 */
+ (ORB*)create:(int)nfeatures NS_SWIFT_NAME(create(nfeatures:));

/**
 * The ORB constructor
 *
 *     pyramid, where each next level has 4x less pixels than the previous, but such a big scale factor
 *     will degrade feature matching scores dramatically. On the other hand, too close to 1 scale factor
 *     will mean that to cover certain scale range you will need more pyramid levels and so the speed
 *     will suffer.
 *     input_image_linear_size/pow(scaleFactor, nlevels - firstLevel).
 *     roughly match the patchSize parameter.
 *     with upscaled source image.
 *     default value 2 means the BRIEF where we take a random point pair and compare their brightnesses,
 *     so we get 0/1 response. Other possible values are 3 and 4. For example, 3 means that we take 3
 *     random points (of course, those point coordinates are random, but they are generated from the
 *     pre-defined seed, so each element of BRIEF descriptor is computed deterministically from the pixel
 *     rectangle), find point of maximum brightness and output index of the winner (0, 1 or 2). Such
 *     output will occupy 2 bits, and therefore it will need a special variant of Hamming distance,
 *     denoted as NORM_HAMMING2 (2 bits per bin). When WTA_K=4, we take 4 random points to compute each
 *     bin (that will also occupy 2 bits with possible values 0, 1, 2 or 3).
 *     (the score is written to KeyPoint::score and is used to retain best nfeatures features);
 *     FAST_SCORE is alternative value of the parameter that produces slightly less stable keypoints,
 *     but it is a little faster to compute.
 *     pyramid layers the perceived image area covered by a feature will be larger.
 */
+ (ORB*)create NS_SWIFT_NAME(create());


//
//  String cv::ORB::getDefaultName()
//
- (NSString*)getDefaultName NS_SWIFT_NAME(getDefaultName());


//
//  double cv::ORB::getScaleFactor()
//
- (double)getScaleFactor NS_SWIFT_NAME(getScaleFactor());


//
//  int cv::ORB::getEdgeThreshold()
//
- (int)getEdgeThreshold NS_SWIFT_NAME(getEdgeThreshold());


//
//  int cv::ORB::getFastThreshold()
//
- (int)getFastThreshold NS_SWIFT_NAME(getFastThreshold());


//
//  int cv::ORB::getFirstLevel()
//
- (int)getFirstLevel NS_SWIFT_NAME(getFirstLevel());


//
//  int cv::ORB::getMaxFeatures()
//
- (int)getMaxFeatures NS_SWIFT_NAME(getMaxFeatures());


//
//  int cv::ORB::getNLevels()
//
- (int)getNLevels NS_SWIFT_NAME(getNLevels());


//
//  int cv::ORB::getPatchSize()
//
- (int)getPatchSize NS_SWIFT_NAME(getPatchSize());


//
//  int cv::ORB::getWTA_K()
//
- (int)getWTA_K NS_SWIFT_NAME(getWTA_K());


//
//  void cv::ORB::setEdgeThreshold(int edgeThreshold)
//
- (void)setEdgeThreshold:(int)edgeThreshold NS_SWIFT_NAME(setEdgeThreshold(edgeThreshold:));


//
//  void cv::ORB::setFastThreshold(int fastThreshold)
//
- (void)setFastThreshold:(int)fastThreshold NS_SWIFT_NAME(setFastThreshold(fastThreshold:));


//
//  void cv::ORB::setFirstLevel(int firstLevel)
//
- (void)setFirstLevel:(int)firstLevel NS_SWIFT_NAME(setFirstLevel(firstLevel:));


//
//  void cv::ORB::setMaxFeatures(int maxFeatures)
//
- (void)setMaxFeatures:(int)maxFeatures NS_SWIFT_NAME(setMaxFeatures(maxFeatures:));


//
//  void cv::ORB::setNLevels(int nlevels)
//
- (void)setNLevels:(int)nlevels NS_SWIFT_NAME(setNLevels(nlevels:));


//
//  void cv::ORB::setPatchSize(int patchSize)
//
- (void)setPatchSize:(int)patchSize NS_SWIFT_NAME(setPatchSize(patchSize:));


//
//  void cv::ORB::setScaleFactor(double scaleFactor)
//
- (void)setScaleFactor:(double)scaleFactor NS_SWIFT_NAME(setScaleFactor(scaleFactor:));


//
//  void cv::ORB::setScoreType(ORB_ScoreType scoreType)
//
- (void)setScoreType:(ScoreType)scoreType NS_SWIFT_NAME(setScoreType(scoreType:));


//
//  void cv::ORB::setWTA_K(int wta_k)
//
- (void)setWTA_K:(int)wta_k NS_SWIFT_NAME(setWTA_K(wta_k:));



@end

NS_ASSUME_NONNULL_END



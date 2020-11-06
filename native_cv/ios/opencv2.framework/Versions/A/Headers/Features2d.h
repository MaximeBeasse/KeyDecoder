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

@class ByteVector;
@class DMatch;
@class KeyPoint;
@class Mat;
@class Scalar;


// C++: enum DrawMatchesFlags
typedef NS_ENUM(int, DrawMatchesFlags) {
    DrawMatchesFlags_DEFAULT = 0,
    DrawMatchesFlags_DRAW_OVER_OUTIMG = 1,
    DrawMatchesFlags_NOT_DRAW_SINGLE_POINTS = 2,
    DrawMatchesFlags_DRAW_RICH_KEYPOINTS = 4
};



NS_ASSUME_NONNULL_BEGIN

// C++: class Features2d
/**
 * The Features2d module
 *
 * Member classes: `Feature2D`, `SIFT`, `BRISK`, `ORB`, `MSER`, `FastFeatureDetector`, `AgastFeatureDetector`, `GFTTDetector`, `SimpleBlobDetector`, `Params`, `KAZE`, `AKAZE`, `DescriptorMatcher`, `BFMatcher`, `FlannBasedMatcher`, `BOWTrainer`, `BOWKMeansTrainer`, `BOWImgDescriptorExtractor`
 *
 * Member enums: `ScoreType`, `FastDetectorType`, `AgastDetectorType`, `DiffusivityType`, `DescriptorType`, `MatcherType`, `DrawMatchesFlags`
 */
CV_EXPORTS @interface Features2d : NSObject

#pragma mark - Methods


//
//  void cv::drawKeypoints(Mat image, vector_KeyPoint keypoints, Mat& outImage, Scalar color = Scalar::all(-1), DrawMatchesFlags flags = DrawMatchesFlags::DEFAULT)
//
/**
 * Draws keypoints.
 *
 * @param image Source image.
 * @param keypoints Keypoints from the source image.
 * @param outImage Output image. Its content depends on the flags value defining what is drawn in the
 * output image. See possible flags bit values below.
 * @param color Color of keypoints.
 * @param flags Flags setting drawing features. Possible flags bit values are defined by
 * DrawMatchesFlags. See details above in drawMatches .
 *
 * @note
 * For Python API, flags are modified as cv.DRAW_MATCHES_FLAGS_DEFAULT,
 * cv.DRAW_MATCHES_FLAGS_DRAW_RICH_KEYPOINTS, cv.DRAW_MATCHES_FLAGS_DRAW_OVER_OUTIMG,
 * cv.DRAW_MATCHES_FLAGS_NOT_DRAW_SINGLE_POINTS
 */
+ (void)drawKeypoints:(Mat*)image keypoints:(NSArray<KeyPoint*>*)keypoints outImage:(Mat*)outImage color:(Scalar*)color flags:(DrawMatchesFlags)flags NS_SWIFT_NAME(drawKeypoints(image:keypoints:outImage:color:flags:));

/**
 * Draws keypoints.
 *
 * @param image Source image.
 * @param keypoints Keypoints from the source image.
 * @param outImage Output image. Its content depends on the flags value defining what is drawn in the
 * output image. See possible flags bit values below.
 * @param color Color of keypoints.
 * DrawMatchesFlags. See details above in drawMatches .
 *
 * @note
 * For Python API, flags are modified as cv.DRAW_MATCHES_FLAGS_DEFAULT,
 * cv.DRAW_MATCHES_FLAGS_DRAW_RICH_KEYPOINTS, cv.DRAW_MATCHES_FLAGS_DRAW_OVER_OUTIMG,
 * cv.DRAW_MATCHES_FLAGS_NOT_DRAW_SINGLE_POINTS
 */
+ (void)drawKeypoints:(Mat*)image keypoints:(NSArray<KeyPoint*>*)keypoints outImage:(Mat*)outImage color:(Scalar*)color NS_SWIFT_NAME(drawKeypoints(image:keypoints:outImage:color:));

/**
 * Draws keypoints.
 *
 * @param image Source image.
 * @param keypoints Keypoints from the source image.
 * @param outImage Output image. Its content depends on the flags value defining what is drawn in the
 * output image. See possible flags bit values below.
 * DrawMatchesFlags. See details above in drawMatches .
 *
 * @note
 * For Python API, flags are modified as cv.DRAW_MATCHES_FLAGS_DEFAULT,
 * cv.DRAW_MATCHES_FLAGS_DRAW_RICH_KEYPOINTS, cv.DRAW_MATCHES_FLAGS_DRAW_OVER_OUTIMG,
 * cv.DRAW_MATCHES_FLAGS_NOT_DRAW_SINGLE_POINTS
 */
+ (void)drawKeypoints:(Mat*)image keypoints:(NSArray<KeyPoint*>*)keypoints outImage:(Mat*)outImage NS_SWIFT_NAME(drawKeypoints(image:keypoints:outImage:));


//
//  void cv::drawMatches(Mat img1, vector_KeyPoint keypoints1, Mat img2, vector_KeyPoint keypoints2, vector_DMatch matches1to2, Mat& outImg, Scalar matchColor = Scalar::all(-1), Scalar singlePointColor = Scalar::all(-1), vector_char matchesMask = std::vector<char>(), DrawMatchesFlags flags = DrawMatchesFlags::DEFAULT)
//
/**
 * Draws the found matches of keypoints from two images.
 *
 * @param img1 First source image.
 * @param keypoints1 Keypoints from the first source image.
 * @param img2 Second source image.
 * @param keypoints2 Keypoints from the second source image.
 * @param matches1to2 Matches from the first image to the second one, which means that keypoints1[i]
 * has a corresponding point in keypoints2[matches[i]] .
 * @param outImg Output image. Its content depends on the flags value defining what is drawn in the
 * output image. See possible flags bit values below.
 * @param matchColor Color of matches (lines and connected keypoints). If matchColor==Scalar::all(-1)
 * , the color is generated randomly.
 * @param singlePointColor Color of single keypoints (circles), which means that keypoints do not
 * have the matches. If singlePointColor==Scalar::all(-1) , the color is generated randomly.
 * @param matchesMask Mask determining which matches are drawn. If the mask is empty, all matches are
 * drawn.
 * @param flags Flags setting drawing features. Possible flags bit values are defined by
 * DrawMatchesFlags.
 *
 * This function draws matches of keypoints from two images in the output image. Match is a line
 * connecting two keypoints (circles). See cv::DrawMatchesFlags.
 */
+ (void)drawMatches:(Mat*)img1 keypoints1:(NSArray<KeyPoint*>*)keypoints1 img2:(Mat*)img2 keypoints2:(NSArray<KeyPoint*>*)keypoints2 matches1to2:(NSArray<DMatch*>*)matches1to2 outImg:(Mat*)outImg matchColor:(Scalar*)matchColor singlePointColor:(Scalar*)singlePointColor matchesMask:(ByteVector*)matchesMask flags:(DrawMatchesFlags)flags NS_SWIFT_NAME(drawMatches(img1:keypoints1:img2:keypoints2:matches1to2:outImg:matchColor:singlePointColor:matchesMask:flags:));

/**
 * Draws the found matches of keypoints from two images.
 *
 * @param img1 First source image.
 * @param keypoints1 Keypoints from the first source image.
 * @param img2 Second source image.
 * @param keypoints2 Keypoints from the second source image.
 * @param matches1to2 Matches from the first image to the second one, which means that keypoints1[i]
 * has a corresponding point in keypoints2[matches[i]] .
 * @param outImg Output image. Its content depends on the flags value defining what is drawn in the
 * output image. See possible flags bit values below.
 * @param matchColor Color of matches (lines and connected keypoints). If matchColor==Scalar::all(-1)
 * , the color is generated randomly.
 * @param singlePointColor Color of single keypoints (circles), which means that keypoints do not
 * have the matches. If singlePointColor==Scalar::all(-1) , the color is generated randomly.
 * @param matchesMask Mask determining which matches are drawn. If the mask is empty, all matches are
 * drawn.
 * DrawMatchesFlags.
 *
 * This function draws matches of keypoints from two images in the output image. Match is a line
 * connecting two keypoints (circles). See cv::DrawMatchesFlags.
 */
+ (void)drawMatches:(Mat*)img1 keypoints1:(NSArray<KeyPoint*>*)keypoints1 img2:(Mat*)img2 keypoints2:(NSArray<KeyPoint*>*)keypoints2 matches1to2:(NSArray<DMatch*>*)matches1to2 outImg:(Mat*)outImg matchColor:(Scalar*)matchColor singlePointColor:(Scalar*)singlePointColor matchesMask:(ByteVector*)matchesMask NS_SWIFT_NAME(drawMatches(img1:keypoints1:img2:keypoints2:matches1to2:outImg:matchColor:singlePointColor:matchesMask:));

/**
 * Draws the found matches of keypoints from two images.
 *
 * @param img1 First source image.
 * @param keypoints1 Keypoints from the first source image.
 * @param img2 Second source image.
 * @param keypoints2 Keypoints from the second source image.
 * @param matches1to2 Matches from the first image to the second one, which means that keypoints1[i]
 * has a corresponding point in keypoints2[matches[i]] .
 * @param outImg Output image. Its content depends on the flags value defining what is drawn in the
 * output image. See possible flags bit values below.
 * @param matchColor Color of matches (lines and connected keypoints). If matchColor==Scalar::all(-1)
 * , the color is generated randomly.
 * @param singlePointColor Color of single keypoints (circles), which means that keypoints do not
 * have the matches. If singlePointColor==Scalar::all(-1) , the color is generated randomly.
 * drawn.
 * DrawMatchesFlags.
 *
 * This function draws matches of keypoints from two images in the output image. Match is a line
 * connecting two keypoints (circles). See cv::DrawMatchesFlags.
 */
+ (void)drawMatches:(Mat*)img1 keypoints1:(NSArray<KeyPoint*>*)keypoints1 img2:(Mat*)img2 keypoints2:(NSArray<KeyPoint*>*)keypoints2 matches1to2:(NSArray<DMatch*>*)matches1to2 outImg:(Mat*)outImg matchColor:(Scalar*)matchColor singlePointColor:(Scalar*)singlePointColor NS_SWIFT_NAME(drawMatches(img1:keypoints1:img2:keypoints2:matches1to2:outImg:matchColor:singlePointColor:));

/**
 * Draws the found matches of keypoints from two images.
 *
 * @param img1 First source image.
 * @param keypoints1 Keypoints from the first source image.
 * @param img2 Second source image.
 * @param keypoints2 Keypoints from the second source image.
 * @param matches1to2 Matches from the first image to the second one, which means that keypoints1[i]
 * has a corresponding point in keypoints2[matches[i]] .
 * @param outImg Output image. Its content depends on the flags value defining what is drawn in the
 * output image. See possible flags bit values below.
 * @param matchColor Color of matches (lines and connected keypoints). If matchColor==Scalar::all(-1)
 * , the color is generated randomly.
 * have the matches. If singlePointColor==Scalar::all(-1) , the color is generated randomly.
 * drawn.
 * DrawMatchesFlags.
 *
 * This function draws matches of keypoints from two images in the output image. Match is a line
 * connecting two keypoints (circles). See cv::DrawMatchesFlags.
 */
+ (void)drawMatches:(Mat*)img1 keypoints1:(NSArray<KeyPoint*>*)keypoints1 img2:(Mat*)img2 keypoints2:(NSArray<KeyPoint*>*)keypoints2 matches1to2:(NSArray<DMatch*>*)matches1to2 outImg:(Mat*)outImg matchColor:(Scalar*)matchColor NS_SWIFT_NAME(drawMatches(img1:keypoints1:img2:keypoints2:matches1to2:outImg:matchColor:));

/**
 * Draws the found matches of keypoints from two images.
 *
 * @param img1 First source image.
 * @param keypoints1 Keypoints from the first source image.
 * @param img2 Second source image.
 * @param keypoints2 Keypoints from the second source image.
 * @param matches1to2 Matches from the first image to the second one, which means that keypoints1[i]
 * has a corresponding point in keypoints2[matches[i]] .
 * @param outImg Output image. Its content depends on the flags value defining what is drawn in the
 * output image. See possible flags bit values below.
 * , the color is generated randomly.
 * have the matches. If singlePointColor==Scalar::all(-1) , the color is generated randomly.
 * drawn.
 * DrawMatchesFlags.
 *
 * This function draws matches of keypoints from two images in the output image. Match is a line
 * connecting two keypoints (circles). See cv::DrawMatchesFlags.
 */
+ (void)drawMatches:(Mat*)img1 keypoints1:(NSArray<KeyPoint*>*)keypoints1 img2:(Mat*)img2 keypoints2:(NSArray<KeyPoint*>*)keypoints2 matches1to2:(NSArray<DMatch*>*)matches1to2 outImg:(Mat*)outImg NS_SWIFT_NAME(drawMatches(img1:keypoints1:img2:keypoints2:matches1to2:outImg:));


//
//  void cv::drawMatches(Mat img1, vector_KeyPoint keypoints1, Mat img2, vector_KeyPoint keypoints2, vector_vector_DMatch matches1to2, Mat& outImg, Scalar matchColor = Scalar::all(-1), Scalar singlePointColor = Scalar::all(-1), vector_vector_char matchesMask = std::vector<std::vector<char> >(), DrawMatchesFlags flags = DrawMatchesFlags::DEFAULT)
//
+ (void)drawMatchesKnn:(Mat*)img1 keypoints1:(NSArray<KeyPoint*>*)keypoints1 img2:(Mat*)img2 keypoints2:(NSArray<KeyPoint*>*)keypoints2 matches1to2:(NSArray<NSArray<DMatch*>*>*)matches1to2 outImg:(Mat*)outImg matchColor:(Scalar*)matchColor singlePointColor:(Scalar*)singlePointColor matchesMask:(NSArray<ByteVector*>*)matchesMask flags:(DrawMatchesFlags)flags NS_SWIFT_NAME(drawMatches(img1:keypoints1:img2:keypoints2:matches1to2:outImg:matchColor:singlePointColor:matchesMask:flags:));

+ (void)drawMatchesKnn:(Mat*)img1 keypoints1:(NSArray<KeyPoint*>*)keypoints1 img2:(Mat*)img2 keypoints2:(NSArray<KeyPoint*>*)keypoints2 matches1to2:(NSArray<NSArray<DMatch*>*>*)matches1to2 outImg:(Mat*)outImg matchColor:(Scalar*)matchColor singlePointColor:(Scalar*)singlePointColor matchesMask:(NSArray<ByteVector*>*)matchesMask NS_SWIFT_NAME(drawMatches(img1:keypoints1:img2:keypoints2:matches1to2:outImg:matchColor:singlePointColor:matchesMask:));

+ (void)drawMatchesKnn:(Mat*)img1 keypoints1:(NSArray<KeyPoint*>*)keypoints1 img2:(Mat*)img2 keypoints2:(NSArray<KeyPoint*>*)keypoints2 matches1to2:(NSArray<NSArray<DMatch*>*>*)matches1to2 outImg:(Mat*)outImg matchColor:(Scalar*)matchColor singlePointColor:(Scalar*)singlePointColor NS_SWIFT_NAME(drawMatches(img1:keypoints1:img2:keypoints2:matches1to2:outImg:matchColor:singlePointColor:));

+ (void)drawMatchesKnn:(Mat*)img1 keypoints1:(NSArray<KeyPoint*>*)keypoints1 img2:(Mat*)img2 keypoints2:(NSArray<KeyPoint*>*)keypoints2 matches1to2:(NSArray<NSArray<DMatch*>*>*)matches1to2 outImg:(Mat*)outImg matchColor:(Scalar*)matchColor NS_SWIFT_NAME(drawMatches(img1:keypoints1:img2:keypoints2:matches1to2:outImg:matchColor:));

+ (void)drawMatchesKnn:(Mat*)img1 keypoints1:(NSArray<KeyPoint*>*)keypoints1 img2:(Mat*)img2 keypoints2:(NSArray<KeyPoint*>*)keypoints2 matches1to2:(NSArray<NSArray<DMatch*>*>*)matches1to2 outImg:(Mat*)outImg NS_SWIFT_NAME(drawMatches(img1:keypoints1:img2:keypoints2:matches1to2:outImg:));



@end

NS_ASSUME_NONNULL_END



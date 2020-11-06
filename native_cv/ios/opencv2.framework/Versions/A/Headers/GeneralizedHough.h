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

@class Mat;
@class Point2i;



NS_ASSUME_NONNULL_BEGIN

// C++: class GeneralizedHough
/**
 * finds arbitrary template in the grayscale image using Generalized Hough Transform
 *
 * Member of `Imgproc`
 */
CV_EXPORTS @interface GeneralizedHough : Algorithm


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::GeneralizedHough> nativePtrGeneralizedHough;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::GeneralizedHough>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::GeneralizedHough>)nativePtr;
#endif


#pragma mark - Methods


//
//  double cv::GeneralizedHough::getDp()
//
- (double)getDp NS_SWIFT_NAME(getDp());


//
//  double cv::GeneralizedHough::getMinDist()
//
- (double)getMinDist NS_SWIFT_NAME(getMinDist());


//
//  int cv::GeneralizedHough::getCannyHighThresh()
//
- (int)getCannyHighThresh NS_SWIFT_NAME(getCannyHighThresh());


//
//  int cv::GeneralizedHough::getCannyLowThresh()
//
- (int)getCannyLowThresh NS_SWIFT_NAME(getCannyLowThresh());


//
//  int cv::GeneralizedHough::getMaxBufferSize()
//
- (int)getMaxBufferSize NS_SWIFT_NAME(getMaxBufferSize());


//
//  void cv::GeneralizedHough::detect(Mat edges, Mat dx, Mat dy, Mat& positions, Mat& votes = Mat())
//
- (void)detect:(Mat*)edges dx:(Mat*)dx dy:(Mat*)dy positions:(Mat*)positions votes:(Mat*)votes NS_SWIFT_NAME(detect(edges:dx:dy:positions:votes:));

- (void)detect:(Mat*)edges dx:(Mat*)dx dy:(Mat*)dy positions:(Mat*)positions NS_SWIFT_NAME(detect(edges:dx:dy:positions:));


//
//  void cv::GeneralizedHough::detect(Mat image, Mat& positions, Mat& votes = Mat())
//
- (void)detect:(Mat*)image positions:(Mat*)positions votes:(Mat*)votes NS_SWIFT_NAME(detect(image:positions:votes:));

- (void)detect:(Mat*)image positions:(Mat*)positions NS_SWIFT_NAME(detect(image:positions:));


//
//  void cv::GeneralizedHough::setCannyHighThresh(int cannyHighThresh)
//
- (void)setCannyHighThresh:(int)cannyHighThresh NS_SWIFT_NAME(setCannyHighThresh(cannyHighThresh:));


//
//  void cv::GeneralizedHough::setCannyLowThresh(int cannyLowThresh)
//
- (void)setCannyLowThresh:(int)cannyLowThresh NS_SWIFT_NAME(setCannyLowThresh(cannyLowThresh:));


//
//  void cv::GeneralizedHough::setDp(double dp)
//
- (void)setDp:(double)dp NS_SWIFT_NAME(setDp(dp:));


//
//  void cv::GeneralizedHough::setMaxBufferSize(int maxBufferSize)
//
- (void)setMaxBufferSize:(int)maxBufferSize NS_SWIFT_NAME(setMaxBufferSize(maxBufferSize:));


//
//  void cv::GeneralizedHough::setMinDist(double minDist)
//
- (void)setMinDist:(double)minDist NS_SWIFT_NAME(setMinDist(minDist:));


//
//  void cv::GeneralizedHough::setTemplate(Mat edges, Mat dx, Mat dy, Point templCenter = Point(-1, -1))
//
- (void)setTemplate:(Mat*)edges dx:(Mat*)dx dy:(Mat*)dy templCenter:(Point2i*)templCenter NS_SWIFT_NAME(setTemplate(edges:dx:dy:templCenter:));

- (void)setTemplate:(Mat*)edges dx:(Mat*)dx dy:(Mat*)dy NS_SWIFT_NAME(setTemplate(edges:dx:dy:));


//
//  void cv::GeneralizedHough::setTemplate(Mat templ, Point templCenter = Point(-1, -1))
//
- (void)setTemplate:(Mat*)templ templCenter:(Point2i*)templCenter NS_SWIFT_NAME(setTemplate(templ:templCenter:));

- (void)setTemplate:(Mat*)templ NS_SWIFT_NAME(setTemplate(templ:));



@end

NS_ASSUME_NONNULL_END



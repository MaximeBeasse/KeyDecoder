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






NS_ASSUME_NONNULL_BEGIN

// C++: class Params
/**
 * The Params module
 *
 * Member of `Features2d`
 */
CV_EXPORTS @interface Params : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::SimpleBlobDetector::Params> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::SimpleBlobDetector::Params>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::SimpleBlobDetector::Params>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::SimpleBlobDetector::Params::Params()
//
- (instancetype)init;


    //
    // C++: float cv::SimpleBlobDetector::Params::thresholdStep
    //

@property float thresholdStep;

    //
    // C++: float cv::SimpleBlobDetector::Params::minThreshold
    //

@property float minThreshold;

    //
    // C++: float cv::SimpleBlobDetector::Params::maxThreshold
    //

@property float maxThreshold;

    //
    // C++: size_t cv::SimpleBlobDetector::Params::minRepeatability
    //

@property size_t minRepeatability;

    //
    // C++: float cv::SimpleBlobDetector::Params::minDistBetweenBlobs
    //

@property float minDistBetweenBlobs;

    //
    // C++: bool cv::SimpleBlobDetector::Params::filterByColor
    //

@property BOOL filterByColor;

    //
    // C++: uchar cv::SimpleBlobDetector::Params::blobColor
    //

@property unsigned char blobColor;

    //
    // C++: bool cv::SimpleBlobDetector::Params::filterByArea
    //

@property BOOL filterByArea;

    //
    // C++: float cv::SimpleBlobDetector::Params::minArea
    //

@property float minArea;

    //
    // C++: float cv::SimpleBlobDetector::Params::maxArea
    //

@property float maxArea;

    //
    // C++: bool cv::SimpleBlobDetector::Params::filterByCircularity
    //

@property BOOL filterByCircularity;

    //
    // C++: float cv::SimpleBlobDetector::Params::minCircularity
    //

@property float minCircularity;

    //
    // C++: float cv::SimpleBlobDetector::Params::maxCircularity
    //

@property float maxCircularity;

    //
    // C++: bool cv::SimpleBlobDetector::Params::filterByInertia
    //

@property BOOL filterByInertia;

    //
    // C++: float cv::SimpleBlobDetector::Params::minInertiaRatio
    //

@property float minInertiaRatio;

    //
    // C++: float cv::SimpleBlobDetector::Params::maxInertiaRatio
    //

@property float maxInertiaRatio;

    //
    // C++: bool cv::SimpleBlobDetector::Params::filterByConvexity
    //

@property BOOL filterByConvexity;

    //
    // C++: float cv::SimpleBlobDetector::Params::minConvexity
    //

@property float minConvexity;

    //
    // C++: float cv::SimpleBlobDetector::Params::maxConvexity
    //

@property float maxConvexity;


@end

NS_ASSUME_NONNULL_END



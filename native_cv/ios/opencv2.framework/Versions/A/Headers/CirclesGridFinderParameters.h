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


@class Size2f;


// C++: enum GridType
typedef NS_ENUM(int, GridType) {
    SYMMETRIC_GRID = 0,
    ASYMMETRIC_GRID = 1
};



NS_ASSUME_NONNULL_BEGIN

// C++: class CirclesGridFinderParameters
/**
 * The CirclesGridFinderParameters module
 *
 * Member of `Calib3d`
 */
CV_EXPORTS @interface CirclesGridFinderParameters : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::CirclesGridFinderParameters> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::CirclesGridFinderParameters>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::CirclesGridFinderParameters>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::CirclesGridFinderParameters::CirclesGridFinderParameters()
//
- (instancetype)init;


    //
    // C++: Size2f cv::CirclesGridFinderParameters::densityNeighborhoodSize
    //

@property Size2f* densityNeighborhoodSize;

    //
    // C++: float cv::CirclesGridFinderParameters::minDensity
    //

@property float minDensity;

    //
    // C++: int cv::CirclesGridFinderParameters::kmeansAttempts
    //

@property int kmeansAttempts;

    //
    // C++: int cv::CirclesGridFinderParameters::minDistanceToAddKeypoint
    //

@property int minDistanceToAddKeypoint;

    //
    // C++: int cv::CirclesGridFinderParameters::keypointScale
    //

@property int keypointScale;

    //
    // C++: float cv::CirclesGridFinderParameters::minGraphConfidence
    //

@property float minGraphConfidence;

    //
    // C++: float cv::CirclesGridFinderParameters::vertexGain
    //

@property float vertexGain;

    //
    // C++: float cv::CirclesGridFinderParameters::vertexPenalty
    //

@property float vertexPenalty;

    //
    // C++: float cv::CirclesGridFinderParameters::existingVertexGain
    //

@property float existingVertexGain;

    //
    // C++: float cv::CirclesGridFinderParameters::edgeGain
    //

@property float edgeGain;

    //
    // C++: float cv::CirclesGridFinderParameters::edgePenalty
    //

@property float edgePenalty;

    //
    // C++: float cv::CirclesGridFinderParameters::convexHullFactor
    //

@property float convexHullFactor;

    //
    // C++: float cv::CirclesGridFinderParameters::minRNGEdgeSwitchDist
    //

@property float minRNGEdgeSwitchDist;

    //
    // C++: float cv::CirclesGridFinderParameters::squareSize
    //

@property float squareSize;

    //
    // C++: float cv::CirclesGridFinderParameters::maxRectifiedDistance
    //

@property float maxRectifiedDistance;


@end

NS_ASSUME_NONNULL_END



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

// C++: class ParamGrid
/**
 * The structure represents the logarithmic grid range of statmodel parameters.
 *
 * It is used for optimizing statmodel accuracy by varying model parameters, the accuracy estimate
 * being computed by cross-validation.
 *
 * Member of `Ml`
 */
CV_EXPORTS @interface ParamGrid : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::ml::ParamGrid> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::ml::ParamGrid>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::ml::ParamGrid>)nativePtr;
#endif


#pragma mark - Methods


//
// static Ptr_ParamGrid cv::ml::ParamGrid::create(double minVal = 0., double maxVal = 0., double logstep = 1.)
//
/**
 * Creates a ParamGrid Ptr that can be given to the %SVM::trainAuto method
 *
 * @param minVal minimum value of the parameter grid
 * @param maxVal maximum value of the parameter grid
 * @param logstep Logarithmic step for iterating the statmodel parameter
 */
+ (ParamGrid*)create:(double)minVal maxVal:(double)maxVal logstep:(double)logstep NS_SWIFT_NAME(create(minVal:maxVal:logstep:));

/**
 * Creates a ParamGrid Ptr that can be given to the %SVM::trainAuto method
 *
 * @param minVal minimum value of the parameter grid
 * @param maxVal maximum value of the parameter grid
 */
+ (ParamGrid*)create:(double)minVal maxVal:(double)maxVal NS_SWIFT_NAME(create(minVal:maxVal:));

/**
 * Creates a ParamGrid Ptr that can be given to the %SVM::trainAuto method
 *
 * @param minVal minimum value of the parameter grid
 */
+ (ParamGrid*)create:(double)minVal NS_SWIFT_NAME(create(minVal:));

/**
 * Creates a ParamGrid Ptr that can be given to the %SVM::trainAuto method
 *
 */
+ (ParamGrid*)create NS_SWIFT_NAME(create());


    //
    // C++: double cv::ml::ParamGrid::minVal
    //

@property double minVal;

    //
    // C++: double cv::ml::ParamGrid::maxVal
    //

@property double maxVal;

    //
    // C++: double cv::ml::ParamGrid::logStep
    //

@property double logStep;


@end

NS_ASSUME_NONNULL_END



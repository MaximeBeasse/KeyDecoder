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
#import "Tonemap.h"





NS_ASSUME_NONNULL_BEGIN

// C++: class TonemapDrago
/**
 * Adaptive logarithmic mapping is a fast global tonemapping algorithm that scales the image in
 * logarithmic domain.
 *
 * Since it's a global operator the same function is applied to all the pixels, it is controlled by the
 * bias parameter.
 *
 * Optional saturation enhancement is possible as described in CITE: FL02 .
 *
 * For more information see CITE: DM03 .
 *
 * Member of `Photo`
 */
CV_EXPORTS @interface TonemapDrago : Tonemap


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::TonemapDrago> nativePtrTonemapDrago;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::TonemapDrago>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::TonemapDrago>)nativePtr;
#endif


#pragma mark - Methods


//
//  float cv::TonemapDrago::getBias()
//
- (float)getBias NS_SWIFT_NAME(getBias());


//
//  float cv::TonemapDrago::getSaturation()
//
- (float)getSaturation NS_SWIFT_NAME(getSaturation());


//
//  void cv::TonemapDrago::setBias(float bias)
//
- (void)setBias:(float)bias NS_SWIFT_NAME(setBias(bias:));


//
//  void cv::TonemapDrago::setSaturation(float saturation)
//
- (void)setSaturation:(float)saturation NS_SWIFT_NAME(setSaturation(saturation:));



@end

NS_ASSUME_NONNULL_END



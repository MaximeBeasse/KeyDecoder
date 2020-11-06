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

// C++: class TonemapReinhard
/**
 * This is a global tonemapping operator that models human visual system.
 *
 * Mapping function is controlled by adaptation parameter, that is computed using light adaptation and
 * color adaptation.
 *
 * For more information see CITE: RD05 .
 *
 * Member of `Photo`
 */
CV_EXPORTS @interface TonemapReinhard : Tonemap


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::TonemapReinhard> nativePtrTonemapReinhard;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::TonemapReinhard>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::TonemapReinhard>)nativePtr;
#endif


#pragma mark - Methods


//
//  float cv::TonemapReinhard::getColorAdaptation()
//
- (float)getColorAdaptation NS_SWIFT_NAME(getColorAdaptation());


//
//  float cv::TonemapReinhard::getIntensity()
//
- (float)getIntensity NS_SWIFT_NAME(getIntensity());


//
//  float cv::TonemapReinhard::getLightAdaptation()
//
- (float)getLightAdaptation NS_SWIFT_NAME(getLightAdaptation());


//
//  void cv::TonemapReinhard::setColorAdaptation(float color_adapt)
//
- (void)setColorAdaptation:(float)color_adapt NS_SWIFT_NAME(setColorAdaptation(color_adapt:));


//
//  void cv::TonemapReinhard::setIntensity(float intensity)
//
- (void)setIntensity:(float)intensity NS_SWIFT_NAME(setIntensity(intensity:));


//
//  void cv::TonemapReinhard::setLightAdaptation(float light_adapt)
//
- (void)setLightAdaptation:(float)light_adapt NS_SWIFT_NAME(setLightAdaptation(light_adapt:));



@end

NS_ASSUME_NONNULL_END



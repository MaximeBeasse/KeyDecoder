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

// C++: class TonemapMantiuk
/**
 * This algorithm transforms image to contrast using gradients on all levels of gaussian pyramid,
 * transforms contrast values to HVS response and scales the response. After this the image is
 * reconstructed from new contrast values.
 *
 * For more information see CITE: MM06 .
 *
 * Member of `Photo`
 */
CV_EXPORTS @interface TonemapMantiuk : Tonemap


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::TonemapMantiuk> nativePtrTonemapMantiuk;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::TonemapMantiuk>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::TonemapMantiuk>)nativePtr;
#endif


#pragma mark - Methods


//
//  float cv::TonemapMantiuk::getSaturation()
//
- (float)getSaturation NS_SWIFT_NAME(getSaturation());


//
//  float cv::TonemapMantiuk::getScale()
//
- (float)getScale NS_SWIFT_NAME(getScale());


//
//  void cv::TonemapMantiuk::setSaturation(float saturation)
//
- (void)setSaturation:(float)saturation NS_SWIFT_NAME(setSaturation(saturation:));


//
//  void cv::TonemapMantiuk::setScale(float scale)
//
- (void)setScale:(float)scale NS_SWIFT_NAME(setScale(scale:));



@end

NS_ASSUME_NONNULL_END



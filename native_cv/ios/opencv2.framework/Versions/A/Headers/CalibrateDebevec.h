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
#import "CalibrateCRF.h"





NS_ASSUME_NONNULL_BEGIN

// C++: class CalibrateDebevec
/**
 * Inverse camera response function is extracted for each brightness value by minimizing an objective
 * function as linear system. Objective function is constructed using pixel values on the same position
 * in all images, extra term is added to make the result smoother.
 *
 * For more information see CITE: DM97 .
 *
 * Member of `Photo`
 */
CV_EXPORTS @interface CalibrateDebevec : CalibrateCRF


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::CalibrateDebevec> nativePtrCalibrateDebevec;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::CalibrateDebevec>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::CalibrateDebevec>)nativePtr;
#endif


#pragma mark - Methods


//
//  bool cv::CalibrateDebevec::getRandom()
//
- (BOOL)getRandom NS_SWIFT_NAME(getRandom());


//
//  float cv::CalibrateDebevec::getLambda()
//
- (float)getLambda NS_SWIFT_NAME(getLambda());


//
//  int cv::CalibrateDebevec::getSamples()
//
- (int)getSamples NS_SWIFT_NAME(getSamples());


//
//  void cv::CalibrateDebevec::setLambda(float lambda)
//
- (void)setLambda:(float)lambda NS_SWIFT_NAME(setLambda(lambda:));


//
//  void cv::CalibrateDebevec::setRandom(bool random)
//
- (void)setRandom:(BOOL)random NS_SWIFT_NAME(setRandom(random:));


//
//  void cv::CalibrateDebevec::setSamples(int samples)
//
- (void)setSamples:(int)samples NS_SWIFT_NAME(setSamples(samples:));



@end

NS_ASSUME_NONNULL_END



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
#import "DenseOpticalFlow.h"





NS_ASSUME_NONNULL_BEGIN

// C++: class FarnebackOpticalFlow
/**
 * Class computing a dense optical flow using the Gunnar Farneback's algorithm.
 *
 * Member of `Video`
 */
CV_EXPORTS @interface FarnebackOpticalFlow : DenseOpticalFlow


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::FarnebackOpticalFlow> nativePtrFarnebackOpticalFlow;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::FarnebackOpticalFlow>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::FarnebackOpticalFlow>)nativePtr;
#endif


#pragma mark - Methods


//
// static Ptr_FarnebackOpticalFlow cv::FarnebackOpticalFlow::create(int numLevels = 5, double pyrScale = 0.5, bool fastPyramids = false, int winSize = 13, int numIters = 10, int polyN = 5, double polySigma = 1.1, int flags = 0)
//
+ (FarnebackOpticalFlow*)create:(int)numLevels pyrScale:(double)pyrScale fastPyramids:(BOOL)fastPyramids winSize:(int)winSize numIters:(int)numIters polyN:(int)polyN polySigma:(double)polySigma flags:(int)flags NS_SWIFT_NAME(create(numLevels:pyrScale:fastPyramids:winSize:numIters:polyN:polySigma:flags:));

+ (FarnebackOpticalFlow*)create:(int)numLevels pyrScale:(double)pyrScale fastPyramids:(BOOL)fastPyramids winSize:(int)winSize numIters:(int)numIters polyN:(int)polyN polySigma:(double)polySigma NS_SWIFT_NAME(create(numLevels:pyrScale:fastPyramids:winSize:numIters:polyN:polySigma:));

+ (FarnebackOpticalFlow*)create:(int)numLevels pyrScale:(double)pyrScale fastPyramids:(BOOL)fastPyramids winSize:(int)winSize numIters:(int)numIters polyN:(int)polyN NS_SWIFT_NAME(create(numLevels:pyrScale:fastPyramids:winSize:numIters:polyN:));

+ (FarnebackOpticalFlow*)create:(int)numLevels pyrScale:(double)pyrScale fastPyramids:(BOOL)fastPyramids winSize:(int)winSize numIters:(int)numIters NS_SWIFT_NAME(create(numLevels:pyrScale:fastPyramids:winSize:numIters:));

+ (FarnebackOpticalFlow*)create:(int)numLevels pyrScale:(double)pyrScale fastPyramids:(BOOL)fastPyramids winSize:(int)winSize NS_SWIFT_NAME(create(numLevels:pyrScale:fastPyramids:winSize:));

+ (FarnebackOpticalFlow*)create:(int)numLevels pyrScale:(double)pyrScale fastPyramids:(BOOL)fastPyramids NS_SWIFT_NAME(create(numLevels:pyrScale:fastPyramids:));

+ (FarnebackOpticalFlow*)create:(int)numLevels pyrScale:(double)pyrScale NS_SWIFT_NAME(create(numLevels:pyrScale:));

+ (FarnebackOpticalFlow*)create:(int)numLevels NS_SWIFT_NAME(create(numLevels:));

+ (FarnebackOpticalFlow*)create NS_SWIFT_NAME(create());


//
//  bool cv::FarnebackOpticalFlow::getFastPyramids()
//
- (BOOL)getFastPyramids NS_SWIFT_NAME(getFastPyramids());


//
//  double cv::FarnebackOpticalFlow::getPolySigma()
//
- (double)getPolySigma NS_SWIFT_NAME(getPolySigma());


//
//  double cv::FarnebackOpticalFlow::getPyrScale()
//
- (double)getPyrScale NS_SWIFT_NAME(getPyrScale());


//
//  int cv::FarnebackOpticalFlow::getFlags()
//
- (int)getFlags NS_SWIFT_NAME(getFlags());


//
//  int cv::FarnebackOpticalFlow::getNumIters()
//
- (int)getNumIters NS_SWIFT_NAME(getNumIters());


//
//  int cv::FarnebackOpticalFlow::getNumLevels()
//
- (int)getNumLevels NS_SWIFT_NAME(getNumLevels());


//
//  int cv::FarnebackOpticalFlow::getPolyN()
//
- (int)getPolyN NS_SWIFT_NAME(getPolyN());


//
//  int cv::FarnebackOpticalFlow::getWinSize()
//
- (int)getWinSize NS_SWIFT_NAME(getWinSize());


//
//  void cv::FarnebackOpticalFlow::setFastPyramids(bool fastPyramids)
//
- (void)setFastPyramids:(BOOL)fastPyramids NS_SWIFT_NAME(setFastPyramids(fastPyramids:));


//
//  void cv::FarnebackOpticalFlow::setFlags(int flags)
//
- (void)setFlags:(int)flags NS_SWIFT_NAME(setFlags(flags:));


//
//  void cv::FarnebackOpticalFlow::setNumIters(int numIters)
//
- (void)setNumIters:(int)numIters NS_SWIFT_NAME(setNumIters(numIters:));


//
//  void cv::FarnebackOpticalFlow::setNumLevels(int numLevels)
//
- (void)setNumLevels:(int)numLevels NS_SWIFT_NAME(setNumLevels(numLevels:));


//
//  void cv::FarnebackOpticalFlow::setPolyN(int polyN)
//
- (void)setPolyN:(int)polyN NS_SWIFT_NAME(setPolyN(polyN:));


//
//  void cv::FarnebackOpticalFlow::setPolySigma(double polySigma)
//
- (void)setPolySigma:(double)polySigma NS_SWIFT_NAME(setPolySigma(polySigma:));


//
//  void cv::FarnebackOpticalFlow::setPyrScale(double pyrScale)
//
- (void)setPyrScale:(double)pyrScale NS_SWIFT_NAME(setPyrScale(pyrScale:));


//
//  void cv::FarnebackOpticalFlow::setWinSize(int winSize)
//
- (void)setWinSize:(int)winSize NS_SWIFT_NAME(setWinSize(winSize:));



@end

NS_ASSUME_NONNULL_END



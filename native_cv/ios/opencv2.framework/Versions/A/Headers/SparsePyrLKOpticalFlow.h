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
#import "SparseOpticalFlow.h"

@class Size2i;
@class TermCriteria;



NS_ASSUME_NONNULL_BEGIN

// C++: class SparsePyrLKOpticalFlow
/**
 * Class used for calculating a sparse optical flow.
 *
 * The class can calculate an optical flow for a sparse feature set using the
 * iterative Lucas-Kanade method with pyramids.
 *
 * @see calcOpticalFlowPyrLK
 *
 * Member of `Video`
 */
CV_EXPORTS @interface SparsePyrLKOpticalFlow : SparseOpticalFlow


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::SparsePyrLKOpticalFlow> nativePtrSparsePyrLKOpticalFlow;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::SparsePyrLKOpticalFlow>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::SparsePyrLKOpticalFlow>)nativePtr;
#endif


#pragma mark - Methods


//
// static Ptr_SparsePyrLKOpticalFlow cv::SparsePyrLKOpticalFlow::create(Size winSize = Size(21, 21), int maxLevel = 3, TermCriteria crit = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 0.01), int flags = 0, double minEigThreshold = 1e-4)
//
+ (SparsePyrLKOpticalFlow*)create:(Size2i*)winSize maxLevel:(int)maxLevel crit:(TermCriteria*)crit flags:(int)flags minEigThreshold:(double)minEigThreshold NS_SWIFT_NAME(create(winSize:maxLevel:crit:flags:minEigThreshold:));

+ (SparsePyrLKOpticalFlow*)create:(Size2i*)winSize maxLevel:(int)maxLevel crit:(TermCriteria*)crit flags:(int)flags NS_SWIFT_NAME(create(winSize:maxLevel:crit:flags:));

+ (SparsePyrLKOpticalFlow*)create:(Size2i*)winSize maxLevel:(int)maxLevel crit:(TermCriteria*)crit NS_SWIFT_NAME(create(winSize:maxLevel:crit:));

+ (SparsePyrLKOpticalFlow*)create:(Size2i*)winSize maxLevel:(int)maxLevel NS_SWIFT_NAME(create(winSize:maxLevel:));

+ (SparsePyrLKOpticalFlow*)create:(Size2i*)winSize NS_SWIFT_NAME(create(winSize:));

+ (SparsePyrLKOpticalFlow*)create NS_SWIFT_NAME(create());


//
//  Size cv::SparsePyrLKOpticalFlow::getWinSize()
//
- (Size2i*)getWinSize NS_SWIFT_NAME(getWinSize());


//
//  TermCriteria cv::SparsePyrLKOpticalFlow::getTermCriteria()
//
- (TermCriteria*)getTermCriteria NS_SWIFT_NAME(getTermCriteria());


//
//  double cv::SparsePyrLKOpticalFlow::getMinEigThreshold()
//
- (double)getMinEigThreshold NS_SWIFT_NAME(getMinEigThreshold());


//
//  int cv::SparsePyrLKOpticalFlow::getFlags()
//
- (int)getFlags NS_SWIFT_NAME(getFlags());


//
//  int cv::SparsePyrLKOpticalFlow::getMaxLevel()
//
- (int)getMaxLevel NS_SWIFT_NAME(getMaxLevel());


//
//  void cv::SparsePyrLKOpticalFlow::setFlags(int flags)
//
- (void)setFlags:(int)flags NS_SWIFT_NAME(setFlags(flags:));


//
//  void cv::SparsePyrLKOpticalFlow::setMaxLevel(int maxLevel)
//
- (void)setMaxLevel:(int)maxLevel NS_SWIFT_NAME(setMaxLevel(maxLevel:));


//
//  void cv::SparsePyrLKOpticalFlow::setMinEigThreshold(double minEigThreshold)
//
- (void)setMinEigThreshold:(double)minEigThreshold NS_SWIFT_NAME(setMinEigThreshold(minEigThreshold:));


//
//  void cv::SparsePyrLKOpticalFlow::setTermCriteria(TermCriteria crit)
//
- (void)setTermCriteria:(TermCriteria*)crit NS_SWIFT_NAME(setTermCriteria(crit:));


//
//  void cv::SparsePyrLKOpticalFlow::setWinSize(Size winSize)
//
- (void)setWinSize:(Size2i*)winSize NS_SWIFT_NAME(setWinSize(winSize:));



@end

NS_ASSUME_NONNULL_END



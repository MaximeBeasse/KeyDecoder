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
#import "GeneralizedHough.h"





NS_ASSUME_NONNULL_BEGIN

// C++: class GeneralizedHoughBallard
/**
 * finds arbitrary template in the grayscale image using Generalized Hough Transform
 *
 * Detects position only without translation and rotation CITE: Ballard1981 .
 *
 * Member of `Imgproc`
 */
CV_EXPORTS @interface GeneralizedHoughBallard : GeneralizedHough


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::GeneralizedHoughBallard> nativePtrGeneralizedHoughBallard;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::GeneralizedHoughBallard>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::GeneralizedHoughBallard>)nativePtr;
#endif


#pragma mark - Methods


//
//  int cv::GeneralizedHoughBallard::getLevels()
//
- (int)getLevels NS_SWIFT_NAME(getLevels());


//
//  int cv::GeneralizedHoughBallard::getVotesThreshold()
//
- (int)getVotesThreshold NS_SWIFT_NAME(getVotesThreshold());


//
//  void cv::GeneralizedHoughBallard::setLevels(int levels)
//
- (void)setLevels:(int)levels NS_SWIFT_NAME(setLevels(levels:));


//
//  void cv::GeneralizedHoughBallard::setVotesThreshold(int votesThreshold)
//
- (void)setVotesThreshold:(int)votesThreshold NS_SWIFT_NAME(setVotesThreshold(votesThreshold:));



@end

NS_ASSUME_NONNULL_END



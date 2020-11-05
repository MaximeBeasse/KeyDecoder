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
#import "BackgroundSubtractor.h"

@class Mat;



NS_ASSUME_NONNULL_BEGIN

// C++: class BackgroundSubtractorMOG2
/**
 * Gaussian Mixture-based Background/Foreground Segmentation Algorithm.
 *
 * The class implements the Gaussian mixture model background subtraction described in CITE: Zivkovic2004
 * and CITE: Zivkovic2006 .
 *
 * Member of `Video`
 */
CV_EXPORTS @interface BackgroundSubtractorMOG2 : BackgroundSubtractor


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::BackgroundSubtractorMOG2> nativePtrBackgroundSubtractorMOG2;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::BackgroundSubtractorMOG2>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::BackgroundSubtractorMOG2>)nativePtr;
#endif


#pragma mark - Methods


//
//  bool cv::BackgroundSubtractorMOG2::getDetectShadows()
//
/**
 * Returns the shadow detection flag
 *
 *     If true, the algorithm detects shadows and marks them. See createBackgroundSubtractorMOG2 for
 *     details.
 */
- (BOOL)getDetectShadows NS_SWIFT_NAME(getDetectShadows());


//
//  double cv::BackgroundSubtractorMOG2::getBackgroundRatio()
//
/**
 * Returns the "background ratio" parameter of the algorithm
 *
 *     If a foreground pixel keeps semi-constant value for about backgroundRatio\*history frames, it's
 *     considered background and added to the model as a center of a new component. It corresponds to TB
 *     parameter in the paper.
 */
- (double)getBackgroundRatio NS_SWIFT_NAME(getBackgroundRatio());


//
//  double cv::BackgroundSubtractorMOG2::getComplexityReductionThreshold()
//
/**
 * Returns the complexity reduction threshold
 *
 *     This parameter defines the number of samples needed to accept to prove the component exists. CT=0.05
 *     is a default value for all the samples. By setting CT=0 you get an algorithm very similar to the
 *     standard Stauffer&Grimson algorithm.
 */
- (double)getComplexityReductionThreshold NS_SWIFT_NAME(getComplexityReductionThreshold());


//
//  double cv::BackgroundSubtractorMOG2::getShadowThreshold()
//
/**
 * Returns the shadow threshold
 *
 *     A shadow is detected if pixel is a darker version of the background. The shadow threshold (Tau in
 *     the paper) is a threshold defining how much darker the shadow can be. Tau= 0.5 means that if a pixel
 *     is more than twice darker then it is not shadow. See Prati, Mikic, Trivedi and Cucchiara,
 * Detecting Moving Shadows...*, IEEE PAMI,2003.
 */
- (double)getShadowThreshold NS_SWIFT_NAME(getShadowThreshold());


//
//  double cv::BackgroundSubtractorMOG2::getVarInit()
//
/**
 * Returns the initial variance of each gaussian component
 */
- (double)getVarInit NS_SWIFT_NAME(getVarInit());


//
//  double cv::BackgroundSubtractorMOG2::getVarMax()
//
- (double)getVarMax NS_SWIFT_NAME(getVarMax());


//
//  double cv::BackgroundSubtractorMOG2::getVarMin()
//
- (double)getVarMin NS_SWIFT_NAME(getVarMin());


//
//  double cv::BackgroundSubtractorMOG2::getVarThreshold()
//
/**
 * Returns the variance threshold for the pixel-model match
 *
 *     The main threshold on the squared Mahalanobis distance to decide if the sample is well described by
 *     the background model or not. Related to Cthr from the paper.
 */
- (double)getVarThreshold NS_SWIFT_NAME(getVarThreshold());


//
//  double cv::BackgroundSubtractorMOG2::getVarThresholdGen()
//
/**
 * Returns the variance threshold for the pixel-model match used for new mixture component generation
 *
 *     Threshold for the squared Mahalanobis distance that helps decide when a sample is close to the
 *     existing components (corresponds to Tg in the paper). If a pixel is not close to any component, it
 *     is considered foreground or added as a new component. 3 sigma =\> Tg=3\*3=9 is default. A smaller Tg
 *     value generates more components. A higher Tg value may result in a small number of components but
 *     they can grow too large.
 */
- (double)getVarThresholdGen NS_SWIFT_NAME(getVarThresholdGen());


//
//  int cv::BackgroundSubtractorMOG2::getHistory()
//
/**
 * Returns the number of last frames that affect the background model
 */
- (int)getHistory NS_SWIFT_NAME(getHistory());


//
//  int cv::BackgroundSubtractorMOG2::getNMixtures()
//
/**
 * Returns the number of gaussian components in the background model
 */
- (int)getNMixtures NS_SWIFT_NAME(getNMixtures());


//
//  int cv::BackgroundSubtractorMOG2::getShadowValue()
//
/**
 * Returns the shadow value
 *
 *     Shadow value is the value used to mark shadows in the foreground mask. Default value is 127. Value 0
 *     in the mask always means background, 255 means foreground.
 */
- (int)getShadowValue NS_SWIFT_NAME(getShadowValue());


//
//  void cv::BackgroundSubtractorMOG2::apply(Mat image, Mat& fgmask, double learningRate = -1)
//
/**
 * Computes a foreground mask.
 *
 * @param image Next video frame. Floating point frame will be used without scaling and should be in range `$$[0,255]$$`.
 * @param fgmask The output foreground mask as an 8-bit binary image.
 * @param learningRate The value between 0 and 1 that indicates how fast the background model is
 *     learnt. Negative parameter value makes the algorithm to use some automatically chosen learning
 *     rate. 0 means that the background model is not updated at all, 1 means that the background model
 *     is completely reinitialized from the last frame.
 */
- (void)apply:(Mat*)image fgmask:(Mat*)fgmask learningRate:(double)learningRate NS_SWIFT_NAME(apply(image:fgmask:learningRate:));

/**
 * Computes a foreground mask.
 *
 * @param image Next video frame. Floating point frame will be used without scaling and should be in range `$$[0,255]$$`.
 * @param fgmask The output foreground mask as an 8-bit binary image.
 *     learnt. Negative parameter value makes the algorithm to use some automatically chosen learning
 *     rate. 0 means that the background model is not updated at all, 1 means that the background model
 *     is completely reinitialized from the last frame.
 */
- (void)apply:(Mat*)image fgmask:(Mat*)fgmask NS_SWIFT_NAME(apply(image:fgmask:));


//
//  void cv::BackgroundSubtractorMOG2::setBackgroundRatio(double ratio)
//
/**
 * Sets the "background ratio" parameter of the algorithm
 */
- (void)setBackgroundRatio:(double)ratio NS_SWIFT_NAME(setBackgroundRatio(ratio:));


//
//  void cv::BackgroundSubtractorMOG2::setComplexityReductionThreshold(double ct)
//
/**
 * Sets the complexity reduction threshold
 */
- (void)setComplexityReductionThreshold:(double)ct NS_SWIFT_NAME(setComplexityReductionThreshold(ct:));


//
//  void cv::BackgroundSubtractorMOG2::setDetectShadows(bool detectShadows)
//
/**
 * Enables or disables shadow detection
 */
- (void)setDetectShadows:(BOOL)detectShadows NS_SWIFT_NAME(setDetectShadows(detectShadows:));


//
//  void cv::BackgroundSubtractorMOG2::setHistory(int history)
//
/**
 * Sets the number of last frames that affect the background model
 */
- (void)setHistory:(int)history NS_SWIFT_NAME(setHistory(history:));


//
//  void cv::BackgroundSubtractorMOG2::setNMixtures(int nmixtures)
//
/**
 * Sets the number of gaussian components in the background model.
 *
 *     The model needs to be reinitalized to reserve memory.
 */
- (void)setNMixtures:(int)nmixtures NS_SWIFT_NAME(setNMixtures(nmixtures:));


//
//  void cv::BackgroundSubtractorMOG2::setShadowThreshold(double threshold)
//
/**
 * Sets the shadow threshold
 */
- (void)setShadowThreshold:(double)threshold NS_SWIFT_NAME(setShadowThreshold(threshold:));


//
//  void cv::BackgroundSubtractorMOG2::setShadowValue(int value)
//
/**
 * Sets the shadow value
 */
- (void)setShadowValue:(int)value NS_SWIFT_NAME(setShadowValue(value:));


//
//  void cv::BackgroundSubtractorMOG2::setVarInit(double varInit)
//
/**
 * Sets the initial variance of each gaussian component
 */
- (void)setVarInit:(double)varInit NS_SWIFT_NAME(setVarInit(varInit:));


//
//  void cv::BackgroundSubtractorMOG2::setVarMax(double varMax)
//
- (void)setVarMax:(double)varMax NS_SWIFT_NAME(setVarMax(varMax:));


//
//  void cv::BackgroundSubtractorMOG2::setVarMin(double varMin)
//
- (void)setVarMin:(double)varMin NS_SWIFT_NAME(setVarMin(varMin:));


//
//  void cv::BackgroundSubtractorMOG2::setVarThreshold(double varThreshold)
//
/**
 * Sets the variance threshold for the pixel-model match
 */
- (void)setVarThreshold:(double)varThreshold NS_SWIFT_NAME(setVarThreshold(varThreshold:));


//
//  void cv::BackgroundSubtractorMOG2::setVarThresholdGen(double varThresholdGen)
//
/**
 * Sets the variance threshold for the pixel-model match used for new mixture component generation
 */
- (void)setVarThresholdGen:(double)varThresholdGen NS_SWIFT_NAME(setVarThresholdGen(varThresholdGen:));



@end

NS_ASSUME_NONNULL_END



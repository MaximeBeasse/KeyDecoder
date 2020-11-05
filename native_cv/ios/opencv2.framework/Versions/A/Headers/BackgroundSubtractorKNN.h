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





NS_ASSUME_NONNULL_BEGIN

// C++: class BackgroundSubtractorKNN
/**
 * K-nearest neighbours - based Background/Foreground Segmentation Algorithm.
 *
 * The class implements the K-nearest neighbours background subtraction described in CITE: Zivkovic2006 .
 * Very efficient if number of foreground pixels is low.
 *
 * Member of `Video`
 */
CV_EXPORTS @interface BackgroundSubtractorKNN : BackgroundSubtractor


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::BackgroundSubtractorKNN> nativePtrBackgroundSubtractorKNN;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::BackgroundSubtractorKNN>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::BackgroundSubtractorKNN>)nativePtr;
#endif


#pragma mark - Methods


//
//  bool cv::BackgroundSubtractorKNN::getDetectShadows()
//
/**
 * Returns the shadow detection flag
 *
 *     If true, the algorithm detects shadows and marks them. See createBackgroundSubtractorKNN for
 *     details.
 */
- (BOOL)getDetectShadows NS_SWIFT_NAME(getDetectShadows());


//
//  double cv::BackgroundSubtractorKNN::getDist2Threshold()
//
/**
 * Returns the threshold on the squared distance between the pixel and the sample
 *
 *     The threshold on the squared distance between the pixel and the sample to decide whether a pixel is
 *     close to a data sample.
 */
- (double)getDist2Threshold NS_SWIFT_NAME(getDist2Threshold());


//
//  double cv::BackgroundSubtractorKNN::getShadowThreshold()
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
//  int cv::BackgroundSubtractorKNN::getHistory()
//
/**
 * Returns the number of last frames that affect the background model
 */
- (int)getHistory NS_SWIFT_NAME(getHistory());


//
//  int cv::BackgroundSubtractorKNN::getNSamples()
//
/**
 * Returns the number of data samples in the background model
 */
- (int)getNSamples NS_SWIFT_NAME(getNSamples());


//
//  int cv::BackgroundSubtractorKNN::getShadowValue()
//
/**
 * Returns the shadow value
 *
 *     Shadow value is the value used to mark shadows in the foreground mask. Default value is 127. Value 0
 *     in the mask always means background, 255 means foreground.
 */
- (int)getShadowValue NS_SWIFT_NAME(getShadowValue());


//
//  int cv::BackgroundSubtractorKNN::getkNNSamples()
//
/**
 * Returns the number of neighbours, the k in the kNN.
 *
 *     K is the number of samples that need to be within dist2Threshold in order to decide that that
 *     pixel is matching the kNN background model.
 */
- (int)getkNNSamples NS_SWIFT_NAME(getkNNSamples());


//
//  void cv::BackgroundSubtractorKNN::setDetectShadows(bool detectShadows)
//
/**
 * Enables or disables shadow detection
 */
- (void)setDetectShadows:(BOOL)detectShadows NS_SWIFT_NAME(setDetectShadows(detectShadows:));


//
//  void cv::BackgroundSubtractorKNN::setDist2Threshold(double _dist2Threshold)
//
/**
 * Sets the threshold on the squared distance
 */
- (void)setDist2Threshold:(double)_dist2Threshold NS_SWIFT_NAME(setDist2Threshold(_dist2Threshold:));


//
//  void cv::BackgroundSubtractorKNN::setHistory(int history)
//
/**
 * Sets the number of last frames that affect the background model
 */
- (void)setHistory:(int)history NS_SWIFT_NAME(setHistory(history:));


//
//  void cv::BackgroundSubtractorKNN::setNSamples(int _nN)
//
/**
 * Sets the number of data samples in the background model.
 *
 *     The model needs to be reinitalized to reserve memory.
 */
- (void)setNSamples:(int)_nN NS_SWIFT_NAME(setNSamples(_nN:));


//
//  void cv::BackgroundSubtractorKNN::setShadowThreshold(double threshold)
//
/**
 * Sets the shadow threshold
 */
- (void)setShadowThreshold:(double)threshold NS_SWIFT_NAME(setShadowThreshold(threshold:));


//
//  void cv::BackgroundSubtractorKNN::setShadowValue(int value)
//
/**
 * Sets the shadow value
 */
- (void)setShadowValue:(int)value NS_SWIFT_NAME(setShadowValue(value:));


//
//  void cv::BackgroundSubtractorKNN::setkNNSamples(int _nkNN)
//
/**
 * Sets the k in the kNN. How many nearest neighbours need to match.
 */
- (void)setkNNSamples:(int)_nkNN NS_SWIFT_NAME(setkNNSamples(_nkNN:));



@end

NS_ASSUME_NONNULL_END



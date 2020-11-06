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

// C++: class DISOpticalFlow
/**
 * DIS optical flow algorithm.
 *
 * This class implements the Dense Inverse Search (DIS) optical flow algorithm. More
 * details about the algorithm can be found at CITE: Kroeger2016 . Includes three presets with preselected
 * parameters to provide reasonable trade-off between speed and quality. However, even the slowest preset is
 * still relatively fast, use DeepFlow if you need better quality and don't care about speed.
 *
 * This implementation includes several additional features compared to the algorithm described in the paper,
 * including spatial propagation of flow vectors (REF: getUseSpatialPropagation), as well as an option to
 * utilize an initial flow approximation passed to REF: calc (which is, essentially, temporal propagation,
 * if the previous frame's flow field is passed).
 *
 * Member of `Video`
 */
CV_EXPORTS @interface DISOpticalFlow : DenseOpticalFlow


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::DISOpticalFlow> nativePtrDISOpticalFlow;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::DISOpticalFlow>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::DISOpticalFlow>)nativePtr;
#endif


#pragma mark - Class Constants


@property (class, readonly) int PRESET_ULTRAFAST NS_SWIFT_NAME(PRESET_ULTRAFAST);
@property (class, readonly) int PRESET_FAST NS_SWIFT_NAME(PRESET_FAST);
@property (class, readonly) int PRESET_MEDIUM NS_SWIFT_NAME(PRESET_MEDIUM);

#pragma mark - Methods


//
// static Ptr_DISOpticalFlow cv::DISOpticalFlow::create(int preset = DISOpticalFlow::PRESET_FAST)
//
/**
 * Creates an instance of DISOpticalFlow
 *
 * @param preset one of PRESET_ULTRAFAST, PRESET_FAST and PRESET_MEDIUM
 */
+ (DISOpticalFlow*)create:(int)preset NS_SWIFT_NAME(create(preset:));

/**
 * Creates an instance of DISOpticalFlow
 *
 */
+ (DISOpticalFlow*)create NS_SWIFT_NAME(create());


//
//  bool cv::DISOpticalFlow::getUseMeanNormalization()
//
/**
 * Whether to use mean-normalization of patches when computing patch distance. It is turned on
 *         by default as it typically provides a noticeable quality boost because of increased robustness to
 *         illumination variations. Turn it off if you are certain that your sequence doesn't contain any changes
 *         in illumination.
 * @see `-setUseMeanNormalization:`
 */
- (BOOL)getUseMeanNormalization NS_SWIFT_NAME(getUseMeanNormalization());


//
//  bool cv::DISOpticalFlow::getUseSpatialPropagation()
//
/**
 * Whether to use spatial propagation of good optical flow vectors. This option is turned on by
 *         default, as it tends to work better on average and can sometimes help recover from major errors
 *         introduced by the coarse-to-fine scheme employed by the DIS optical flow algorithm. Turning this
 *         option off can make the output flow field a bit smoother, however.
 * @see `-setUseSpatialPropagation:`
 */
- (BOOL)getUseSpatialPropagation NS_SWIFT_NAME(getUseSpatialPropagation());


//
//  float cv::DISOpticalFlow::getVariationalRefinementAlpha()
//
/**
 * Weight of the smoothness term
 * @see `-setVariationalRefinementAlpha:`
 */
- (float)getVariationalRefinementAlpha NS_SWIFT_NAME(getVariationalRefinementAlpha());


//
//  float cv::DISOpticalFlow::getVariationalRefinementDelta()
//
/**
 * Weight of the color constancy term
 * @see `-setVariationalRefinementDelta:`
 */
- (float)getVariationalRefinementDelta NS_SWIFT_NAME(getVariationalRefinementDelta());


//
//  float cv::DISOpticalFlow::getVariationalRefinementGamma()
//
/**
 * Weight of the gradient constancy term
 * @see `-setVariationalRefinementGamma:`
 */
- (float)getVariationalRefinementGamma NS_SWIFT_NAME(getVariationalRefinementGamma());


//
//  int cv::DISOpticalFlow::getFinestScale()
//
/**
 * Finest level of the Gaussian pyramid on which the flow is computed (zero level
 *         corresponds to the original image resolution). The final flow is obtained by bilinear upscaling.
 * @see `-setFinestScale:`
 */
- (int)getFinestScale NS_SWIFT_NAME(getFinestScale());


//
//  int cv::DISOpticalFlow::getGradientDescentIterations()
//
/**
 * Maximum number of gradient descent iterations in the patch inverse search stage. Higher values
 *         may improve quality in some cases.
 * @see `-setGradientDescentIterations:`
 */
- (int)getGradientDescentIterations NS_SWIFT_NAME(getGradientDescentIterations());


//
//  int cv::DISOpticalFlow::getPatchSize()
//
/**
 * Size of an image patch for matching (in pixels). Normally, default 8x8 patches work well
 *         enough in most cases.
 * @see `-setPatchSize:`
 */
- (int)getPatchSize NS_SWIFT_NAME(getPatchSize());


//
//  int cv::DISOpticalFlow::getPatchStride()
//
/**
 * Stride between neighbor patches. Must be less than patch size. Lower values correspond
 *         to higher flow quality.
 * @see `-setPatchStride:`
 */
- (int)getPatchStride NS_SWIFT_NAME(getPatchStride());


//
//  int cv::DISOpticalFlow::getVariationalRefinementIterations()
//
/**
 * Number of fixed point iterations of variational refinement per scale. Set to zero to
 *         disable variational refinement completely. Higher values will typically result in more smooth and
 *         high-quality flow.
 * @see `-setGradientDescentIterations:`
 */
- (int)getVariationalRefinementIterations NS_SWIFT_NAME(getVariationalRefinementIterations());


//
//  void cv::DISOpticalFlow::setFinestScale(int val)
//
/**
 *  getFinestScale @see `-getFinestScale:`
 */
- (void)setFinestScale:(int)val NS_SWIFT_NAME(setFinestScale(val:));


//
//  void cv::DISOpticalFlow::setGradientDescentIterations(int val)
//
/**
 *  getGradientDescentIterations @see `-getGradientDescentIterations:`
 */
- (void)setGradientDescentIterations:(int)val NS_SWIFT_NAME(setGradientDescentIterations(val:));


//
//  void cv::DISOpticalFlow::setPatchSize(int val)
//
/**
 *  getPatchSize @see `-getPatchSize:`
 */
- (void)setPatchSize:(int)val NS_SWIFT_NAME(setPatchSize(val:));


//
//  void cv::DISOpticalFlow::setPatchStride(int val)
//
/**
 *  getPatchStride @see `-getPatchStride:`
 */
- (void)setPatchStride:(int)val NS_SWIFT_NAME(setPatchStride(val:));


//
//  void cv::DISOpticalFlow::setUseMeanNormalization(bool val)
//
/**
 *  getUseMeanNormalization @see `-getUseMeanNormalization:`
 */
- (void)setUseMeanNormalization:(BOOL)val NS_SWIFT_NAME(setUseMeanNormalization(val:));


//
//  void cv::DISOpticalFlow::setUseSpatialPropagation(bool val)
//
/**
 *  getUseSpatialPropagation @see `-getUseSpatialPropagation:`
 */
- (void)setUseSpatialPropagation:(BOOL)val NS_SWIFT_NAME(setUseSpatialPropagation(val:));


//
//  void cv::DISOpticalFlow::setVariationalRefinementAlpha(float val)
//
/**
 *  getVariationalRefinementAlpha @see `-getVariationalRefinementAlpha:`
 */
- (void)setVariationalRefinementAlpha:(float)val NS_SWIFT_NAME(setVariationalRefinementAlpha(val:));


//
//  void cv::DISOpticalFlow::setVariationalRefinementDelta(float val)
//
/**
 *  getVariationalRefinementDelta @see `-getVariationalRefinementDelta:`
 */
- (void)setVariationalRefinementDelta:(float)val NS_SWIFT_NAME(setVariationalRefinementDelta(val:));


//
//  void cv::DISOpticalFlow::setVariationalRefinementGamma(float val)
//
/**
 *  getVariationalRefinementGamma @see `-getVariationalRefinementGamma:`
 */
- (void)setVariationalRefinementGamma:(float)val NS_SWIFT_NAME(setVariationalRefinementGamma(val:));


//
//  void cv::DISOpticalFlow::setVariationalRefinementIterations(int val)
//
/**
 *  getGradientDescentIterations @see `-getGradientDescentIterations:`
 */
- (void)setVariationalRefinementIterations:(int)val NS_SWIFT_NAME(setVariationalRefinementIterations(val:));



@end

NS_ASSUME_NONNULL_END



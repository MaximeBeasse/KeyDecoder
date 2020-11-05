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

@class Mat;



NS_ASSUME_NONNULL_BEGIN

// C++: class VariationalRefinement
/**
 * Variational optical flow refinement
 *
 * This class implements variational refinement of the input flow field, i.e.
 * it uses input flow to initialize the minimization of the following functional:
 * `$$E(U) = \int_{\Omega} \delta \Psi(E_I) + \gamma \Psi(E_G) + \alpha \Psi(E_S) $$`,
 * where `$$E_I,E_G,E_S$$` are color constancy, gradient constancy and smoothness terms
 * respectively. `$$\Psi(s^2)=\sqrt{s^2+\epsilon^2}$$` is a robust penalizer to limit the
 * influence of outliers. A complete formulation and a description of the minimization
 * procedure can be found in CITE: Brox2004
 *
 * Member of `Video`
 */
CV_EXPORTS @interface VariationalRefinement : DenseOpticalFlow


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::VariationalRefinement> nativePtrVariationalRefinement;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::VariationalRefinement>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::VariationalRefinement>)nativePtr;
#endif


#pragma mark - Methods


//
// static Ptr_VariationalRefinement cv::VariationalRefinement::create()
//
/**
 * Creates an instance of VariationalRefinement
 */
+ (VariationalRefinement*)create NS_SWIFT_NAME(create());


//
//  float cv::VariationalRefinement::getAlpha()
//
/**
 * Weight of the smoothness term
 * @see `-setAlpha:`
 */
- (float)getAlpha NS_SWIFT_NAME(getAlpha());


//
//  float cv::VariationalRefinement::getDelta()
//
/**
 * Weight of the color constancy term
 * @see `-setDelta:`
 */
- (float)getDelta NS_SWIFT_NAME(getDelta());


//
//  float cv::VariationalRefinement::getGamma()
//
/**
 * Weight of the gradient constancy term
 * @see `-setGamma:`
 */
- (float)getGamma NS_SWIFT_NAME(getGamma());


//
//  float cv::VariationalRefinement::getOmega()
//
/**
 * Relaxation factor in SOR
 * @see `-setOmega:`
 */
- (float)getOmega NS_SWIFT_NAME(getOmega());


//
//  int cv::VariationalRefinement::getFixedPointIterations()
//
/**
 * Number of outer (fixed-point) iterations in the minimization procedure.
 * @see `-setFixedPointIterations:`
 */
- (int)getFixedPointIterations NS_SWIFT_NAME(getFixedPointIterations());


//
//  int cv::VariationalRefinement::getSorIterations()
//
/**
 * Number of inner successive over-relaxation (SOR) iterations
 *         in the minimization procedure to solve the respective linear system.
 * @see `-setSorIterations:`
 */
- (int)getSorIterations NS_SWIFT_NAME(getSorIterations());


//
//  void cv::VariationalRefinement::calcUV(Mat I0, Mat I1, Mat& flow_u, Mat& flow_v)
//
/**
 * REF: calc function overload to handle separate horizontal (u) and vertical (v) flow components
 * (to avoid extra splits/merges)
 */
- (void)calcUV:(Mat*)I0 I1:(Mat*)I1 flow_u:(Mat*)flow_u flow_v:(Mat*)flow_v NS_SWIFT_NAME(calcUV(I0:I1:flow_u:flow_v:));


//
//  void cv::VariationalRefinement::setAlpha(float val)
//
/**
 *  getAlpha @see `-getAlpha:`
 */
- (void)setAlpha:(float)val NS_SWIFT_NAME(setAlpha(val:));


//
//  void cv::VariationalRefinement::setDelta(float val)
//
/**
 *  getDelta @see `-getDelta:`
 */
- (void)setDelta:(float)val NS_SWIFT_NAME(setDelta(val:));


//
//  void cv::VariationalRefinement::setFixedPointIterations(int val)
//
/**
 *  getFixedPointIterations @see `-getFixedPointIterations:`
 */
- (void)setFixedPointIterations:(int)val NS_SWIFT_NAME(setFixedPointIterations(val:));


//
//  void cv::VariationalRefinement::setGamma(float val)
//
/**
 *  getGamma @see `-getGamma:`
 */
- (void)setGamma:(float)val NS_SWIFT_NAME(setGamma(val:));


//
//  void cv::VariationalRefinement::setOmega(float val)
//
/**
 *  getOmega @see `-getOmega:`
 */
- (void)setOmega:(float)val NS_SWIFT_NAME(setOmega(val:));


//
//  void cv::VariationalRefinement::setSorIterations(int val)
//
/**
 *  getSorIterations @see `-getSorIterations:`
 */
- (void)setSorIterations:(int)val NS_SWIFT_NAME(setSorIterations(val:));



@end

NS_ASSUME_NONNULL_END



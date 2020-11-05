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
#import "StatModel.h"

@class Mat;
@class ParamGrid;
@class TermCriteria;


// C++: enum KernelTypes
typedef NS_ENUM(int, KernelTypes) {
    CUSTOM = -1,
    LINEAR = 0,
    POLY = 1,
    RBF = 2,
    SIGMOID = 3,
    CHI2 = 4,
    INTER = 5
};


// C++: enum SVMTypes
typedef NS_ENUM(int, SVMTypes) {
    C_SVC = 100,
    NU_SVC = 101,
    ONE_CLASS = 102,
    EPS_SVR = 103,
    NU_SVR = 104
};


// C++: enum ParamTypes
typedef NS_ENUM(int, ParamTypes) {
    C = 0,
    GAMMA = 1,
    P = 2,
    NU = 3,
    COEF = 4,
    DEGREE = 5
};



NS_ASSUME_NONNULL_BEGIN

// C++: class SVM
/**
 * Support Vector Machines.
 *
 * @see REF: ml_intro_svm
 *
 * Member of `Ml`
 */
CV_EXPORTS @interface SVM : StatModel


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::ml::SVM> nativePtrSVM;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::ml::SVM>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::ml::SVM>)nativePtr;
#endif


#pragma mark - Methods


//
//  Mat cv::ml::SVM::getClassWeights()
//
/**
 * @see `-setClassWeights:`
 */
- (Mat*)getClassWeights NS_SWIFT_NAME(getClassWeights());


//
//  Mat cv::ml::SVM::getSupportVectors()
//
/**
 * Retrieves all the support vectors
 *
 *     The method returns all the support vectors as a floating-point matrix, where support vectors are
 *     stored as matrix rows.
 */
- (Mat*)getSupportVectors NS_SWIFT_NAME(getSupportVectors());


//
//  Mat cv::ml::SVM::getUncompressedSupportVectors()
//
/**
 * Retrieves all the uncompressed support vectors of a linear %SVM
 *
 *     The method returns all the uncompressed support vectors of a linear %SVM that the compressed
 *     support vector, used for prediction, was derived from. They are returned in a floating-point
 *     matrix, where the support vectors are stored as matrix rows.
 */
- (Mat*)getUncompressedSupportVectors NS_SWIFT_NAME(getUncompressedSupportVectors());


//
// static Ptr_ParamGrid cv::ml::SVM::getDefaultGridPtr(int param_id)
//
/**
 * Generates a grid for %SVM parameters.
 *
 * @param param_id %SVM parameters IDs that must be one of the SVM::ParamTypes. The grid is
 *     generated for the parameter with this ID.
 *
 *     The function generates a grid pointer for the specified parameter of the %SVM algorithm.
 *     The grid may be passed to the function SVM::trainAuto.
 */
+ (ParamGrid*)getDefaultGridPtr:(int)param_id NS_SWIFT_NAME(getDefaultGridPtr(param_id:));


//
// static Ptr_SVM cv::ml::SVM::create()
//
/**
 * Creates empty model.
 *     Use StatModel::train to train the model. Since %SVM has several parameters, you may want to
 * find the best parameters for your problem, it can be done with SVM::trainAuto.
 */
+ (SVM*)create NS_SWIFT_NAME(create());


//
// static Ptr_SVM cv::ml::SVM::load(String filepath)
//
/**
 * Loads and creates a serialized svm from a file
 *
 * Use SVM::save to serialize and store an SVM to disk.
 * Load the SVM from this file again, by calling this function with the path to the file.
 *
 * @param filepath path to serialized svm
 */
+ (SVM*)load:(NSString*)filepath NS_SWIFT_NAME(load(filepath:));


//
//  TermCriteria cv::ml::SVM::getTermCriteria()
//
/**
 * @see `-setTermCriteria:`
 */
- (TermCriteria*)getTermCriteria NS_SWIFT_NAME(getTermCriteria());


//
//  bool cv::ml::SVM::trainAuto(Mat samples, int layout, Mat responses, int kFold = 10, Ptr_ParamGrid Cgrid = SVM::getDefaultGridPtr(SVM::C), Ptr_ParamGrid gammaGrid = SVM::getDefaultGridPtr(SVM::GAMMA), Ptr_ParamGrid pGrid = SVM::getDefaultGridPtr(SVM::P), Ptr_ParamGrid nuGrid = SVM::getDefaultGridPtr(SVM::NU), Ptr_ParamGrid coeffGrid = SVM::getDefaultGridPtr(SVM::COEF), Ptr_ParamGrid degreeGrid = SVM::getDefaultGridPtr(SVM::DEGREE), bool balanced = false)
//
/**
 * Trains an %SVM with optimal parameters
 *
 * @param samples training samples
 * @param layout See ml::SampleTypes.
 * @param responses vector of responses associated with the training samples.
 * @param kFold Cross-validation parameter. The training set is divided into kFold subsets. One
 *         subset is used to test the model, the others form the train set. So, the %SVM algorithm is
 * @param Cgrid grid for C
 * @param gammaGrid grid for gamma
 * @param pGrid grid for p
 * @param nuGrid grid for nu
 * @param coeffGrid grid for coeff
 * @param degreeGrid grid for degree
 * @param balanced If true and the problem is 2-class classification then the method creates more
 *         balanced cross-validation subsets that is proportions between classes in subsets are close
 *         to such proportion in the whole train dataset.
 *
 *     The method trains the %SVM model automatically by choosing the optimal parameters C, gamma, p,
 *     nu, coef0, degree. Parameters are considered optimal when the cross-validation
 *     estimate of the test set error is minimal.
 *
 *     This function only makes use of SVM::getDefaultGrid for parameter optimization and thus only
 *     offers rudimentary parameter options.
 *
 *     This function works for the classification (SVM::C_SVC or SVM::NU_SVC) as well as for the
 *     regression (SVM::EPS_SVR or SVM::NU_SVR). If it is SVM::ONE_CLASS, no optimization is made and
 *     the usual %SVM with parameters specified in params is executed.
 */
- (BOOL)trainAuto:(Mat*)samples layout:(int)layout responses:(Mat*)responses kFold:(int)kFold Cgrid:(ParamGrid*)Cgrid gammaGrid:(ParamGrid*)gammaGrid pGrid:(ParamGrid*)pGrid nuGrid:(ParamGrid*)nuGrid coeffGrid:(ParamGrid*)coeffGrid degreeGrid:(ParamGrid*)degreeGrid balanced:(BOOL)balanced NS_SWIFT_NAME(trainAuto(samples:layout:responses:kFold:Cgrid:gammaGrid:pGrid:nuGrid:coeffGrid:degreeGrid:balanced:));

/**
 * Trains an %SVM with optimal parameters
 *
 * @param samples training samples
 * @param layout See ml::SampleTypes.
 * @param responses vector of responses associated with the training samples.
 * @param kFold Cross-validation parameter. The training set is divided into kFold subsets. One
 *         subset is used to test the model, the others form the train set. So, the %SVM algorithm is
 * @param Cgrid grid for C
 * @param gammaGrid grid for gamma
 * @param pGrid grid for p
 * @param nuGrid grid for nu
 * @param coeffGrid grid for coeff
 * @param degreeGrid grid for degree
 *         balanced cross-validation subsets that is proportions between classes in subsets are close
 *         to such proportion in the whole train dataset.
 *
 *     The method trains the %SVM model automatically by choosing the optimal parameters C, gamma, p,
 *     nu, coef0, degree. Parameters are considered optimal when the cross-validation
 *     estimate of the test set error is minimal.
 *
 *     This function only makes use of SVM::getDefaultGrid for parameter optimization and thus only
 *     offers rudimentary parameter options.
 *
 *     This function works for the classification (SVM::C_SVC or SVM::NU_SVC) as well as for the
 *     regression (SVM::EPS_SVR or SVM::NU_SVR). If it is SVM::ONE_CLASS, no optimization is made and
 *     the usual %SVM with parameters specified in params is executed.
 */
- (BOOL)trainAuto:(Mat*)samples layout:(int)layout responses:(Mat*)responses kFold:(int)kFold Cgrid:(ParamGrid*)Cgrid gammaGrid:(ParamGrid*)gammaGrid pGrid:(ParamGrid*)pGrid nuGrid:(ParamGrid*)nuGrid coeffGrid:(ParamGrid*)coeffGrid degreeGrid:(ParamGrid*)degreeGrid NS_SWIFT_NAME(trainAuto(samples:layout:responses:kFold:Cgrid:gammaGrid:pGrid:nuGrid:coeffGrid:degreeGrid:));

/**
 * Trains an %SVM with optimal parameters
 *
 * @param samples training samples
 * @param layout See ml::SampleTypes.
 * @param responses vector of responses associated with the training samples.
 * @param kFold Cross-validation parameter. The training set is divided into kFold subsets. One
 *         subset is used to test the model, the others form the train set. So, the %SVM algorithm is
 * @param Cgrid grid for C
 * @param gammaGrid grid for gamma
 * @param pGrid grid for p
 * @param nuGrid grid for nu
 * @param coeffGrid grid for coeff
 *         balanced cross-validation subsets that is proportions between classes in subsets are close
 *         to such proportion in the whole train dataset.
 *
 *     The method trains the %SVM model automatically by choosing the optimal parameters C, gamma, p,
 *     nu, coef0, degree. Parameters are considered optimal when the cross-validation
 *     estimate of the test set error is minimal.
 *
 *     This function only makes use of SVM::getDefaultGrid for parameter optimization and thus only
 *     offers rudimentary parameter options.
 *
 *     This function works for the classification (SVM::C_SVC or SVM::NU_SVC) as well as for the
 *     regression (SVM::EPS_SVR or SVM::NU_SVR). If it is SVM::ONE_CLASS, no optimization is made and
 *     the usual %SVM with parameters specified in params is executed.
 */
- (BOOL)trainAuto:(Mat*)samples layout:(int)layout responses:(Mat*)responses kFold:(int)kFold Cgrid:(ParamGrid*)Cgrid gammaGrid:(ParamGrid*)gammaGrid pGrid:(ParamGrid*)pGrid nuGrid:(ParamGrid*)nuGrid coeffGrid:(ParamGrid*)coeffGrid NS_SWIFT_NAME(trainAuto(samples:layout:responses:kFold:Cgrid:gammaGrid:pGrid:nuGrid:coeffGrid:));

/**
 * Trains an %SVM with optimal parameters
 *
 * @param samples training samples
 * @param layout See ml::SampleTypes.
 * @param responses vector of responses associated with the training samples.
 * @param kFold Cross-validation parameter. The training set is divided into kFold subsets. One
 *         subset is used to test the model, the others form the train set. So, the %SVM algorithm is
 * @param Cgrid grid for C
 * @param gammaGrid grid for gamma
 * @param pGrid grid for p
 * @param nuGrid grid for nu
 *         balanced cross-validation subsets that is proportions between classes in subsets are close
 *         to such proportion in the whole train dataset.
 *
 *     The method trains the %SVM model automatically by choosing the optimal parameters C, gamma, p,
 *     nu, coef0, degree. Parameters are considered optimal when the cross-validation
 *     estimate of the test set error is minimal.
 *
 *     This function only makes use of SVM::getDefaultGrid for parameter optimization and thus only
 *     offers rudimentary parameter options.
 *
 *     This function works for the classification (SVM::C_SVC or SVM::NU_SVC) as well as for the
 *     regression (SVM::EPS_SVR or SVM::NU_SVR). If it is SVM::ONE_CLASS, no optimization is made and
 *     the usual %SVM with parameters specified in params is executed.
 */
- (BOOL)trainAuto:(Mat*)samples layout:(int)layout responses:(Mat*)responses kFold:(int)kFold Cgrid:(ParamGrid*)Cgrid gammaGrid:(ParamGrid*)gammaGrid pGrid:(ParamGrid*)pGrid nuGrid:(ParamGrid*)nuGrid NS_SWIFT_NAME(trainAuto(samples:layout:responses:kFold:Cgrid:gammaGrid:pGrid:nuGrid:));

/**
 * Trains an %SVM with optimal parameters
 *
 * @param samples training samples
 * @param layout See ml::SampleTypes.
 * @param responses vector of responses associated with the training samples.
 * @param kFold Cross-validation parameter. The training set is divided into kFold subsets. One
 *         subset is used to test the model, the others form the train set. So, the %SVM algorithm is
 * @param Cgrid grid for C
 * @param gammaGrid grid for gamma
 * @param pGrid grid for p
 *         balanced cross-validation subsets that is proportions between classes in subsets are close
 *         to such proportion in the whole train dataset.
 *
 *     The method trains the %SVM model automatically by choosing the optimal parameters C, gamma, p,
 *     nu, coef0, degree. Parameters are considered optimal when the cross-validation
 *     estimate of the test set error is minimal.
 *
 *     This function only makes use of SVM::getDefaultGrid for parameter optimization and thus only
 *     offers rudimentary parameter options.
 *
 *     This function works for the classification (SVM::C_SVC or SVM::NU_SVC) as well as for the
 *     regression (SVM::EPS_SVR or SVM::NU_SVR). If it is SVM::ONE_CLASS, no optimization is made and
 *     the usual %SVM with parameters specified in params is executed.
 */
- (BOOL)trainAuto:(Mat*)samples layout:(int)layout responses:(Mat*)responses kFold:(int)kFold Cgrid:(ParamGrid*)Cgrid gammaGrid:(ParamGrid*)gammaGrid pGrid:(ParamGrid*)pGrid NS_SWIFT_NAME(trainAuto(samples:layout:responses:kFold:Cgrid:gammaGrid:pGrid:));

/**
 * Trains an %SVM with optimal parameters
 *
 * @param samples training samples
 * @param layout See ml::SampleTypes.
 * @param responses vector of responses associated with the training samples.
 * @param kFold Cross-validation parameter. The training set is divided into kFold subsets. One
 *         subset is used to test the model, the others form the train set. So, the %SVM algorithm is
 * @param Cgrid grid for C
 * @param gammaGrid grid for gamma
 *         balanced cross-validation subsets that is proportions between classes in subsets are close
 *         to such proportion in the whole train dataset.
 *
 *     The method trains the %SVM model automatically by choosing the optimal parameters C, gamma, p,
 *     nu, coef0, degree. Parameters are considered optimal when the cross-validation
 *     estimate of the test set error is minimal.
 *
 *     This function only makes use of SVM::getDefaultGrid for parameter optimization and thus only
 *     offers rudimentary parameter options.
 *
 *     This function works for the classification (SVM::C_SVC or SVM::NU_SVC) as well as for the
 *     regression (SVM::EPS_SVR or SVM::NU_SVR). If it is SVM::ONE_CLASS, no optimization is made and
 *     the usual %SVM with parameters specified in params is executed.
 */
- (BOOL)trainAuto:(Mat*)samples layout:(int)layout responses:(Mat*)responses kFold:(int)kFold Cgrid:(ParamGrid*)Cgrid gammaGrid:(ParamGrid*)gammaGrid NS_SWIFT_NAME(trainAuto(samples:layout:responses:kFold:Cgrid:gammaGrid:));

/**
 * Trains an %SVM with optimal parameters
 *
 * @param samples training samples
 * @param layout See ml::SampleTypes.
 * @param responses vector of responses associated with the training samples.
 * @param kFold Cross-validation parameter. The training set is divided into kFold subsets. One
 *         subset is used to test the model, the others form the train set. So, the %SVM algorithm is
 * @param Cgrid grid for C
 *         balanced cross-validation subsets that is proportions between classes in subsets are close
 *         to such proportion in the whole train dataset.
 *
 *     The method trains the %SVM model automatically by choosing the optimal parameters C, gamma, p,
 *     nu, coef0, degree. Parameters are considered optimal when the cross-validation
 *     estimate of the test set error is minimal.
 *
 *     This function only makes use of SVM::getDefaultGrid for parameter optimization and thus only
 *     offers rudimentary parameter options.
 *
 *     This function works for the classification (SVM::C_SVC or SVM::NU_SVC) as well as for the
 *     regression (SVM::EPS_SVR or SVM::NU_SVR). If it is SVM::ONE_CLASS, no optimization is made and
 *     the usual %SVM with parameters specified in params is executed.
 */
- (BOOL)trainAuto:(Mat*)samples layout:(int)layout responses:(Mat*)responses kFold:(int)kFold Cgrid:(ParamGrid*)Cgrid NS_SWIFT_NAME(trainAuto(samples:layout:responses:kFold:Cgrid:));

/**
 * Trains an %SVM with optimal parameters
 *
 * @param samples training samples
 * @param layout See ml::SampleTypes.
 * @param responses vector of responses associated with the training samples.
 * @param kFold Cross-validation parameter. The training set is divided into kFold subsets. One
 *         subset is used to test the model, the others form the train set. So, the %SVM algorithm is
 *         balanced cross-validation subsets that is proportions between classes in subsets are close
 *         to such proportion in the whole train dataset.
 *
 *     The method trains the %SVM model automatically by choosing the optimal parameters C, gamma, p,
 *     nu, coef0, degree. Parameters are considered optimal when the cross-validation
 *     estimate of the test set error is minimal.
 *
 *     This function only makes use of SVM::getDefaultGrid for parameter optimization and thus only
 *     offers rudimentary parameter options.
 *
 *     This function works for the classification (SVM::C_SVC or SVM::NU_SVC) as well as for the
 *     regression (SVM::EPS_SVR or SVM::NU_SVR). If it is SVM::ONE_CLASS, no optimization is made and
 *     the usual %SVM with parameters specified in params is executed.
 */
- (BOOL)trainAuto:(Mat*)samples layout:(int)layout responses:(Mat*)responses kFold:(int)kFold NS_SWIFT_NAME(trainAuto(samples:layout:responses:kFold:));

/**
 * Trains an %SVM with optimal parameters
 *
 * @param samples training samples
 * @param layout See ml::SampleTypes.
 * @param responses vector of responses associated with the training samples.
 *         subset is used to test the model, the others form the train set. So, the %SVM algorithm is
 *         balanced cross-validation subsets that is proportions between classes in subsets are close
 *         to such proportion in the whole train dataset.
 *
 *     The method trains the %SVM model automatically by choosing the optimal parameters C, gamma, p,
 *     nu, coef0, degree. Parameters are considered optimal when the cross-validation
 *     estimate of the test set error is minimal.
 *
 *     This function only makes use of SVM::getDefaultGrid for parameter optimization and thus only
 *     offers rudimentary parameter options.
 *
 *     This function works for the classification (SVM::C_SVC or SVM::NU_SVC) as well as for the
 *     regression (SVM::EPS_SVR or SVM::NU_SVR). If it is SVM::ONE_CLASS, no optimization is made and
 *     the usual %SVM with parameters specified in params is executed.
 */
- (BOOL)trainAuto:(Mat*)samples layout:(int)layout responses:(Mat*)responses NS_SWIFT_NAME(trainAuto(samples:layout:responses:));


//
//  double cv::ml::SVM::getC()
//
/**
 * @see `-setC:`
 */
- (double)getC NS_SWIFT_NAME(getC());


//
//  double cv::ml::SVM::getCoef0()
//
/**
 * @see `-setCoef0:`
 */
- (double)getCoef0 NS_SWIFT_NAME(getCoef0());


//
//  double cv::ml::SVM::getDecisionFunction(int i, Mat& alpha, Mat& svidx)
//
/**
 * Retrieves the decision function
 *
 * @param i the index of the decision function. If the problem solved is regression, 1-class or
 *         2-class classification, then there will be just one decision function and the index should
 *         always be 0. Otherwise, in the case of N-class classification, there will be `$$N(N-1)/2$$`
 *         decision functions.
 * @param alpha the optional output vector for weights, corresponding to different support vectors.
 *         In the case of linear %SVM all the alpha's will be 1's.
 * @param svidx the optional output vector of indices of support vectors within the matrix of
 *         support vectors (which can be retrieved by SVM::getSupportVectors). In the case of linear
 *         %SVM each decision function consists of a single "compressed" support vector.
 *
 *     The method returns rho parameter of the decision function, a scalar subtracted from the weighted
 *     sum of kernel responses.
 */
- (double)getDecisionFunction:(int)i alpha:(Mat*)alpha svidx:(Mat*)svidx NS_SWIFT_NAME(getDecisionFunction(i:alpha:svidx:));


//
//  double cv::ml::SVM::getDegree()
//
/**
 * @see `-setDegree:`
 */
- (double)getDegree NS_SWIFT_NAME(getDegree());


//
//  double cv::ml::SVM::getGamma()
//
/**
 * @see `-setGamma:`
 */
- (double)getGamma NS_SWIFT_NAME(getGamma());


//
//  double cv::ml::SVM::getNu()
//
/**
 * @see `-setNu:`
 */
- (double)getNu NS_SWIFT_NAME(getNu());


//
//  double cv::ml::SVM::getP()
//
/**
 * @see `-setP:`
 */
- (double)getP NS_SWIFT_NAME(getP());


//
//  int cv::ml::SVM::getKernelType()
//
/**
 * Type of a %SVM kernel.
 * See SVM::KernelTypes. Default value is SVM::RBF.
 */
- (int)getKernelType NS_SWIFT_NAME(getKernelType());


//
//  int cv::ml::SVM::getType()
//
/**
 * @see `-setType:`
 */
- (int)getType NS_SWIFT_NAME(getType());


//
//  void cv::ml::SVM::setC(double val)
//
/**
 *  getC @see `-getC:`
 */
- (void)setC:(double)val NS_SWIFT_NAME(setC(val:));


//
//  void cv::ml::SVM::setClassWeights(Mat val)
//
/**
 *  getClassWeights @see `-getClassWeights:`
 */
- (void)setClassWeights:(Mat*)val NS_SWIFT_NAME(setClassWeights(val:));


//
//  void cv::ml::SVM::setCoef0(double val)
//
/**
 *  getCoef0 @see `-getCoef0:`
 */
- (void)setCoef0:(double)val NS_SWIFT_NAME(setCoef0(val:));


//
//  void cv::ml::SVM::setDegree(double val)
//
/**
 *  getDegree @see `-getDegree:`
 */
- (void)setDegree:(double)val NS_SWIFT_NAME(setDegree(val:));


//
//  void cv::ml::SVM::setGamma(double val)
//
/**
 *  getGamma @see `-getGamma:`
 */
- (void)setGamma:(double)val NS_SWIFT_NAME(setGamma(val:));


//
//  void cv::ml::SVM::setKernel(int kernelType)
//
/**
 * Initialize with one of predefined kernels.
 * See SVM::KernelTypes.
 */
- (void)setKernel:(int)kernelType NS_SWIFT_NAME(setKernel(kernelType:));


//
//  void cv::ml::SVM::setNu(double val)
//
/**
 *  getNu @see `-getNu:`
 */
- (void)setNu:(double)val NS_SWIFT_NAME(setNu(val:));


//
//  void cv::ml::SVM::setP(double val)
//
/**
 *  getP @see `-getP:`
 */
- (void)setP:(double)val NS_SWIFT_NAME(setP(val:));


//
//  void cv::ml::SVM::setTermCriteria(TermCriteria val)
//
/**
 *  getTermCriteria @see `-getTermCriteria:`
 */
- (void)setTermCriteria:(TermCriteria*)val NS_SWIFT_NAME(setTermCriteria(val:));


//
//  void cv::ml::SVM::setType(int val)
//
/**
 *  getType @see `-getType:`
 */
- (void)setType:(int)val NS_SWIFT_NAME(setType(val:));



@end

NS_ASSUME_NONNULL_END



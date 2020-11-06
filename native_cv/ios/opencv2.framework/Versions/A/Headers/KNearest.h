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


// C++: enum KNearestTypes
typedef NS_ENUM(int, KNearestTypes) {
    BRUTE_FORCE = 1,
    KDTREE = 2
};



NS_ASSUME_NONNULL_BEGIN

// C++: class KNearest
/**
 * The class implements K-Nearest Neighbors model
 *
 * @see REF: ml_intro_knn
 *
 * Member of `Ml`
 */
CV_EXPORTS @interface KNearest : StatModel


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::ml::KNearest> nativePtrKNearest;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::ml::KNearest>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::ml::KNearest>)nativePtr;
#endif


#pragma mark - Methods


//
// static Ptr_KNearest cv::ml::KNearest::create()
//
/**
 * Creates the empty model
 *
 *     The static method creates empty %KNearest classifier. It should be then trained using StatModel::train method.
 */
+ (KNearest*)create NS_SWIFT_NAME(create());


//
// static Ptr_KNearest cv::ml::KNearest::load(String filepath)
//
/**
 * Loads and creates a serialized knearest from a file
 *
 * Use KNearest::save to serialize and store an KNearest to disk.
 * Load the KNearest from this file again, by calling this function with the path to the file.
 *
 * @param filepath path to serialized KNearest
 */
+ (KNearest*)load:(NSString*)filepath NS_SWIFT_NAME(load(filepath:));


//
//  bool cv::ml::KNearest::getIsClassifier()
//
/**
 * @see `-setIsClassifier:`
 */
- (BOOL)getIsClassifier NS_SWIFT_NAME(getIsClassifier());


//
//  float cv::ml::KNearest::findNearest(Mat samples, int k, Mat& results, Mat& neighborResponses = Mat(), Mat& dist = Mat())
//
/**
 * Finds the neighbors and predicts responses for input vectors.
 *
 * @param samples Input samples stored by rows. It is a single-precision floating-point matrix of
 *         `<number_of_samples> * k` size.
 * @param k Number of used nearest neighbors. Should be greater than 1.
 * @param results Vector with results of prediction (regression or classification) for each input
 *         sample. It is a single-precision floating-point vector with `<number_of_samples>` elements.
 * @param neighborResponses Optional output values for corresponding neighbors. It is a single-
 *         precision floating-point matrix of `<number_of_samples> * k` size.
 * @param dist Optional output distances from the input vectors to the corresponding neighbors. It
 *         is a single-precision floating-point matrix of `<number_of_samples> * k` size.
 *
 *     For each input vector (a row of the matrix samples), the method finds the k nearest neighbors.
 *     In case of regression, the predicted result is a mean value of the particular vector's neighbor
 *     responses. In case of classification, the class is determined by voting.
 *
 *     For each input vector, the neighbors are sorted by their distances to the vector.
 *
 *     In case of C++ interface you can use output pointers to empty matrices and the function will
 *     allocate memory itself.
 *
 *     If only a single input vector is passed, all output matrices are optional and the predicted
 *     value is returned by the method.
 *
 *     The function is parallelized with the TBB library.
 */
- (float)findNearest:(Mat*)samples k:(int)k results:(Mat*)results neighborResponses:(Mat*)neighborResponses dist:(Mat*)dist NS_SWIFT_NAME(findNearest(samples:k:results:neighborResponses:dist:));

/**
 * Finds the neighbors and predicts responses for input vectors.
 *
 * @param samples Input samples stored by rows. It is a single-precision floating-point matrix of
 *         `<number_of_samples> * k` size.
 * @param k Number of used nearest neighbors. Should be greater than 1.
 * @param results Vector with results of prediction (regression or classification) for each input
 *         sample. It is a single-precision floating-point vector with `<number_of_samples>` elements.
 * @param neighborResponses Optional output values for corresponding neighbors. It is a single-
 *         precision floating-point matrix of `<number_of_samples> * k` size.
 *         is a single-precision floating-point matrix of `<number_of_samples> * k` size.
 *
 *     For each input vector (a row of the matrix samples), the method finds the k nearest neighbors.
 *     In case of regression, the predicted result is a mean value of the particular vector's neighbor
 *     responses. In case of classification, the class is determined by voting.
 *
 *     For each input vector, the neighbors are sorted by their distances to the vector.
 *
 *     In case of C++ interface you can use output pointers to empty matrices and the function will
 *     allocate memory itself.
 *
 *     If only a single input vector is passed, all output matrices are optional and the predicted
 *     value is returned by the method.
 *
 *     The function is parallelized with the TBB library.
 */
- (float)findNearest:(Mat*)samples k:(int)k results:(Mat*)results neighborResponses:(Mat*)neighborResponses NS_SWIFT_NAME(findNearest(samples:k:results:neighborResponses:));

/**
 * Finds the neighbors and predicts responses for input vectors.
 *
 * @param samples Input samples stored by rows. It is a single-precision floating-point matrix of
 *         `<number_of_samples> * k` size.
 * @param k Number of used nearest neighbors. Should be greater than 1.
 * @param results Vector with results of prediction (regression or classification) for each input
 *         sample. It is a single-precision floating-point vector with `<number_of_samples>` elements.
 *         precision floating-point matrix of `<number_of_samples> * k` size.
 *         is a single-precision floating-point matrix of `<number_of_samples> * k` size.
 *
 *     For each input vector (a row of the matrix samples), the method finds the k nearest neighbors.
 *     In case of regression, the predicted result is a mean value of the particular vector's neighbor
 *     responses. In case of classification, the class is determined by voting.
 *
 *     For each input vector, the neighbors are sorted by their distances to the vector.
 *
 *     In case of C++ interface you can use output pointers to empty matrices and the function will
 *     allocate memory itself.
 *
 *     If only a single input vector is passed, all output matrices are optional and the predicted
 *     value is returned by the method.
 *
 *     The function is parallelized with the TBB library.
 */
- (float)findNearest:(Mat*)samples k:(int)k results:(Mat*)results NS_SWIFT_NAME(findNearest(samples:k:results:));


//
//  int cv::ml::KNearest::getAlgorithmType()
//
/**
 * @see `-setAlgorithmType:`
 */
- (int)getAlgorithmType NS_SWIFT_NAME(getAlgorithmType());


//
//  int cv::ml::KNearest::getDefaultK()
//
/**
 * @see `-setDefaultK:`
 */
- (int)getDefaultK NS_SWIFT_NAME(getDefaultK());


//
//  int cv::ml::KNearest::getEmax()
//
/**
 * @see `-setEmax:`
 */
- (int)getEmax NS_SWIFT_NAME(getEmax());


//
//  void cv::ml::KNearest::setAlgorithmType(int val)
//
/**
 *  getAlgorithmType @see `-getAlgorithmType:`
 */
- (void)setAlgorithmType:(int)val NS_SWIFT_NAME(setAlgorithmType(val:));


//
//  void cv::ml::KNearest::setDefaultK(int val)
//
/**
 *  getDefaultK @see `-getDefaultK:`
 */
- (void)setDefaultK:(int)val NS_SWIFT_NAME(setDefaultK(val:));


//
//  void cv::ml::KNearest::setEmax(int val)
//
/**
 *  getEmax @see `-getEmax:`
 */
- (void)setEmax:(int)val NS_SWIFT_NAME(setEmax(val:));


//
//  void cv::ml::KNearest::setIsClassifier(bool val)
//
/**
 *  getIsClassifier @see `-getIsClassifier:`
 */
- (void)setIsClassifier:(BOOL)val NS_SWIFT_NAME(setIsClassifier(val:));



@end

NS_ASSUME_NONNULL_END



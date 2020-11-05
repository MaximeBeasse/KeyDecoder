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
@class TermCriteria;


// C++: enum RegKinds
typedef NS_ENUM(int, RegKinds) {
    REG_DISABLE = -1,
    REG_L1 = 0,
    REG_L2 = 1
};


// C++: enum Methods
typedef NS_ENUM(int, Methods) {
    BATCH = 0,
    MINI_BATCH = 1
};



NS_ASSUME_NONNULL_BEGIN

// C++: class LogisticRegression
/**
 * Implements Logistic Regression classifier.
 *
 * @see REF: ml_intro_lr
 *
 * Member of `Ml`
 */
CV_EXPORTS @interface LogisticRegression : StatModel


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::ml::LogisticRegression> nativePtrLogisticRegression;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::ml::LogisticRegression>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::ml::LogisticRegression>)nativePtr;
#endif


#pragma mark - Methods


//
//  Mat cv::ml::LogisticRegression::get_learnt_thetas()
//
/**
 * This function returns the trained parameters arranged across rows.
 *
 *     For a two class classification problem, it returns a row matrix. It returns learnt parameters of
 *     the Logistic Regression as a matrix of type CV_32F.
 */
- (Mat*)get_learnt_thetas NS_SWIFT_NAME(get_learnt_thetas());


//
// static Ptr_LogisticRegression cv::ml::LogisticRegression::create()
//
/**
 * Creates empty model.
 *
 *     Creates Logistic Regression model with parameters given.
 */
+ (LogisticRegression*)create NS_SWIFT_NAME(create());


//
// static Ptr_LogisticRegression cv::ml::LogisticRegression::load(String filepath, String nodeName = String())
//
/**
 * Loads and creates a serialized LogisticRegression from a file
 *
 * Use LogisticRegression::save to serialize and store an LogisticRegression to disk.
 * Load the LogisticRegression from this file again, by calling this function with the path to the file.
 * Optionally specify the node for the file containing the classifier
 *
 * @param filepath path to serialized LogisticRegression
 * @param nodeName name of node containing the classifier
 */
+ (LogisticRegression*)load:(NSString*)filepath nodeName:(NSString*)nodeName NS_SWIFT_NAME(load(filepath:nodeName:));

/**
 * Loads and creates a serialized LogisticRegression from a file
 *
 * Use LogisticRegression::save to serialize and store an LogisticRegression to disk.
 * Load the LogisticRegression from this file again, by calling this function with the path to the file.
 * Optionally specify the node for the file containing the classifier
 *
 * @param filepath path to serialized LogisticRegression
 */
+ (LogisticRegression*)load:(NSString*)filepath NS_SWIFT_NAME(load(filepath:));


//
//  TermCriteria cv::ml::LogisticRegression::getTermCriteria()
//
/**
 * @see `-setTermCriteria:`
 */
- (TermCriteria*)getTermCriteria NS_SWIFT_NAME(getTermCriteria());


//
//  double cv::ml::LogisticRegression::getLearningRate()
//
/**
 * @see `-setLearningRate:`
 */
- (double)getLearningRate NS_SWIFT_NAME(getLearningRate());


//
//  float cv::ml::LogisticRegression::predict(Mat samples, Mat& results = Mat(), int flags = 0)
//
/**
 * Predicts responses for input samples and returns a float type.
 *
 * @param samples The input data for the prediction algorithm. Matrix [m x n], where each row
 *         contains variables (features) of one object being classified. Should have data type CV_32F.
 * @param results Predicted labels as a column matrix of type CV_32S.
 * @param flags Not used.
 */
- (float)predict:(Mat*)samples results:(Mat*)results flags:(int)flags NS_SWIFT_NAME(predict(samples:results:flags:));

/**
 * Predicts responses for input samples and returns a float type.
 *
 * @param samples The input data for the prediction algorithm. Matrix [m x n], where each row
 *         contains variables (features) of one object being classified. Should have data type CV_32F.
 * @param results Predicted labels as a column matrix of type CV_32S.
 */
- (float)predict:(Mat*)samples results:(Mat*)results NS_SWIFT_NAME(predict(samples:results:));

/**
 * Predicts responses for input samples and returns a float type.
 *
 * @param samples The input data for the prediction algorithm. Matrix [m x n], where each row
 *         contains variables (features) of one object being classified. Should have data type CV_32F.
 */
- (float)predict:(Mat*)samples NS_SWIFT_NAME(predict(samples:));


//
//  int cv::ml::LogisticRegression::getIterations()
//
/**
 * @see `-setIterations:`
 */
- (int)getIterations NS_SWIFT_NAME(getIterations());


//
//  int cv::ml::LogisticRegression::getMiniBatchSize()
//
/**
 * @see `-setMiniBatchSize:`
 */
- (int)getMiniBatchSize NS_SWIFT_NAME(getMiniBatchSize());


//
//  int cv::ml::LogisticRegression::getRegularization()
//
/**
 * @see `-setRegularization:`
 */
- (int)getRegularization NS_SWIFT_NAME(getRegularization());


//
//  int cv::ml::LogisticRegression::getTrainMethod()
//
/**
 * @see `-setTrainMethod:`
 */
- (int)getTrainMethod NS_SWIFT_NAME(getTrainMethod());


//
//  void cv::ml::LogisticRegression::setIterations(int val)
//
/**
 *  getIterations @see `-getIterations:`
 */
- (void)setIterations:(int)val NS_SWIFT_NAME(setIterations(val:));


//
//  void cv::ml::LogisticRegression::setLearningRate(double val)
//
/**
 *  getLearningRate @see `-getLearningRate:`
 */
- (void)setLearningRate:(double)val NS_SWIFT_NAME(setLearningRate(val:));


//
//  void cv::ml::LogisticRegression::setMiniBatchSize(int val)
//
/**
 *  getMiniBatchSize @see `-getMiniBatchSize:`
 */
- (void)setMiniBatchSize:(int)val NS_SWIFT_NAME(setMiniBatchSize(val:));


//
//  void cv::ml::LogisticRegression::setRegularization(int val)
//
/**
 *  getRegularization @see `-getRegularization:`
 */
- (void)setRegularization:(int)val NS_SWIFT_NAME(setRegularization(val:));


//
//  void cv::ml::LogisticRegression::setTermCriteria(TermCriteria val)
//
/**
 *  getTermCriteria @see `-getTermCriteria:`
 */
- (void)setTermCriteria:(TermCriteria*)val NS_SWIFT_NAME(setTermCriteria(val:));


//
//  void cv::ml::LogisticRegression::setTrainMethod(int val)
//
/**
 *  getTrainMethod @see `-getTrainMethod:`
 */
- (void)setTrainMethod:(int)val NS_SWIFT_NAME(setTrainMethod(val:));



@end

NS_ASSUME_NONNULL_END



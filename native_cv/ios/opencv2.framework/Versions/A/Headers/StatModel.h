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
#import "Algorithm.h"

@class Mat;
@class TrainData;


// C++: enum StatModelFlags
typedef NS_ENUM(int, StatModelFlags) {
    UPDATE_MODEL = 1,
    RAW_OUTPUT = 1,
    COMPRESSED_INPUT = 2,
    PREPROCESSED_INPUT = 4
};



NS_ASSUME_NONNULL_BEGIN

// C++: class StatModel
/**
 * Base class for statistical models in OpenCV ML.
 *
 * Member of `Ml`
 */
CV_EXPORTS @interface StatModel : Algorithm


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::ml::StatModel> nativePtrStatModel;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::ml::StatModel>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::ml::StatModel>)nativePtr;
#endif


#pragma mark - Methods


//
//  bool cv::ml::StatModel::empty()
//
- (BOOL)empty NS_SWIFT_NAME(empty());


//
//  bool cv::ml::StatModel::isClassifier()
//
/**
 * Returns true if the model is classifier
 */
- (BOOL)isClassifier NS_SWIFT_NAME(isClassifier());


//
//  bool cv::ml::StatModel::isTrained()
//
/**
 * Returns true if the model is trained
 */
- (BOOL)isTrained NS_SWIFT_NAME(isTrained());


//
//  bool cv::ml::StatModel::train(Mat samples, int layout, Mat responses)
//
/**
 * Trains the statistical model
 *
 * @param samples training samples
 * @param layout See ml::SampleTypes.
 * @param responses vector of responses associated with the training samples.
 */
- (BOOL)train:(Mat*)samples layout:(int)layout responses:(Mat*)responses NS_SWIFT_NAME(train(samples:layout:responses:));


//
//  bool cv::ml::StatModel::train(Ptr_TrainData trainData, int flags = 0)
//
/**
 * Trains the statistical model
 *
 * @param trainData training data that can be loaded from file using TrainData::loadFromCSV or
 *         created with TrainData::create.
 * @param flags optional flags, depending on the model. Some of the models can be updated with the
 *         new training samples, not completely overwritten (such as NormalBayesClassifier or ANN_MLP).
 */
- (BOOL)train:(TrainData*)trainData flags:(int)flags NS_SWIFT_NAME(train(trainData:flags:));

/**
 * Trains the statistical model
 *
 * @param trainData training data that can be loaded from file using TrainData::loadFromCSV or
 *         created with TrainData::create.
 *         new training samples, not completely overwritten (such as NormalBayesClassifier or ANN_MLP).
 */
- (BOOL)train:(TrainData*)trainData NS_SWIFT_NAME(train(trainData:));


//
//  float cv::ml::StatModel::calcError(Ptr_TrainData data, bool test, Mat& resp)
//
/**
 * Computes error on the training or test dataset
 *
 * @param data the training data
 * @param test if true, the error is computed over the test subset of the data, otherwise it's
 *         computed over the training subset of the data. Please note that if you loaded a completely
 *         different dataset to evaluate already trained classifier, you will probably want not to set
 *         the test subset at all with TrainData::setTrainTestSplitRatio and specify test=false, so
 *         that the error is computed for the whole new set. Yes, this sounds a bit confusing.
 * @param resp the optional output responses.
 *
 *     The method uses StatModel::predict to compute the error. For regression models the error is
 *     computed as RMS, for classifiers - as a percent of missclassified samples (0%-100%).
 */
- (float)calcError:(TrainData*)data test:(BOOL)test resp:(Mat*)resp NS_SWIFT_NAME(calcError(data:test:resp:));


//
//  float cv::ml::StatModel::predict(Mat samples, Mat& results = Mat(), int flags = 0)
//
/**
 * Predicts response(s) for the provided sample(s)
 *
 * @param samples The input samples, floating-point matrix
 * @param results The optional output matrix of results.
 * @param flags The optional flags, model-dependent. See cv::ml::StatModel::Flags.
 */
- (float)predict:(Mat*)samples results:(Mat*)results flags:(int)flags NS_SWIFT_NAME(predict(samples:results:flags:));

/**
 * Predicts response(s) for the provided sample(s)
 *
 * @param samples The input samples, floating-point matrix
 * @param results The optional output matrix of results.
 */
- (float)predict:(Mat*)samples results:(Mat*)results NS_SWIFT_NAME(predict(samples:results:));

/**
 * Predicts response(s) for the provided sample(s)
 *
 * @param samples The input samples, floating-point matrix
 */
- (float)predict:(Mat*)samples NS_SWIFT_NAME(predict(samples:));


//
//  int cv::ml::StatModel::getVarCount()
//
/**
 * Returns the number of variables in training samples
 */
- (int)getVarCount NS_SWIFT_NAME(getVarCount());



@end

NS_ASSUME_NONNULL_END



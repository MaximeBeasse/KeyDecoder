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



NS_ASSUME_NONNULL_BEGIN

// C++: class NormalBayesClassifier
/**
 * Bayes classifier for normally distributed data.
 *
 * @see REF: ml_intro_bayes
 *
 * Member of `Ml`
 */
CV_EXPORTS @interface NormalBayesClassifier : StatModel


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::ml::NormalBayesClassifier> nativePtrNormalBayesClassifier;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::ml::NormalBayesClassifier>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::ml::NormalBayesClassifier>)nativePtr;
#endif


#pragma mark - Methods


//
// static Ptr_NormalBayesClassifier cv::ml::NormalBayesClassifier::create()
//
/**
 * Creates empty model
 * Use StatModel::train to train the model after creation.
 */
+ (NormalBayesClassifier*)create NS_SWIFT_NAME(create());


//
// static Ptr_NormalBayesClassifier cv::ml::NormalBayesClassifier::load(String filepath, String nodeName = String())
//
/**
 * Loads and creates a serialized NormalBayesClassifier from a file
 *
 * Use NormalBayesClassifier::save to serialize and store an NormalBayesClassifier to disk.
 * Load the NormalBayesClassifier from this file again, by calling this function with the path to the file.
 * Optionally specify the node for the file containing the classifier
 *
 * @param filepath path to serialized NormalBayesClassifier
 * @param nodeName name of node containing the classifier
 */
+ (NormalBayesClassifier*)load:(NSString*)filepath nodeName:(NSString*)nodeName NS_SWIFT_NAME(load(filepath:nodeName:));

/**
 * Loads and creates a serialized NormalBayesClassifier from a file
 *
 * Use NormalBayesClassifier::save to serialize and store an NormalBayesClassifier to disk.
 * Load the NormalBayesClassifier from this file again, by calling this function with the path to the file.
 * Optionally specify the node for the file containing the classifier
 *
 * @param filepath path to serialized NormalBayesClassifier
 */
+ (NormalBayesClassifier*)load:(NSString*)filepath NS_SWIFT_NAME(load(filepath:));


//
//  float cv::ml::NormalBayesClassifier::predictProb(Mat inputs, Mat& outputs, Mat& outputProbs, int flags = 0)
//
/**
 * Predicts the response for sample(s).
 *
 *     The method estimates the most probable classes for input vectors. Input vectors (one or more)
 *     are stored as rows of the matrix inputs. In case of multiple input vectors, there should be one
 *     output vector outputs. The predicted class for a single input vector is returned by the method.
 *     The vector outputProbs contains the output probabilities corresponding to each element of
 *     result.
 */
- (float)predictProb:(Mat*)inputs outputs:(Mat*)outputs outputProbs:(Mat*)outputProbs flags:(int)flags NS_SWIFT_NAME(predictProb(inputs:outputs:outputProbs:flags:));

/**
 * Predicts the response for sample(s).
 *
 *     The method estimates the most probable classes for input vectors. Input vectors (one or more)
 *     are stored as rows of the matrix inputs. In case of multiple input vectors, there should be one
 *     output vector outputs. The predicted class for a single input vector is returned by the method.
 *     The vector outputProbs contains the output probabilities corresponding to each element of
 *     result.
 */
- (float)predictProb:(Mat*)inputs outputs:(Mat*)outputs outputProbs:(Mat*)outputProbs NS_SWIFT_NAME(predictProb(inputs:outputs:outputProbs:));



@end

NS_ASSUME_NONNULL_END



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

@class Double2;
@class Mat;
@class TermCriteria;


// C++: enum EMTypes
typedef NS_ENUM(int, EMTypes) {
    COV_MAT_SPHERICAL = 0,
    COV_MAT_DIAGONAL = 1,
    COV_MAT_GENERIC = 2,
    COV_MAT_DEFAULT = COV_MAT_DIAGONAL
};



NS_ASSUME_NONNULL_BEGIN

// C++: class EM
/**
 * The class implements the Expectation Maximization algorithm.
 *
 * @see REF: ml_intro_em
 *
 * Member of `Ml`
 */
CV_EXPORTS @interface EM : StatModel


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::ml::EM> nativePtrEM;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::ml::EM>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::ml::EM>)nativePtr;
#endif


#pragma mark - Class Constants


@property (class, readonly) int DEFAULT_NCLUSTERS NS_SWIFT_NAME(DEFAULT_NCLUSTERS);
@property (class, readonly) int DEFAULT_MAX_ITERS NS_SWIFT_NAME(DEFAULT_MAX_ITERS);
@property (class, readonly) int START_E_STEP NS_SWIFT_NAME(START_E_STEP);
@property (class, readonly) int START_M_STEP NS_SWIFT_NAME(START_M_STEP);
@property (class, readonly) int START_AUTO_STEP NS_SWIFT_NAME(START_AUTO_STEP);

#pragma mark - Methods


//
//  Mat cv::ml::EM::getMeans()
//
/**
 * Returns the cluster centers (means of the Gaussian mixture)
 *
 *     Returns matrix with the number of rows equal to the number of mixtures and number of columns
 *     equal to the space dimensionality.
 */
- (Mat*)getMeans NS_SWIFT_NAME(getMeans());


//
//  Mat cv::ml::EM::getWeights()
//
/**
 * Returns weights of the mixtures
 *
 *     Returns vector with the number of elements equal to the number of mixtures.
 */
- (Mat*)getWeights NS_SWIFT_NAME(getWeights());


//
// static Ptr_EM cv::ml::EM::create()
//
/**
 * Creates empty %EM model.
 *     The model should be trained then using StatModel::train(traindata, flags) method. Alternatively, you
 *     can use one of the EM::train\* methods or load it from file using Algorithm::load\<EM\>(filename).
 */
+ (EM*)create NS_SWIFT_NAME(create());


//
// static Ptr_EM cv::ml::EM::load(String filepath, String nodeName = String())
//
/**
 * Loads and creates a serialized EM from a file
 *
 * Use EM::save to serialize and store an EM to disk.
 * Load the EM from this file again, by calling this function with the path to the file.
 * Optionally specify the node for the file containing the classifier
 *
 * @param filepath path to serialized EM
 * @param nodeName name of node containing the classifier
 */
+ (EM*)load:(NSString*)filepath nodeName:(NSString*)nodeName NS_SWIFT_NAME(load(filepath:nodeName:));

/**
 * Loads and creates a serialized EM from a file
 *
 * Use EM::save to serialize and store an EM to disk.
 * Load the EM from this file again, by calling this function with the path to the file.
 * Optionally specify the node for the file containing the classifier
 *
 * @param filepath path to serialized EM
 */
+ (EM*)load:(NSString*)filepath NS_SWIFT_NAME(load(filepath:));


//
//  TermCriteria cv::ml::EM::getTermCriteria()
//
/**
 * @see `-setTermCriteria:`
 */
- (TermCriteria*)getTermCriteria NS_SWIFT_NAME(getTermCriteria());


//
//  Vec2d cv::ml::EM::predict2(Mat sample, Mat& probs)
//
/**
 * Returns a likelihood logarithm value and an index of the most probable mixture component
 *     for the given sample.
 *
 * @param sample A sample for classification. It should be a one-channel matrix of
 *         `$$1 \times dims$$` or `$$dims \times 1$$` size.
 * @param probs Optional output matrix that contains posterior probabilities of each component
 *         given the sample. It has `$$1 \times nclusters$$` size and CV_64FC1 type.
 *
 *     The method returns a two-element double vector. Zero element is a likelihood logarithm value for
 *     the sample. First element is an index of the most probable mixture component for the given
 *     sample.
 */
- (Double2*)predict2:(Mat*)sample probs:(Mat*)probs NS_SWIFT_NAME(predict2(sample:probs:));


//
//  bool cv::ml::EM::trainE(Mat samples, Mat means0, Mat covs0 = Mat(), Mat weights0 = Mat(), Mat& logLikelihoods = Mat(), Mat& labels = Mat(), Mat& probs = Mat())
//
/**
 * Estimate the Gaussian mixture parameters from a samples set.
 *
 *     This variation starts with Expectation step. You need to provide initial means `$$a_k$$` of
 *     mixture components. Optionally you can pass initial weights `$$\pi_k$$` and covariance matrices
 *     `$$S_k$$` of mixture components.
 *
 * @param samples Samples from which the Gaussian mixture model will be estimated. It should be a
 *         one-channel matrix, each row of which is a sample. If the matrix does not have CV_64F type
 *         it will be converted to the inner matrix of such type for the further computing.
 * @param means0 Initial means `$$a_k$$` of mixture components. It is a one-channel matrix of
 *         `$$nclusters \times dims$$` size. If the matrix does not have CV_64F type it will be
 *         converted to the inner matrix of such type for the further computing.
 * @param covs0 The vector of initial covariance matrices `$$S_k$$` of mixture components. Each of
 *         covariance matrices is a one-channel matrix of `$$dims \times dims$$` size. If the matrices
 *         do not have CV_64F type they will be converted to the inner matrices of such type for the
 *         further computing.
 * @param weights0 Initial weights `$$\pi_k$$` of mixture components. It should be a one-channel
 *         floating-point matrix with `$$1 \times nclusters$$` or `$$nclusters \times 1$$` size.
 * @param logLikelihoods The optional output matrix that contains a likelihood logarithm value for
 *         each sample. It has `$$nsamples \times 1$$` size and CV_64FC1 type.
 * @param labels The optional output "class label" for each sample:
 *         `$$\texttt{labels}_i=\texttt{arg max}_k(p_{i,k}), i=1..N$$` (indices of the most probable
 *         mixture component for each sample). It has `$$nsamples \times 1$$` size and CV_32SC1 type.
 * @param probs The optional output matrix that contains posterior probabilities of each Gaussian
 *         mixture component given the each sample. It has `$$nsamples \times nclusters$$` size and
 *         CV_64FC1 type.
 */
- (BOOL)trainE:(Mat*)samples means0:(Mat*)means0 covs0:(Mat*)covs0 weights0:(Mat*)weights0 logLikelihoods:(Mat*)logLikelihoods labels:(Mat*)labels probs:(Mat*)probs NS_SWIFT_NAME(trainE(samples:means0:covs0:weights0:logLikelihoods:labels:probs:));

/**
 * Estimate the Gaussian mixture parameters from a samples set.
 *
 *     This variation starts with Expectation step. You need to provide initial means `$$a_k$$` of
 *     mixture components. Optionally you can pass initial weights `$$\pi_k$$` and covariance matrices
 *     `$$S_k$$` of mixture components.
 *
 * @param samples Samples from which the Gaussian mixture model will be estimated. It should be a
 *         one-channel matrix, each row of which is a sample. If the matrix does not have CV_64F type
 *         it will be converted to the inner matrix of such type for the further computing.
 * @param means0 Initial means `$$a_k$$` of mixture components. It is a one-channel matrix of
 *         `$$nclusters \times dims$$` size. If the matrix does not have CV_64F type it will be
 *         converted to the inner matrix of such type for the further computing.
 * @param covs0 The vector of initial covariance matrices `$$S_k$$` of mixture components. Each of
 *         covariance matrices is a one-channel matrix of `$$dims \times dims$$` size. If the matrices
 *         do not have CV_64F type they will be converted to the inner matrices of such type for the
 *         further computing.
 * @param weights0 Initial weights `$$\pi_k$$` of mixture components. It should be a one-channel
 *         floating-point matrix with `$$1 \times nclusters$$` or `$$nclusters \times 1$$` size.
 * @param logLikelihoods The optional output matrix that contains a likelihood logarithm value for
 *         each sample. It has `$$nsamples \times 1$$` size and CV_64FC1 type.
 * @param labels The optional output "class label" for each sample:
 *         `$$\texttt{labels}_i=\texttt{arg max}_k(p_{i,k}), i=1..N$$` (indices of the most probable
 *         mixture component for each sample). It has `$$nsamples \times 1$$` size and CV_32SC1 type.
 *         mixture component given the each sample. It has `$$nsamples \times nclusters$$` size and
 *         CV_64FC1 type.
 */
- (BOOL)trainE:(Mat*)samples means0:(Mat*)means0 covs0:(Mat*)covs0 weights0:(Mat*)weights0 logLikelihoods:(Mat*)logLikelihoods labels:(Mat*)labels NS_SWIFT_NAME(trainE(samples:means0:covs0:weights0:logLikelihoods:labels:));

/**
 * Estimate the Gaussian mixture parameters from a samples set.
 *
 *     This variation starts with Expectation step. You need to provide initial means `$$a_k$$` of
 *     mixture components. Optionally you can pass initial weights `$$\pi_k$$` and covariance matrices
 *     `$$S_k$$` of mixture components.
 *
 * @param samples Samples from which the Gaussian mixture model will be estimated. It should be a
 *         one-channel matrix, each row of which is a sample. If the matrix does not have CV_64F type
 *         it will be converted to the inner matrix of such type for the further computing.
 * @param means0 Initial means `$$a_k$$` of mixture components. It is a one-channel matrix of
 *         `$$nclusters \times dims$$` size. If the matrix does not have CV_64F type it will be
 *         converted to the inner matrix of such type for the further computing.
 * @param covs0 The vector of initial covariance matrices `$$S_k$$` of mixture components. Each of
 *         covariance matrices is a one-channel matrix of `$$dims \times dims$$` size. If the matrices
 *         do not have CV_64F type they will be converted to the inner matrices of such type for the
 *         further computing.
 * @param weights0 Initial weights `$$\pi_k$$` of mixture components. It should be a one-channel
 *         floating-point matrix with `$$1 \times nclusters$$` or `$$nclusters \times 1$$` size.
 * @param logLikelihoods The optional output matrix that contains a likelihood logarithm value for
 *         each sample. It has `$$nsamples \times 1$$` size and CV_64FC1 type.
 *         `$$\texttt{labels}_i=\texttt{arg max}_k(p_{i,k}), i=1..N$$` (indices of the most probable
 *         mixture component for each sample). It has `$$nsamples \times 1$$` size and CV_32SC1 type.
 *         mixture component given the each sample. It has `$$nsamples \times nclusters$$` size and
 *         CV_64FC1 type.
 */
- (BOOL)trainE:(Mat*)samples means0:(Mat*)means0 covs0:(Mat*)covs0 weights0:(Mat*)weights0 logLikelihoods:(Mat*)logLikelihoods NS_SWIFT_NAME(trainE(samples:means0:covs0:weights0:logLikelihoods:));

/**
 * Estimate the Gaussian mixture parameters from a samples set.
 *
 *     This variation starts with Expectation step. You need to provide initial means `$$a_k$$` of
 *     mixture components. Optionally you can pass initial weights `$$\pi_k$$` and covariance matrices
 *     `$$S_k$$` of mixture components.
 *
 * @param samples Samples from which the Gaussian mixture model will be estimated. It should be a
 *         one-channel matrix, each row of which is a sample. If the matrix does not have CV_64F type
 *         it will be converted to the inner matrix of such type for the further computing.
 * @param means0 Initial means `$$a_k$$` of mixture components. It is a one-channel matrix of
 *         `$$nclusters \times dims$$` size. If the matrix does not have CV_64F type it will be
 *         converted to the inner matrix of such type for the further computing.
 * @param covs0 The vector of initial covariance matrices `$$S_k$$` of mixture components. Each of
 *         covariance matrices is a one-channel matrix of `$$dims \times dims$$` size. If the matrices
 *         do not have CV_64F type they will be converted to the inner matrices of such type for the
 *         further computing.
 * @param weights0 Initial weights `$$\pi_k$$` of mixture components. It should be a one-channel
 *         floating-point matrix with `$$1 \times nclusters$$` or `$$nclusters \times 1$$` size.
 *         each sample. It has `$$nsamples \times 1$$` size and CV_64FC1 type.
 *         `$$\texttt{labels}_i=\texttt{arg max}_k(p_{i,k}), i=1..N$$` (indices of the most probable
 *         mixture component for each sample). It has `$$nsamples \times 1$$` size and CV_32SC1 type.
 *         mixture component given the each sample. It has `$$nsamples \times nclusters$$` size and
 *         CV_64FC1 type.
 */
- (BOOL)trainE:(Mat*)samples means0:(Mat*)means0 covs0:(Mat*)covs0 weights0:(Mat*)weights0 NS_SWIFT_NAME(trainE(samples:means0:covs0:weights0:));

/**
 * Estimate the Gaussian mixture parameters from a samples set.
 *
 *     This variation starts with Expectation step. You need to provide initial means `$$a_k$$` of
 *     mixture components. Optionally you can pass initial weights `$$\pi_k$$` and covariance matrices
 *     `$$S_k$$` of mixture components.
 *
 * @param samples Samples from which the Gaussian mixture model will be estimated. It should be a
 *         one-channel matrix, each row of which is a sample. If the matrix does not have CV_64F type
 *         it will be converted to the inner matrix of such type for the further computing.
 * @param means0 Initial means `$$a_k$$` of mixture components. It is a one-channel matrix of
 *         `$$nclusters \times dims$$` size. If the matrix does not have CV_64F type it will be
 *         converted to the inner matrix of such type for the further computing.
 * @param covs0 The vector of initial covariance matrices `$$S_k$$` of mixture components. Each of
 *         covariance matrices is a one-channel matrix of `$$dims \times dims$$` size. If the matrices
 *         do not have CV_64F type they will be converted to the inner matrices of such type for the
 *         further computing.
 *         floating-point matrix with `$$1 \times nclusters$$` or `$$nclusters \times 1$$` size.
 *         each sample. It has `$$nsamples \times 1$$` size and CV_64FC1 type.
 *         `$$\texttt{labels}_i=\texttt{arg max}_k(p_{i,k}), i=1..N$$` (indices of the most probable
 *         mixture component for each sample). It has `$$nsamples \times 1$$` size and CV_32SC1 type.
 *         mixture component given the each sample. It has `$$nsamples \times nclusters$$` size and
 *         CV_64FC1 type.
 */
- (BOOL)trainE:(Mat*)samples means0:(Mat*)means0 covs0:(Mat*)covs0 NS_SWIFT_NAME(trainE(samples:means0:covs0:));

/**
 * Estimate the Gaussian mixture parameters from a samples set.
 *
 *     This variation starts with Expectation step. You need to provide initial means `$$a_k$$` of
 *     mixture components. Optionally you can pass initial weights `$$\pi_k$$` and covariance matrices
 *     `$$S_k$$` of mixture components.
 *
 * @param samples Samples from which the Gaussian mixture model will be estimated. It should be a
 *         one-channel matrix, each row of which is a sample. If the matrix does not have CV_64F type
 *         it will be converted to the inner matrix of such type for the further computing.
 * @param means0 Initial means `$$a_k$$` of mixture components. It is a one-channel matrix of
 *         `$$nclusters \times dims$$` size. If the matrix does not have CV_64F type it will be
 *         converted to the inner matrix of such type for the further computing.
 *         covariance matrices is a one-channel matrix of `$$dims \times dims$$` size. If the matrices
 *         do not have CV_64F type they will be converted to the inner matrices of such type for the
 *         further computing.
 *         floating-point matrix with `$$1 \times nclusters$$` or `$$nclusters \times 1$$` size.
 *         each sample. It has `$$nsamples \times 1$$` size and CV_64FC1 type.
 *         `$$\texttt{labels}_i=\texttt{arg max}_k(p_{i,k}), i=1..N$$` (indices of the most probable
 *         mixture component for each sample). It has `$$nsamples \times 1$$` size and CV_32SC1 type.
 *         mixture component given the each sample. It has `$$nsamples \times nclusters$$` size and
 *         CV_64FC1 type.
 */
- (BOOL)trainE:(Mat*)samples means0:(Mat*)means0 NS_SWIFT_NAME(trainE(samples:means0:));


//
//  bool cv::ml::EM::trainEM(Mat samples, Mat& logLikelihoods = Mat(), Mat& labels = Mat(), Mat& probs = Mat())
//
/**
 * Estimate the Gaussian mixture parameters from a samples set.
 *
 *     This variation starts with Expectation step. Initial values of the model parameters will be
 *     estimated by the k-means algorithm.
 *
 *     Unlike many of the ML models, %EM is an unsupervised learning algorithm and it does not take
 *     responses (class labels or function values) as input. Instead, it computes the *Maximum
 *     Likelihood Estimate* of the Gaussian mixture parameters from an input sample set, stores all the
 *     parameters inside the structure: `$$p_{i,k}$$` in probs, `$$a_k$$` in means , `$$S_k$$` in
 *     covs[k], `$$\pi_k$$` in weights , and optionally computes the output "class label" for each
 *     sample: `$$\texttt{labels}_i=\texttt{arg max}_k(p_{i,k}), i=1..N$$` (indices of the most
 *     probable mixture component for each sample).
 *
 *     The trained model can be used further for prediction, just like any other classifier. The
 *     trained model is similar to the NormalBayesClassifier.
 *
 * @param samples Samples from which the Gaussian mixture model will be estimated. It should be a
 *         one-channel matrix, each row of which is a sample. If the matrix does not have CV_64F type
 *         it will be converted to the inner matrix of such type for the further computing.
 * @param logLikelihoods The optional output matrix that contains a likelihood logarithm value for
 *         each sample. It has `$$nsamples \times 1$$` size and CV_64FC1 type.
 * @param labels The optional output "class label" for each sample:
 *         `$$\texttt{labels}_i=\texttt{arg max}_k(p_{i,k}), i=1..N$$` (indices of the most probable
 *         mixture component for each sample). It has `$$nsamples \times 1$$` size and CV_32SC1 type.
 * @param probs The optional output matrix that contains posterior probabilities of each Gaussian
 *         mixture component given the each sample. It has `$$nsamples \times nclusters$$` size and
 *         CV_64FC1 type.
 */
- (BOOL)trainEM:(Mat*)samples logLikelihoods:(Mat*)logLikelihoods labels:(Mat*)labels probs:(Mat*)probs NS_SWIFT_NAME(trainEM(samples:logLikelihoods:labels:probs:));

/**
 * Estimate the Gaussian mixture parameters from a samples set.
 *
 *     This variation starts with Expectation step. Initial values of the model parameters will be
 *     estimated by the k-means algorithm.
 *
 *     Unlike many of the ML models, %EM is an unsupervised learning algorithm and it does not take
 *     responses (class labels or function values) as input. Instead, it computes the *Maximum
 *     Likelihood Estimate* of the Gaussian mixture parameters from an input sample set, stores all the
 *     parameters inside the structure: `$$p_{i,k}$$` in probs, `$$a_k$$` in means , `$$S_k$$` in
 *     covs[k], `$$\pi_k$$` in weights , and optionally computes the output "class label" for each
 *     sample: `$$\texttt{labels}_i=\texttt{arg max}_k(p_{i,k}), i=1..N$$` (indices of the most
 *     probable mixture component for each sample).
 *
 *     The trained model can be used further for prediction, just like any other classifier. The
 *     trained model is similar to the NormalBayesClassifier.
 *
 * @param samples Samples from which the Gaussian mixture model will be estimated. It should be a
 *         one-channel matrix, each row of which is a sample. If the matrix does not have CV_64F type
 *         it will be converted to the inner matrix of such type for the further computing.
 * @param logLikelihoods The optional output matrix that contains a likelihood logarithm value for
 *         each sample. It has `$$nsamples \times 1$$` size and CV_64FC1 type.
 * @param labels The optional output "class label" for each sample:
 *         `$$\texttt{labels}_i=\texttt{arg max}_k(p_{i,k}), i=1..N$$` (indices of the most probable
 *         mixture component for each sample). It has `$$nsamples \times 1$$` size and CV_32SC1 type.
 *         mixture component given the each sample. It has `$$nsamples \times nclusters$$` size and
 *         CV_64FC1 type.
 */
- (BOOL)trainEM:(Mat*)samples logLikelihoods:(Mat*)logLikelihoods labels:(Mat*)labels NS_SWIFT_NAME(trainEM(samples:logLikelihoods:labels:));

/**
 * Estimate the Gaussian mixture parameters from a samples set.
 *
 *     This variation starts with Expectation step. Initial values of the model parameters will be
 *     estimated by the k-means algorithm.
 *
 *     Unlike many of the ML models, %EM is an unsupervised learning algorithm and it does not take
 *     responses (class labels or function values) as input. Instead, it computes the *Maximum
 *     Likelihood Estimate* of the Gaussian mixture parameters from an input sample set, stores all the
 *     parameters inside the structure: `$$p_{i,k}$$` in probs, `$$a_k$$` in means , `$$S_k$$` in
 *     covs[k], `$$\pi_k$$` in weights , and optionally computes the output "class label" for each
 *     sample: `$$\texttt{labels}_i=\texttt{arg max}_k(p_{i,k}), i=1..N$$` (indices of the most
 *     probable mixture component for each sample).
 *
 *     The trained model can be used further for prediction, just like any other classifier. The
 *     trained model is similar to the NormalBayesClassifier.
 *
 * @param samples Samples from which the Gaussian mixture model will be estimated. It should be a
 *         one-channel matrix, each row of which is a sample. If the matrix does not have CV_64F type
 *         it will be converted to the inner matrix of such type for the further computing.
 * @param logLikelihoods The optional output matrix that contains a likelihood logarithm value for
 *         each sample. It has `$$nsamples \times 1$$` size and CV_64FC1 type.
 *         `$$\texttt{labels}_i=\texttt{arg max}_k(p_{i,k}), i=1..N$$` (indices of the most probable
 *         mixture component for each sample). It has `$$nsamples \times 1$$` size and CV_32SC1 type.
 *         mixture component given the each sample. It has `$$nsamples \times nclusters$$` size and
 *         CV_64FC1 type.
 */
- (BOOL)trainEM:(Mat*)samples logLikelihoods:(Mat*)logLikelihoods NS_SWIFT_NAME(trainEM(samples:logLikelihoods:));

/**
 * Estimate the Gaussian mixture parameters from a samples set.
 *
 *     This variation starts with Expectation step. Initial values of the model parameters will be
 *     estimated by the k-means algorithm.
 *
 *     Unlike many of the ML models, %EM is an unsupervised learning algorithm and it does not take
 *     responses (class labels or function values) as input. Instead, it computes the *Maximum
 *     Likelihood Estimate* of the Gaussian mixture parameters from an input sample set, stores all the
 *     parameters inside the structure: `$$p_{i,k}$$` in probs, `$$a_k$$` in means , `$$S_k$$` in
 *     covs[k], `$$\pi_k$$` in weights , and optionally computes the output "class label" for each
 *     sample: `$$\texttt{labels}_i=\texttt{arg max}_k(p_{i,k}), i=1..N$$` (indices of the most
 *     probable mixture component for each sample).
 *
 *     The trained model can be used further for prediction, just like any other classifier. The
 *     trained model is similar to the NormalBayesClassifier.
 *
 * @param samples Samples from which the Gaussian mixture model will be estimated. It should be a
 *         one-channel matrix, each row of which is a sample. If the matrix does not have CV_64F type
 *         it will be converted to the inner matrix of such type for the further computing.
 *         each sample. It has `$$nsamples \times 1$$` size and CV_64FC1 type.
 *         `$$\texttt{labels}_i=\texttt{arg max}_k(p_{i,k}), i=1..N$$` (indices of the most probable
 *         mixture component for each sample). It has `$$nsamples \times 1$$` size and CV_32SC1 type.
 *         mixture component given the each sample. It has `$$nsamples \times nclusters$$` size and
 *         CV_64FC1 type.
 */
- (BOOL)trainEM:(Mat*)samples NS_SWIFT_NAME(trainEM(samples:));


//
//  bool cv::ml::EM::trainM(Mat samples, Mat probs0, Mat& logLikelihoods = Mat(), Mat& labels = Mat(), Mat& probs = Mat())
//
/**
 * Estimate the Gaussian mixture parameters from a samples set.
 *
 *     This variation starts with Maximization step. You need to provide initial probabilities
 *     `$$p_{i,k}$$` to use this option.
 *
 * @param samples Samples from which the Gaussian mixture model will be estimated. It should be a
 *         one-channel matrix, each row of which is a sample. If the matrix does not have CV_64F type
 *         it will be converted to the inner matrix of such type for the further computing.
 * @param probs0 the probabilities
 * @param logLikelihoods The optional output matrix that contains a likelihood logarithm value for
 *         each sample. It has `$$nsamples \times 1$$` size and CV_64FC1 type.
 * @param labels The optional output "class label" for each sample:
 *         `$$\texttt{labels}_i=\texttt{arg max}_k(p_{i,k}), i=1..N$$` (indices of the most probable
 *         mixture component for each sample). It has `$$nsamples \times 1$$` size and CV_32SC1 type.
 * @param probs The optional output matrix that contains posterior probabilities of each Gaussian
 *         mixture component given the each sample. It has `$$nsamples \times nclusters$$` size and
 *         CV_64FC1 type.
 */
- (BOOL)trainM:(Mat*)samples probs0:(Mat*)probs0 logLikelihoods:(Mat*)logLikelihoods labels:(Mat*)labels probs:(Mat*)probs NS_SWIFT_NAME(trainM(samples:probs0:logLikelihoods:labels:probs:));

/**
 * Estimate the Gaussian mixture parameters from a samples set.
 *
 *     This variation starts with Maximization step. You need to provide initial probabilities
 *     `$$p_{i,k}$$` to use this option.
 *
 * @param samples Samples from which the Gaussian mixture model will be estimated. It should be a
 *         one-channel matrix, each row of which is a sample. If the matrix does not have CV_64F type
 *         it will be converted to the inner matrix of such type for the further computing.
 * @param probs0 the probabilities
 * @param logLikelihoods The optional output matrix that contains a likelihood logarithm value for
 *         each sample. It has `$$nsamples \times 1$$` size and CV_64FC1 type.
 * @param labels The optional output "class label" for each sample:
 *         `$$\texttt{labels}_i=\texttt{arg max}_k(p_{i,k}), i=1..N$$` (indices of the most probable
 *         mixture component for each sample). It has `$$nsamples \times 1$$` size and CV_32SC1 type.
 *         mixture component given the each sample. It has `$$nsamples \times nclusters$$` size and
 *         CV_64FC1 type.
 */
- (BOOL)trainM:(Mat*)samples probs0:(Mat*)probs0 logLikelihoods:(Mat*)logLikelihoods labels:(Mat*)labels NS_SWIFT_NAME(trainM(samples:probs0:logLikelihoods:labels:));

/**
 * Estimate the Gaussian mixture parameters from a samples set.
 *
 *     This variation starts with Maximization step. You need to provide initial probabilities
 *     `$$p_{i,k}$$` to use this option.
 *
 * @param samples Samples from which the Gaussian mixture model will be estimated. It should be a
 *         one-channel matrix, each row of which is a sample. If the matrix does not have CV_64F type
 *         it will be converted to the inner matrix of such type for the further computing.
 * @param probs0 the probabilities
 * @param logLikelihoods The optional output matrix that contains a likelihood logarithm value for
 *         each sample. It has `$$nsamples \times 1$$` size and CV_64FC1 type.
 *         `$$\texttt{labels}_i=\texttt{arg max}_k(p_{i,k}), i=1..N$$` (indices of the most probable
 *         mixture component for each sample). It has `$$nsamples \times 1$$` size and CV_32SC1 type.
 *         mixture component given the each sample. It has `$$nsamples \times nclusters$$` size and
 *         CV_64FC1 type.
 */
- (BOOL)trainM:(Mat*)samples probs0:(Mat*)probs0 logLikelihoods:(Mat*)logLikelihoods NS_SWIFT_NAME(trainM(samples:probs0:logLikelihoods:));

/**
 * Estimate the Gaussian mixture parameters from a samples set.
 *
 *     This variation starts with Maximization step. You need to provide initial probabilities
 *     `$$p_{i,k}$$` to use this option.
 *
 * @param samples Samples from which the Gaussian mixture model will be estimated. It should be a
 *         one-channel matrix, each row of which is a sample. If the matrix does not have CV_64F type
 *         it will be converted to the inner matrix of such type for the further computing.
 * @param probs0 the probabilities
 *         each sample. It has `$$nsamples \times 1$$` size and CV_64FC1 type.
 *         `$$\texttt{labels}_i=\texttt{arg max}_k(p_{i,k}), i=1..N$$` (indices of the most probable
 *         mixture component for each sample). It has `$$nsamples \times 1$$` size and CV_32SC1 type.
 *         mixture component given the each sample. It has `$$nsamples \times nclusters$$` size and
 *         CV_64FC1 type.
 */
- (BOOL)trainM:(Mat*)samples probs0:(Mat*)probs0 NS_SWIFT_NAME(trainM(samples:probs0:));


//
//  float cv::ml::EM::predict(Mat samples, Mat& results = Mat(), int flags = 0)
//
/**
 * Returns posterior probabilities for the provided samples
 *
 * @param samples The input samples, floating-point matrix
 * @param results The optional output `$$ nSamples \times nClusters$$` matrix of results. It contains
 *     posterior probabilities for each sample from the input
 * @param flags This parameter will be ignored
 */
- (float)predict:(Mat*)samples results:(Mat*)results flags:(int)flags NS_SWIFT_NAME(predict(samples:results:flags:));

/**
 * Returns posterior probabilities for the provided samples
 *
 * @param samples The input samples, floating-point matrix
 * @param results The optional output `$$ nSamples \times nClusters$$` matrix of results. It contains
 *     posterior probabilities for each sample from the input
 */
- (float)predict:(Mat*)samples results:(Mat*)results NS_SWIFT_NAME(predict(samples:results:));

/**
 * Returns posterior probabilities for the provided samples
 *
 * @param samples The input samples, floating-point matrix
 *     posterior probabilities for each sample from the input
 */
- (float)predict:(Mat*)samples NS_SWIFT_NAME(predict(samples:));


//
//  int cv::ml::EM::getClustersNumber()
//
/**
 * @see `-setClustersNumber:`
 */
- (int)getClustersNumber NS_SWIFT_NAME(getClustersNumber());


//
//  int cv::ml::EM::getCovarianceMatrixType()
//
/**
 * @see `-setCovarianceMatrixType:`
 */
- (int)getCovarianceMatrixType NS_SWIFT_NAME(getCovarianceMatrixType());


//
//  void cv::ml::EM::getCovs(vector_Mat& covs)
//
/**
 * Returns covariation matrices
 *
 *     Returns vector of covariation matrices. Number of matrices is the number of gaussian mixtures,
 *     each matrix is a square floating-point matrix NxN, where N is the space dimensionality.
 */
- (void)getCovs:(NSMutableArray<Mat*>*)covs NS_SWIFT_NAME(getCovs(covs:));


//
//  void cv::ml::EM::setClustersNumber(int val)
//
/**
 *  getClustersNumber @see `-getClustersNumber:`
 */
- (void)setClustersNumber:(int)val NS_SWIFT_NAME(setClustersNumber(val:));


//
//  void cv::ml::EM::setCovarianceMatrixType(int val)
//
/**
 *  getCovarianceMatrixType @see `-getCovarianceMatrixType:`
 */
- (void)setCovarianceMatrixType:(int)val NS_SWIFT_NAME(setCovarianceMatrixType(val:));


//
//  void cv::ml::EM::setTermCriteria(TermCriteria val)
//
/**
 *  getTermCriteria @see `-getTermCriteria:`
 */
- (void)setTermCriteria:(TermCriteria*)val NS_SWIFT_NAME(setTermCriteria(val:));



@end

NS_ASSUME_NONNULL_END



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


@class Mat;



NS_ASSUME_NONNULL_BEGIN

// C++: class TrainData
/**
 * Class encapsulating training data.
 *
 * Please note that the class only specifies the interface of training data, but not implementation.
 * All the statistical model classes in _ml_ module accepts Ptr\<TrainData\> as parameter. In other
 * words, you can create your own class derived from TrainData and pass smart pointer to the instance
 * of this class into StatModel::train.
 *
 * @see REF: ml_intro_data
 *
 * Member of `Ml`
 */
CV_EXPORTS @interface TrainData : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::ml::TrainData> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::ml::TrainData>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::ml::TrainData>)nativePtr;
#endif


#pragma mark - Methods


//
//  Mat cv::ml::TrainData::getCatMap()
//
- (Mat*)getCatMap NS_SWIFT_NAME(getCatMap());


//
//  Mat cv::ml::TrainData::getCatOfs()
//
- (Mat*)getCatOfs NS_SWIFT_NAME(getCatOfs());


//
//  Mat cv::ml::TrainData::getClassLabels()
//
/**
 * Returns the vector of class labels
 *
 *     The function returns vector of unique labels occurred in the responses.
 */
- (Mat*)getClassLabels NS_SWIFT_NAME(getClassLabels());


//
//  Mat cv::ml::TrainData::getDefaultSubstValues()
//
- (Mat*)getDefaultSubstValues NS_SWIFT_NAME(getDefaultSubstValues());


//
//  Mat cv::ml::TrainData::getMissing()
//
- (Mat*)getMissing NS_SWIFT_NAME(getMissing());


//
//  Mat cv::ml::TrainData::getNormCatResponses()
//
- (Mat*)getNormCatResponses NS_SWIFT_NAME(getNormCatResponses());


//
//  Mat cv::ml::TrainData::getResponses()
//
- (Mat*)getResponses NS_SWIFT_NAME(getResponses());


//
//  Mat cv::ml::TrainData::getSampleWeights()
//
- (Mat*)getSampleWeights NS_SWIFT_NAME(getSampleWeights());


//
//  Mat cv::ml::TrainData::getSamples()
//
- (Mat*)getSamples NS_SWIFT_NAME(getSamples());


//
// static Mat cv::ml::TrainData::getSubMatrix(Mat matrix, Mat idx, int layout)
//
/**
 * Extract from matrix rows/cols specified by passed indexes.
 * @param matrix input matrix (supported types: CV_32S, CV_32F, CV_64F)
 * @param idx 1D index vector
 * @param layout specifies to extract rows (cv::ml::ROW_SAMPLES) or to extract columns (cv::ml::COL_SAMPLES)
 */
+ (Mat*)getSubMatrix:(Mat*)matrix idx:(Mat*)idx layout:(int)layout NS_SWIFT_NAME(getSubMatrix(matrix:idx:layout:));


//
// static Mat cv::ml::TrainData::getSubVector(Mat vec, Mat idx)
//
/**
 * Extract from 1D vector elements specified by passed indexes.
 * @param vec input vector (supported types: CV_32S, CV_32F, CV_64F)
 * @param idx 1D index vector
 */
+ (Mat*)getSubVector:(Mat*)vec idx:(Mat*)idx NS_SWIFT_NAME(getSubVector(vec:idx:));


//
//  Mat cv::ml::TrainData::getTestNormCatResponses()
//
- (Mat*)getTestNormCatResponses NS_SWIFT_NAME(getTestNormCatResponses());


//
//  Mat cv::ml::TrainData::getTestResponses()
//
- (Mat*)getTestResponses NS_SWIFT_NAME(getTestResponses());


//
//  Mat cv::ml::TrainData::getTestSampleIdx()
//
- (Mat*)getTestSampleIdx NS_SWIFT_NAME(getTestSampleIdx());


//
//  Mat cv::ml::TrainData::getTestSampleWeights()
//
- (Mat*)getTestSampleWeights NS_SWIFT_NAME(getTestSampleWeights());


//
//  Mat cv::ml::TrainData::getTestSamples()
//
/**
 * Returns matrix of test samples
 */
- (Mat*)getTestSamples NS_SWIFT_NAME(getTestSamples());


//
//  Mat cv::ml::TrainData::getTrainNormCatResponses()
//
/**
 * Returns the vector of normalized categorical responses
 *
 *     The function returns vector of responses. Each response is integer from `0` to `<number of
 *     classes>-1`. The actual label value can be retrieved then from the class label vector, see
 *     TrainData::getClassLabels.
 */
- (Mat*)getTrainNormCatResponses NS_SWIFT_NAME(getTrainNormCatResponses());


//
//  Mat cv::ml::TrainData::getTrainResponses()
//
/**
 * Returns the vector of responses
 *
 *     The function returns ordered or the original categorical responses. Usually it's used in
 *     regression algorithms.
 */
- (Mat*)getTrainResponses NS_SWIFT_NAME(getTrainResponses());


//
//  Mat cv::ml::TrainData::getTrainSampleIdx()
//
- (Mat*)getTrainSampleIdx NS_SWIFT_NAME(getTrainSampleIdx());


//
//  Mat cv::ml::TrainData::getTrainSampleWeights()
//
- (Mat*)getTrainSampleWeights NS_SWIFT_NAME(getTrainSampleWeights());


//
//  Mat cv::ml::TrainData::getTrainSamples(int layout = ROW_SAMPLE, bool compressSamples = true, bool compressVars = true)
//
/**
 * Returns matrix of train samples
 *
 * @param layout The requested layout. If it's different from the initial one, the matrix is
 *         transposed. See ml::SampleTypes.
 * @param compressSamples if true, the function returns only the training samples (specified by
 *         sampleIdx)
 * @param compressVars if true, the function returns the shorter training samples, containing only
 *         the active variables.
 *
 *     In current implementation the function tries to avoid physical data copying and returns the
 *     matrix stored inside TrainData (unless the transposition or compression is needed).
 */
- (Mat*)getTrainSamples:(int)layout compressSamples:(BOOL)compressSamples compressVars:(BOOL)compressVars NS_SWIFT_NAME(getTrainSamples(layout:compressSamples:compressVars:));

/**
 * Returns matrix of train samples
 *
 * @param layout The requested layout. If it's different from the initial one, the matrix is
 *         transposed. See ml::SampleTypes.
 * @param compressSamples if true, the function returns only the training samples (specified by
 *         sampleIdx)
 *         the active variables.
 *
 *     In current implementation the function tries to avoid physical data copying and returns the
 *     matrix stored inside TrainData (unless the transposition or compression is needed).
 */
- (Mat*)getTrainSamples:(int)layout compressSamples:(BOOL)compressSamples NS_SWIFT_NAME(getTrainSamples(layout:compressSamples:));

/**
 * Returns matrix of train samples
 *
 * @param layout The requested layout. If it's different from the initial one, the matrix is
 *         transposed. See ml::SampleTypes.
 *         sampleIdx)
 *         the active variables.
 *
 *     In current implementation the function tries to avoid physical data copying and returns the
 *     matrix stored inside TrainData (unless the transposition or compression is needed).
 */
- (Mat*)getTrainSamples:(int)layout NS_SWIFT_NAME(getTrainSamples(layout:));

/**
 * Returns matrix of train samples
 *
 *         transposed. See ml::SampleTypes.
 *         sampleIdx)
 *         the active variables.
 *
 *     In current implementation the function tries to avoid physical data copying and returns the
 *     matrix stored inside TrainData (unless the transposition or compression is needed).
 */
- (Mat*)getTrainSamples NS_SWIFT_NAME(getTrainSamples());


//
//  Mat cv::ml::TrainData::getVarIdx()
//
- (Mat*)getVarIdx NS_SWIFT_NAME(getVarIdx());


//
//  Mat cv::ml::TrainData::getVarSymbolFlags()
//
- (Mat*)getVarSymbolFlags NS_SWIFT_NAME(getVarSymbolFlags());


//
//  Mat cv::ml::TrainData::getVarType()
//
- (Mat*)getVarType NS_SWIFT_NAME(getVarType());


//
// static Ptr_TrainData cv::ml::TrainData::create(Mat samples, int layout, Mat responses, Mat varIdx = Mat(), Mat sampleIdx = Mat(), Mat sampleWeights = Mat(), Mat varType = Mat())
//
/**
 * Creates training data from in-memory arrays.
 *
 * @param samples matrix of samples. It should have CV_32F type.
 * @param layout see ml::SampleTypes.
 * @param responses matrix of responses. If the responses are scalar, they should be stored as a
 *         single row or as a single column. The matrix should have type CV_32F or CV_32S (in the
 *         former case the responses are considered as ordered by default; in the latter case - as
 *         categorical)
 * @param varIdx vector specifying which variables to use for training. It can be an integer vector
 *         (CV_32S) containing 0-based variable indices or byte vector (CV_8U) containing a mask of
 *         active variables.
 * @param sampleIdx vector specifying which samples to use for training. It can be an integer
 *         vector (CV_32S) containing 0-based sample indices or byte vector (CV_8U) containing a mask
 *         of training samples.
 * @param sampleWeights optional vector with weights for each sample. It should have CV_32F type.
 * @param varType optional vector of type CV_8U and size `<number_of_variables_in_samples> +
 *         <number_of_variables_in_responses>`, containing types of each input and output variable. See
 *         ml::VariableTypes.
 */
+ (TrainData*)create:(Mat*)samples layout:(int)layout responses:(Mat*)responses varIdx:(Mat*)varIdx sampleIdx:(Mat*)sampleIdx sampleWeights:(Mat*)sampleWeights varType:(Mat*)varType NS_SWIFT_NAME(create(samples:layout:responses:varIdx:sampleIdx:sampleWeights:varType:));

/**
 * Creates training data from in-memory arrays.
 *
 * @param samples matrix of samples. It should have CV_32F type.
 * @param layout see ml::SampleTypes.
 * @param responses matrix of responses. If the responses are scalar, they should be stored as a
 *         single row or as a single column. The matrix should have type CV_32F or CV_32S (in the
 *         former case the responses are considered as ordered by default; in the latter case - as
 *         categorical)
 * @param varIdx vector specifying which variables to use for training. It can be an integer vector
 *         (CV_32S) containing 0-based variable indices or byte vector (CV_8U) containing a mask of
 *         active variables.
 * @param sampleIdx vector specifying which samples to use for training. It can be an integer
 *         vector (CV_32S) containing 0-based sample indices or byte vector (CV_8U) containing a mask
 *         of training samples.
 * @param sampleWeights optional vector with weights for each sample. It should have CV_32F type.
 *         <number_of_variables_in_responses>`, containing types of each input and output variable. See
 *         ml::VariableTypes.
 */
+ (TrainData*)create:(Mat*)samples layout:(int)layout responses:(Mat*)responses varIdx:(Mat*)varIdx sampleIdx:(Mat*)sampleIdx sampleWeights:(Mat*)sampleWeights NS_SWIFT_NAME(create(samples:layout:responses:varIdx:sampleIdx:sampleWeights:));

/**
 * Creates training data from in-memory arrays.
 *
 * @param samples matrix of samples. It should have CV_32F type.
 * @param layout see ml::SampleTypes.
 * @param responses matrix of responses. If the responses are scalar, they should be stored as a
 *         single row or as a single column. The matrix should have type CV_32F or CV_32S (in the
 *         former case the responses are considered as ordered by default; in the latter case - as
 *         categorical)
 * @param varIdx vector specifying which variables to use for training. It can be an integer vector
 *         (CV_32S) containing 0-based variable indices or byte vector (CV_8U) containing a mask of
 *         active variables.
 * @param sampleIdx vector specifying which samples to use for training. It can be an integer
 *         vector (CV_32S) containing 0-based sample indices or byte vector (CV_8U) containing a mask
 *         of training samples.
 *         <number_of_variables_in_responses>`, containing types of each input and output variable. See
 *         ml::VariableTypes.
 */
+ (TrainData*)create:(Mat*)samples layout:(int)layout responses:(Mat*)responses varIdx:(Mat*)varIdx sampleIdx:(Mat*)sampleIdx NS_SWIFT_NAME(create(samples:layout:responses:varIdx:sampleIdx:));

/**
 * Creates training data from in-memory arrays.
 *
 * @param samples matrix of samples. It should have CV_32F type.
 * @param layout see ml::SampleTypes.
 * @param responses matrix of responses. If the responses are scalar, they should be stored as a
 *         single row or as a single column. The matrix should have type CV_32F or CV_32S (in the
 *         former case the responses are considered as ordered by default; in the latter case - as
 *         categorical)
 * @param varIdx vector specifying which variables to use for training. It can be an integer vector
 *         (CV_32S) containing 0-based variable indices or byte vector (CV_8U) containing a mask of
 *         active variables.
 *         vector (CV_32S) containing 0-based sample indices or byte vector (CV_8U) containing a mask
 *         of training samples.
 *         <number_of_variables_in_responses>`, containing types of each input and output variable. See
 *         ml::VariableTypes.
 */
+ (TrainData*)create:(Mat*)samples layout:(int)layout responses:(Mat*)responses varIdx:(Mat*)varIdx NS_SWIFT_NAME(create(samples:layout:responses:varIdx:));

/**
 * Creates training data from in-memory arrays.
 *
 * @param samples matrix of samples. It should have CV_32F type.
 * @param layout see ml::SampleTypes.
 * @param responses matrix of responses. If the responses are scalar, they should be stored as a
 *         single row or as a single column. The matrix should have type CV_32F or CV_32S (in the
 *         former case the responses are considered as ordered by default; in the latter case - as
 *         categorical)
 *         (CV_32S) containing 0-based variable indices or byte vector (CV_8U) containing a mask of
 *         active variables.
 *         vector (CV_32S) containing 0-based sample indices or byte vector (CV_8U) containing a mask
 *         of training samples.
 *         <number_of_variables_in_responses>`, containing types of each input and output variable. See
 *         ml::VariableTypes.
 */
+ (TrainData*)create:(Mat*)samples layout:(int)layout responses:(Mat*)responses NS_SWIFT_NAME(create(samples:layout:responses:));


//
//  int cv::ml::TrainData::getCatCount(int vi)
//
- (int)getCatCount:(int)vi NS_SWIFT_NAME(getCatCount(vi:));


//
//  int cv::ml::TrainData::getLayout()
//
- (int)getLayout NS_SWIFT_NAME(getLayout());


//
//  int cv::ml::TrainData::getNAllVars()
//
- (int)getNAllVars NS_SWIFT_NAME(getNAllVars());


//
//  int cv::ml::TrainData::getNSamples()
//
- (int)getNSamples NS_SWIFT_NAME(getNSamples());


//
//  int cv::ml::TrainData::getNTestSamples()
//
- (int)getNTestSamples NS_SWIFT_NAME(getNTestSamples());


//
//  int cv::ml::TrainData::getNTrainSamples()
//
- (int)getNTrainSamples NS_SWIFT_NAME(getNTrainSamples());


//
//  int cv::ml::TrainData::getNVars()
//
- (int)getNVars NS_SWIFT_NAME(getNVars());


//
//  int cv::ml::TrainData::getResponseType()
//
- (int)getResponseType NS_SWIFT_NAME(getResponseType());


//
//  void cv::ml::TrainData::getNames(vector_String names)
//
/**
 * Returns vector of symbolic names captured in loadFromCSV()
 */
- (void)getNames:(NSArray<NSString*>*)names NS_SWIFT_NAME(getNames(names:));


//
//  void cv::ml::TrainData::getSample(Mat varIdx, int sidx, float* buf)
//
- (void)getSample:(Mat*)varIdx sidx:(int)sidx buf:(float)buf NS_SWIFT_NAME(getSample(varIdx:sidx:buf:));


//
//  void cv::ml::TrainData::getValues(int vi, Mat sidx, float* values)
//
- (void)getValues:(int)vi sidx:(Mat*)sidx values:(float)values NS_SWIFT_NAME(getValues(vi:sidx:values:));


//
//  void cv::ml::TrainData::setTrainTestSplit(int count, bool shuffle = true)
//
/**
 * Splits the training data into the training and test parts
 *     @see `-setTrainTestSplitRatio:shuffle:`
 */
- (void)setTrainTestSplit:(int)count shuffle:(BOOL)shuffle NS_SWIFT_NAME(setTrainTestSplit(count:shuffle:));

/**
 * Splits the training data into the training and test parts
 *     @see `-setTrainTestSplitRatio:shuffle:`
 */
- (void)setTrainTestSplit:(int)count NS_SWIFT_NAME(setTrainTestSplit(count:));


//
//  void cv::ml::TrainData::setTrainTestSplitRatio(double ratio, bool shuffle = true)
//
/**
 * Splits the training data into the training and test parts
 *
 *     The function selects a subset of specified relative size and then returns it as the training
 *     set. If the function is not called, all the data is used for training. Please, note that for
 *     each of TrainData::getTrain\* there is corresponding TrainData::getTest\*, so that the test
 *     subset can be retrieved and processed as well.
 *     @see `-setTrainTestSplit:shuffle:`
 */
- (void)setTrainTestSplitRatio:(double)ratio shuffle:(BOOL)shuffle NS_SWIFT_NAME(setTrainTestSplitRatio(ratio:shuffle:));

/**
 * Splits the training data into the training and test parts
 *
 *     The function selects a subset of specified relative size and then returns it as the training
 *     set. If the function is not called, all the data is used for training. Please, note that for
 *     each of TrainData::getTrain\* there is corresponding TrainData::getTest\*, so that the test
 *     subset can be retrieved and processed as well.
 *     @see `-setTrainTestSplit:shuffle:`
 */
- (void)setTrainTestSplitRatio:(double)ratio NS_SWIFT_NAME(setTrainTestSplitRatio(ratio:));


//
//  void cv::ml::TrainData::shuffleTrainTest()
//
- (void)shuffleTrainTest NS_SWIFT_NAME(shuffleTrainTest());



@end

NS_ASSUME_NONNULL_END



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
#import "DTrees.h"

@class Mat;
@class TermCriteria;



NS_ASSUME_NONNULL_BEGIN

// C++: class RTrees
/**
 * The class implements the random forest predictor.
 *
 * @see REF: ml_intro_rtrees
 *
 * Member of `Ml`
 */
CV_EXPORTS @interface RTrees : DTrees


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::ml::RTrees> nativePtrRTrees;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::ml::RTrees>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::ml::RTrees>)nativePtr;
#endif


#pragma mark - Methods


//
//  Mat cv::ml::RTrees::getVarImportance()
//
/**
 * Returns the variable importance array.
 *     The method returns the variable importance vector, computed at the training stage when
 *     CalculateVarImportance is set to true. If this flag was set to false, the empty matrix is
 *     returned.
 */
- (Mat*)getVarImportance NS_SWIFT_NAME(getVarImportance());


//
// static Ptr_RTrees cv::ml::RTrees::create()
//
/**
 * Creates the empty model.
 *     Use StatModel::train to train the model, StatModel::train to create and train the model,
 *     Algorithm::load to load the pre-trained model.
 */
+ (RTrees*)create NS_SWIFT_NAME(create());


//
// static Ptr_RTrees cv::ml::RTrees::load(String filepath, String nodeName = String())
//
/**
 * Loads and creates a serialized RTree from a file
 *
 * Use RTree::save to serialize and store an RTree to disk.
 * Load the RTree from this file again, by calling this function with the path to the file.
 * Optionally specify the node for the file containing the classifier
 *
 * @param filepath path to serialized RTree
 * @param nodeName name of node containing the classifier
 */
+ (RTrees*)load:(NSString*)filepath nodeName:(NSString*)nodeName NS_SWIFT_NAME(load(filepath:nodeName:));

/**
 * Loads and creates a serialized RTree from a file
 *
 * Use RTree::save to serialize and store an RTree to disk.
 * Load the RTree from this file again, by calling this function with the path to the file.
 * Optionally specify the node for the file containing the classifier
 *
 * @param filepath path to serialized RTree
 */
+ (RTrees*)load:(NSString*)filepath NS_SWIFT_NAME(load(filepath:));


//
//  TermCriteria cv::ml::RTrees::getTermCriteria()
//
/**
 * @see `-setTermCriteria:`
 */
- (TermCriteria*)getTermCriteria NS_SWIFT_NAME(getTermCriteria());


//
//  bool cv::ml::RTrees::getCalculateVarImportance()
//
/**
 * @see `-setCalculateVarImportance:`
 */
- (BOOL)getCalculateVarImportance NS_SWIFT_NAME(getCalculateVarImportance());


//
//  int cv::ml::RTrees::getActiveVarCount()
//
/**
 * @see `-setActiveVarCount:`
 */
- (int)getActiveVarCount NS_SWIFT_NAME(getActiveVarCount());


//
//  void cv::ml::RTrees::getVotes(Mat samples, Mat& results, int flags)
//
/**
 * Returns the result of each individual tree in the forest.
 *     In case the model is a regression problem, the method will return each of the trees'
 *     results for each of the sample cases. If the model is a classifier, it will return
 *     a Mat with samples + 1 rows, where the first row gives the class number and the
 *     following rows return the votes each class had for each sample.
 * @param samples Array containing the samples for which votes will be calculated.
 * @param results Array where the result of the calculation will be written.
 * @param flags Flags for defining the type of RTrees.
 */
- (void)getVotes:(Mat*)samples results:(Mat*)results flags:(int)flags NS_SWIFT_NAME(getVotes(samples:results:flags:));


//
//  void cv::ml::RTrees::setActiveVarCount(int val)
//
/**
 *  getActiveVarCount @see `-getActiveVarCount:`
 */
- (void)setActiveVarCount:(int)val NS_SWIFT_NAME(setActiveVarCount(val:));


//
//  void cv::ml::RTrees::setCalculateVarImportance(bool val)
//
/**
 *  getCalculateVarImportance @see `-getCalculateVarImportance:`
 */
- (void)setCalculateVarImportance:(BOOL)val NS_SWIFT_NAME(setCalculateVarImportance(val:));


//
//  void cv::ml::RTrees::setTermCriteria(TermCriteria val)
//
/**
 *  getTermCriteria @see `-getTermCriteria:`
 */
- (void)setTermCriteria:(TermCriteria*)val NS_SWIFT_NAME(setTermCriteria(val:));



@end

NS_ASSUME_NONNULL_END



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


// C++: enum DTreeFlags
typedef NS_ENUM(int, DTreeFlags) {
    PREDICT_AUTO = 0,
    PREDICT_SUM = (1<<8),
    PREDICT_MAX_VOTE = (2<<8),
    PREDICT_MASK = (3<<8)
};



NS_ASSUME_NONNULL_BEGIN

// C++: class DTrees
/**
 * The class represents a single decision tree or a collection of decision trees.
 *
 * The current public interface of the class allows user to train only a single decision tree, however
 * the class is capable of storing multiple decision trees and using them for prediction (by summing
 * responses or using a voting schemes), and the derived from DTrees classes (such as RTrees and Boost)
 * use this capability to implement decision tree ensembles.
 *
 * @see REF: ml_intro_trees
 *
 * Member of `Ml`
 */
CV_EXPORTS @interface DTrees : StatModel


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::ml::DTrees> nativePtrDTrees;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::ml::DTrees>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::ml::DTrees>)nativePtr;
#endif


#pragma mark - Methods


//
//  Mat cv::ml::DTrees::getPriors()
//
/**
 * @see `-setPriors:`
 */
- (Mat*)getPriors NS_SWIFT_NAME(getPriors());


//
// static Ptr_DTrees cv::ml::DTrees::create()
//
/**
 * Creates the empty model
 *
 *     The static method creates empty decision tree with the specified parameters. It should be then
 *     trained using train method (see StatModel::train). Alternatively, you can load the model from
 *     file using Algorithm::load\<DTrees\>(filename).
 */
+ (DTrees*)create NS_SWIFT_NAME(create());


//
// static Ptr_DTrees cv::ml::DTrees::load(String filepath, String nodeName = String())
//
/**
 * Loads and creates a serialized DTrees from a file
 *
 * Use DTree::save to serialize and store an DTree to disk.
 * Load the DTree from this file again, by calling this function with the path to the file.
 * Optionally specify the node for the file containing the classifier
 *
 * @param filepath path to serialized DTree
 * @param nodeName name of node containing the classifier
 */
+ (DTrees*)load:(NSString*)filepath nodeName:(NSString*)nodeName NS_SWIFT_NAME(load(filepath:nodeName:));

/**
 * Loads and creates a serialized DTrees from a file
 *
 * Use DTree::save to serialize and store an DTree to disk.
 * Load the DTree from this file again, by calling this function with the path to the file.
 * Optionally specify the node for the file containing the classifier
 *
 * @param filepath path to serialized DTree
 */
+ (DTrees*)load:(NSString*)filepath NS_SWIFT_NAME(load(filepath:));


//
//  bool cv::ml::DTrees::getTruncatePrunedTree()
//
/**
 * @see `-setTruncatePrunedTree:`
 */
- (BOOL)getTruncatePrunedTree NS_SWIFT_NAME(getTruncatePrunedTree());


//
//  bool cv::ml::DTrees::getUse1SERule()
//
/**
 * @see `-setUse1SERule:`
 */
- (BOOL)getUse1SERule NS_SWIFT_NAME(getUse1SERule());


//
//  bool cv::ml::DTrees::getUseSurrogates()
//
/**
 * @see `-setUseSurrogates:`
 */
- (BOOL)getUseSurrogates NS_SWIFT_NAME(getUseSurrogates());


//
//  float cv::ml::DTrees::getRegressionAccuracy()
//
/**
 * @see `-setRegressionAccuracy:`
 */
- (float)getRegressionAccuracy NS_SWIFT_NAME(getRegressionAccuracy());


//
//  int cv::ml::DTrees::getCVFolds()
//
/**
 * @see `-setCVFolds:`
 */
- (int)getCVFolds NS_SWIFT_NAME(getCVFolds());


//
//  int cv::ml::DTrees::getMaxCategories()
//
/**
 * @see `-setMaxCategories:`
 */
- (int)getMaxCategories NS_SWIFT_NAME(getMaxCategories());


//
//  int cv::ml::DTrees::getMaxDepth()
//
/**
 * @see `-setMaxDepth:`
 */
- (int)getMaxDepth NS_SWIFT_NAME(getMaxDepth());


//
//  int cv::ml::DTrees::getMinSampleCount()
//
/**
 * @see `-setMinSampleCount:`
 */
- (int)getMinSampleCount NS_SWIFT_NAME(getMinSampleCount());


//
//  void cv::ml::DTrees::setCVFolds(int val)
//
/**
 *  getCVFolds @see `-getCVFolds:`
 */
- (void)setCVFolds:(int)val NS_SWIFT_NAME(setCVFolds(val:));


//
//  void cv::ml::DTrees::setMaxCategories(int val)
//
/**
 *  getMaxCategories @see `-getMaxCategories:`
 */
- (void)setMaxCategories:(int)val NS_SWIFT_NAME(setMaxCategories(val:));


//
//  void cv::ml::DTrees::setMaxDepth(int val)
//
/**
 *  getMaxDepth @see `-getMaxDepth:`
 */
- (void)setMaxDepth:(int)val NS_SWIFT_NAME(setMaxDepth(val:));


//
//  void cv::ml::DTrees::setMinSampleCount(int val)
//
/**
 *  getMinSampleCount @see `-getMinSampleCount:`
 */
- (void)setMinSampleCount:(int)val NS_SWIFT_NAME(setMinSampleCount(val:));


//
//  void cv::ml::DTrees::setPriors(Mat val)
//
/**
 *  getPriors @see `-getPriors:`
 */
- (void)setPriors:(Mat*)val NS_SWIFT_NAME(setPriors(val:));


//
//  void cv::ml::DTrees::setRegressionAccuracy(float val)
//
/**
 *  getRegressionAccuracy @see `-getRegressionAccuracy:`
 */
- (void)setRegressionAccuracy:(float)val NS_SWIFT_NAME(setRegressionAccuracy(val:));


//
//  void cv::ml::DTrees::setTruncatePrunedTree(bool val)
//
/**
 *  getTruncatePrunedTree @see `-getTruncatePrunedTree:`
 */
- (void)setTruncatePrunedTree:(BOOL)val NS_SWIFT_NAME(setTruncatePrunedTree(val:));


//
//  void cv::ml::DTrees::setUse1SERule(bool val)
//
/**
 *  getUse1SERule @see `-getUse1SERule:`
 */
- (void)setUse1SERule:(BOOL)val NS_SWIFT_NAME(setUse1SERule(val:));


//
//  void cv::ml::DTrees::setUseSurrogates(bool val)
//
/**
 *  getUseSurrogates @see `-getUseSurrogates:`
 */
- (void)setUseSurrogates:(BOOL)val NS_SWIFT_NAME(setUseSurrogates(val:));



@end

NS_ASSUME_NONNULL_END



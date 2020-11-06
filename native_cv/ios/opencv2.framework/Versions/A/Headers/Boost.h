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




// C++: enum Types
typedef NS_ENUM(int, Types) {
    DISCRETE = 0,
    REAL = 1,
    LOGIT = 2,
    GENTLE = 3
};



NS_ASSUME_NONNULL_BEGIN

// C++: class Boost
/**
 * Boosted tree classifier derived from DTrees
 *
 * @see REF: ml_intro_boost
 *
 * Member of `Ml`
 */
CV_EXPORTS @interface Boost : DTrees


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::ml::Boost> nativePtrBoost;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::ml::Boost>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::ml::Boost>)nativePtr;
#endif


#pragma mark - Methods


//
// static Ptr_Boost cv::ml::Boost::create()
//
/**
 * Creates the empty model.
 * Use StatModel::train to train the model, Algorithm::load\<Boost\>(filename) to load the pre-trained model.
 */
+ (Boost*)create NS_SWIFT_NAME(create());


//
// static Ptr_Boost cv::ml::Boost::load(String filepath, String nodeName = String())
//
/**
 * Loads and creates a serialized Boost from a file
 *
 * Use Boost::save to serialize and store an RTree to disk.
 * Load the Boost from this file again, by calling this function with the path to the file.
 * Optionally specify the node for the file containing the classifier
 *
 * @param filepath path to serialized Boost
 * @param nodeName name of node containing the classifier
 */
+ (Boost*)load:(NSString*)filepath nodeName:(NSString*)nodeName NS_SWIFT_NAME(load(filepath:nodeName:));

/**
 * Loads and creates a serialized Boost from a file
 *
 * Use Boost::save to serialize and store an RTree to disk.
 * Load the Boost from this file again, by calling this function with the path to the file.
 * Optionally specify the node for the file containing the classifier
 *
 * @param filepath path to serialized Boost
 */
+ (Boost*)load:(NSString*)filepath NS_SWIFT_NAME(load(filepath:));


//
//  double cv::ml::Boost::getWeightTrimRate()
//
/**
 * @see `-setWeightTrimRate:`
 */
- (double)getWeightTrimRate NS_SWIFT_NAME(getWeightTrimRate());


//
//  int cv::ml::Boost::getBoostType()
//
/**
 * @see `-setBoostType:`
 */
- (int)getBoostType NS_SWIFT_NAME(getBoostType());


//
//  int cv::ml::Boost::getWeakCount()
//
/**
 * @see `-setWeakCount:`
 */
- (int)getWeakCount NS_SWIFT_NAME(getWeakCount());


//
//  void cv::ml::Boost::setBoostType(int val)
//
/**
 *  getBoostType @see `-getBoostType:`
 */
- (void)setBoostType:(int)val NS_SWIFT_NAME(setBoostType(val:));


//
//  void cv::ml::Boost::setWeakCount(int val)
//
/**
 *  getWeakCount @see `-getWeakCount:`
 */
- (void)setWeakCount:(int)val NS_SWIFT_NAME(setWeakCount(val:));


//
//  void cv::ml::Boost::setWeightTrimRate(double val)
//
/**
 *  getWeightTrimRate @see `-getWeightTrimRate:`
 */
- (void)setWeightTrimRate:(double)val NS_SWIFT_NAME(setWeightTrimRate(val:));



@end

NS_ASSUME_NONNULL_END



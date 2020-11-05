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






NS_ASSUME_NONNULL_BEGIN

// C++: class DictValue
/**
 * This struct stores the scalar value (or array) of one of the following type: double, cv::String or int64.
 * TODO: Maybe int64 is useless because double type exactly stores at least 2^52 integers.
 *
 * Member of `Dnn`
 */
CV_EXPORTS @interface DictValue : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::dnn::DictValue> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::dnn::DictValue>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::dnn::DictValue>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::dnn::DictValue::DictValue(String s)
//
- (instancetype)initWithS:(NSString*)s;


//
//   cv::dnn::DictValue::DictValue(double p)
//
- (instancetype)initWithP:(double)p;


//
//   cv::dnn::DictValue::DictValue(int i)
//
- (instancetype)initWithI:(int)i;


//
//  String cv::dnn::DictValue::getStringValue(int idx = -1)
//
- (NSString*)getStringValue:(int)idx NS_SWIFT_NAME(getStringValue(idx:));

- (NSString*)getStringValue NS_SWIFT_NAME(getStringValue());


//
//  bool cv::dnn::DictValue::isInt()
//
- (BOOL)isInt NS_SWIFT_NAME(isInt());


//
//  bool cv::dnn::DictValue::isReal()
//
- (BOOL)isReal NS_SWIFT_NAME(isReal());


//
//  bool cv::dnn::DictValue::isString()
//
- (BOOL)isString NS_SWIFT_NAME(isString());


//
//  double cv::dnn::DictValue::getRealValue(int idx = -1)
//
- (double)getRealValue:(int)idx NS_SWIFT_NAME(getRealValue(idx:));

- (double)getRealValue NS_SWIFT_NAME(getRealValue());


//
//  int cv::dnn::DictValue::getIntValue(int idx = -1)
//
- (int)getIntValue:(int)idx NS_SWIFT_NAME(getIntValue(idx:));

- (int)getIntValue NS_SWIFT_NAME(getIntValue());



@end

NS_ASSUME_NONNULL_END



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




// C++: enum SampleTypes
typedef NS_ENUM(int, SampleTypes) {
    ROW_SAMPLE = 0,
    COL_SAMPLE = 1
};


// C++: enum VariableTypes
typedef NS_ENUM(int, VariableTypes) {
    VAR_NUMERICAL = 0,
    VAR_ORDERED = 0,
    VAR_CATEGORICAL = 1
};


// C++: enum ErrorTypes
typedef NS_ENUM(int, ErrorTypes) {
    TEST_ERROR = 0,
    TRAIN_ERROR = 1
};



NS_ASSUME_NONNULL_BEGIN

// C++: class Ml
/**
 * The Ml module
 *
 * Member classes: `ParamGrid`, `TrainData`, `StatModel`, `NormalBayesClassifier`, `KNearest`, `SVM`, `EM`, `DTrees`, `RTrees`, `Boost`, `ANN_MLP`, `LogisticRegression`, `SVMSGD`
 *
 * Member enums: `VariableTypes`, `ErrorTypes`, `SampleTypes`, `StatModelFlags`, `KNearestTypes`, `SVMTypes`, `KernelTypes`, `ParamTypes`, `EMTypes`, `DTreeFlags`, `Types`, `TrainingMethods`, `ActivationFunctions`, `TrainFlags`, `RegKinds`, `Methods`, `SvmsgdType`, `MarginType`
 */
CV_EXPORTS @interface Ml : NSObject

#pragma mark - Methods



@end

NS_ASSUME_NONNULL_END



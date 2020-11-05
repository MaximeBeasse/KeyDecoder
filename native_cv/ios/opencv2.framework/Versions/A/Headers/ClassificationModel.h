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
#import "Model.h"

@class Mat;
@class Net;



NS_ASSUME_NONNULL_BEGIN

// C++: class ClassificationModel
/**
 * This class represents high-level API for classification models.
 *
 * ClassificationModel allows to set params for preprocessing input image.
 * ClassificationModel creates net from file with trained weights and config,
 * sets preprocessing input, runs forward pass and return top-1 prediction.
 *
 * Member of `Dnn`
 */
CV_EXPORTS @interface ClassificationModel : Model


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::dnn::ClassificationModel> nativePtrClassificationModel;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::dnn::ClassificationModel>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::dnn::ClassificationModel>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::dnn::ClassificationModel::ClassificationModel(Net network)
//
/**
 * Create model from deep learning network.
 * @param network Net object.
 */
- (instancetype)initWithNetwork:(Net*)network;


//
//   cv::dnn::ClassificationModel::ClassificationModel(String model, String config = "")
//
/**
 * Create classification model from network represented in one of the supported formats.
 * An order of @p model and @p config arguments does not matter.
 * @param model Binary file contains trained weights.
 * @param config Text file contains network configuration.
 */
- (instancetype)initWithModel:(NSString*)model config:(NSString*)config;

/**
 * Create classification model from network represented in one of the supported formats.
 * An order of @p model and @p config arguments does not matter.
 * @param model Binary file contains trained weights.
 */
- (instancetype)initWithModel:(NSString*)model;


//
//  void cv::dnn::ClassificationModel::classify(Mat frame, int& classId, float& conf)
//
- (void)classify:(Mat*)frame classId:(int*)classId conf:(float*)conf NS_SWIFT_NAME(classify(frame:classId:conf:));



@end

NS_ASSUME_NONNULL_END



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

@class FloatVector;
@class IntVector;
@class Mat;
@class Net;
@class Rect2i;



NS_ASSUME_NONNULL_BEGIN

// C++: class DetectionModel
/**
 * This class represents high-level API for object detection networks.
 *
 * DetectionModel allows to set params for preprocessing input image.
 * DetectionModel creates net from file with trained weights and config,
 * sets preprocessing input, runs forward pass and return result detections.
 * For DetectionModel SSD, Faster R-CNN, YOLO topologies are supported.
 *
 * Member of `Dnn`
 */
CV_EXPORTS @interface DetectionModel : Model


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::dnn::DetectionModel> nativePtrDetectionModel;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::dnn::DetectionModel>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::dnn::DetectionModel>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::dnn::DetectionModel::DetectionModel(Net network)
//
/**
 * Create model from deep learning network.
 * @param network Net object.
 */
- (instancetype)initWithNetwork:(Net*)network;


//
//   cv::dnn::DetectionModel::DetectionModel(String model, String config = "")
//
/**
 * Create detection model from network represented in one of the supported formats.
 * An order of @p model and @p config arguments does not matter.
 * @param model Binary file contains trained weights.
 * @param config Text file contains network configuration.
 */
- (instancetype)initWithModel:(NSString*)model config:(NSString*)config;

/**
 * Create detection model from network represented in one of the supported formats.
 * An order of @p model and @p config arguments does not matter.
 * @param model Binary file contains trained weights.
 */
- (instancetype)initWithModel:(NSString*)model;


//
//  void cv::dnn::DetectionModel::detect(Mat frame, vector_int& classIds, vector_float& confidences, vector_Rect& boxes, float confThreshold = 0.5f, float nmsThreshold = 0.0f)
//
/**
 * Given the @p input frame, create input blob, run net and return result detections.
 * @param classIds Class indexes in result detection.
 * @param confidences A set of corresponding confidences.
 * @param boxes A set of bounding boxes.
 * @param confThreshold A threshold used to filter boxes by confidences.
 * @param nmsThreshold A threshold used in non maximum suppression.
 */
- (void)detect:(Mat*)frame classIds:(IntVector*)classIds confidences:(FloatVector*)confidences boxes:(NSMutableArray<Rect2i*>*)boxes confThreshold:(float)confThreshold nmsThreshold:(float)nmsThreshold NS_SWIFT_NAME(detect(frame:classIds:confidences:boxes:confThreshold:nmsThreshold:));

/**
 * Given the @p input frame, create input blob, run net and return result detections.
 * @param classIds Class indexes in result detection.
 * @param confidences A set of corresponding confidences.
 * @param boxes A set of bounding boxes.
 * @param confThreshold A threshold used to filter boxes by confidences.
 */
- (void)detect:(Mat*)frame classIds:(IntVector*)classIds confidences:(FloatVector*)confidences boxes:(NSMutableArray<Rect2i*>*)boxes confThreshold:(float)confThreshold NS_SWIFT_NAME(detect(frame:classIds:confidences:boxes:confThreshold:));

/**
 * Given the @p input frame, create input blob, run net and return result detections.
 * @param classIds Class indexes in result detection.
 * @param confidences A set of corresponding confidences.
 * @param boxes A set of bounding boxes.
 */
- (void)detect:(Mat*)frame classIds:(IntVector*)classIds confidences:(FloatVector*)confidences boxes:(NSMutableArray<Rect2i*>*)boxes NS_SWIFT_NAME(detect(frame:classIds:confidences:boxes:));



@end

NS_ASSUME_NONNULL_END



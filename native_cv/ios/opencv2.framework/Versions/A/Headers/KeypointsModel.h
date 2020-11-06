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
@class Point2f;



NS_ASSUME_NONNULL_BEGIN

// C++: class KeypointsModel
/**
 * This class represents high-level API for keypoints models
 *
 * KeypointsModel allows to set params for preprocessing input image.
 * KeypointsModel creates net from file with trained weights and config,
 * sets preprocessing input, runs forward pass and returns the x and y coordinates of each detected keypoint
 *
 * Member of `Dnn`
 */
CV_EXPORTS @interface KeypointsModel : Model


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::dnn::KeypointsModel> nativePtrKeypointsModel;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::dnn::KeypointsModel>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::dnn::KeypointsModel>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::dnn::KeypointsModel::KeypointsModel(Net network)
//
/**
 * Create model from deep learning network.
 * @param network Net object.
 */
- (instancetype)initWithNetwork:(Net*)network;


//
//   cv::dnn::KeypointsModel::KeypointsModel(String model, String config = "")
//
/**
 * Create keypoints model from network represented in one of the supported formats.
 * An order of @p model and @p config arguments does not matter.
 * @param model Binary file contains trained weights.
 * @param config Text file contains network configuration.
 */
- (instancetype)initWithModel:(NSString*)model config:(NSString*)config;

/**
 * Create keypoints model from network represented in one of the supported formats.
 * An order of @p model and @p config arguments does not matter.
 * @param model Binary file contains trained weights.
 */
- (instancetype)initWithModel:(NSString*)model;


//
//  vector_Point2f cv::dnn::KeypointsModel::estimate(Mat frame, float thresh = 0.5)
//
/**
 * Given the @p input frame, create input blob, run net
 * @param thresh minimum confidence threshold to select a keypoint
 * @return a vector holding the x and y coordinates of each detected keypoint
 *
 */
- (NSArray<Point2f*>*)estimate:(Mat*)frame thresh:(float)thresh NS_SWIFT_NAME(estimate(frame:thresh:));

/**
 * Given the @p input frame, create input blob, run net
 * @return a vector holding the x and y coordinates of each detected keypoint
 *
 */
- (NSArray<Point2f*>*)estimate:(Mat*)frame NS_SWIFT_NAME(estimate(frame:));



@end

NS_ASSUME_NONNULL_END



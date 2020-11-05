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

// C++: class SegmentationModel
/**
 * This class represents high-level API for segmentation  models
 *
 * SegmentationModel allows to set params for preprocessing input image.
 * SegmentationModel creates net from file with trained weights and config,
 * sets preprocessing input, runs forward pass and returns the class prediction for each pixel.
 *
 * Member of `Dnn`
 */
CV_EXPORTS @interface SegmentationModel : Model


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::dnn::SegmentationModel> nativePtrSegmentationModel;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::dnn::SegmentationModel>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::dnn::SegmentationModel>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::dnn::SegmentationModel::SegmentationModel(Net network)
//
/**
 * Create model from deep learning network.
 * @param network Net object.
 */
- (instancetype)initWithNetwork:(Net*)network;


//
//   cv::dnn::SegmentationModel::SegmentationModel(String model, String config = "")
//
/**
 * Create segmentation model from network represented in one of the supported formats.
 * An order of @p model and @p config arguments does not matter.
 * @param model Binary file contains trained weights.
 * @param config Text file contains network configuration.
 */
- (instancetype)initWithModel:(NSString*)model config:(NSString*)config;

/**
 * Create segmentation model from network represented in one of the supported formats.
 * An order of @p model and @p config arguments does not matter.
 * @param model Binary file contains trained weights.
 */
- (instancetype)initWithModel:(NSString*)model;


//
//  void cv::dnn::SegmentationModel::segment(Mat frame, Mat& mask)
//
/**
 * Given the @p input frame, create input blob, run net
 * @param mask Allocated class prediction for each pixel
 */
- (void)segment:(Mat*)frame mask:(Mat*)mask NS_SWIFT_NAME(segment(frame:mask:));



@end

NS_ASSUME_NONNULL_END



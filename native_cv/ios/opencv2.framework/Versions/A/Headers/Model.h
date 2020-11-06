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
#import "Net.h"

@class Mat;
@class Net;
@class Scalar;
@class Size2i;



NS_ASSUME_NONNULL_BEGIN

// C++: class Model
/**
 * This class is presented high-level API for neural networks.
 *
 * Model allows to set params for preprocessing input image.
 * Model creates net from file with trained weights and config,
 * sets preprocessing input and runs forward pass.
 *
 * Member of `Dnn`
 */
CV_EXPORTS @interface Model : Net


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::dnn::Model> nativePtrModel;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::dnn::Model>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::dnn::Model>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::dnn::Model::Model(Net network)
//
/**
 * Create model from deep learning network.
 * @param network Net object.
 */
- (instancetype)initWithNetwork:(Net*)network;


//
//   cv::dnn::Model::Model(String model, String config = "")
//
/**
 * Create model from deep learning network represented in one of the supported formats.
 * An order of @p model and @p config arguments does not matter.
 * @param model Binary file contains trained weights.
 * @param config Text file contains network configuration.
 */
- (instancetype)initWithModel:(NSString*)model config:(NSString*)config;

/**
 * Create model from deep learning network represented in one of the supported formats.
 * An order of @p model and @p config arguments does not matter.
 * @param model Binary file contains trained weights.
 */
- (instancetype)initWithModel:(NSString*)model;


//
//  Model cv::dnn::Model::setInputCrop(bool crop)
//
/**
 * Set flag crop for frame.
 * @param crop Flag which indicates whether image will be cropped after resize or not.
 */
- (Model*)setInputCrop:(BOOL)crop NS_SWIFT_NAME(setInputCrop(crop:));


//
//  Model cv::dnn::Model::setInputMean(Scalar mean)
//
/**
 * Set mean value for frame.
 * @param mean Scalar with mean values which are subtracted from channels.
 */
- (Model*)setInputMean:(Scalar*)mean NS_SWIFT_NAME(setInputMean(mean:));


//
//  Model cv::dnn::Model::setInputScale(double scale)
//
/**
 * Set scalefactor value for frame.
 * @param scale Multiplier for frame values.
 */
- (Model*)setInputScale:(double)scale NS_SWIFT_NAME(setInputScale(scale:));


//
//  Model cv::dnn::Model::setInputSize(Size size)
//
/**
 * Set input size for frame.
 * @param size New input size.
 * @note If shape of the new blob less than 0, then frame size not change.
 */
- (Model*)setInputSize:(Size2i*)size NS_SWIFT_NAME(setInputSize(size:));


//
//  Model cv::dnn::Model::setInputSize(int width, int height)
//
/**
 * Set input size for frame.
 * @param width New input width.
 * @param height New input height.
 * @note If shape of the new blob less than 0,
 * then frame size not change.
 */
- (Model*)setInputSize:(int)width height:(int)height NS_SWIFT_NAME(setInputSize(width:height:));


//
//  Model cv::dnn::Model::setInputSwapRB(bool swapRB)
//
/**
 * Set flag swapRB for frame.
 * @param swapRB Flag which indicates that swap first and last channels.
 */
- (Model*)setInputSwapRB:(BOOL)swapRB NS_SWIFT_NAME(setInputSwapRB(swapRB:));


//
//  void cv::dnn::Model::predict(Mat frame, vector_Mat& outs)
//
/**
 * Given the @p input frame, create input blob, run net and return the output @p blobs.
 * @param outs Allocated output blobs, which will store results of the computation.
 */
- (void)predict:(Mat*)frame outs:(NSMutableArray<Mat*>*)outs NS_SWIFT_NAME(predict(frame:outs:));


//
//  void cv::dnn::Model::setInputParams(double scale = 1.0, Size size = Size(), Scalar mean = Scalar(), bool swapRB = false, bool crop = false)
//
/**
 * Set preprocessing parameters for frame.
 * @param size New input size.
 * @param mean Scalar with mean values which are subtracted from channels.
 * @param scale Multiplier for frame values.
 * @param swapRB Flag which indicates that swap first and last channels.
 * @param crop Flag which indicates whether image will be cropped after resize or not.
 * blob(n, c, y, x) = scale * resize( frame(y, x, c) ) - mean(c) )
 */
- (void)setInputParams:(double)scale size:(Size2i*)size mean:(Scalar*)mean swapRB:(BOOL)swapRB crop:(BOOL)crop NS_SWIFT_NAME(setInputParams(scale:size:mean:swapRB:crop:));

/**
 * Set preprocessing parameters for frame.
 * @param size New input size.
 * @param mean Scalar with mean values which are subtracted from channels.
 * @param scale Multiplier for frame values.
 * @param swapRB Flag which indicates that swap first and last channels.
 * blob(n, c, y, x) = scale * resize( frame(y, x, c) ) - mean(c) )
 */
- (void)setInputParams:(double)scale size:(Size2i*)size mean:(Scalar*)mean swapRB:(BOOL)swapRB NS_SWIFT_NAME(setInputParams(scale:size:mean:swapRB:));

/**
 * Set preprocessing parameters for frame.
 * @param size New input size.
 * @param mean Scalar with mean values which are subtracted from channels.
 * @param scale Multiplier for frame values.
 * blob(n, c, y, x) = scale * resize( frame(y, x, c) ) - mean(c) )
 */
- (void)setInputParams:(double)scale size:(Size2i*)size mean:(Scalar*)mean NS_SWIFT_NAME(setInputParams(scale:size:mean:));

/**
 * Set preprocessing parameters for frame.
 * @param size New input size.
 * @param scale Multiplier for frame values.
 * blob(n, c, y, x) = scale * resize( frame(y, x, c) ) - mean(c) )
 */
- (void)setInputParams:(double)scale size:(Size2i*)size NS_SWIFT_NAME(setInputParams(scale:size:));

/**
 * Set preprocessing parameters for frame.
 * @param scale Multiplier for frame values.
 * blob(n, c, y, x) = scale * resize( frame(y, x, c) ) - mean(c) )
 */
- (void)setInputParams:(double)scale NS_SWIFT_NAME(setInputParams(scale:));

/**
 * Set preprocessing parameters for frame.
 * blob(n, c, y, x) = scale * resize( frame(y, x, c) ) - mean(c) )
 */
- (void)setInputParams NS_SWIFT_NAME(setInputParams());



@end

NS_ASSUME_NONNULL_END



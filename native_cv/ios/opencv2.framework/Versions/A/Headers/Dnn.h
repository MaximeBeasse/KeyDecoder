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

@class ByteVector;
@class FloatVector;
@class IntVector;
@class Mat;
@class Net;
@class Rect2d;
@class RotatedRect;
@class Scalar;
@class Size2i;


// C++: enum Backend
typedef NS_ENUM(int, Backend) {
    DNN_BACKEND_DEFAULT = 0,
    DNN_BACKEND_HALIDE = 0+1,
    DNN_BACKEND_INFERENCE_ENGINE = 0+2,
    DNN_BACKEND_OPENCV = 0+3,
    DNN_BACKEND_VKCOM = 0+4,
    DNN_BACKEND_CUDA = 0+5
};


// C++: enum Target
typedef NS_ENUM(int, Target) {
    DNN_TARGET_CPU = 0,
    DNN_TARGET_OPENCL = 0+1,
    DNN_TARGET_OPENCL_FP16 = 0+2,
    DNN_TARGET_MYRIAD = 0+3,
    DNN_TARGET_VULKAN = 0+4,
    DNN_TARGET_FPGA = 0+5,
    DNN_TARGET_CUDA = 0+6,
    DNN_TARGET_CUDA_FP16 = 0+7
};



NS_ASSUME_NONNULL_BEGIN

// C++: class Dnn
/**
 * The Dnn module
 *
 * Member classes: `DictValue`, `Layer`, `Net`, `Model`, `ClassificationModel`, `KeypointsModel`, `SegmentationModel`, `DetectionModel`
 *
 * Member enums: `Backend`, `Target`
 */
CV_EXPORTS @interface Dnn : NSObject

#pragma mark - Methods


//
//  Mat cv::dnn::blobFromImage(Mat image, double scalefactor = 1.0, Size size = Size(), Scalar mean = Scalar(), bool swapRB = false, bool crop = false, int ddepth = CV_32F)
//
/**
 * Creates 4-dimensional blob from image. Optionally resizes and crops @p image from center,
 * subtract @p mean values, scales values by @p scalefactor, swap Blue and Red channels.
 * @param image input image (with 1-, 3- or 4-channels).
 * @param size spatial size for output image
 * @param mean scalar with mean values which are subtracted from channels. Values are intended
 * to be in (mean-R, mean-G, mean-B) order if @p image has BGR ordering and @p swapRB is true.
 * @param scalefactor multiplier for @p image values.
 * @param swapRB flag which indicates that swap first and last channels
 * in 3-channel image is necessary.
 * @param crop flag which indicates whether image will be cropped after resize or not
 * @param ddepth Depth of output blob. Choose CV_32F or CV_8U.
 * if @p crop is true, input image is resized so one side after resize is equal to corresponding
 * dimension in @p size and another one is equal or larger. Then, crop from the center is performed.
 * If @p crop is false, direct resize without cropping and preserving aspect ratio is performed.
 * @return 4-dimensional Mat with NCHW dimensions order.
 */
+ (Mat*)blobFromImage:(Mat*)image scalefactor:(double)scalefactor size:(Size2i*)size mean:(Scalar*)mean swapRB:(BOOL)swapRB crop:(BOOL)crop ddepth:(int)ddepth NS_SWIFT_NAME(blobFromImage(image:scalefactor:size:mean:swapRB:crop:ddepth:));

/**
 * Creates 4-dimensional blob from image. Optionally resizes and crops @p image from center,
 * subtract @p mean values, scales values by @p scalefactor, swap Blue and Red channels.
 * @param image input image (with 1-, 3- or 4-channels).
 * @param size spatial size for output image
 * @param mean scalar with mean values which are subtracted from channels. Values are intended
 * to be in (mean-R, mean-G, mean-B) order if @p image has BGR ordering and @p swapRB is true.
 * @param scalefactor multiplier for @p image values.
 * @param swapRB flag which indicates that swap first and last channels
 * in 3-channel image is necessary.
 * @param crop flag which indicates whether image will be cropped after resize or not
 * if @p crop is true, input image is resized so one side after resize is equal to corresponding
 * dimension in @p size and another one is equal or larger. Then, crop from the center is performed.
 * If @p crop is false, direct resize without cropping and preserving aspect ratio is performed.
 * @return 4-dimensional Mat with NCHW dimensions order.
 */
+ (Mat*)blobFromImage:(Mat*)image scalefactor:(double)scalefactor size:(Size2i*)size mean:(Scalar*)mean swapRB:(BOOL)swapRB crop:(BOOL)crop NS_SWIFT_NAME(blobFromImage(image:scalefactor:size:mean:swapRB:crop:));

/**
 * Creates 4-dimensional blob from image. Optionally resizes and crops @p image from center,
 * subtract @p mean values, scales values by @p scalefactor, swap Blue and Red channels.
 * @param image input image (with 1-, 3- or 4-channels).
 * @param size spatial size for output image
 * @param mean scalar with mean values which are subtracted from channels. Values are intended
 * to be in (mean-R, mean-G, mean-B) order if @p image has BGR ordering and @p swapRB is true.
 * @param scalefactor multiplier for @p image values.
 * @param swapRB flag which indicates that swap first and last channels
 * in 3-channel image is necessary.
 * if @p crop is true, input image is resized so one side after resize is equal to corresponding
 * dimension in @p size and another one is equal or larger. Then, crop from the center is performed.
 * If @p crop is false, direct resize without cropping and preserving aspect ratio is performed.
 * @return 4-dimensional Mat with NCHW dimensions order.
 */
+ (Mat*)blobFromImage:(Mat*)image scalefactor:(double)scalefactor size:(Size2i*)size mean:(Scalar*)mean swapRB:(BOOL)swapRB NS_SWIFT_NAME(blobFromImage(image:scalefactor:size:mean:swapRB:));

/**
 * Creates 4-dimensional blob from image. Optionally resizes and crops @p image from center,
 * subtract @p mean values, scales values by @p scalefactor, swap Blue and Red channels.
 * @param image input image (with 1-, 3- or 4-channels).
 * @param size spatial size for output image
 * @param mean scalar with mean values which are subtracted from channels. Values are intended
 * to be in (mean-R, mean-G, mean-B) order if @p image has BGR ordering and @p swapRB is true.
 * @param scalefactor multiplier for @p image values.
 * in 3-channel image is necessary.
 * if @p crop is true, input image is resized so one side after resize is equal to corresponding
 * dimension in @p size and another one is equal or larger. Then, crop from the center is performed.
 * If @p crop is false, direct resize without cropping and preserving aspect ratio is performed.
 * @return 4-dimensional Mat with NCHW dimensions order.
 */
+ (Mat*)blobFromImage:(Mat*)image scalefactor:(double)scalefactor size:(Size2i*)size mean:(Scalar*)mean NS_SWIFT_NAME(blobFromImage(image:scalefactor:size:mean:));

/**
 * Creates 4-dimensional blob from image. Optionally resizes and crops @p image from center,
 * subtract @p mean values, scales values by @p scalefactor, swap Blue and Red channels.
 * @param image input image (with 1-, 3- or 4-channels).
 * @param size spatial size for output image
 * to be in (mean-R, mean-G, mean-B) order if @p image has BGR ordering and @p swapRB is true.
 * @param scalefactor multiplier for @p image values.
 * in 3-channel image is necessary.
 * if @p crop is true, input image is resized so one side after resize is equal to corresponding
 * dimension in @p size and another one is equal or larger. Then, crop from the center is performed.
 * If @p crop is false, direct resize without cropping and preserving aspect ratio is performed.
 * @return 4-dimensional Mat with NCHW dimensions order.
 */
+ (Mat*)blobFromImage:(Mat*)image scalefactor:(double)scalefactor size:(Size2i*)size NS_SWIFT_NAME(blobFromImage(image:scalefactor:size:));

/**
 * Creates 4-dimensional blob from image. Optionally resizes and crops @p image from center,
 * subtract @p mean values, scales values by @p scalefactor, swap Blue and Red channels.
 * @param image input image (with 1-, 3- or 4-channels).
 * to be in (mean-R, mean-G, mean-B) order if @p image has BGR ordering and @p swapRB is true.
 * @param scalefactor multiplier for @p image values.
 * in 3-channel image is necessary.
 * if @p crop is true, input image is resized so one side after resize is equal to corresponding
 * dimension in @p size and another one is equal or larger. Then, crop from the center is performed.
 * If @p crop is false, direct resize without cropping and preserving aspect ratio is performed.
 * @return 4-dimensional Mat with NCHW dimensions order.
 */
+ (Mat*)blobFromImage:(Mat*)image scalefactor:(double)scalefactor NS_SWIFT_NAME(blobFromImage(image:scalefactor:));

/**
 * Creates 4-dimensional blob from image. Optionally resizes and crops @p image from center,
 * subtract @p mean values, scales values by @p scalefactor, swap Blue and Red channels.
 * @param image input image (with 1-, 3- or 4-channels).
 * to be in (mean-R, mean-G, mean-B) order if @p image has BGR ordering and @p swapRB is true.
 * in 3-channel image is necessary.
 * if @p crop is true, input image is resized so one side after resize is equal to corresponding
 * dimension in @p size and another one is equal or larger. Then, crop from the center is performed.
 * If @p crop is false, direct resize without cropping and preserving aspect ratio is performed.
 * @return 4-dimensional Mat with NCHW dimensions order.
 */
+ (Mat*)blobFromImage:(Mat*)image NS_SWIFT_NAME(blobFromImage(image:));


//
//  Mat cv::dnn::blobFromImages(vector_Mat images, double scalefactor = 1.0, Size size = Size(), Scalar mean = Scalar(), bool swapRB = false, bool crop = false, int ddepth = CV_32F)
//
/**
 * Creates 4-dimensional blob from series of images. Optionally resizes and
 * crops @p images from center, subtract @p mean values, scales values by @p scalefactor,
 * swap Blue and Red channels.
 * @param images input images (all with 1-, 3- or 4-channels).
 * @param size spatial size for output image
 * @param mean scalar with mean values which are subtracted from channels. Values are intended
 * to be in (mean-R, mean-G, mean-B) order if @p image has BGR ordering and @p swapRB is true.
 * @param scalefactor multiplier for @p images values.
 * @param swapRB flag which indicates that swap first and last channels
 * in 3-channel image is necessary.
 * @param crop flag which indicates whether image will be cropped after resize or not
 * @param ddepth Depth of output blob. Choose CV_32F or CV_8U.
 * if @p crop is true, input image is resized so one side after resize is equal to corresponding
 * dimension in @p size and another one is equal or larger. Then, crop from the center is performed.
 * If @p crop is false, direct resize without cropping and preserving aspect ratio is performed.
 * @return 4-dimensional Mat with NCHW dimensions order.
 */
+ (Mat*)blobFromImages:(NSArray<Mat*>*)images scalefactor:(double)scalefactor size:(Size2i*)size mean:(Scalar*)mean swapRB:(BOOL)swapRB crop:(BOOL)crop ddepth:(int)ddepth NS_SWIFT_NAME(blobFromImages(images:scalefactor:size:mean:swapRB:crop:ddepth:));

/**
 * Creates 4-dimensional blob from series of images. Optionally resizes and
 * crops @p images from center, subtract @p mean values, scales values by @p scalefactor,
 * swap Blue and Red channels.
 * @param images input images (all with 1-, 3- or 4-channels).
 * @param size spatial size for output image
 * @param mean scalar with mean values which are subtracted from channels. Values are intended
 * to be in (mean-R, mean-G, mean-B) order if @p image has BGR ordering and @p swapRB is true.
 * @param scalefactor multiplier for @p images values.
 * @param swapRB flag which indicates that swap first and last channels
 * in 3-channel image is necessary.
 * @param crop flag which indicates whether image will be cropped after resize or not
 * if @p crop is true, input image is resized so one side after resize is equal to corresponding
 * dimension in @p size and another one is equal or larger. Then, crop from the center is performed.
 * If @p crop is false, direct resize without cropping and preserving aspect ratio is performed.
 * @return 4-dimensional Mat with NCHW dimensions order.
 */
+ (Mat*)blobFromImages:(NSArray<Mat*>*)images scalefactor:(double)scalefactor size:(Size2i*)size mean:(Scalar*)mean swapRB:(BOOL)swapRB crop:(BOOL)crop NS_SWIFT_NAME(blobFromImages(images:scalefactor:size:mean:swapRB:crop:));

/**
 * Creates 4-dimensional blob from series of images. Optionally resizes and
 * crops @p images from center, subtract @p mean values, scales values by @p scalefactor,
 * swap Blue and Red channels.
 * @param images input images (all with 1-, 3- or 4-channels).
 * @param size spatial size for output image
 * @param mean scalar with mean values which are subtracted from channels. Values are intended
 * to be in (mean-R, mean-G, mean-B) order if @p image has BGR ordering and @p swapRB is true.
 * @param scalefactor multiplier for @p images values.
 * @param swapRB flag which indicates that swap first and last channels
 * in 3-channel image is necessary.
 * if @p crop is true, input image is resized so one side after resize is equal to corresponding
 * dimension in @p size and another one is equal or larger. Then, crop from the center is performed.
 * If @p crop is false, direct resize without cropping and preserving aspect ratio is performed.
 * @return 4-dimensional Mat with NCHW dimensions order.
 */
+ (Mat*)blobFromImages:(NSArray<Mat*>*)images scalefactor:(double)scalefactor size:(Size2i*)size mean:(Scalar*)mean swapRB:(BOOL)swapRB NS_SWIFT_NAME(blobFromImages(images:scalefactor:size:mean:swapRB:));

/**
 * Creates 4-dimensional blob from series of images. Optionally resizes and
 * crops @p images from center, subtract @p mean values, scales values by @p scalefactor,
 * swap Blue and Red channels.
 * @param images input images (all with 1-, 3- or 4-channels).
 * @param size spatial size for output image
 * @param mean scalar with mean values which are subtracted from channels. Values are intended
 * to be in (mean-R, mean-G, mean-B) order if @p image has BGR ordering and @p swapRB is true.
 * @param scalefactor multiplier for @p images values.
 * in 3-channel image is necessary.
 * if @p crop is true, input image is resized so one side after resize is equal to corresponding
 * dimension in @p size and another one is equal or larger. Then, crop from the center is performed.
 * If @p crop is false, direct resize without cropping and preserving aspect ratio is performed.
 * @return 4-dimensional Mat with NCHW dimensions order.
 */
+ (Mat*)blobFromImages:(NSArray<Mat*>*)images scalefactor:(double)scalefactor size:(Size2i*)size mean:(Scalar*)mean NS_SWIFT_NAME(blobFromImages(images:scalefactor:size:mean:));

/**
 * Creates 4-dimensional blob from series of images. Optionally resizes and
 * crops @p images from center, subtract @p mean values, scales values by @p scalefactor,
 * swap Blue and Red channels.
 * @param images input images (all with 1-, 3- or 4-channels).
 * @param size spatial size for output image
 * to be in (mean-R, mean-G, mean-B) order if @p image has BGR ordering and @p swapRB is true.
 * @param scalefactor multiplier for @p images values.
 * in 3-channel image is necessary.
 * if @p crop is true, input image is resized so one side after resize is equal to corresponding
 * dimension in @p size and another one is equal or larger. Then, crop from the center is performed.
 * If @p crop is false, direct resize without cropping and preserving aspect ratio is performed.
 * @return 4-dimensional Mat with NCHW dimensions order.
 */
+ (Mat*)blobFromImages:(NSArray<Mat*>*)images scalefactor:(double)scalefactor size:(Size2i*)size NS_SWIFT_NAME(blobFromImages(images:scalefactor:size:));

/**
 * Creates 4-dimensional blob from series of images. Optionally resizes and
 * crops @p images from center, subtract @p mean values, scales values by @p scalefactor,
 * swap Blue and Red channels.
 * @param images input images (all with 1-, 3- or 4-channels).
 * to be in (mean-R, mean-G, mean-B) order if @p image has BGR ordering and @p swapRB is true.
 * @param scalefactor multiplier for @p images values.
 * in 3-channel image is necessary.
 * if @p crop is true, input image is resized so one side after resize is equal to corresponding
 * dimension in @p size and another one is equal or larger. Then, crop from the center is performed.
 * If @p crop is false, direct resize without cropping and preserving aspect ratio is performed.
 * @return 4-dimensional Mat with NCHW dimensions order.
 */
+ (Mat*)blobFromImages:(NSArray<Mat*>*)images scalefactor:(double)scalefactor NS_SWIFT_NAME(blobFromImages(images:scalefactor:));

/**
 * Creates 4-dimensional blob from series of images. Optionally resizes and
 * crops @p images from center, subtract @p mean values, scales values by @p scalefactor,
 * swap Blue and Red channels.
 * @param images input images (all with 1-, 3- or 4-channels).
 * to be in (mean-R, mean-G, mean-B) order if @p image has BGR ordering and @p swapRB is true.
 * in 3-channel image is necessary.
 * if @p crop is true, input image is resized so one side after resize is equal to corresponding
 * dimension in @p size and another one is equal or larger. Then, crop from the center is performed.
 * If @p crop is false, direct resize without cropping and preserving aspect ratio is performed.
 * @return 4-dimensional Mat with NCHW dimensions order.
 */
+ (Mat*)blobFromImages:(NSArray<Mat*>*)images NS_SWIFT_NAME(blobFromImages(images:));


//
//  Mat cv::dnn::readTensorFromONNX(String path)
//
/**
 * Creates blob from .pb file.
 * @param path to the .pb file with input tensor.
 * @return Mat.
 */
+ (Mat*)readTensorFromONNX:(NSString*)path NS_SWIFT_NAME(readTensorFromONNX(path:));


//
//  Mat cv::dnn::readTorchBlob(String filename, bool isBinary = true)
//
/**
 * Loads blob which was serialized as torch.Tensor object of Torch7 framework.
 * @warning This function has the same limitations as readNetFromTorch().
 */
+ (Mat*)readTorchBlob:(NSString*)filename isBinary:(BOOL)isBinary NS_SWIFT_NAME(readTorchBlob(filename:isBinary:));

/**
 * Loads blob which was serialized as torch.Tensor object of Torch7 framework.
 * @warning This function has the same limitations as readNetFromTorch().
 */
+ (Mat*)readTorchBlob:(NSString*)filename NS_SWIFT_NAME(readTorchBlob(filename:));


//
//  Net cv::dnn::readNet(String framework, vector_uchar bufferModel, vector_uchar bufferConfig = std::vector<uchar>())
//
/**
 * Read deep learning network represented in one of the supported formats.
 * This is an overloaded member function, provided for convenience.
 * It differs from the above function only in what argument(s) it accepts.
 * @param framework    Name of origin framework.
 * @param bufferModel  A buffer with a content of binary file with weights
 * @param bufferConfig A buffer with a content of text file contains network configuration.
 * @return Net object.
 */
+ (Net*)readNet:(NSString*)framework bufferModel:(ByteVector*)bufferModel bufferConfig:(ByteVector*)bufferConfig NS_SWIFT_NAME(readNet(framework:bufferModel:bufferConfig:));

/**
 * Read deep learning network represented in one of the supported formats.
 * This is an overloaded member function, provided for convenience.
 * It differs from the above function only in what argument(s) it accepts.
 * @param framework    Name of origin framework.
 * @param bufferModel  A buffer with a content of binary file with weights
 * @return Net object.
 */
+ (Net*)readNet:(NSString*)framework bufferModel:(ByteVector*)bufferModel NS_SWIFT_NAME(readNet(framework:bufferModel:));


//
//  Net cv::dnn::readNet(String model, String config = "", String framework = "")
//
/**
 * Read deep learning network represented in one of the supported formats.
 * @param model Binary file contains trained weights. The following file
 * extensions are expected for models from different frameworks:
 * * `*.caffemodel` (Caffe, http://caffe.berkeleyvision.org/)
 * * `*.pb` (TensorFlow, https://www.tensorflow.org/)
 * * `*.t7` | `*.net` (Torch, http://torch.ch/)
 * * `*.weights` (Darknet, https://pjreddie.com/darknet/)
 * * `*.bin` (DLDT, https://software.intel.com/openvino-toolkit)
 * * `*.onnx` (ONNX, https://onnx.ai/)
 * @param config Text file contains network configuration. It could be a
 * file with the following extensions:
 * * `*.prototxt` (Caffe, http://caffe.berkeleyvision.org/)
 * * `*.pbtxt` (TensorFlow, https://www.tensorflow.org/)
 * * `*.cfg` (Darknet, https://pjreddie.com/darknet/)
 * * `*.xml` (DLDT, https://software.intel.com/openvino-toolkit)
 * @param framework Explicit framework name tag to determine a format.
 * @return Net object.
 *
 * This function automatically detects an origin framework of trained model
 * and calls an appropriate function such REF: readNetFromCaffe, REF: readNetFromTensorflow,
 * REF: readNetFromTorch or REF: readNetFromDarknet. An order of @p model and @p config
 * arguments does not matter.
 */
+ (Net*)readNet:(NSString*)model config:(NSString*)config framework:(NSString*)framework NS_SWIFT_NAME(readNet(model:config:framework:));

/**
 * Read deep learning network represented in one of the supported formats.
 * @param model Binary file contains trained weights. The following file
 * extensions are expected for models from different frameworks:
 * * `*.caffemodel` (Caffe, http://caffe.berkeleyvision.org/)
 * * `*.pb` (TensorFlow, https://www.tensorflow.org/)
 * * `*.t7` | `*.net` (Torch, http://torch.ch/)
 * * `*.weights` (Darknet, https://pjreddie.com/darknet/)
 * * `*.bin` (DLDT, https://software.intel.com/openvino-toolkit)
 * * `*.onnx` (ONNX, https://onnx.ai/)
 * @param config Text file contains network configuration. It could be a
 * file with the following extensions:
 * * `*.prototxt` (Caffe, http://caffe.berkeleyvision.org/)
 * * `*.pbtxt` (TensorFlow, https://www.tensorflow.org/)
 * * `*.cfg` (Darknet, https://pjreddie.com/darknet/)
 * * `*.xml` (DLDT, https://software.intel.com/openvino-toolkit)
 * @return Net object.
 *
 * This function automatically detects an origin framework of trained model
 * and calls an appropriate function such REF: readNetFromCaffe, REF: readNetFromTensorflow,
 * REF: readNetFromTorch or REF: readNetFromDarknet. An order of @p model and @p config
 * arguments does not matter.
 */
+ (Net*)readNet:(NSString*)model config:(NSString*)config NS_SWIFT_NAME(readNet(model:config:));

/**
 * Read deep learning network represented in one of the supported formats.
 * @param model Binary file contains trained weights. The following file
 * extensions are expected for models from different frameworks:
 * * `*.caffemodel` (Caffe, http://caffe.berkeleyvision.org/)
 * * `*.pb` (TensorFlow, https://www.tensorflow.org/)
 * * `*.t7` | `*.net` (Torch, http://torch.ch/)
 * * `*.weights` (Darknet, https://pjreddie.com/darknet/)
 * * `*.bin` (DLDT, https://software.intel.com/openvino-toolkit)
 * * `*.onnx` (ONNX, https://onnx.ai/)
 * file with the following extensions:
 * * `*.prototxt` (Caffe, http://caffe.berkeleyvision.org/)
 * * `*.pbtxt` (TensorFlow, https://www.tensorflow.org/)
 * * `*.cfg` (Darknet, https://pjreddie.com/darknet/)
 * * `*.xml` (DLDT, https://software.intel.com/openvino-toolkit)
 * @return Net object.
 *
 * This function automatically detects an origin framework of trained model
 * and calls an appropriate function such REF: readNetFromCaffe, REF: readNetFromTensorflow,
 * REF: readNetFromTorch or REF: readNetFromDarknet. An order of @p model and @p config
 * arguments does not matter.
 */
+ (Net*)readNet:(NSString*)model NS_SWIFT_NAME(readNet(model:));


//
//  Net cv::dnn::readNetFromCaffe(String prototxt, String caffeModel = String())
//
/**
 * Reads a network model stored in <a href="http://caffe.berkeleyvision.org">Caffe</a> framework's format.
 * @param prototxt   path to the .prototxt file with text description of the network architecture.
 * @param caffeModel path to the .caffemodel file with learned network.
 * @return Net object.
 */
+ (Net*)readNetFromCaffeFile:(NSString*)prototxt caffeModel:(NSString*)caffeModel NS_SWIFT_NAME(readNetFromCaffe(prototxt:caffeModel:));

/**
 * Reads a network model stored in <a href="http://caffe.berkeleyvision.org">Caffe</a> framework's format.
 * @param prototxt   path to the .prototxt file with text description of the network architecture.
 * @return Net object.
 */
+ (Net*)readNetFromCaffeFile:(NSString*)prototxt NS_SWIFT_NAME(readNetFromCaffe(prototxt:));


//
//  Net cv::dnn::readNetFromCaffe(vector_uchar bufferProto, vector_uchar bufferModel = std::vector<uchar>())
//
/**
 * Reads a network model stored in Caffe model in memory.
 * @param bufferProto buffer containing the content of the .prototxt file
 * @param bufferModel buffer containing the content of the .caffemodel file
 * @return Net object.
 */
+ (Net*)readNetFromCaffeBuffer:(ByteVector*)bufferProto bufferModel:(ByteVector*)bufferModel NS_SWIFT_NAME(readNetFromCaffe(bufferProto:bufferModel:));

/**
 * Reads a network model stored in Caffe model in memory.
 * @param bufferProto buffer containing the content of the .prototxt file
 * @return Net object.
 */
+ (Net*)readNetFromCaffeBuffer:(ByteVector*)bufferProto NS_SWIFT_NAME(readNetFromCaffe(bufferProto:));


//
//  Net cv::dnn::readNetFromDarknet(String cfgFile, String darknetModel = String())
//
/**
 * Reads a network model stored in <a href="https://pjreddie.com/darknet/">Darknet</a> model files.
 * @param cfgFile      path to the .cfg file with text description of the network architecture.
 * @param darknetModel path to the .weights file with learned network.
 * @return Network object that ready to do forward, throw an exception in failure cases.
 * @return Net object.
 */
+ (Net*)readNetFromDarknetFile:(NSString*)cfgFile darknetModel:(NSString*)darknetModel NS_SWIFT_NAME(readNetFromDarknet(cfgFile:darknetModel:));

/**
 * Reads a network model stored in <a href="https://pjreddie.com/darknet/">Darknet</a> model files.
 * @param cfgFile      path to the .cfg file with text description of the network architecture.
 * @return Network object that ready to do forward, throw an exception in failure cases.
 * @return Net object.
 */
+ (Net*)readNetFromDarknetFile:(NSString*)cfgFile NS_SWIFT_NAME(readNetFromDarknet(cfgFile:));


//
//  Net cv::dnn::readNetFromDarknet(vector_uchar bufferCfg, vector_uchar bufferModel = std::vector<uchar>())
//
/**
 * Reads a network model stored in <a href="https://pjreddie.com/darknet/">Darknet</a> model files.
 * @param bufferCfg   A buffer contains a content of .cfg file with text description of the network architecture.
 * @param bufferModel A buffer contains a content of .weights file with learned network.
 * @return Net object.
 */
+ (Net*)readNetFromDarknetBuffer:(ByteVector*)bufferCfg bufferModel:(ByteVector*)bufferModel NS_SWIFT_NAME(readNetFromDarknet(bufferCfg:bufferModel:));

/**
 * Reads a network model stored in <a href="https://pjreddie.com/darknet/">Darknet</a> model files.
 * @param bufferCfg   A buffer contains a content of .cfg file with text description of the network architecture.
 * @return Net object.
 */
+ (Net*)readNetFromDarknetBuffer:(ByteVector*)bufferCfg NS_SWIFT_NAME(readNetFromDarknet(bufferCfg:));


//
//  Net cv::dnn::readNetFromModelOptimizer(String xml, String bin)
//
/**
 * Load a network from Intel's Model Optimizer intermediate representation.
 * @param xml XML configuration file with network's topology.
 * @param bin Binary file with trained weights.
 * @return Net object.
 * Networks imported from Intel's Model Optimizer are launched in Intel's Inference Engine
 * backend.
 */
+ (Net*)readNetFromModelOptimizer:(NSString*)xml bin:(NSString*)bin NS_SWIFT_NAME(readNetFromModelOptimizer(xml:bin:));


//
//  Net cv::dnn::readNetFromModelOptimizer(vector_uchar bufferModelConfig, vector_uchar bufferWeights)
//
/**
 * Load a network from Intel's Model Optimizer intermediate representation.
 * @param bufferModelConfig Buffer contains XML configuration with network's topology.
 * @param bufferWeights Buffer contains binary data with trained weights.
 * @return Net object.
 * Networks imported from Intel's Model Optimizer are launched in Intel's Inference Engine
 * backend.
 */
+ (Net*)readNetFromModelOptimizer:(ByteVector*)bufferModelConfig bufferWeights:(ByteVector*)bufferWeights NS_SWIFT_NAME(readNetFromModelOptimizer(bufferModelConfig:bufferWeights:));


//
//  Net cv::dnn::readNetFromONNX(String onnxFile)
//
/**
 * Reads a network model <a href="https://onnx.ai/">ONNX</a>.
 * @param onnxFile path to the .onnx file with text description of the network architecture.
 * @return Network object that ready to do forward, throw an exception in failure cases.
 */
+ (Net*)readNetFromONNXFile:(NSString*)onnxFile NS_SWIFT_NAME(readNetFromONNX(onnxFile:));


//
//  Net cv::dnn::readNetFromONNX(vector_uchar buffer)
//
/**
 * Reads a network model from <a href="https://onnx.ai/">ONNX</a>
 * in-memory buffer.
 * @param buffer in-memory buffer that stores the ONNX model bytes.
 * @return Network object that ready to do forward, throw an exception
 * in failure cases.
 */
+ (Net*)readNetFromONNXBuffer:(ByteVector*)buffer NS_SWIFT_NAME(readNetFromONNX(buffer:));


//
//  Net cv::dnn::readNetFromTensorflow(String model, String config = String())
//
/**
 * Reads a network model stored in <a href="https://www.tensorflow.org/">TensorFlow</a> framework's format.
 * @param model  path to the .pb file with binary protobuf description of the network architecture
 * @param config path to the .pbtxt file that contains text graph definition in protobuf format.
 * Resulting Net object is built by text graph using weights from a binary one that
 * let us make it more flexible.
 * @return Net object.
 */
+ (Net*)readNetFromTensorflowFile:(NSString*)model config:(NSString*)config NS_SWIFT_NAME(readNetFromTensorflow(model:config:));

/**
 * Reads a network model stored in <a href="https://www.tensorflow.org/">TensorFlow</a> framework's format.
 * @param model  path to the .pb file with binary protobuf description of the network architecture
 * Resulting Net object is built by text graph using weights from a binary one that
 * let us make it more flexible.
 * @return Net object.
 */
+ (Net*)readNetFromTensorflowFile:(NSString*)model NS_SWIFT_NAME(readNetFromTensorflow(model:));


//
//  Net cv::dnn::readNetFromTensorflow(vector_uchar bufferModel, vector_uchar bufferConfig = std::vector<uchar>())
//
/**
 * Reads a network model stored in <a href="https://www.tensorflow.org/">TensorFlow</a> framework's format.
 * @param bufferModel buffer containing the content of the pb file
 * @param bufferConfig buffer containing the content of the pbtxt file
 * @return Net object.
 */
+ (Net*)readNetFromTensorflowBuffer:(ByteVector*)bufferModel bufferConfig:(ByteVector*)bufferConfig NS_SWIFT_NAME(readNetFromTensorflow(bufferModel:bufferConfig:));

/**
 * Reads a network model stored in <a href="https://www.tensorflow.org/">TensorFlow</a> framework's format.
 * @param bufferModel buffer containing the content of the pb file
 * @return Net object.
 */
+ (Net*)readNetFromTensorflowBuffer:(ByteVector*)bufferModel NS_SWIFT_NAME(readNetFromTensorflow(bufferModel:));


//
//  Net cv::dnn::readNetFromTorch(String model, bool isBinary = true, bool evaluate = true)
//
/**
 * Reads a network model stored in <a href="http://torch.ch">Torch7</a> framework's format.
 * @param model    path to the file, dumped from Torch by using torch.save() function.
 * @param isBinary specifies whether the network was serialized in ascii mode or binary.
 * @param evaluate specifies testing phase of network. If true, it's similar to evaluate() method in Torch.
 * @return Net object.
 *
 * @note Ascii mode of Torch serializer is more preferable, because binary mode extensively use `long` type of C language,
 * which has various bit-length on different systems.
 *
 * The loading file must contain serialized <a href="https://github.com/torch/nn/blob/master/doc/module.md">nn.Module</a> object
 * with importing network. Try to eliminate a custom objects from serialazing data to avoid importing errors.
 *
 * List of supported layers (i.e. object instances derived from Torch nn.Module class):
 * - nn.Sequential
 * - nn.Parallel
 * - nn.Concat
 * - nn.Linear
 * - nn.SpatialConvolution
 * - nn.SpatialMaxPooling, nn.SpatialAveragePooling
 * - nn.ReLU, nn.TanH, nn.Sigmoid
 * - nn.Reshape
 * - nn.SoftMax, nn.LogSoftMax
 *
 * Also some equivalents of these classes from cunn, cudnn, and fbcunn may be successfully imported.
 */
+ (Net*)readNetFromTorch:(NSString*)model isBinary:(BOOL)isBinary evaluate:(BOOL)evaluate NS_SWIFT_NAME(readNetFromTorch(model:isBinary:evaluate:));

/**
 * Reads a network model stored in <a href="http://torch.ch">Torch7</a> framework's format.
 * @param model    path to the file, dumped from Torch by using torch.save() function.
 * @param isBinary specifies whether the network was serialized in ascii mode or binary.
 * @return Net object.
 *
 * @note Ascii mode of Torch serializer is more preferable, because binary mode extensively use `long` type of C language,
 * which has various bit-length on different systems.
 *
 * The loading file must contain serialized <a href="https://github.com/torch/nn/blob/master/doc/module.md">nn.Module</a> object
 * with importing network. Try to eliminate a custom objects from serialazing data to avoid importing errors.
 *
 * List of supported layers (i.e. object instances derived from Torch nn.Module class):
 * - nn.Sequential
 * - nn.Parallel
 * - nn.Concat
 * - nn.Linear
 * - nn.SpatialConvolution
 * - nn.SpatialMaxPooling, nn.SpatialAveragePooling
 * - nn.ReLU, nn.TanH, nn.Sigmoid
 * - nn.Reshape
 * - nn.SoftMax, nn.LogSoftMax
 *
 * Also some equivalents of these classes from cunn, cudnn, and fbcunn may be successfully imported.
 */
+ (Net*)readNetFromTorch:(NSString*)model isBinary:(BOOL)isBinary NS_SWIFT_NAME(readNetFromTorch(model:isBinary:));

/**
 * Reads a network model stored in <a href="http://torch.ch">Torch7</a> framework's format.
 * @param model    path to the file, dumped from Torch by using torch.save() function.
 * @return Net object.
 *
 * @note Ascii mode of Torch serializer is more preferable, because binary mode extensively use `long` type of C language,
 * which has various bit-length on different systems.
 *
 * The loading file must contain serialized <a href="https://github.com/torch/nn/blob/master/doc/module.md">nn.Module</a> object
 * with importing network. Try to eliminate a custom objects from serialazing data to avoid importing errors.
 *
 * List of supported layers (i.e. object instances derived from Torch nn.Module class):
 * - nn.Sequential
 * - nn.Parallel
 * - nn.Concat
 * - nn.Linear
 * - nn.SpatialConvolution
 * - nn.SpatialMaxPooling, nn.SpatialAveragePooling
 * - nn.ReLU, nn.TanH, nn.Sigmoid
 * - nn.Reshape
 * - nn.SoftMax, nn.LogSoftMax
 *
 * Also some equivalents of these classes from cunn, cudnn, and fbcunn may be successfully imported.
 */
+ (Net*)readNetFromTorch:(NSString*)model NS_SWIFT_NAME(readNetFromTorch(model:));


//
//  String cv::dnn::getInferenceEngineBackendType()
//
/**
 * Returns Inference Engine internal backend API.
 *
 * See values of `CV_DNN_BACKEND_INFERENCE_ENGINE_*` macros.
 *
 * Default value is controlled through `OPENCV_DNN_BACKEND_INFERENCE_ENGINE_TYPE` runtime parameter (environment variable).
 */
+ (NSString*)getInferenceEngineBackendType NS_SWIFT_NAME(getInferenceEngineBackendType());


//
//  String cv::dnn::getInferenceEngineVPUType()
//
/**
 * Returns Inference Engine VPU type.
 *
 * See values of `CV_DNN_INFERENCE_ENGINE_VPU_TYPE_*` macros.
 */
+ (NSString*)getInferenceEngineVPUType NS_SWIFT_NAME(getInferenceEngineVPUType());


//
//  String cv::dnn::setInferenceEngineBackendType(String newBackendType)
//
/**
 * Specify Inference Engine internal backend API.
 *
 * See values of `CV_DNN_BACKEND_INFERENCE_ENGINE_*` macros.
 *
 * @return previous value of internal backend API
 */
+ (NSString*)setInferenceEngineBackendType:(NSString*)newBackendType NS_SWIFT_NAME(setInferenceEngineBackendType(newBackendType:));


//
//  vector_Target cv::dnn::getAvailableTargets(dnn_Backend be)
//
    // Return type 'vector_Target' is not supported, skipping the function


//
//  void cv::dnn::NMSBoxes(vector_Rect2d bboxes, vector_float scores, float score_threshold, float nms_threshold, vector_int& indices, float eta = 1.f, int top_k = 0)
//
/**
 * Performs non maximum suppression given boxes and corresponding scores.
 *
 * @param bboxes a set of bounding boxes to apply NMS.
 * @param scores a set of corresponding confidences.
 * @param score_threshold a threshold used to filter boxes by score.
 * @param nms_threshold a threshold used in non maximum suppression.
 * @param indices the kept indices of bboxes after NMS.
 * @param eta a coefficient in adaptive threshold formula: `$$nms\_threshold_{i+1}=eta\cdot nms\_threshold_i$$`.
 * @param top_k if `>0`, keep at most @p top_k picked indices.
 */
+ (void)NMSBoxes:(NSArray<Rect2d*>*)bboxes scores:(FloatVector*)scores score_threshold:(float)score_threshold nms_threshold:(float)nms_threshold indices:(IntVector*)indices eta:(float)eta top_k:(int)top_k NS_SWIFT_NAME(NMSBoxes(bboxes:scores:score_threshold:nms_threshold:indices:eta:top_k:));

/**
 * Performs non maximum suppression given boxes and corresponding scores.
 *
 * @param bboxes a set of bounding boxes to apply NMS.
 * @param scores a set of corresponding confidences.
 * @param score_threshold a threshold used to filter boxes by score.
 * @param nms_threshold a threshold used in non maximum suppression.
 * @param indices the kept indices of bboxes after NMS.
 * @param eta a coefficient in adaptive threshold formula: `$$nms\_threshold_{i+1}=eta\cdot nms\_threshold_i$$`.
 */
+ (void)NMSBoxes:(NSArray<Rect2d*>*)bboxes scores:(FloatVector*)scores score_threshold:(float)score_threshold nms_threshold:(float)nms_threshold indices:(IntVector*)indices eta:(float)eta NS_SWIFT_NAME(NMSBoxes(bboxes:scores:score_threshold:nms_threshold:indices:eta:));

/**
 * Performs non maximum suppression given boxes and corresponding scores.
 *
 * @param bboxes a set of bounding boxes to apply NMS.
 * @param scores a set of corresponding confidences.
 * @param score_threshold a threshold used to filter boxes by score.
 * @param nms_threshold a threshold used in non maximum suppression.
 * @param indices the kept indices of bboxes after NMS.
 */
+ (void)NMSBoxes:(NSArray<Rect2d*>*)bboxes scores:(FloatVector*)scores score_threshold:(float)score_threshold nms_threshold:(float)nms_threshold indices:(IntVector*)indices NS_SWIFT_NAME(NMSBoxes(bboxes:scores:score_threshold:nms_threshold:indices:));


//
//  void cv::dnn::NMSBoxes(vector_RotatedRect bboxes, vector_float scores, float score_threshold, float nms_threshold, vector_int& indices, float eta = 1.f, int top_k = 0)
//
+ (void)NMSBoxesRotated:(NSArray<RotatedRect*>*)bboxes scores:(FloatVector*)scores score_threshold:(float)score_threshold nms_threshold:(float)nms_threshold indices:(IntVector*)indices eta:(float)eta top_k:(int)top_k NS_SWIFT_NAME(NMSBoxes(bboxes:scores:score_threshold:nms_threshold:indices:eta:top_k:));

+ (void)NMSBoxesRotated:(NSArray<RotatedRect*>*)bboxes scores:(FloatVector*)scores score_threshold:(float)score_threshold nms_threshold:(float)nms_threshold indices:(IntVector*)indices eta:(float)eta NS_SWIFT_NAME(NMSBoxes(bboxes:scores:score_threshold:nms_threshold:indices:eta:));

+ (void)NMSBoxesRotated:(NSArray<RotatedRect*>*)bboxes scores:(FloatVector*)scores score_threshold:(float)score_threshold nms_threshold:(float)nms_threshold indices:(IntVector*)indices NS_SWIFT_NAME(NMSBoxes(bboxes:scores:score_threshold:nms_threshold:indices:));


//
//  void cv::dnn::imagesFromBlob(Mat blob_, vector_Mat& images_)
//
/**
 * Parse a 4D blob and output the images it contains as 2D arrays through a simpler data structure
 * (std::vector<cv::Mat>).
 * @param blob_ 4 dimensional array (images, channels, height, width) in floating point precision (CV_32F) from
 * which you would like to extract the images.
 * @param images_ array of 2D Mat containing the images extracted from the blob in floating point precision
 * (CV_32F). They are non normalized neither mean added. The number of returned images equals the first dimension
 * of the blob (batch size). Every image has a number of channels equals to the second dimension of the blob (depth).
 */
+ (void)imagesFromBlob:(Mat*)blob_ images_:(NSMutableArray<Mat*>*)images_ NS_SWIFT_NAME(imagesFromBlob(blob_:images_:));


//
//  void cv::dnn::resetMyriadDevice()
//
/**
 * Release a Myriad device (binded by OpenCV).
 *
 * Single Myriad device cannot be shared across multiple processes which uses
 * Inference Engine's Myriad plugin.
 */
+ (void)resetMyriadDevice NS_SWIFT_NAME(resetMyriadDevice());


//
//  void cv::dnn::shrinkCaffeModel(String src, String dst, vector_String layersTypes = std::vector<String>())
//
/**
 * Convert all weights of Caffe network to half precision floating point.
 * @param src Path to origin model from Caffe framework contains single
 * precision floating point weights (usually has `.caffemodel` extension).
 * @param dst Path to destination model with updated weights.
 * @param layersTypes Set of layers types which parameters will be converted.
 * By default, converts only Convolutional and Fully-Connected layers'
 * weights.
 *
 * @note Shrinked model has no origin float32 weights so it can't be used
 * in origin Caffe framework anymore. However the structure of data
 * is taken from NVidia's Caffe fork: https://github.com/NVIDIA/caffe.
 * So the resulting model may be used there.
 */
+ (void)shrinkCaffeModel:(NSString*)src dst:(NSString*)dst layersTypes:(NSArray<NSString*>*)layersTypes NS_SWIFT_NAME(shrinkCaffeModel(src:dst:layersTypes:));

/**
 * Convert all weights of Caffe network to half precision floating point.
 * @param src Path to origin model from Caffe framework contains single
 * precision floating point weights (usually has `.caffemodel` extension).
 * @param dst Path to destination model with updated weights.
 * By default, converts only Convolutional and Fully-Connected layers'
 * weights.
 *
 * @note Shrinked model has no origin float32 weights so it can't be used
 * in origin Caffe framework anymore. However the structure of data
 * is taken from NVidia's Caffe fork: https://github.com/NVIDIA/caffe.
 * So the resulting model may be used there.
 */
+ (void)shrinkCaffeModel:(NSString*)src dst:(NSString*)dst NS_SWIFT_NAME(shrinkCaffeModel(src:dst:));


//
//  void cv::dnn::writeTextGraph(String model, String output)
//
/**
 * Create a text representation for a binary network stored in protocol buffer format.
 * @param model  A path to binary network.
 * @param output A path to output text file to be created.
 *
 * @note To reduce output file size, trained weights are not included.
 */
+ (void)writeTextGraph:(NSString*)model output:(NSString*)output NS_SWIFT_NAME(writeTextGraph(model:output:));



@end

NS_ASSUME_NONNULL_END



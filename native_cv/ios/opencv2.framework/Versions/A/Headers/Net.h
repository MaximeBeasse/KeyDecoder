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
@class DictValue;
@class DoubleVector;
@class IntVector;
@class Layer;
@class Mat;
@class Scalar;



NS_ASSUME_NONNULL_BEGIN

// C++: class Net
/**
 * This class allows to create and manipulate comprehensive artificial neural networks.
 *
 * Neural network is presented as directed acyclic graph (DAG), where vertices are Layer instances,
 * and edges specify relationships between layers inputs and outputs.
 *
 * Each network layer has unique integer id and unique string name inside its network.
 * LayerId can store either layer name or layer id.
 *
 * This class supports reference counting of its instances, i. e. copies point to the same instance.
 *
 * Member of `Dnn`
 */
CV_EXPORTS @interface Net : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::dnn::Net> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::dnn::Net>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::dnn::Net>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::dnn::Net::Net()
//
- (instancetype)init;


//
//  AsyncArray cv::dnn::Net::forwardAsync(String outputName = String())
//
    // Return type 'AsyncArray' is not supported, skipping the function


//
//  Mat cv::dnn::Net::forward(String outputName = String())
//
/**
 * Runs forward pass to compute output of layer with name @p outputName.
 * @param outputName name for layer which output is needed to get
 * @return blob for first output of specified layer.
 * By default runs forward pass for the whole network.
 */
- (Mat*)forward:(NSString*)outputName NS_SWIFT_NAME(forward(outputName:));

/**
 * Runs forward pass to compute output of layer with name @p outputName.
 * @return blob for first output of specified layer.
 * By default runs forward pass for the whole network.
 */
- (Mat*)forward NS_SWIFT_NAME(forward());


//
//  Mat cv::dnn::Net::getParam(LayerId layer, int numParam = 0)
//
/**
 * Returns parameter blob of the layer.
 * @param layer name or id of the layer.
 * @param numParam index of the layer parameter in the Layer::blobs array.
 * @see `Layer::blobs`
 */
- (Mat*)getParam:(DictValue*)layer numParam:(int)numParam NS_SWIFT_NAME(getParam(layer:numParam:));

/**
 * Returns parameter blob of the layer.
 * @param layer name or id of the layer.
 * @see `Layer::blobs`
 */
- (Mat*)getParam:(DictValue*)layer NS_SWIFT_NAME(getParam(layer:));


//
// static Net cv::dnn::Net::readFromModelOptimizer(String xml, String bin)
//
/**
 * Create a network from Intel's Model Optimizer intermediate representation (IR).
 * @param xml XML configuration file with network's topology.
 * @param bin Binary file with trained weights.
 * Networks imported from Intel's Model Optimizer are launched in Intel's Inference Engine
 * backend.
 */
+ (Net*)readFromModelOptimizer:(NSString*)xml bin:(NSString*)bin NS_SWIFT_NAME(readFromModelOptimizer(xml:bin:));


//
// static Net cv::dnn::Net::readFromModelOptimizer(vector_uchar bufferModelConfig, vector_uchar bufferWeights)
//
/**
 * Create a network from Intel's Model Optimizer in-memory buffers with intermediate representation (IR).
 * @param bufferModelConfig buffer with model's configuration.
 * @param bufferWeights buffer with model's trained weights.
 * @return Net object.
 */
+ (Net*)readFromModelOptimizer:(ByteVector*)bufferModelConfig bufferWeights:(ByteVector*)bufferWeights NS_SWIFT_NAME(readFromModelOptimizer(bufferModelConfig:bufferWeights:));


//
//  Ptr_Layer cv::dnn::Net::getLayer(LayerId layerId)
//
/**
 * Returns pointer to layer with specified id or name which the network use.
 */
- (Layer*)getLayer:(DictValue*)layerId NS_SWIFT_NAME(getLayer(layerId:));


//
//  String cv::dnn::Net::dump()
//
/**
 * Dump net to String
 * @return String with structure, hyperparameters, backend, target and fusion
 * Call method after setInput(). To see correct backend, target and fusion run after forward().
 */
- (NSString*)dump NS_SWIFT_NAME(dump());


//
//  bool cv::dnn::Net::empty()
//
/**
 * Returns true if there are no layers in the network.
 */
- (BOOL)empty NS_SWIFT_NAME(empty());


//
//  int cv::dnn::Net::getLayerId(String layer)
//
/**
 * Converts string name of the layer to the integer identifier.
 * @return id of the layer, or -1 if the layer wasn't found.
 */
- (int)getLayerId:(NSString*)layer NS_SWIFT_NAME(getLayerId(layer:));


//
//  int cv::dnn::Net::getLayersCount(String layerType)
//
/**
 * Returns count of layers of specified type.
 * @param layerType type.
 * @return count of layers
 */
- (int)getLayersCount:(NSString*)layerType NS_SWIFT_NAME(getLayersCount(layerType:));


//
//  int64 cv::dnn::Net::getFLOPS(MatShape netInputShape)
//
- (long)getFLOPSWithNetInputShape:(IntVector*)netInputShape NS_SWIFT_NAME(getFLOPS(netInputShape:));


//
//  int64 cv::dnn::Net::getFLOPS(int layerId, MatShape netInputShape)
//
- (long)getFLOPSWithLayerId:(int)layerId netInputShape:(IntVector*)netInputShape NS_SWIFT_NAME(getFLOPS(layerId:netInputShape:));


//
//  int64 cv::dnn::Net::getFLOPS(int layerId, vector_MatShape netInputShapes)
//
- (long)getFLOPSWithLayerId:(int)layerId netInputShapes:(NSArray<IntVector*>*)netInputShapes NS_SWIFT_NAME(getFLOPS(layerId:netInputShapes:));


//
//  int64 cv::dnn::Net::getFLOPS(vector_MatShape netInputShapes)
//
/**
 * Computes FLOP for whole loaded model with specified input shapes.
 * @param netInputShapes vector of shapes for all net inputs.
 * @return computed FLOP.
 */
- (long)getFLOPSWithNetInputShapes:(NSArray<IntVector*>*)netInputShapes NS_SWIFT_NAME(getFLOPS(netInputShapes:));


//
//  int64 cv::dnn::Net::getPerfProfile(vector_double& timings)
//
/**
 * Returns overall time for inference and timings (in ticks) for layers.
 * Indexes in returned vector correspond to layers ids. Some layers can be fused with others,
 * in this case zero ticks count will be return for that skipped layers.
 * @param timings vector for tick timings for all layers.
 * @return overall ticks for model inference.
 */
- (long)getPerfProfile:(DoubleVector*)timings NS_SWIFT_NAME(getPerfProfile(timings:));


//
//  vector_String cv::dnn::Net::getLayerNames()
//
- (NSArray<NSString*>*)getLayerNames NS_SWIFT_NAME(getLayerNames());


//
//  vector_String cv::dnn::Net::getUnconnectedOutLayersNames()
//
/**
 * Returns names of layers with unconnected outputs.
 */
- (NSArray<NSString*>*)getUnconnectedOutLayersNames NS_SWIFT_NAME(getUnconnectedOutLayersNames());


//
//  vector_int cv::dnn::Net::getUnconnectedOutLayers()
//
/**
 * Returns indexes of layers with unconnected outputs.
 */
- (IntVector*)getUnconnectedOutLayers NS_SWIFT_NAME(getUnconnectedOutLayers());


//
//  void cv::dnn::Net::connect(String outPin, String inpPin)
//
/**
 * Connects output of the first layer to input of the second layer.
 * @param outPin descriptor of the first layer output.
 * @param inpPin descriptor of the second layer input.
 *
 * Descriptors have the following template <DFN>&lt;layer_name&gt;[.input_number]</DFN>:
 * - the first part of the template <DFN>layer_name</DFN> is string name of the added layer.
 * If this part is empty then the network input pseudo layer will be used;
 * - the second optional part of the template <DFN>input_number</DFN>
 * is either number of the layer input, either label one.
 * If this part is omitted then the first layer input will be used.
 *
 * @see `setNetInputs()`, `Layer::inputNameToIndex()`, `Layer::outputNameToIndex()`
 */
- (void)connect:(NSString*)outPin inpPin:(NSString*)inpPin NS_SWIFT_NAME(connect(outPin:inpPin:));


//
//  void cv::dnn::Net::dumpToFile(String path)
//
/**
 * Dump net structure, hyperparameters, backend, target and fusion to dot file
 * @param path   path to output file with .dot extension
 * @see `dump()`
 */
- (void)dumpToFile:(NSString*)path NS_SWIFT_NAME(dumpToFile(path:));


//
//  void cv::dnn::Net::enableFusion(bool fusion)
//
/**
 * Enables or disables layer fusion in the network.
 * @param fusion true to enable the fusion, false to disable. The fusion is enabled by default.
 */
- (void)enableFusion:(BOOL)fusion NS_SWIFT_NAME(enableFusion(fusion:));


//
//  void cv::dnn::Net::forward(vector_Mat& outputBlobs, String outputName = String())
//
/**
 * Runs forward pass to compute output of layer with name @p outputName.
 * @param outputBlobs contains all output blobs for specified layer.
 * @param outputName name for layer which output is needed to get
 * If @p outputName is empty, runs forward pass for the whole network.
 */
- (void)forwardOutputBlobs:(NSMutableArray<Mat*>*)outputBlobs outputName:(NSString*)outputName NS_SWIFT_NAME(forward(outputBlobs:outputName:));

/**
 * Runs forward pass to compute output of layer with name @p outputName.
 * @param outputBlobs contains all output blobs for specified layer.
 * If @p outputName is empty, runs forward pass for the whole network.
 */
- (void)forwardOutputBlobs:(NSMutableArray<Mat*>*)outputBlobs NS_SWIFT_NAME(forward(outputBlobs:));


//
//  void cv::dnn::Net::forward(vector_Mat& outputBlobs, vector_String outBlobNames)
//
/**
 * Runs forward pass to compute outputs of layers listed in @p outBlobNames.
 * @param outputBlobs contains blobs for first outputs of specified layers.
 * @param outBlobNames names for layers which outputs are needed to get
 */
- (void)forwardOutputBlobs:(NSMutableArray<Mat*>*)outputBlobs outBlobNames:(NSArray<NSString*>*)outBlobNames NS_SWIFT_NAME(forward(outputBlobs:outBlobNames:));


//
//  void cv::dnn::Net::forward(vector_vector_Mat& outputBlobs, vector_String outBlobNames)
//
/**
 * Runs forward pass to compute outputs of layers listed in @p outBlobNames.
 * @param outputBlobs contains all output blobs for each layer specified in @p outBlobNames.
 * @param outBlobNames names for layers which outputs are needed to get
 */
- (void)forwardAndRetrieve:(NSMutableArray<NSMutableArray<Mat*>*>*)outputBlobs outBlobNames:(NSArray<NSString*>*)outBlobNames NS_SWIFT_NAME(forward(outputBlobs:outBlobNames:));


//
//  void cv::dnn::Net::getLayerTypes(vector_String& layersTypes)
//
/**
 * Returns list of types for layer used in model.
 * @param layersTypes output parameter for returning types.
 */
- (void)getLayerTypes:(NSMutableArray<NSString*>*)layersTypes NS_SWIFT_NAME(getLayerTypes(layersTypes:));


//
//  void cv::dnn::Net::getLayersShapes(MatShape netInputShape, vector_int& layersIds, vector_vector_MatShape& inLayersShapes, vector_vector_MatShape& outLayersShapes)
//
- (void)getLayersShapesWithNetInputShape:(IntVector*)netInputShape layersIds:(IntVector*)layersIds inLayersShapes:(NSMutableArray<NSMutableArray<IntVector*>*>*)inLayersShapes outLayersShapes:(NSMutableArray<NSMutableArray<IntVector*>*>*)outLayersShapes NS_SWIFT_NAME(getLayersShapes(netInputShape:layersIds:inLayersShapes:outLayersShapes:));


//
//  void cv::dnn::Net::getLayersShapes(vector_MatShape netInputShapes, vector_int& layersIds, vector_vector_MatShape& inLayersShapes, vector_vector_MatShape& outLayersShapes)
//
/**
 * Returns input and output shapes for all layers in loaded model;
 * preliminary inferencing isn't necessary.
 * @param netInputShapes shapes for all input blobs in net input layer.
 * @param layersIds output parameter for layer IDs.
 * @param inLayersShapes output parameter for input layers shapes;
 * order is the same as in layersIds
 * @param outLayersShapes output parameter for output layers shapes;
 * order is the same as in layersIds
 */
- (void)getLayersShapesWithNetInputShapes:(NSArray<IntVector*>*)netInputShapes layersIds:(IntVector*)layersIds inLayersShapes:(NSMutableArray<NSMutableArray<IntVector*>*>*)inLayersShapes outLayersShapes:(NSMutableArray<NSMutableArray<IntVector*>*>*)outLayersShapes NS_SWIFT_NAME(getLayersShapes(netInputShapes:layersIds:inLayersShapes:outLayersShapes:));


//
//  void cv::dnn::Net::getMemoryConsumption(MatShape netInputShape, size_t& weights, size_t& blobs)
//
- (void)getMemoryConsumption:(IntVector*)netInputShape weights:(size_t)weights blobs:(size_t)blobs NS_SWIFT_NAME(getMemoryConsumption(netInputShape:weights:blobs:));


//
//  void cv::dnn::Net::getMemoryConsumption(int layerId, MatShape netInputShape, size_t& weights, size_t& blobs)
//
- (void)getMemoryConsumption:(int)layerId netInputShape:(IntVector*)netInputShape weights:(size_t)weights blobs:(size_t)blobs NS_SWIFT_NAME(getMemoryConsumption(layerId:netInputShape:weights:blobs:));


//
//  void cv::dnn::Net::getMemoryConsumption(int layerId, vector_MatShape netInputShapes, size_t& weights, size_t& blobs)
//
- (void)getMemoryConsumption:(int)layerId netInputShapes:(NSArray<IntVector*>*)netInputShapes weights:(size_t)weights blobs:(size_t)blobs NS_SWIFT_NAME(getMemoryConsumption(layerId:netInputShapes:weights:blobs:));


//
//  void cv::dnn::Net::setHalideScheduler(String scheduler)
//
/**
 * Compile Halide layers.
 * @param scheduler Path to YAML file with scheduling directives.
 * @see `-setPreferableBackend:`
 *
 * Schedule layers that support Halide backend. Then compile them for
 * specific target. For layers that not represented in scheduling file
 * or if no manual scheduling used at all, automatic scheduling will be applied.
 */
- (void)setHalideScheduler:(NSString*)scheduler NS_SWIFT_NAME(setHalideScheduler(scheduler:));


//
//  void cv::dnn::Net::setInput(Mat blob, String name = "", double scalefactor = 1.0, Scalar mean = Scalar())
//
/**
 * Sets the new input value for the network
 * @param blob        A new blob. Should have CV_32F or CV_8U depth.
 * @param name        A name of input layer.
 * @param scalefactor An optional normalization scale.
 * @param mean        An optional mean subtraction values.
 * @see `connect(String`, `String) to know format of the descriptor.`
 *
 * If scale or mean values are specified, a final input blob is computed
 * as:
 * `$$input(n,c,h,w) = scalefactor \times (blob(n,c,h,w) - mean_c)$$`
 */
- (void)setInput:(Mat*)blob name:(NSString*)name scalefactor:(double)scalefactor mean:(Scalar*)mean NS_SWIFT_NAME(setInput(blob:name:scalefactor:mean:));

/**
 * Sets the new input value for the network
 * @param blob        A new blob. Should have CV_32F or CV_8U depth.
 * @param name        A name of input layer.
 * @param scalefactor An optional normalization scale.
 * @see `connect(String`, `String) to know format of the descriptor.`
 *
 * If scale or mean values are specified, a final input blob is computed
 * as:
 * `$$input(n,c,h,w) = scalefactor \times (blob(n,c,h,w) - mean_c)$$`
 */
- (void)setInput:(Mat*)blob name:(NSString*)name scalefactor:(double)scalefactor NS_SWIFT_NAME(setInput(blob:name:scalefactor:));

/**
 * Sets the new input value for the network
 * @param blob        A new blob. Should have CV_32F or CV_8U depth.
 * @param name        A name of input layer.
 * @see `connect(String`, `String) to know format of the descriptor.`
 *
 * If scale or mean values are specified, a final input blob is computed
 * as:
 * `$$input(n,c,h,w) = scalefactor \times (blob(n,c,h,w) - mean_c)$$`
 */
- (void)setInput:(Mat*)blob name:(NSString*)name NS_SWIFT_NAME(setInput(blob:name:));

/**
 * Sets the new input value for the network
 * @param blob        A new blob. Should have CV_32F or CV_8U depth.
 * @see `connect(String`, `String) to know format of the descriptor.`
 *
 * If scale or mean values are specified, a final input blob is computed
 * as:
 * `$$input(n,c,h,w) = scalefactor \times (blob(n,c,h,w) - mean_c)$$`
 */
- (void)setInput:(Mat*)blob NS_SWIFT_NAME(setInput(blob:));


//
//  void cv::dnn::Net::setInputShape(String inputName, MatShape shape)
//
/**
 * Specify shape of network input.
 */
- (void)setInputShape:(NSString*)inputName shape:(IntVector*)shape NS_SWIFT_NAME(setInputShape(inputName:shape:));


//
//  void cv::dnn::Net::setInputsNames(vector_String inputBlobNames)
//
/**
 * Sets outputs names of the network input pseudo layer.
 *
 * Each net always has special own the network input pseudo layer with id=0.
 * This layer stores the user blobs only and don't make any computations.
 * In fact, this layer provides the only way to pass user data into the network.
 * As any other layer, this layer can label its outputs and this function provides an easy way to do this.
 */
- (void)setInputsNames:(NSArray<NSString*>*)inputBlobNames NS_SWIFT_NAME(setInputsNames(inputBlobNames:));


//
//  void cv::dnn::Net::setParam(LayerId layer, int numParam, Mat blob)
//
/**
 * Sets the new value for the learned param of the layer.
 * @param layer name or id of the layer.
 * @param numParam index of the layer parameter in the Layer::blobs array.
 * @param blob the new value.
 * @see `Layer::blobs`
 * @note If shape of the new blob differs from the previous shape,
 * then the following forward pass may fail.
 */
- (void)setParam:(DictValue*)layer numParam:(int)numParam blob:(Mat*)blob NS_SWIFT_NAME(setParam(layer:numParam:blob:));


//
//  void cv::dnn::Net::setPreferableBackend(int backendId)
//
/**
 * Ask network to use specific computation backend where it supported.
 * @param backendId backend identifier.
 * @see `Backend`
 *
 * If OpenCV is compiled with Intel's Inference Engine library, DNN_BACKEND_DEFAULT
 * means DNN_BACKEND_INFERENCE_ENGINE. Otherwise it equals to DNN_BACKEND_OPENCV.
 */
- (void)setPreferableBackend:(int)backendId NS_SWIFT_NAME(setPreferableBackend(backendId:));


//
//  void cv::dnn::Net::setPreferableTarget(int targetId)
//
/**
 * Ask network to make computations on specific target device.
 * @param targetId target identifier.
 * @see `Target`
 *
 * List of supported combinations backend / target:
 * |                        | DNN_BACKEND_OPENCV | DNN_BACKEND_INFERENCE_ENGINE | DNN_BACKEND_HALIDE |  DNN_BACKEND_CUDA |
 * |------------------------|--------------------|------------------------------|--------------------|-------------------|
 * | DNN_TARGET_CPU         |                  + |                            + |                  + |                   |
 * | DNN_TARGET_OPENCL      |                  + |                            + |                  + |                   |
 * | DNN_TARGET_OPENCL_FP16 |                  + |                            + |                    |                   |
 * | DNN_TARGET_MYRIAD      |                    |                            + |                    |                   |
 * | DNN_TARGET_FPGA        |                    |                            + |                    |                   |
 * | DNN_TARGET_CUDA        |                    |                              |                    |                 + |
 * | DNN_TARGET_CUDA_FP16   |                    |                              |                    |                 + |
 */
- (void)setPreferableTarget:(int)targetId NS_SWIFT_NAME(setPreferableTarget(targetId:));



@end

NS_ASSUME_NONNULL_END



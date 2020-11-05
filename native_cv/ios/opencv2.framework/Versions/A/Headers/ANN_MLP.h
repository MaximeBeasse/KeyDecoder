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
#import "StatModel.h"

@class Mat;
@class TermCriteria;


// C++: enum TrainingMethods
typedef NS_ENUM(int, TrainingMethods) {
    BACKPROP = 0,
    RPROP = 1,
    ANNEAL = 2
};


// C++: enum TrainFlags
typedef NS_ENUM(int, TrainFlags) {
    UPDATE_WEIGHTS = 1,
    NO_INPUT_SCALE = 2,
    NO_OUTPUT_SCALE = 4
};


// C++: enum ActivationFunctions
typedef NS_ENUM(int, ActivationFunctions) {
    IDENTITY = 0,
    SIGMOID_SYM = 1,
    GAUSSIAN = 2,
    RELU = 3,
    LEAKYRELU = 4
};



NS_ASSUME_NONNULL_BEGIN

// C++: class ANN_MLP
/**
 * Artificial Neural Networks - Multi-Layer Perceptrons.
 *
 * Unlike many other models in ML that are constructed and trained at once, in the MLP model these
 * steps are separated. First, a network with the specified topology is created using the non-default
 * constructor or the method ANN_MLP::create. All the weights are set to zeros. Then, the network is
 * trained using a set of input and output vectors. The training procedure can be repeated more than
 * once, that is, the weights can be adjusted based on the new training data.
 *
 * Additional flags for StatModel::train are available: ANN_MLP::TrainFlags.
 *
 * @see REF: ml_intro_ann
 *
 * Member of `Ml`
 */
CV_EXPORTS @interface ANN_MLP : StatModel


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::ml::ANN_MLP> nativePtrANN_MLP;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::ml::ANN_MLP>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::ml::ANN_MLP>)nativePtr;
#endif


#pragma mark - Methods


//
//  Mat cv::ml::ANN_MLP::getLayerSizes()
//
/**
 * Integer vector specifying the number of neurons in each layer including the input and output layers.
 *     The very first element specifies the number of elements in the input layer.
 *     The last element - number of elements in the output layer.
 * @see `-setLayerSizes:`
 */
- (Mat*)getLayerSizes NS_SWIFT_NAME(getLayerSizes());


//
//  Mat cv::ml::ANN_MLP::getWeights(int layerIdx)
//
- (Mat*)getWeights:(int)layerIdx NS_SWIFT_NAME(getWeights(layerIdx:));


//
// static Ptr_ANN_MLP cv::ml::ANN_MLP::create()
//
/**
 * Creates empty model
 *
 *     Use StatModel::train to train the model, Algorithm::load\<ANN_MLP\>(filename) to load the pre-trained model.
 *     Note that the train method has optional flags: ANN_MLP::TrainFlags.
 */
+ (ANN_MLP*)create NS_SWIFT_NAME(create());


//
// static Ptr_ANN_MLP cv::ml::ANN_MLP::load(String filepath)
//
/**
 * Loads and creates a serialized ANN from a file
 *
 * Use ANN::save to serialize and store an ANN to disk.
 * Load the ANN from this file again, by calling this function with the path to the file.
 *
 * @param filepath path to serialized ANN
 */
+ (ANN_MLP*)load:(NSString*)filepath NS_SWIFT_NAME(load(filepath:));


//
//  TermCriteria cv::ml::ANN_MLP::getTermCriteria()
//
/**
 * @see `-setTermCriteria:`
 */
- (TermCriteria*)getTermCriteria NS_SWIFT_NAME(getTermCriteria());


//
//  double cv::ml::ANN_MLP::getAnnealCoolingRatio()
//
/**
 * @see `-setAnnealCoolingRatio:`
 */
- (double)getAnnealCoolingRatio NS_SWIFT_NAME(getAnnealCoolingRatio());


//
//  double cv::ml::ANN_MLP::getAnnealFinalT()
//
/**
 * @see `-setAnnealFinalT:`
 */
- (double)getAnnealFinalT NS_SWIFT_NAME(getAnnealFinalT());


//
//  double cv::ml::ANN_MLP::getAnnealInitialT()
//
/**
 * @see `-setAnnealInitialT:`
 */
- (double)getAnnealInitialT NS_SWIFT_NAME(getAnnealInitialT());


//
//  double cv::ml::ANN_MLP::getBackpropMomentumScale()
//
/**
 * @see `-setBackpropMomentumScale:`
 */
- (double)getBackpropMomentumScale NS_SWIFT_NAME(getBackpropMomentumScale());


//
//  double cv::ml::ANN_MLP::getBackpropWeightScale()
//
/**
 * @see `-setBackpropWeightScale:`
 */
- (double)getBackpropWeightScale NS_SWIFT_NAME(getBackpropWeightScale());


//
//  double cv::ml::ANN_MLP::getRpropDW0()
//
/**
 * @see `-setRpropDW0:`
 */
- (double)getRpropDW0 NS_SWIFT_NAME(getRpropDW0());


//
//  double cv::ml::ANN_MLP::getRpropDWMax()
//
/**
 * @see `-setRpropDWMax:`
 */
- (double)getRpropDWMax NS_SWIFT_NAME(getRpropDWMax());


//
//  double cv::ml::ANN_MLP::getRpropDWMin()
//
/**
 * @see `-setRpropDWMin:`
 */
- (double)getRpropDWMin NS_SWIFT_NAME(getRpropDWMin());


//
//  double cv::ml::ANN_MLP::getRpropDWMinus()
//
/**
 * @see `-setRpropDWMinus:`
 */
- (double)getRpropDWMinus NS_SWIFT_NAME(getRpropDWMinus());


//
//  double cv::ml::ANN_MLP::getRpropDWPlus()
//
/**
 * @see `-setRpropDWPlus:`
 */
- (double)getRpropDWPlus NS_SWIFT_NAME(getRpropDWPlus());


//
//  int cv::ml::ANN_MLP::getAnnealItePerStep()
//
/**
 * @see `-setAnnealItePerStep:`
 */
- (int)getAnnealItePerStep NS_SWIFT_NAME(getAnnealItePerStep());


//
//  int cv::ml::ANN_MLP::getTrainMethod()
//
/**
 * Returns current training method
 */
- (int)getTrainMethod NS_SWIFT_NAME(getTrainMethod());


//
//  void cv::ml::ANN_MLP::setActivationFunction(int type, double param1 = 0, double param2 = 0)
//
/**
 * Initialize the activation function for each neuron.
 *     Currently the default and the only fully supported activation function is ANN_MLP::SIGMOID_SYM.
 * @param type The type of activation function. See ANN_MLP::ActivationFunctions.
 * @param param1 The first parameter of the activation function, `$$\alpha$$`. Default value is 0.
 * @param param2 The second parameter of the activation function, `$$\beta$$`. Default value is 0.
 */
- (void)setActivationFunction:(int)type param1:(double)param1 param2:(double)param2 NS_SWIFT_NAME(setActivationFunction(type:param1:param2:));

/**
 * Initialize the activation function for each neuron.
 *     Currently the default and the only fully supported activation function is ANN_MLP::SIGMOID_SYM.
 * @param type The type of activation function. See ANN_MLP::ActivationFunctions.
 * @param param1 The first parameter of the activation function, `$$\alpha$$`. Default value is 0.
 */
- (void)setActivationFunction:(int)type param1:(double)param1 NS_SWIFT_NAME(setActivationFunction(type:param1:));

/**
 * Initialize the activation function for each neuron.
 *     Currently the default and the only fully supported activation function is ANN_MLP::SIGMOID_SYM.
 * @param type The type of activation function. See ANN_MLP::ActivationFunctions.
 */
- (void)setActivationFunction:(int)type NS_SWIFT_NAME(setActivationFunction(type:));


//
//  void cv::ml::ANN_MLP::setAnnealCoolingRatio(double val)
//
/**
 *  getAnnealCoolingRatio @see `-getAnnealCoolingRatio:`
 */
- (void)setAnnealCoolingRatio:(double)val NS_SWIFT_NAME(setAnnealCoolingRatio(val:));


//
//  void cv::ml::ANN_MLP::setAnnealFinalT(double val)
//
/**
 *  getAnnealFinalT @see `-getAnnealFinalT:`
 */
- (void)setAnnealFinalT:(double)val NS_SWIFT_NAME(setAnnealFinalT(val:));


//
//  void cv::ml::ANN_MLP::setAnnealInitialT(double val)
//
/**
 *  getAnnealInitialT @see `-getAnnealInitialT:`
 */
- (void)setAnnealInitialT:(double)val NS_SWIFT_NAME(setAnnealInitialT(val:));


//
//  void cv::ml::ANN_MLP::setAnnealItePerStep(int val)
//
/**
 *  getAnnealItePerStep @see `-getAnnealItePerStep:`
 */
- (void)setAnnealItePerStep:(int)val NS_SWIFT_NAME(setAnnealItePerStep(val:));


//
//  void cv::ml::ANN_MLP::setBackpropMomentumScale(double val)
//
/**
 *  getBackpropMomentumScale @see `-getBackpropMomentumScale:`
 */
- (void)setBackpropMomentumScale:(double)val NS_SWIFT_NAME(setBackpropMomentumScale(val:));


//
//  void cv::ml::ANN_MLP::setBackpropWeightScale(double val)
//
/**
 *  getBackpropWeightScale @see `-getBackpropWeightScale:`
 */
- (void)setBackpropWeightScale:(double)val NS_SWIFT_NAME(setBackpropWeightScale(val:));


//
//  void cv::ml::ANN_MLP::setLayerSizes(Mat _layer_sizes)
//
/**
 * Integer vector specifying the number of neurons in each layer including the input and output layers.
 *     The very first element specifies the number of elements in the input layer.
 *     The last element - number of elements in the output layer. Default value is empty Mat.
 * @see `-getLayerSizes:`
 */
- (void)setLayerSizes:(Mat*)_layer_sizes NS_SWIFT_NAME(setLayerSizes(_layer_sizes:));


//
//  void cv::ml::ANN_MLP::setRpropDW0(double val)
//
/**
 *  getRpropDW0 @see `-getRpropDW0:`
 */
- (void)setRpropDW0:(double)val NS_SWIFT_NAME(setRpropDW0(val:));


//
//  void cv::ml::ANN_MLP::setRpropDWMax(double val)
//
/**
 *  getRpropDWMax @see `-getRpropDWMax:`
 */
- (void)setRpropDWMax:(double)val NS_SWIFT_NAME(setRpropDWMax(val:));


//
//  void cv::ml::ANN_MLP::setRpropDWMin(double val)
//
/**
 *  getRpropDWMin @see `-getRpropDWMin:`
 */
- (void)setRpropDWMin:(double)val NS_SWIFT_NAME(setRpropDWMin(val:));


//
//  void cv::ml::ANN_MLP::setRpropDWMinus(double val)
//
/**
 *  getRpropDWMinus @see `-getRpropDWMinus:`
 */
- (void)setRpropDWMinus:(double)val NS_SWIFT_NAME(setRpropDWMinus(val:));


//
//  void cv::ml::ANN_MLP::setRpropDWPlus(double val)
//
/**
 *  getRpropDWPlus @see `-getRpropDWPlus:`
 */
- (void)setRpropDWPlus:(double)val NS_SWIFT_NAME(setRpropDWPlus(val:));


//
//  void cv::ml::ANN_MLP::setTermCriteria(TermCriteria val)
//
/**
 *  getTermCriteria @see `-getTermCriteria:`
 */
- (void)setTermCriteria:(TermCriteria*)val NS_SWIFT_NAME(setTermCriteria(val:));


//
//  void cv::ml::ANN_MLP::setTrainMethod(int method, double param1 = 0, double param2 = 0)
//
/**
 * Sets training method and common parameters.
 * @param method Default value is ANN_MLP::RPROP. See ANN_MLP::TrainingMethods.
 * @param param1 passed to setRpropDW0 for ANN_MLP::RPROP and to setBackpropWeightScale for ANN_MLP::BACKPROP and to initialT for ANN_MLP::ANNEAL.
 * @param param2 passed to setRpropDWMin for ANN_MLP::RPROP and to setBackpropMomentumScale for ANN_MLP::BACKPROP and to finalT for ANN_MLP::ANNEAL.
 */
- (void)setTrainMethod:(int)method param1:(double)param1 param2:(double)param2 NS_SWIFT_NAME(setTrainMethod(method:param1:param2:));

/**
 * Sets training method and common parameters.
 * @param method Default value is ANN_MLP::RPROP. See ANN_MLP::TrainingMethods.
 * @param param1 passed to setRpropDW0 for ANN_MLP::RPROP and to setBackpropWeightScale for ANN_MLP::BACKPROP and to initialT for ANN_MLP::ANNEAL.
 */
- (void)setTrainMethod:(int)method param1:(double)param1 NS_SWIFT_NAME(setTrainMethod(method:param1:));

/**
 * Sets training method and common parameters.
 * @param method Default value is ANN_MLP::RPROP. See ANN_MLP::TrainingMethods.
 */
- (void)setTrainMethod:(int)method NS_SWIFT_NAME(setTrainMethod(method:));



@end

NS_ASSUME_NONNULL_END



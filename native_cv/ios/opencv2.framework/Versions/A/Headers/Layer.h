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
#import "Algorithm.h"

@class Mat;



NS_ASSUME_NONNULL_BEGIN

// C++: class Layer
/**
 * This interface class allows to build new Layers - are building blocks of networks.
 *
 * Each class, derived from Layer, must implement allocate() methods to declare own outputs and forward() to compute outputs.
 * Also before using the new layer into networks you must register your layer by using one of REF: dnnLayerFactory "LayerFactory" macros.
 *
 * Member of `Dnn`
 */
CV_EXPORTS @interface Layer : Algorithm


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::dnn::Layer> nativePtrLayer;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::dnn::Layer>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::dnn::Layer>)nativePtr;
#endif


#pragma mark - Methods


//
//  int cv::dnn::Layer::outputNameToIndex(String outputName)
//
/**
 * Returns index of output blob in output array.
 * @see `inputNameToIndex()`
 */
- (int)outputNameToIndex:(NSString*)outputName NS_SWIFT_NAME(outputNameToIndex(outputName:));


//
//  void cv::dnn::Layer::finalize(vector_Mat inputs, vector_Mat& outputs)
//
/**
 * Computes and sets internal parameters according to inputs, outputs and blobs.
 * @param outputs vector of already allocated output blobs
 *
 * If this method is called after network has allocated all memory for input and output blobs
 * and before inferencing.
 */
- (void)finalize:(NSArray<Mat*>*)inputs outputs:(NSMutableArray<Mat*>*)outputs NS_SWIFT_NAME(finalize(inputs:outputs:));


//
//  void cv::dnn::Layer::run(vector_Mat inputs, vector_Mat& outputs, vector_Mat& internals)
//
/**
 * Allocates layer and computes output.
 * @deprecated This method will be removed in the future release.
 */
- (void)run:(NSArray<Mat*>*)inputs outputs:(NSMutableArray<Mat*>*)outputs internals:(NSMutableArray<Mat*>*)internals NS_SWIFT_NAME(run(inputs:outputs:internals:)) DEPRECATED_ATTRIBUTE;


    //
    // C++: vector_Mat cv::dnn::Layer::blobs
    //

@property Mat* blobs;

    //
    // C++: String cv::dnn::Layer::name
    //

@property (readonly) NSString* name;

    //
    // C++: String cv::dnn::Layer::type
    //

@property (readonly) NSString* type;

    //
    // C++: int cv::dnn::Layer::preferableTarget
    //

@property (readonly) int preferableTarget;


@end

NS_ASSUME_NONNULL_END



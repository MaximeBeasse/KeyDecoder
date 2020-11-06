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
#import "Feature2D.h"

@class Mat;
@class Point2i;
@class Rect2i;



NS_ASSUME_NONNULL_BEGIN

// C++: class MSER
/**
 * Maximally stable extremal region extractor
 *
 * The class encapsulates all the parameters of the %MSER extraction algorithm (see [wiki
 * article](http://en.wikipedia.org/wiki/Maximally_stable_extremal_regions)).
 *
 * - there are two different implementation of %MSER: one for grey image, one for color image
 *
 * - the grey image algorithm is taken from: CITE: nister2008linear ;  the paper claims to be faster
 * than union-find method; it actually get 1.5~2m/s on my centrino L7200 1.2GHz laptop.
 *
 * - the color image algorithm is taken from: CITE: forssen2007maximally ; it should be much slower
 * than grey image method ( 3~4 times ); the chi_table.h file is taken directly from paper's source
 * code which is distributed under GPL.
 *
 * - (Python) A complete example showing the use of the %MSER detector can be found at samples/python/mser.py
 *
 * Member of `Features2d`
 */
CV_EXPORTS @interface MSER : Feature2D


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::MSER> nativePtrMSER;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::MSER>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::MSER>)nativePtr;
#endif


#pragma mark - Methods


//
// static Ptr_MSER cv::MSER::create(int _delta = 5, int _min_area = 60, int _max_area = 14400, double _max_variation = 0.25, double _min_diversity = .2, int _max_evolution = 200, double _area_threshold = 1.01, double _min_margin = 0.003, int _edge_blur_size = 5)
//
/**
 * Full constructor for %MSER detector
 *
 * @param _delta it compares `$$(size_{i}-size_{i-delta})/size_{i-delta}$$`
 * @param _min_area prune the area which smaller than minArea
 * @param _max_area prune the area which bigger than maxArea
 * @param _max_variation prune the area have similar size to its children
 * @param _min_diversity for color image, trace back to cut off mser with diversity less than min_diversity
 * @param _max_evolution  for color image, the evolution steps
 * @param _area_threshold for color image, the area threshold to cause re-initialize
 * @param _min_margin for color image, ignore too small margin
 * @param _edge_blur_size for color image, the aperture size for edge blur
 */
+ (MSER*)create:(int)_delta _min_area:(int)_min_area _max_area:(int)_max_area _max_variation:(double)_max_variation _min_diversity:(double)_min_diversity _max_evolution:(int)_max_evolution _area_threshold:(double)_area_threshold _min_margin:(double)_min_margin _edge_blur_size:(int)_edge_blur_size NS_SWIFT_NAME(create(_delta:_min_area:_max_area:_max_variation:_min_diversity:_max_evolution:_area_threshold:_min_margin:_edge_blur_size:));

/**
 * Full constructor for %MSER detector
 *
 * @param _delta it compares `$$(size_{i}-size_{i-delta})/size_{i-delta}$$`
 * @param _min_area prune the area which smaller than minArea
 * @param _max_area prune the area which bigger than maxArea
 * @param _max_variation prune the area have similar size to its children
 * @param _min_diversity for color image, trace back to cut off mser with diversity less than min_diversity
 * @param _max_evolution  for color image, the evolution steps
 * @param _area_threshold for color image, the area threshold to cause re-initialize
 * @param _min_margin for color image, ignore too small margin
 */
+ (MSER*)create:(int)_delta _min_area:(int)_min_area _max_area:(int)_max_area _max_variation:(double)_max_variation _min_diversity:(double)_min_diversity _max_evolution:(int)_max_evolution _area_threshold:(double)_area_threshold _min_margin:(double)_min_margin NS_SWIFT_NAME(create(_delta:_min_area:_max_area:_max_variation:_min_diversity:_max_evolution:_area_threshold:_min_margin:));

/**
 * Full constructor for %MSER detector
 *
 * @param _delta it compares `$$(size_{i}-size_{i-delta})/size_{i-delta}$$`
 * @param _min_area prune the area which smaller than minArea
 * @param _max_area prune the area which bigger than maxArea
 * @param _max_variation prune the area have similar size to its children
 * @param _min_diversity for color image, trace back to cut off mser with diversity less than min_diversity
 * @param _max_evolution  for color image, the evolution steps
 * @param _area_threshold for color image, the area threshold to cause re-initialize
 */
+ (MSER*)create:(int)_delta _min_area:(int)_min_area _max_area:(int)_max_area _max_variation:(double)_max_variation _min_diversity:(double)_min_diversity _max_evolution:(int)_max_evolution _area_threshold:(double)_area_threshold NS_SWIFT_NAME(create(_delta:_min_area:_max_area:_max_variation:_min_diversity:_max_evolution:_area_threshold:));

/**
 * Full constructor for %MSER detector
 *
 * @param _delta it compares `$$(size_{i}-size_{i-delta})/size_{i-delta}$$`
 * @param _min_area prune the area which smaller than minArea
 * @param _max_area prune the area which bigger than maxArea
 * @param _max_variation prune the area have similar size to its children
 * @param _min_diversity for color image, trace back to cut off mser with diversity less than min_diversity
 * @param _max_evolution  for color image, the evolution steps
 */
+ (MSER*)create:(int)_delta _min_area:(int)_min_area _max_area:(int)_max_area _max_variation:(double)_max_variation _min_diversity:(double)_min_diversity _max_evolution:(int)_max_evolution NS_SWIFT_NAME(create(_delta:_min_area:_max_area:_max_variation:_min_diversity:_max_evolution:));

/**
 * Full constructor for %MSER detector
 *
 * @param _delta it compares `$$(size_{i}-size_{i-delta})/size_{i-delta}$$`
 * @param _min_area prune the area which smaller than minArea
 * @param _max_area prune the area which bigger than maxArea
 * @param _max_variation prune the area have similar size to its children
 * @param _min_diversity for color image, trace back to cut off mser with diversity less than min_diversity
 */
+ (MSER*)create:(int)_delta _min_area:(int)_min_area _max_area:(int)_max_area _max_variation:(double)_max_variation _min_diversity:(double)_min_diversity NS_SWIFT_NAME(create(_delta:_min_area:_max_area:_max_variation:_min_diversity:));

/**
 * Full constructor for %MSER detector
 *
 * @param _delta it compares `$$(size_{i}-size_{i-delta})/size_{i-delta}$$`
 * @param _min_area prune the area which smaller than minArea
 * @param _max_area prune the area which bigger than maxArea
 * @param _max_variation prune the area have similar size to its children
 */
+ (MSER*)create:(int)_delta _min_area:(int)_min_area _max_area:(int)_max_area _max_variation:(double)_max_variation NS_SWIFT_NAME(create(_delta:_min_area:_max_area:_max_variation:));

/**
 * Full constructor for %MSER detector
 *
 * @param _delta it compares `$$(size_{i}-size_{i-delta})/size_{i-delta}$$`
 * @param _min_area prune the area which smaller than minArea
 * @param _max_area prune the area which bigger than maxArea
 */
+ (MSER*)create:(int)_delta _min_area:(int)_min_area _max_area:(int)_max_area NS_SWIFT_NAME(create(_delta:_min_area:_max_area:));

/**
 * Full constructor for %MSER detector
 *
 * @param _delta it compares `$$(size_{i}-size_{i-delta})/size_{i-delta}$$`
 * @param _min_area prune the area which smaller than minArea
 */
+ (MSER*)create:(int)_delta _min_area:(int)_min_area NS_SWIFT_NAME(create(_delta:_min_area:));

/**
 * Full constructor for %MSER detector
 *
 * @param _delta it compares `$$(size_{i}-size_{i-delta})/size_{i-delta}$$`
 */
+ (MSER*)create:(int)_delta NS_SWIFT_NAME(create(_delta:));

/**
 * Full constructor for %MSER detector
 *
 */
+ (MSER*)create NS_SWIFT_NAME(create());


//
//  String cv::MSER::getDefaultName()
//
- (NSString*)getDefaultName NS_SWIFT_NAME(getDefaultName());


//
//  bool cv::MSER::getPass2Only()
//
- (BOOL)getPass2Only NS_SWIFT_NAME(getPass2Only());


//
//  int cv::MSER::getDelta()
//
- (int)getDelta NS_SWIFT_NAME(getDelta());


//
//  int cv::MSER::getMaxArea()
//
- (int)getMaxArea NS_SWIFT_NAME(getMaxArea());


//
//  int cv::MSER::getMinArea()
//
- (int)getMinArea NS_SWIFT_NAME(getMinArea());


//
//  void cv::MSER::detectRegions(Mat image, vector_vector_Point& msers, vector_Rect& bboxes)
//
/**
 * Detect %MSER regions
 *
 * @param image input image (8UC1, 8UC3 or 8UC4, must be greater or equal than 3x3)
 * @param msers resulting list of point sets
 * @param bboxes resulting bounding boxes
 */
- (void)detectRegions:(Mat*)image msers:(NSMutableArray<NSMutableArray<Point2i*>*>*)msers bboxes:(NSMutableArray<Rect2i*>*)bboxes NS_SWIFT_NAME(detectRegions(image:msers:bboxes:));


//
//  void cv::MSER::setDelta(int delta)
//
- (void)setDelta:(int)delta NS_SWIFT_NAME(setDelta(delta:));


//
//  void cv::MSER::setMaxArea(int maxArea)
//
- (void)setMaxArea:(int)maxArea NS_SWIFT_NAME(setMaxArea(maxArea:));


//
//  void cv::MSER::setMinArea(int minArea)
//
- (void)setMinArea:(int)minArea NS_SWIFT_NAME(setMinArea(minArea:));


//
//  void cv::MSER::setPass2Only(bool f)
//
- (void)setPass2Only:(BOOL)f NS_SWIFT_NAME(setPass2Only(f:));



@end

NS_ASSUME_NONNULL_END



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

@class IntVector;
@class Rect2i;


// C++: enum ObjectStatus
typedef NS_ENUM(int, ObjectStatus) {
    DetectionBasedTracker_DETECTED_NOT_SHOWN_YET = 0,
    DetectionBasedTracker_DETECTED = 1,
    DetectionBasedTracker_DETECTED_TEMPORARY_LOST = 2,
    DetectionBasedTracker_WRONG_OBJECT = 3
};



NS_ASSUME_NONNULL_BEGIN

// C++: class Objdetect
/**
 * The Objdetect module
 *
 * Member classes: `BaseCascadeClassifier`, `CascadeClassifier`, `HOGDescriptor`, `QRCodeDetector`
 *
 * Member enums: `HistogramNormType`, `DescriptorStorageFormat`, `ObjectStatus`
 */
CV_EXPORTS @interface Objdetect : NSObject

#pragma mark - Class Constants


@property (class, readonly) int CASCADE_DO_CANNY_PRUNING NS_SWIFT_NAME(CASCADE_DO_CANNY_PRUNING);
@property (class, readonly) int CASCADE_SCALE_IMAGE NS_SWIFT_NAME(CASCADE_SCALE_IMAGE);
@property (class, readonly) int CASCADE_FIND_BIGGEST_OBJECT NS_SWIFT_NAME(CASCADE_FIND_BIGGEST_OBJECT);
@property (class, readonly) int CASCADE_DO_ROUGH_SEARCH NS_SWIFT_NAME(CASCADE_DO_ROUGH_SEARCH);

#pragma mark - Methods


//
//  void cv::groupRectangles(vector_Rect& rectList, vector_int& weights, int groupThreshold, double eps = 0.2)
//
+ (void)groupRectangles:(NSMutableArray<Rect2i*>*)rectList weights:(IntVector*)weights groupThreshold:(int)groupThreshold eps:(double)eps NS_SWIFT_NAME(groupRectangles(rectList:weights:groupThreshold:eps:));

+ (void)groupRectangles:(NSMutableArray<Rect2i*>*)rectList weights:(IntVector*)weights groupThreshold:(int)groupThreshold NS_SWIFT_NAME(groupRectangles(rectList:weights:groupThreshold:));



@end

NS_ASSUME_NONNULL_END



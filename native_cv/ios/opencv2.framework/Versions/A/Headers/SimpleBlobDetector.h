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





NS_ASSUME_NONNULL_BEGIN

// C++: class SimpleBlobDetector
/**
 * Class for extracting blobs from an image. :
 *
 * The class implements a simple algorithm for extracting blobs from an image:
 *
 * 1.  Convert the source image to binary images by applying thresholding with several thresholds from
 *     minThreshold (inclusive) to maxThreshold (exclusive) with distance thresholdStep between
 *     neighboring thresholds.
 * 2.  Extract connected components from every binary image by findContours and calculate their
 *     centers.
 * 3.  Group centers from several binary images by their coordinates. Close centers form one group that
 *     corresponds to one blob, which is controlled by the minDistBetweenBlobs parameter.
 * 4.  From the groups, estimate final centers of blobs and their radiuses and return as locations and
 *     sizes of keypoints.
 *
 * This class performs several filtrations of returned blobs. You should set filterBy\* to true/false
 * to turn on/off corresponding filtration. Available filtrations:
 *
 * -   **By color**. This filter compares the intensity of a binary image at the center of a blob to
 * blobColor. If they differ, the blob is filtered out. Use blobColor = 0 to extract dark blobs
 * and blobColor = 255 to extract light blobs.
 * -   **By area**. Extracted blobs have an area between minArea (inclusive) and maxArea (exclusive).
 * -   **By circularity**. Extracted blobs have circularity
 * (`$$\frac{4*\pi*Area}{perimeter * perimeter}$$`) between minCircularity (inclusive) and
 * maxCircularity (exclusive).
 * -   **By ratio of the minimum inertia to maximum inertia**. Extracted blobs have this ratio
 * between minInertiaRatio (inclusive) and maxInertiaRatio (exclusive).
 * -   **By convexity**. Extracted blobs have convexity (area / area of blob convex hull) between
 * minConvexity (inclusive) and maxConvexity (exclusive).
 *
 * Default values of parameters are tuned to extract dark circular blobs.
 *
 * Member of `Features2d`
 */
CV_EXPORTS @interface SimpleBlobDetector : Feature2D


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::SimpleBlobDetector> nativePtrSimpleBlobDetector;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::SimpleBlobDetector>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::SimpleBlobDetector>)nativePtr;
#endif


#pragma mark - Methods


//
// static Ptr_SimpleBlobDetector cv::SimpleBlobDetector::create( _hidden_  parameters = cv::SimpleBlobDetector::Params())
//
+ (SimpleBlobDetector*)create NS_SWIFT_NAME(create());


//
//  String cv::SimpleBlobDetector::getDefaultName()
//
- (NSString*)getDefaultName NS_SWIFT_NAME(getDefaultName());



@end

NS_ASSUME_NONNULL_END



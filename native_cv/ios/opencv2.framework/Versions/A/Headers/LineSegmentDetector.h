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
@class Size2i;



NS_ASSUME_NONNULL_BEGIN

// C++: class LineSegmentDetector
/**
 * Line segment detector class
 *
 * following the algorithm described at CITE: Rafael12 .
 *
 * @note Implementation has been removed due original code license conflict
 *
 * Member of `Imgproc`
 */
CV_EXPORTS @interface LineSegmentDetector : Algorithm


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::LineSegmentDetector> nativePtrLineSegmentDetector;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::LineSegmentDetector>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::LineSegmentDetector>)nativePtr;
#endif


#pragma mark - Methods


//
//  int cv::LineSegmentDetector::compareSegments(Size size, Mat lines1, Mat lines2, Mat& _image = Mat())
//
/**
 * Draws two groups of lines in blue and red, counting the non overlapping (mismatching) pixels.
 *
 * @param size The size of the image, where lines1 and lines2 were found.
 * @param lines1 The first group of lines that needs to be drawn. It is visualized in blue color.
 * @param lines2 The second group of lines. They visualized in red color.
 * @param _image Optional image, where the lines will be drawn. The image should be color(3-channel)
 *     in order for lines1 and lines2 to be drawn in the above mentioned colors.
 */
- (int)compareSegments:(Size2i*)size lines1:(Mat*)lines1 lines2:(Mat*)lines2 _image:(Mat*)_image NS_SWIFT_NAME(compareSegments(size:lines1:lines2:_image:));

/**
 * Draws two groups of lines in blue and red, counting the non overlapping (mismatching) pixels.
 *
 * @param size The size of the image, where lines1 and lines2 were found.
 * @param lines1 The first group of lines that needs to be drawn. It is visualized in blue color.
 * @param lines2 The second group of lines. They visualized in red color.
 *     in order for lines1 and lines2 to be drawn in the above mentioned colors.
 */
- (int)compareSegments:(Size2i*)size lines1:(Mat*)lines1 lines2:(Mat*)lines2 NS_SWIFT_NAME(compareSegments(size:lines1:lines2:));


//
//  void cv::LineSegmentDetector::detect(Mat _image, Mat& _lines, Mat& width = Mat(), Mat& prec = Mat(), Mat& nfa = Mat())
//
/**
 * Finds lines in the input image.
 *
 *     This is the output of the default parameters of the algorithm on the above shown image.
 *
 *     ![image](pics/building_lsd.png)
 *
 * @param _image A grayscale (CV_8UC1) input image. If only a roi needs to be selected, use:
 *     `lsd_ptr-\>detect(image(roi), lines, ...); lines += Scalar(roi.x, roi.y, roi.x, roi.y);`
 * @param _lines A vector of Vec4i or Vec4f elements specifying the beginning and ending point of a line. Where
 *     Vec4i/Vec4f is (x1, y1, x2, y2), point 1 is the start, point 2 - end. Returned lines are strictly
 *     oriented depending on the gradient.
 * @param width Vector of widths of the regions, where the lines are found. E.g. Width of line.
 * @param prec Vector of precisions with which the lines are found.
 * @param nfa Vector containing number of false alarms in the line region, with precision of 10%. The
 *     bigger the value, logarithmically better the detection.
 *     - -1 corresponds to 10 mean false alarms
 *     - 0 corresponds to 1 mean false alarm
 *     - 1 corresponds to 0.1 mean false alarms
 *     This vector will be calculated only when the objects type is #LSD_REFINE_ADV.
 */
- (void)detect:(Mat*)_image _lines:(Mat*)_lines width:(Mat*)width prec:(Mat*)prec nfa:(Mat*)nfa NS_SWIFT_NAME(detect(_image:_lines:width:prec:nfa:));

/**
 * Finds lines in the input image.
 *
 *     This is the output of the default parameters of the algorithm on the above shown image.
 *
 *     ![image](pics/building_lsd.png)
 *
 * @param _image A grayscale (CV_8UC1) input image. If only a roi needs to be selected, use:
 *     `lsd_ptr-\>detect(image(roi), lines, ...); lines += Scalar(roi.x, roi.y, roi.x, roi.y);`
 * @param _lines A vector of Vec4i or Vec4f elements specifying the beginning and ending point of a line. Where
 *     Vec4i/Vec4f is (x1, y1, x2, y2), point 1 is the start, point 2 - end. Returned lines are strictly
 *     oriented depending on the gradient.
 * @param width Vector of widths of the regions, where the lines are found. E.g. Width of line.
 * @param prec Vector of precisions with which the lines are found.
 *     bigger the value, logarithmically better the detection.
 *     - -1 corresponds to 10 mean false alarms
 *     - 0 corresponds to 1 mean false alarm
 *     - 1 corresponds to 0.1 mean false alarms
 *     This vector will be calculated only when the objects type is #LSD_REFINE_ADV.
 */
- (void)detect:(Mat*)_image _lines:(Mat*)_lines width:(Mat*)width prec:(Mat*)prec NS_SWIFT_NAME(detect(_image:_lines:width:prec:));

/**
 * Finds lines in the input image.
 *
 *     This is the output of the default parameters of the algorithm on the above shown image.
 *
 *     ![image](pics/building_lsd.png)
 *
 * @param _image A grayscale (CV_8UC1) input image. If only a roi needs to be selected, use:
 *     `lsd_ptr-\>detect(image(roi), lines, ...); lines += Scalar(roi.x, roi.y, roi.x, roi.y);`
 * @param _lines A vector of Vec4i or Vec4f elements specifying the beginning and ending point of a line. Where
 *     Vec4i/Vec4f is (x1, y1, x2, y2), point 1 is the start, point 2 - end. Returned lines are strictly
 *     oriented depending on the gradient.
 * @param width Vector of widths of the regions, where the lines are found. E.g. Width of line.
 *     bigger the value, logarithmically better the detection.
 *     - -1 corresponds to 10 mean false alarms
 *     - 0 corresponds to 1 mean false alarm
 *     - 1 corresponds to 0.1 mean false alarms
 *     This vector will be calculated only when the objects type is #LSD_REFINE_ADV.
 */
- (void)detect:(Mat*)_image _lines:(Mat*)_lines width:(Mat*)width NS_SWIFT_NAME(detect(_image:_lines:width:));

/**
 * Finds lines in the input image.
 *
 *     This is the output of the default parameters of the algorithm on the above shown image.
 *
 *     ![image](pics/building_lsd.png)
 *
 * @param _image A grayscale (CV_8UC1) input image. If only a roi needs to be selected, use:
 *     `lsd_ptr-\>detect(image(roi), lines, ...); lines += Scalar(roi.x, roi.y, roi.x, roi.y);`
 * @param _lines A vector of Vec4i or Vec4f elements specifying the beginning and ending point of a line. Where
 *     Vec4i/Vec4f is (x1, y1, x2, y2), point 1 is the start, point 2 - end. Returned lines are strictly
 *     oriented depending on the gradient.
 *     bigger the value, logarithmically better the detection.
 *     - -1 corresponds to 10 mean false alarms
 *     - 0 corresponds to 1 mean false alarm
 *     - 1 corresponds to 0.1 mean false alarms
 *     This vector will be calculated only when the objects type is #LSD_REFINE_ADV.
 */
- (void)detect:(Mat*)_image _lines:(Mat*)_lines NS_SWIFT_NAME(detect(_image:_lines:));


//
//  void cv::LineSegmentDetector::drawSegments(Mat& _image, Mat lines)
//
/**
 * Draws the line segments on a given image.
 * @param _image The image, where the lines will be drawn. Should be bigger or equal to the image,
 *     where the lines were found.
 * @param lines A vector of the lines that needed to be drawn.
 */
- (void)drawSegments:(Mat*)_image lines:(Mat*)lines NS_SWIFT_NAME(drawSegments(_image:lines:));



@end

NS_ASSUME_NONNULL_END



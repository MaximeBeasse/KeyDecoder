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


@class Mat;



NS_ASSUME_NONNULL_BEGIN

// C++: class QRCodeDetector
/**
 * Groups the object candidate rectangles.
 *     rectList  Input/output vector of rectangles. Output vector includes retained and grouped rectangles. (The Python list is not modified in place.)
 *     weights Input/output vector of weights of rectangles. Output vector includes weights of retained and grouped rectangles. (The Python list is not modified in place.)
 *     groupThreshold Minimum possible number of rectangles minus 1. The threshold is used in a group of rectangles to retain it.
 *     eps Relative difference between sides of the rectangles to merge them into a group.
 *
 * Member of `Objdetect`
 */
CV_EXPORTS @interface QRCodeDetector : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::QRCodeDetector> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::QRCodeDetector>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::QRCodeDetector>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::QRCodeDetector::QRCodeDetector()
//
- (instancetype)init;


//
//  bool cv::QRCodeDetector::decodeMulti(Mat img, Mat points, vector_string& decoded_info, vector_Mat& straight_qrcode = vector_Mat())
//
/**
 * Decodes QR codes in image once it's found by the detect() method.
 * @param img grayscale or color (BGR) image containing QR codes.
 * @param decoded_info UTF8-encoded output vector of string or empty vector of string if the codes cannot be decoded.
 * @param points vector of Quadrangle vertices found by detect() method (or some other algorithm).
 * @param straight_qrcode The optional output vector of images containing rectified and binarized QR codes
 */
- (BOOL)decodeMulti:(Mat*)img points:(Mat*)points decoded_info:(NSMutableArray<NSString*>*)decoded_info straight_qrcode:(NSMutableArray<Mat*>*)straight_qrcode NS_SWIFT_NAME(decodeMulti(img:points:decoded_info:straight_qrcode:));

/**
 * Decodes QR codes in image once it's found by the detect() method.
 * @param img grayscale or color (BGR) image containing QR codes.
 * @param decoded_info UTF8-encoded output vector of string or empty vector of string if the codes cannot be decoded.
 * @param points vector of Quadrangle vertices found by detect() method (or some other algorithm).
 */
- (BOOL)decodeMulti:(Mat*)img points:(Mat*)points decoded_info:(NSMutableArray<NSString*>*)decoded_info NS_SWIFT_NAME(decodeMulti(img:points:decoded_info:));


//
//  bool cv::QRCodeDetector::detect(Mat img, Mat& points)
//
/**
 * Detects QR code in image and returns the quadrangle containing the code.
 * @param img grayscale or color (BGR) image containing (or not) QR code.
 * @param points Output vector of vertices of the minimum-area quadrangle containing the code.
 */
- (BOOL)detect:(Mat*)img points:(Mat*)points NS_SWIFT_NAME(detect(img:points:));


//
//  bool cv::QRCodeDetector::detectAndDecodeMulti(Mat img, vector_string& decoded_info, Mat& points = Mat(), vector_Mat& straight_qrcode = vector_Mat())
//
/**
 * Both detects and decodes QR codes
 * @param img grayscale or color (BGR) image containing QR codes.
 * @param decoded_info UTF8-encoded output vector of string or empty vector of string if the codes cannot be decoded.
 * @param points optional output vector of vertices of the found QR code quadrangles. Will be empty if not found.
 * @param straight_qrcode The optional output vector of images containing rectified and binarized QR codes
 */
- (BOOL)detectAndDecodeMulti:(Mat*)img decoded_info:(NSMutableArray<NSString*>*)decoded_info points:(Mat*)points straight_qrcode:(NSMutableArray<Mat*>*)straight_qrcode NS_SWIFT_NAME(detectAndDecodeMulti(img:decoded_info:points:straight_qrcode:));

/**
 * Both detects and decodes QR codes
 * @param img grayscale or color (BGR) image containing QR codes.
 * @param decoded_info UTF8-encoded output vector of string or empty vector of string if the codes cannot be decoded.
 * @param points optional output vector of vertices of the found QR code quadrangles. Will be empty if not found.
 */
- (BOOL)detectAndDecodeMulti:(Mat*)img decoded_info:(NSMutableArray<NSString*>*)decoded_info points:(Mat*)points NS_SWIFT_NAME(detectAndDecodeMulti(img:decoded_info:points:));

/**
 * Both detects and decodes QR codes
 * @param img grayscale or color (BGR) image containing QR codes.
 * @param decoded_info UTF8-encoded output vector of string or empty vector of string if the codes cannot be decoded.
 */
- (BOOL)detectAndDecodeMulti:(Mat*)img decoded_info:(NSMutableArray<NSString*>*)decoded_info NS_SWIFT_NAME(detectAndDecodeMulti(img:decoded_info:));


//
//  bool cv::QRCodeDetector::detectMulti(Mat img, Mat& points)
//
/**
 * Detects QR codes in image and returns the vector of the quadrangles containing the codes.
 * @param img grayscale or color (BGR) image containing (or not) QR codes.
 * @param points Output vector of vector of vertices of the minimum-area quadrangle containing the codes.
 */
- (BOOL)detectMulti:(Mat*)img points:(Mat*)points NS_SWIFT_NAME(detectMulti(img:points:));


//
//  string cv::QRCodeDetector::decode(Mat img, Mat points, Mat& straight_qrcode = Mat())
//
/**
 * Decodes QR code in image once it's found by the detect() method.
 *
 *      Returns UTF8-encoded output string or empty string if the code cannot be decoded.
 * @param img grayscale or color (BGR) image containing QR code.
 * @param points Quadrangle vertices found by detect() method (or some other algorithm).
 * @param straight_qrcode The optional output image containing rectified and binarized QR code
 */
- (NSString*)decode:(Mat*)img points:(Mat*)points straight_qrcode:(Mat*)straight_qrcode NS_SWIFT_NAME(decode(img:points:straight_qrcode:));

/**
 * Decodes QR code in image once it's found by the detect() method.
 *
 *      Returns UTF8-encoded output string or empty string if the code cannot be decoded.
 * @param img grayscale or color (BGR) image containing QR code.
 * @param points Quadrangle vertices found by detect() method (or some other algorithm).
 */
- (NSString*)decode:(Mat*)img points:(Mat*)points NS_SWIFT_NAME(decode(img:points:));


//
//  string cv::QRCodeDetector::detectAndDecode(Mat img, Mat& points = Mat(), Mat& straight_qrcode = Mat())
//
/**
 * Both detects and decodes QR code
 *
 * @param img grayscale or color (BGR) image containing QR code.
 * @param points optional output array of vertices of the found QR code quadrangle. Will be empty if not found.
 * @param straight_qrcode The optional output image containing rectified and binarized QR code
 */
- (NSString*)detectAndDecode:(Mat*)img points:(Mat*)points straight_qrcode:(Mat*)straight_qrcode NS_SWIFT_NAME(detectAndDecode(img:points:straight_qrcode:));

/**
 * Both detects and decodes QR code
 *
 * @param img grayscale or color (BGR) image containing QR code.
 * @param points optional output array of vertices of the found QR code quadrangle. Will be empty if not found.
 */
- (NSString*)detectAndDecode:(Mat*)img points:(Mat*)points NS_SWIFT_NAME(detectAndDecode(img:points:));

/**
 * Both detects and decodes QR code
 *
 * @param img grayscale or color (BGR) image containing QR code.
 */
- (NSString*)detectAndDecode:(Mat*)img NS_SWIFT_NAME(detectAndDecode(img:));


//
//  void cv::QRCodeDetector::setEpsX(double epsX)
//
/**
 * sets the epsilon used during the horizontal scan of QR code stop marker detection.
 * @param epsX Epsilon neighborhood, which allows you to determine the horizontal pattern
 *      of the scheme 1:1:3:1:1 according to QR code standard.
 */
- (void)setEpsX:(double)epsX NS_SWIFT_NAME(setEpsX(epsX:));


//
//  void cv::QRCodeDetector::setEpsY(double epsY)
//
/**
 * sets the epsilon used during the vertical scan of QR code stop marker detection.
 * @param epsY Epsilon neighborhood, which allows you to determine the vertical pattern
 *      of the scheme 1:1:3:1:1 according to QR code standard.
 */
- (void)setEpsY:(double)epsY NS_SWIFT_NAME(setEpsY(epsY:));



@end

NS_ASSUME_NONNULL_END



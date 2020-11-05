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


@class DoubleVector;
@class IntVector;
@class Mat;
@class Rect2i;
@class Size2i;



NS_ASSUME_NONNULL_BEGIN

// C++: class CascadeClassifier
/**
 * Cascade classifier class for object detection.
 *
 * Member of `Objdetect`
 */
CV_EXPORTS @interface CascadeClassifier : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::CascadeClassifier> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::CascadeClassifier>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::CascadeClassifier>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::CascadeClassifier::CascadeClassifier(String filename)
//
/**
 * Loads a classifier from a file.
 *
 * @param filename Name of the file from which the classifier is loaded.
 */
- (instancetype)initWithFilename:(NSString*)filename;


//
//   cv::CascadeClassifier::CascadeClassifier()
//
- (instancetype)init;


//
//  Size cv::CascadeClassifier::getOriginalWindowSize()
//
- (Size2i*)getOriginalWindowSize NS_SWIFT_NAME(getOriginalWindowSize());


//
// static bool cv::CascadeClassifier::convert(String oldcascade, String newcascade)
//
+ (BOOL)convert:(NSString*)oldcascade newcascade:(NSString*)newcascade NS_SWIFT_NAME(convert(oldcascade:newcascade:));


//
//  bool cv::CascadeClassifier::empty()
//
/**
 * Checks whether the classifier has been loaded.
 */
- (BOOL)empty NS_SWIFT_NAME(empty());


//
//  bool cv::CascadeClassifier::isOldFormatCascade()
//
- (BOOL)isOldFormatCascade NS_SWIFT_NAME(isOldFormatCascade());


//
//  bool cv::CascadeClassifier::load(String filename)
//
/**
 * Loads a classifier from a file.
 *
 * @param filename Name of the file from which the classifier is loaded. The file may contain an old
 *     HAAR classifier trained by the haartraining application or a new cascade classifier trained by the
 *     traincascade application.
 */
- (BOOL)load:(NSString*)filename NS_SWIFT_NAME(load(filename:));


//
//  bool cv::CascadeClassifier::read(FileNode node)
//
// Unknown type 'FileNode' (I), skipping the function


//
//  int cv::CascadeClassifier::getFeatureType()
//
- (int)getFeatureType NS_SWIFT_NAME(getFeatureType());


//
//  void cv::CascadeClassifier::detectMultiScale(Mat image, vector_Rect& objects, double scaleFactor = 1.1, int minNeighbors = 3, int flags = 0, Size minSize = Size(), Size maxSize = Size())
//
/**
 * Detects objects of different sizes in the input image. The detected objects are returned as a list
 *     of rectangles.
 *
 * @param image Matrix of the type CV_8U containing an image where objects are detected.
 * @param objects Vector of rectangles where each rectangle contains the detected object, the
 *     rectangles may be partially outside the original image.
 * @param scaleFactor Parameter specifying how much the image size is reduced at each image scale.
 * @param minNeighbors Parameter specifying how many neighbors each candidate rectangle should have
 *     to retain it.
 * @param flags Parameter with the same meaning for an old cascade as in the function
 *     cvHaarDetectObjects. It is not used for a new cascade.
 * @param minSize Minimum possible object size. Objects smaller than that are ignored.
 * @param maxSize Maximum possible object size. Objects larger than that are ignored. If `maxSize == minSize` model is evaluated on single scale.
 *
 *     The function is parallelized with the TBB library.
 *
 *     @note
 *        -   (Python) A face detection example using cascade classifiers can be found at
 *             opencv_source_code/samples/python/facedetect.py
 */
- (void)detectMultiScale:(Mat*)image objects:(NSMutableArray<Rect2i*>*)objects scaleFactor:(double)scaleFactor minNeighbors:(int)minNeighbors flags:(int)flags minSize:(Size2i*)minSize maxSize:(Size2i*)maxSize NS_SWIFT_NAME(detectMultiScale(image:objects:scaleFactor:minNeighbors:flags:minSize:maxSize:));

/**
 * Detects objects of different sizes in the input image. The detected objects are returned as a list
 *     of rectangles.
 *
 * @param image Matrix of the type CV_8U containing an image where objects are detected.
 * @param objects Vector of rectangles where each rectangle contains the detected object, the
 *     rectangles may be partially outside the original image.
 * @param scaleFactor Parameter specifying how much the image size is reduced at each image scale.
 * @param minNeighbors Parameter specifying how many neighbors each candidate rectangle should have
 *     to retain it.
 * @param flags Parameter with the same meaning for an old cascade as in the function
 *     cvHaarDetectObjects. It is not used for a new cascade.
 * @param minSize Minimum possible object size. Objects smaller than that are ignored.
 *
 *     The function is parallelized with the TBB library.
 *
 *     @note
 *        -   (Python) A face detection example using cascade classifiers can be found at
 *             opencv_source_code/samples/python/facedetect.py
 */
- (void)detectMultiScale:(Mat*)image objects:(NSMutableArray<Rect2i*>*)objects scaleFactor:(double)scaleFactor minNeighbors:(int)minNeighbors flags:(int)flags minSize:(Size2i*)minSize NS_SWIFT_NAME(detectMultiScale(image:objects:scaleFactor:minNeighbors:flags:minSize:));

/**
 * Detects objects of different sizes in the input image. The detected objects are returned as a list
 *     of rectangles.
 *
 * @param image Matrix of the type CV_8U containing an image where objects are detected.
 * @param objects Vector of rectangles where each rectangle contains the detected object, the
 *     rectangles may be partially outside the original image.
 * @param scaleFactor Parameter specifying how much the image size is reduced at each image scale.
 * @param minNeighbors Parameter specifying how many neighbors each candidate rectangle should have
 *     to retain it.
 * @param flags Parameter with the same meaning for an old cascade as in the function
 *     cvHaarDetectObjects. It is not used for a new cascade.
 *
 *     The function is parallelized with the TBB library.
 *
 *     @note
 *        -   (Python) A face detection example using cascade classifiers can be found at
 *             opencv_source_code/samples/python/facedetect.py
 */
- (void)detectMultiScale:(Mat*)image objects:(NSMutableArray<Rect2i*>*)objects scaleFactor:(double)scaleFactor minNeighbors:(int)minNeighbors flags:(int)flags NS_SWIFT_NAME(detectMultiScale(image:objects:scaleFactor:minNeighbors:flags:));

/**
 * Detects objects of different sizes in the input image. The detected objects are returned as a list
 *     of rectangles.
 *
 * @param image Matrix of the type CV_8U containing an image where objects are detected.
 * @param objects Vector of rectangles where each rectangle contains the detected object, the
 *     rectangles may be partially outside the original image.
 * @param scaleFactor Parameter specifying how much the image size is reduced at each image scale.
 * @param minNeighbors Parameter specifying how many neighbors each candidate rectangle should have
 *     to retain it.
 *     cvHaarDetectObjects. It is not used for a new cascade.
 *
 *     The function is parallelized with the TBB library.
 *
 *     @note
 *        -   (Python) A face detection example using cascade classifiers can be found at
 *             opencv_source_code/samples/python/facedetect.py
 */
- (void)detectMultiScale:(Mat*)image objects:(NSMutableArray<Rect2i*>*)objects scaleFactor:(double)scaleFactor minNeighbors:(int)minNeighbors NS_SWIFT_NAME(detectMultiScale(image:objects:scaleFactor:minNeighbors:));

/**
 * Detects objects of different sizes in the input image. The detected objects are returned as a list
 *     of rectangles.
 *
 * @param image Matrix of the type CV_8U containing an image where objects are detected.
 * @param objects Vector of rectangles where each rectangle contains the detected object, the
 *     rectangles may be partially outside the original image.
 * @param scaleFactor Parameter specifying how much the image size is reduced at each image scale.
 *     to retain it.
 *     cvHaarDetectObjects. It is not used for a new cascade.
 *
 *     The function is parallelized with the TBB library.
 *
 *     @note
 *        -   (Python) A face detection example using cascade classifiers can be found at
 *             opencv_source_code/samples/python/facedetect.py
 */
- (void)detectMultiScale:(Mat*)image objects:(NSMutableArray<Rect2i*>*)objects scaleFactor:(double)scaleFactor NS_SWIFT_NAME(detectMultiScale(image:objects:scaleFactor:));

/**
 * Detects objects of different sizes in the input image. The detected objects are returned as a list
 *     of rectangles.
 *
 * @param image Matrix of the type CV_8U containing an image where objects are detected.
 * @param objects Vector of rectangles where each rectangle contains the detected object, the
 *     rectangles may be partially outside the original image.
 *     to retain it.
 *     cvHaarDetectObjects. It is not used for a new cascade.
 *
 *     The function is parallelized with the TBB library.
 *
 *     @note
 *        -   (Python) A face detection example using cascade classifiers can be found at
 *             opencv_source_code/samples/python/facedetect.py
 */
- (void)detectMultiScale:(Mat*)image objects:(NSMutableArray<Rect2i*>*)objects NS_SWIFT_NAME(detectMultiScale(image:objects:));


//
//  void cv::CascadeClassifier::detectMultiScale(Mat image, vector_Rect& objects, vector_int& numDetections, double scaleFactor = 1.1, int minNeighbors = 3, int flags = 0, Size minSize = Size(), Size maxSize = Size())
//
/**
 *
 * @param image Matrix of the type CV_8U containing an image where objects are detected.
 * @param objects Vector of rectangles where each rectangle contains the detected object, the
 *     rectangles may be partially outside the original image.
 * @param numDetections Vector of detection numbers for the corresponding objects. An object's number
 *     of detections is the number of neighboring positively classified rectangles that were joined
 *     together to form the object.
 * @param scaleFactor Parameter specifying how much the image size is reduced at each image scale.
 * @param minNeighbors Parameter specifying how many neighbors each candidate rectangle should have
 *     to retain it.
 * @param flags Parameter with the same meaning for an old cascade as in the function
 *     cvHaarDetectObjects. It is not used for a new cascade.
 * @param minSize Minimum possible object size. Objects smaller than that are ignored.
 * @param maxSize Maximum possible object size. Objects larger than that are ignored. If `maxSize == minSize` model is evaluated on single scale.
 */
- (void)detectMultiScale2:(Mat*)image objects:(NSMutableArray<Rect2i*>*)objects numDetections:(IntVector*)numDetections scaleFactor:(double)scaleFactor minNeighbors:(int)minNeighbors flags:(int)flags minSize:(Size2i*)minSize maxSize:(Size2i*)maxSize NS_SWIFT_NAME(detectMultiScale(image:objects:numDetections:scaleFactor:minNeighbors:flags:minSize:maxSize:));

/**
 *
 * @param image Matrix of the type CV_8U containing an image where objects are detected.
 * @param objects Vector of rectangles where each rectangle contains the detected object, the
 *     rectangles may be partially outside the original image.
 * @param numDetections Vector of detection numbers for the corresponding objects. An object's number
 *     of detections is the number of neighboring positively classified rectangles that were joined
 *     together to form the object.
 * @param scaleFactor Parameter specifying how much the image size is reduced at each image scale.
 * @param minNeighbors Parameter specifying how many neighbors each candidate rectangle should have
 *     to retain it.
 * @param flags Parameter with the same meaning for an old cascade as in the function
 *     cvHaarDetectObjects. It is not used for a new cascade.
 * @param minSize Minimum possible object size. Objects smaller than that are ignored.
 */
- (void)detectMultiScale2:(Mat*)image objects:(NSMutableArray<Rect2i*>*)objects numDetections:(IntVector*)numDetections scaleFactor:(double)scaleFactor minNeighbors:(int)minNeighbors flags:(int)flags minSize:(Size2i*)minSize NS_SWIFT_NAME(detectMultiScale(image:objects:numDetections:scaleFactor:minNeighbors:flags:minSize:));

/**
 *
 * @param image Matrix of the type CV_8U containing an image where objects are detected.
 * @param objects Vector of rectangles where each rectangle contains the detected object, the
 *     rectangles may be partially outside the original image.
 * @param numDetections Vector of detection numbers for the corresponding objects. An object's number
 *     of detections is the number of neighboring positively classified rectangles that were joined
 *     together to form the object.
 * @param scaleFactor Parameter specifying how much the image size is reduced at each image scale.
 * @param minNeighbors Parameter specifying how many neighbors each candidate rectangle should have
 *     to retain it.
 * @param flags Parameter with the same meaning for an old cascade as in the function
 *     cvHaarDetectObjects. It is not used for a new cascade.
 */
- (void)detectMultiScale2:(Mat*)image objects:(NSMutableArray<Rect2i*>*)objects numDetections:(IntVector*)numDetections scaleFactor:(double)scaleFactor minNeighbors:(int)minNeighbors flags:(int)flags NS_SWIFT_NAME(detectMultiScale(image:objects:numDetections:scaleFactor:minNeighbors:flags:));

/**
 *
 * @param image Matrix of the type CV_8U containing an image where objects are detected.
 * @param objects Vector of rectangles where each rectangle contains the detected object, the
 *     rectangles may be partially outside the original image.
 * @param numDetections Vector of detection numbers for the corresponding objects. An object's number
 *     of detections is the number of neighboring positively classified rectangles that were joined
 *     together to form the object.
 * @param scaleFactor Parameter specifying how much the image size is reduced at each image scale.
 * @param minNeighbors Parameter specifying how many neighbors each candidate rectangle should have
 *     to retain it.
 *     cvHaarDetectObjects. It is not used for a new cascade.
 */
- (void)detectMultiScale2:(Mat*)image objects:(NSMutableArray<Rect2i*>*)objects numDetections:(IntVector*)numDetections scaleFactor:(double)scaleFactor minNeighbors:(int)minNeighbors NS_SWIFT_NAME(detectMultiScale(image:objects:numDetections:scaleFactor:minNeighbors:));

/**
 *
 * @param image Matrix of the type CV_8U containing an image where objects are detected.
 * @param objects Vector of rectangles where each rectangle contains the detected object, the
 *     rectangles may be partially outside the original image.
 * @param numDetections Vector of detection numbers for the corresponding objects. An object's number
 *     of detections is the number of neighboring positively classified rectangles that were joined
 *     together to form the object.
 * @param scaleFactor Parameter specifying how much the image size is reduced at each image scale.
 *     to retain it.
 *     cvHaarDetectObjects. It is not used for a new cascade.
 */
- (void)detectMultiScale2:(Mat*)image objects:(NSMutableArray<Rect2i*>*)objects numDetections:(IntVector*)numDetections scaleFactor:(double)scaleFactor NS_SWIFT_NAME(detectMultiScale(image:objects:numDetections:scaleFactor:));

/**
 *
 * @param image Matrix of the type CV_8U containing an image where objects are detected.
 * @param objects Vector of rectangles where each rectangle contains the detected object, the
 *     rectangles may be partially outside the original image.
 * @param numDetections Vector of detection numbers for the corresponding objects. An object's number
 *     of detections is the number of neighboring positively classified rectangles that were joined
 *     together to form the object.
 *     to retain it.
 *     cvHaarDetectObjects. It is not used for a new cascade.
 */
- (void)detectMultiScale2:(Mat*)image objects:(NSMutableArray<Rect2i*>*)objects numDetections:(IntVector*)numDetections NS_SWIFT_NAME(detectMultiScale(image:objects:numDetections:));


//
//  void cv::CascadeClassifier::detectMultiScale(Mat image, vector_Rect& objects, vector_int& rejectLevels, vector_double& levelWeights, double scaleFactor = 1.1, int minNeighbors = 3, int flags = 0, Size minSize = Size(), Size maxSize = Size(), bool outputRejectLevels = false)
//
/**
 *
 *     This function allows you to retrieve the final stage decision certainty of classification.
 *     For this, one needs to set `outputRejectLevels` on true and provide the `rejectLevels` and `levelWeights` parameter.
 *     For each resulting detection, `levelWeights` will then contain the certainty of classification at the final stage.
 *     This value can then be used to separate strong from weaker classifications.
 *
 *     A code sample on how to use it efficiently can be found below:
 *     
 *     Mat img;
 *     vector<double> weights;
 *     vector<int> levels;
 *     vector<Rect> detections;
 *     CascadeClassifier model("/path/to/your/model.xml");
 *     model.detectMultiScale(img, detections, levels, weights, 1.1, 3, 0, Size(), Size(), true);
 *     cerr << "Detection " << detections[0] << " with weight " << weights[0] << endl;
 *     
 */
- (void)detectMultiScale3:(Mat*)image objects:(NSMutableArray<Rect2i*>*)objects rejectLevels:(IntVector*)rejectLevels levelWeights:(DoubleVector*)levelWeights scaleFactor:(double)scaleFactor minNeighbors:(int)minNeighbors flags:(int)flags minSize:(Size2i*)minSize maxSize:(Size2i*)maxSize outputRejectLevels:(BOOL)outputRejectLevels NS_SWIFT_NAME(detectMultiScale(image:objects:rejectLevels:levelWeights:scaleFactor:minNeighbors:flags:minSize:maxSize:outputRejectLevels:));

/**
 *
 *     This function allows you to retrieve the final stage decision certainty of classification.
 *     For this, one needs to set `outputRejectLevels` on true and provide the `rejectLevels` and `levelWeights` parameter.
 *     For each resulting detection, `levelWeights` will then contain the certainty of classification at the final stage.
 *     This value can then be used to separate strong from weaker classifications.
 *
 *     A code sample on how to use it efficiently can be found below:
 *     
 *     Mat img;
 *     vector<double> weights;
 *     vector<int> levels;
 *     vector<Rect> detections;
 *     CascadeClassifier model("/path/to/your/model.xml");
 *     model.detectMultiScale(img, detections, levels, weights, 1.1, 3, 0, Size(), Size(), true);
 *     cerr << "Detection " << detections[0] << " with weight " << weights[0] << endl;
 *     
 */
- (void)detectMultiScale3:(Mat*)image objects:(NSMutableArray<Rect2i*>*)objects rejectLevels:(IntVector*)rejectLevels levelWeights:(DoubleVector*)levelWeights scaleFactor:(double)scaleFactor minNeighbors:(int)minNeighbors flags:(int)flags minSize:(Size2i*)minSize maxSize:(Size2i*)maxSize NS_SWIFT_NAME(detectMultiScale(image:objects:rejectLevels:levelWeights:scaleFactor:minNeighbors:flags:minSize:maxSize:));

/**
 *
 *     This function allows you to retrieve the final stage decision certainty of classification.
 *     For this, one needs to set `outputRejectLevels` on true and provide the `rejectLevels` and `levelWeights` parameter.
 *     For each resulting detection, `levelWeights` will then contain the certainty of classification at the final stage.
 *     This value can then be used to separate strong from weaker classifications.
 *
 *     A code sample on how to use it efficiently can be found below:
 *     
 *     Mat img;
 *     vector<double> weights;
 *     vector<int> levels;
 *     vector<Rect> detections;
 *     CascadeClassifier model("/path/to/your/model.xml");
 *     model.detectMultiScale(img, detections, levels, weights, 1.1, 3, 0, Size(), Size(), true);
 *     cerr << "Detection " << detections[0] << " with weight " << weights[0] << endl;
 *     
 */
- (void)detectMultiScale3:(Mat*)image objects:(NSMutableArray<Rect2i*>*)objects rejectLevels:(IntVector*)rejectLevels levelWeights:(DoubleVector*)levelWeights scaleFactor:(double)scaleFactor minNeighbors:(int)minNeighbors flags:(int)flags minSize:(Size2i*)minSize NS_SWIFT_NAME(detectMultiScale(image:objects:rejectLevels:levelWeights:scaleFactor:minNeighbors:flags:minSize:));

/**
 *
 *     This function allows you to retrieve the final stage decision certainty of classification.
 *     For this, one needs to set `outputRejectLevels` on true and provide the `rejectLevels` and `levelWeights` parameter.
 *     For each resulting detection, `levelWeights` will then contain the certainty of classification at the final stage.
 *     This value can then be used to separate strong from weaker classifications.
 *
 *     A code sample on how to use it efficiently can be found below:
 *     
 *     Mat img;
 *     vector<double> weights;
 *     vector<int> levels;
 *     vector<Rect> detections;
 *     CascadeClassifier model("/path/to/your/model.xml");
 *     model.detectMultiScale(img, detections, levels, weights, 1.1, 3, 0, Size(), Size(), true);
 *     cerr << "Detection " << detections[0] << " with weight " << weights[0] << endl;
 *     
 */
- (void)detectMultiScale3:(Mat*)image objects:(NSMutableArray<Rect2i*>*)objects rejectLevels:(IntVector*)rejectLevels levelWeights:(DoubleVector*)levelWeights scaleFactor:(double)scaleFactor minNeighbors:(int)minNeighbors flags:(int)flags NS_SWIFT_NAME(detectMultiScale(image:objects:rejectLevels:levelWeights:scaleFactor:minNeighbors:flags:));

/**
 *
 *     This function allows you to retrieve the final stage decision certainty of classification.
 *     For this, one needs to set `outputRejectLevels` on true and provide the `rejectLevels` and `levelWeights` parameter.
 *     For each resulting detection, `levelWeights` will then contain the certainty of classification at the final stage.
 *     This value can then be used to separate strong from weaker classifications.
 *
 *     A code sample on how to use it efficiently can be found below:
 *     
 *     Mat img;
 *     vector<double> weights;
 *     vector<int> levels;
 *     vector<Rect> detections;
 *     CascadeClassifier model("/path/to/your/model.xml");
 *     model.detectMultiScale(img, detections, levels, weights, 1.1, 3, 0, Size(), Size(), true);
 *     cerr << "Detection " << detections[0] << " with weight " << weights[0] << endl;
 *     
 */
- (void)detectMultiScale3:(Mat*)image objects:(NSMutableArray<Rect2i*>*)objects rejectLevels:(IntVector*)rejectLevels levelWeights:(DoubleVector*)levelWeights scaleFactor:(double)scaleFactor minNeighbors:(int)minNeighbors NS_SWIFT_NAME(detectMultiScale(image:objects:rejectLevels:levelWeights:scaleFactor:minNeighbors:));

/**
 *
 *     This function allows you to retrieve the final stage decision certainty of classification.
 *     For this, one needs to set `outputRejectLevels` on true and provide the `rejectLevels` and `levelWeights` parameter.
 *     For each resulting detection, `levelWeights` will then contain the certainty of classification at the final stage.
 *     This value can then be used to separate strong from weaker classifications.
 *
 *     A code sample on how to use it efficiently can be found below:
 *     
 *     Mat img;
 *     vector<double> weights;
 *     vector<int> levels;
 *     vector<Rect> detections;
 *     CascadeClassifier model("/path/to/your/model.xml");
 *     model.detectMultiScale(img, detections, levels, weights, 1.1, 3, 0, Size(), Size(), true);
 *     cerr << "Detection " << detections[0] << " with weight " << weights[0] << endl;
 *     
 */
- (void)detectMultiScale3:(Mat*)image objects:(NSMutableArray<Rect2i*>*)objects rejectLevels:(IntVector*)rejectLevels levelWeights:(DoubleVector*)levelWeights scaleFactor:(double)scaleFactor NS_SWIFT_NAME(detectMultiScale(image:objects:rejectLevels:levelWeights:scaleFactor:));

/**
 *
 *     This function allows you to retrieve the final stage decision certainty of classification.
 *     For this, one needs to set `outputRejectLevels` on true and provide the `rejectLevels` and `levelWeights` parameter.
 *     For each resulting detection, `levelWeights` will then contain the certainty of classification at the final stage.
 *     This value can then be used to separate strong from weaker classifications.
 *
 *     A code sample on how to use it efficiently can be found below:
 *     
 *     Mat img;
 *     vector<double> weights;
 *     vector<int> levels;
 *     vector<Rect> detections;
 *     CascadeClassifier model("/path/to/your/model.xml");
 *     model.detectMultiScale(img, detections, levels, weights, 1.1, 3, 0, Size(), Size(), true);
 *     cerr << "Detection " << detections[0] << " with weight " << weights[0] << endl;
 *     
 */
- (void)detectMultiScale3:(Mat*)image objects:(NSMutableArray<Rect2i*>*)objects rejectLevels:(IntVector*)rejectLevels levelWeights:(DoubleVector*)levelWeights NS_SWIFT_NAME(detectMultiScale(image:objects:rejectLevels:levelWeights:));



@end

NS_ASSUME_NONNULL_END



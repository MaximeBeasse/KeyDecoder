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
@class FloatVector;
@class Mat;
@class Point2i;
@class Rect2i;
@class Size2i;


// C++: enum DescriptorStorageFormat
typedef NS_ENUM(int, DescriptorStorageFormat) {
    DESCR_FORMAT_COL_BY_COL = 0,
    DESCR_FORMAT_ROW_BY_ROW = 1
};


// C++: enum HistogramNormType
typedef NS_ENUM(int, HistogramNormType) {
    L2Hys = 0
};



NS_ASSUME_NONNULL_BEGIN

// C++: class HOGDescriptor
/**
 * Implementation of HOG (Histogram of Oriented Gradients) descriptor and object detector.
 *
 * the HOG descriptor algorithm introduced by Navneet Dalal and Bill Triggs CITE: Dalal2005 .
 *
 * useful links:
 *
 * https://hal.inria.fr/inria-00548512/document/
 *
 * https://en.wikipedia.org/wiki/Histogram_of_oriented_gradients
 *
 * https://software.intel.com/en-us/ipp-dev-reference-histogram-of-oriented-gradients-hog-descriptor
 *
 * http://www.learnopencv.com/histogram-of-oriented-gradients
 *
 * http://www.learnopencv.com/handwritten-digits-classification-an-opencv-c-python-tutorial
 *
 * Member of `Objdetect`
 */
CV_EXPORTS @interface HOGDescriptor : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::HOGDescriptor> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::HOGDescriptor>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::HOGDescriptor>)nativePtr;
#endif


#pragma mark - Class Constants


@property (class, readonly) int DEFAULT_NLEVELS NS_SWIFT_NAME(DEFAULT_NLEVELS);

#pragma mark - Methods


//
//   cv::HOGDescriptor::HOGDescriptor(Size _winSize, Size _blockSize, Size _blockStride, Size _cellSize, int _nbins, int _derivAperture = 1, double _winSigma = -1, HOGDescriptor_HistogramNormType _histogramNormType = HOGDescriptor::L2Hys, double _L2HysThreshold = 0.2, bool _gammaCorrection = false, int _nlevels = HOGDescriptor::DEFAULT_NLEVELS, bool _signedGradient = false)
//
/**
 *
 * @param _winSize sets winSize with given value.
 * @param _blockSize sets blockSize with given value.
 * @param _blockStride sets blockStride with given value.
 * @param _cellSize sets cellSize with given value.
 * @param _nbins sets nbins with given value.
 * @param _derivAperture sets derivAperture with given value.
 * @param _winSigma sets winSigma with given value.
 * @param _histogramNormType sets histogramNormType with given value.
 * @param _L2HysThreshold sets L2HysThreshold with given value.
 * @param _gammaCorrection sets gammaCorrection with given value.
 * @param _nlevels sets nlevels with given value.
 * @param _signedGradient sets signedGradient with given value.
 */
- (instancetype)initWith_winSize:(Size2i*)_winSize _blockSize:(Size2i*)_blockSize _blockStride:(Size2i*)_blockStride _cellSize:(Size2i*)_cellSize _nbins:(int)_nbins _derivAperture:(int)_derivAperture _winSigma:(double)_winSigma _histogramNormType:(HistogramNormType)_histogramNormType _L2HysThreshold:(double)_L2HysThreshold _gammaCorrection:(BOOL)_gammaCorrection _nlevels:(int)_nlevels _signedGradient:(BOOL)_signedGradient;

/**
 *
 * @param _winSize sets winSize with given value.
 * @param _blockSize sets blockSize with given value.
 * @param _blockStride sets blockStride with given value.
 * @param _cellSize sets cellSize with given value.
 * @param _nbins sets nbins with given value.
 * @param _derivAperture sets derivAperture with given value.
 * @param _winSigma sets winSigma with given value.
 * @param _histogramNormType sets histogramNormType with given value.
 * @param _L2HysThreshold sets L2HysThreshold with given value.
 * @param _gammaCorrection sets gammaCorrection with given value.
 * @param _nlevels sets nlevels with given value.
 */
- (instancetype)initWith_winSize:(Size2i*)_winSize _blockSize:(Size2i*)_blockSize _blockStride:(Size2i*)_blockStride _cellSize:(Size2i*)_cellSize _nbins:(int)_nbins _derivAperture:(int)_derivAperture _winSigma:(double)_winSigma _histogramNormType:(HistogramNormType)_histogramNormType _L2HysThreshold:(double)_L2HysThreshold _gammaCorrection:(BOOL)_gammaCorrection _nlevels:(int)_nlevels;

/**
 *
 * @param _winSize sets winSize with given value.
 * @param _blockSize sets blockSize with given value.
 * @param _blockStride sets blockStride with given value.
 * @param _cellSize sets cellSize with given value.
 * @param _nbins sets nbins with given value.
 * @param _derivAperture sets derivAperture with given value.
 * @param _winSigma sets winSigma with given value.
 * @param _histogramNormType sets histogramNormType with given value.
 * @param _L2HysThreshold sets L2HysThreshold with given value.
 * @param _gammaCorrection sets gammaCorrection with given value.
 */
- (instancetype)initWith_winSize:(Size2i*)_winSize _blockSize:(Size2i*)_blockSize _blockStride:(Size2i*)_blockStride _cellSize:(Size2i*)_cellSize _nbins:(int)_nbins _derivAperture:(int)_derivAperture _winSigma:(double)_winSigma _histogramNormType:(HistogramNormType)_histogramNormType _L2HysThreshold:(double)_L2HysThreshold _gammaCorrection:(BOOL)_gammaCorrection;

/**
 *
 * @param _winSize sets winSize with given value.
 * @param _blockSize sets blockSize with given value.
 * @param _blockStride sets blockStride with given value.
 * @param _cellSize sets cellSize with given value.
 * @param _nbins sets nbins with given value.
 * @param _derivAperture sets derivAperture with given value.
 * @param _winSigma sets winSigma with given value.
 * @param _histogramNormType sets histogramNormType with given value.
 * @param _L2HysThreshold sets L2HysThreshold with given value.
 */
- (instancetype)initWith_winSize:(Size2i*)_winSize _blockSize:(Size2i*)_blockSize _blockStride:(Size2i*)_blockStride _cellSize:(Size2i*)_cellSize _nbins:(int)_nbins _derivAperture:(int)_derivAperture _winSigma:(double)_winSigma _histogramNormType:(HistogramNormType)_histogramNormType _L2HysThreshold:(double)_L2HysThreshold;

/**
 *
 * @param _winSize sets winSize with given value.
 * @param _blockSize sets blockSize with given value.
 * @param _blockStride sets blockStride with given value.
 * @param _cellSize sets cellSize with given value.
 * @param _nbins sets nbins with given value.
 * @param _derivAperture sets derivAperture with given value.
 * @param _winSigma sets winSigma with given value.
 * @param _histogramNormType sets histogramNormType with given value.
 */
- (instancetype)initWith_winSize:(Size2i*)_winSize _blockSize:(Size2i*)_blockSize _blockStride:(Size2i*)_blockStride _cellSize:(Size2i*)_cellSize _nbins:(int)_nbins _derivAperture:(int)_derivAperture _winSigma:(double)_winSigma _histogramNormType:(HistogramNormType)_histogramNormType;

/**
 *
 * @param _winSize sets winSize with given value.
 * @param _blockSize sets blockSize with given value.
 * @param _blockStride sets blockStride with given value.
 * @param _cellSize sets cellSize with given value.
 * @param _nbins sets nbins with given value.
 * @param _derivAperture sets derivAperture with given value.
 * @param _winSigma sets winSigma with given value.
 */
- (instancetype)initWith_winSize:(Size2i*)_winSize _blockSize:(Size2i*)_blockSize _blockStride:(Size2i*)_blockStride _cellSize:(Size2i*)_cellSize _nbins:(int)_nbins _derivAperture:(int)_derivAperture _winSigma:(double)_winSigma;

/**
 *
 * @param _winSize sets winSize with given value.
 * @param _blockSize sets blockSize with given value.
 * @param _blockStride sets blockStride with given value.
 * @param _cellSize sets cellSize with given value.
 * @param _nbins sets nbins with given value.
 * @param _derivAperture sets derivAperture with given value.
 */
- (instancetype)initWith_winSize:(Size2i*)_winSize _blockSize:(Size2i*)_blockSize _blockStride:(Size2i*)_blockStride _cellSize:(Size2i*)_cellSize _nbins:(int)_nbins _derivAperture:(int)_derivAperture;

/**
 *
 * @param _winSize sets winSize with given value.
 * @param _blockSize sets blockSize with given value.
 * @param _blockStride sets blockStride with given value.
 * @param _cellSize sets cellSize with given value.
 * @param _nbins sets nbins with given value.
 */
- (instancetype)initWith_winSize:(Size2i*)_winSize _blockSize:(Size2i*)_blockSize _blockStride:(Size2i*)_blockStride _cellSize:(Size2i*)_cellSize _nbins:(int)_nbins;


//
//   cv::HOGDescriptor::HOGDescriptor(String filename)
//
/**
 *
 * @param filename The file name containing HOGDescriptor properties and coefficients for the linear SVM classifier.
 */
- (instancetype)initWithFilename:(NSString*)filename;


//
//   cv::HOGDescriptor::HOGDescriptor()
//
/**
 * Creates the HOG descriptor and detector with default params.
 *
 *     aqual to HOGDescriptor(Size(64,128), Size(16,16), Size(8,8), Size(8,8), 9 )
 */
- (instancetype)init;


//
//  bool cv::HOGDescriptor::checkDetectorSize()
//
/**
 * Checks if detector size equal to descriptor size.
 */
- (BOOL)checkDetectorSize NS_SWIFT_NAME(checkDetectorSize());


//
//  bool cv::HOGDescriptor::load(String filename, String objname = String())
//
/**
 * loads HOGDescriptor parameters and coefficients for the linear SVM classifier from a file.
 * @param filename Path of the file to read.
 * @param objname The optional name of the node to read (if empty, the first top-level node will be used).
 */
- (BOOL)load:(NSString*)filename objname:(NSString*)objname NS_SWIFT_NAME(load(filename:objname:));

/**
 * loads HOGDescriptor parameters and coefficients for the linear SVM classifier from a file.
 * @param filename Path of the file to read.
 */
- (BOOL)load:(NSString*)filename NS_SWIFT_NAME(load(filename:));


//
//  double cv::HOGDescriptor::getWinSigma()
//
/**
 * Returns winSigma value
 */
- (double)getWinSigma NS_SWIFT_NAME(getWinSigma());


//
//  size_t cv::HOGDescriptor::getDescriptorSize()
//
/**
 * Returns the number of coefficients required for the classification.
 */
- (size_t)getDescriptorSize NS_SWIFT_NAME(getDescriptorSize());


//
// static vector_float cv::HOGDescriptor::getDaimlerPeopleDetector()
//
/**
 * Returns coefficients of the classifier trained for people detection (for 48x96 windows).
 */
+ (FloatVector*)getDaimlerPeopleDetector NS_SWIFT_NAME(getDaimlerPeopleDetector());


//
// static vector_float cv::HOGDescriptor::getDefaultPeopleDetector()
//
/**
 * Returns coefficients of the classifier trained for people detection (for 64x128 windows).
 */
+ (FloatVector*)getDefaultPeopleDetector NS_SWIFT_NAME(getDefaultPeopleDetector());


//
//  void cv::HOGDescriptor::compute(Mat img, vector_float& descriptors, Size winStride = Size(), Size padding = Size(), vector_Point locations = std::vector<Point>())
//
/**
 * Computes HOG descriptors of given image.
 * @param img Matrix of the type CV_8U containing an image where HOG features will be calculated.
 * @param descriptors Matrix of the type CV_32F
 * @param winStride Window stride. It must be a multiple of block stride.
 * @param padding Padding
 * @param locations Vector of Point
 */
- (void)compute:(Mat*)img descriptors:(FloatVector*)descriptors winStride:(Size2i*)winStride padding:(Size2i*)padding locations:(NSArray<Point2i*>*)locations NS_SWIFT_NAME(compute(img:descriptors:winStride:padding:locations:));

/**
 * Computes HOG descriptors of given image.
 * @param img Matrix of the type CV_8U containing an image where HOG features will be calculated.
 * @param descriptors Matrix of the type CV_32F
 * @param winStride Window stride. It must be a multiple of block stride.
 * @param padding Padding
 */
- (void)compute:(Mat*)img descriptors:(FloatVector*)descriptors winStride:(Size2i*)winStride padding:(Size2i*)padding NS_SWIFT_NAME(compute(img:descriptors:winStride:padding:));

/**
 * Computes HOG descriptors of given image.
 * @param img Matrix of the type CV_8U containing an image where HOG features will be calculated.
 * @param descriptors Matrix of the type CV_32F
 * @param winStride Window stride. It must be a multiple of block stride.
 */
- (void)compute:(Mat*)img descriptors:(FloatVector*)descriptors winStride:(Size2i*)winStride NS_SWIFT_NAME(compute(img:descriptors:winStride:));

/**
 * Computes HOG descriptors of given image.
 * @param img Matrix of the type CV_8U containing an image where HOG features will be calculated.
 * @param descriptors Matrix of the type CV_32F
 */
- (void)compute:(Mat*)img descriptors:(FloatVector*)descriptors NS_SWIFT_NAME(compute(img:descriptors:));


//
//  void cv::HOGDescriptor::computeGradient(Mat img, Mat& grad, Mat& angleOfs, Size paddingTL = Size(), Size paddingBR = Size())
//
/**
 *  Computes gradients and quantized gradient orientations.
 * @param img Matrix contains the image to be computed
 * @param grad Matrix of type CV_32FC2 contains computed gradients
 * @param angleOfs Matrix of type CV_8UC2 contains quantized gradient orientations
 * @param paddingTL Padding from top-left
 * @param paddingBR Padding from bottom-right
 */
- (void)computeGradient:(Mat*)img grad:(Mat*)grad angleOfs:(Mat*)angleOfs paddingTL:(Size2i*)paddingTL paddingBR:(Size2i*)paddingBR NS_SWIFT_NAME(computeGradient(img:grad:angleOfs:paddingTL:paddingBR:));

/**
 *  Computes gradients and quantized gradient orientations.
 * @param img Matrix contains the image to be computed
 * @param grad Matrix of type CV_32FC2 contains computed gradients
 * @param angleOfs Matrix of type CV_8UC2 contains quantized gradient orientations
 * @param paddingTL Padding from top-left
 */
- (void)computeGradient:(Mat*)img grad:(Mat*)grad angleOfs:(Mat*)angleOfs paddingTL:(Size2i*)paddingTL NS_SWIFT_NAME(computeGradient(img:grad:angleOfs:paddingTL:));

/**
 *  Computes gradients and quantized gradient orientations.
 * @param img Matrix contains the image to be computed
 * @param grad Matrix of type CV_32FC2 contains computed gradients
 * @param angleOfs Matrix of type CV_8UC2 contains quantized gradient orientations
 */
- (void)computeGradient:(Mat*)img grad:(Mat*)grad angleOfs:(Mat*)angleOfs NS_SWIFT_NAME(computeGradient(img:grad:angleOfs:));


//
//  void cv::HOGDescriptor::detect(Mat img, vector_Point& foundLocations, vector_double& weights, double hitThreshold = 0, Size winStride = Size(), Size padding = Size(), vector_Point searchLocations = std::vector<Point>())
//
/**
 * Performs object detection without a multi-scale window.
 * @param img Matrix of the type CV_8U or CV_8UC3 containing an image where objects are detected.
 * @param foundLocations Vector of point where each point contains left-top corner point of detected object boundaries.
 * @param weights Vector that will contain confidence values for each detected object.
 * @param hitThreshold Threshold for the distance between features and SVM classifying plane.
 *     Usually it is 0 and should be specified in the detector coefficients (as the last free coefficient).
 *     But if the free coefficient is omitted (which is allowed), you can specify it manually here.
 * @param winStride Window stride. It must be a multiple of block stride.
 * @param padding Padding
 * @param searchLocations Vector of Point includes set of requested locations to be evaluated.
 */
- (void)detect:(Mat*)img foundLocations:(NSMutableArray<Point2i*>*)foundLocations weights:(DoubleVector*)weights hitThreshold:(double)hitThreshold winStride:(Size2i*)winStride padding:(Size2i*)padding searchLocations:(NSArray<Point2i*>*)searchLocations NS_SWIFT_NAME(detect(img:foundLocations:weights:hitThreshold:winStride:padding:searchLocations:));

/**
 * Performs object detection without a multi-scale window.
 * @param img Matrix of the type CV_8U or CV_8UC3 containing an image where objects are detected.
 * @param foundLocations Vector of point where each point contains left-top corner point of detected object boundaries.
 * @param weights Vector that will contain confidence values for each detected object.
 * @param hitThreshold Threshold for the distance between features and SVM classifying plane.
 *     Usually it is 0 and should be specified in the detector coefficients (as the last free coefficient).
 *     But if the free coefficient is omitted (which is allowed), you can specify it manually here.
 * @param winStride Window stride. It must be a multiple of block stride.
 * @param padding Padding
 */
- (void)detect:(Mat*)img foundLocations:(NSMutableArray<Point2i*>*)foundLocations weights:(DoubleVector*)weights hitThreshold:(double)hitThreshold winStride:(Size2i*)winStride padding:(Size2i*)padding NS_SWIFT_NAME(detect(img:foundLocations:weights:hitThreshold:winStride:padding:));

/**
 * Performs object detection without a multi-scale window.
 * @param img Matrix of the type CV_8U or CV_8UC3 containing an image where objects are detected.
 * @param foundLocations Vector of point where each point contains left-top corner point of detected object boundaries.
 * @param weights Vector that will contain confidence values for each detected object.
 * @param hitThreshold Threshold for the distance between features and SVM classifying plane.
 *     Usually it is 0 and should be specified in the detector coefficients (as the last free coefficient).
 *     But if the free coefficient is omitted (which is allowed), you can specify it manually here.
 * @param winStride Window stride. It must be a multiple of block stride.
 */
- (void)detect:(Mat*)img foundLocations:(NSMutableArray<Point2i*>*)foundLocations weights:(DoubleVector*)weights hitThreshold:(double)hitThreshold winStride:(Size2i*)winStride NS_SWIFT_NAME(detect(img:foundLocations:weights:hitThreshold:winStride:));

/**
 * Performs object detection without a multi-scale window.
 * @param img Matrix of the type CV_8U or CV_8UC3 containing an image where objects are detected.
 * @param foundLocations Vector of point where each point contains left-top corner point of detected object boundaries.
 * @param weights Vector that will contain confidence values for each detected object.
 * @param hitThreshold Threshold for the distance between features and SVM classifying plane.
 *     Usually it is 0 and should be specified in the detector coefficients (as the last free coefficient).
 *     But if the free coefficient is omitted (which is allowed), you can specify it manually here.
 */
- (void)detect:(Mat*)img foundLocations:(NSMutableArray<Point2i*>*)foundLocations weights:(DoubleVector*)weights hitThreshold:(double)hitThreshold NS_SWIFT_NAME(detect(img:foundLocations:weights:hitThreshold:));

/**
 * Performs object detection without a multi-scale window.
 * @param img Matrix of the type CV_8U or CV_8UC3 containing an image where objects are detected.
 * @param foundLocations Vector of point where each point contains left-top corner point of detected object boundaries.
 * @param weights Vector that will contain confidence values for each detected object.
 *     Usually it is 0 and should be specified in the detector coefficients (as the last free coefficient).
 *     But if the free coefficient is omitted (which is allowed), you can specify it manually here.
 */
- (void)detect:(Mat*)img foundLocations:(NSMutableArray<Point2i*>*)foundLocations weights:(DoubleVector*)weights NS_SWIFT_NAME(detect(img:foundLocations:weights:));


//
//  void cv::HOGDescriptor::detectMultiScale(Mat img, vector_Rect& foundLocations, vector_double& foundWeights, double hitThreshold = 0, Size winStride = Size(), Size padding = Size(), double scale = 1.05, double finalThreshold = 2.0, bool useMeanshiftGrouping = false)
//
/**
 * Detects objects of different sizes in the input image. The detected objects are returned as a list
 *     of rectangles.
 * @param img Matrix of the type CV_8U or CV_8UC3 containing an image where objects are detected.
 * @param foundLocations Vector of rectangles where each rectangle contains the detected object.
 * @param foundWeights Vector that will contain confidence values for each detected object.
 * @param hitThreshold Threshold for the distance between features and SVM classifying plane.
 *     Usually it is 0 and should be specified in the detector coefficients (as the last free coefficient).
 *     But if the free coefficient is omitted (which is allowed), you can specify it manually here.
 * @param winStride Window stride. It must be a multiple of block stride.
 * @param padding Padding
 * @param scale Coefficient of the detection window increase.
 * @param finalThreshold Final threshold
 * @param useMeanshiftGrouping indicates grouping algorithm
 */
- (void)detectMultiScale:(Mat*)img foundLocations:(NSMutableArray<Rect2i*>*)foundLocations foundWeights:(DoubleVector*)foundWeights hitThreshold:(double)hitThreshold winStride:(Size2i*)winStride padding:(Size2i*)padding scale:(double)scale finalThreshold:(double)finalThreshold useMeanshiftGrouping:(BOOL)useMeanshiftGrouping NS_SWIFT_NAME(detectMultiScale(img:foundLocations:foundWeights:hitThreshold:winStride:padding:scale:finalThreshold:useMeanshiftGrouping:));

/**
 * Detects objects of different sizes in the input image. The detected objects are returned as a list
 *     of rectangles.
 * @param img Matrix of the type CV_8U or CV_8UC3 containing an image where objects are detected.
 * @param foundLocations Vector of rectangles where each rectangle contains the detected object.
 * @param foundWeights Vector that will contain confidence values for each detected object.
 * @param hitThreshold Threshold for the distance between features and SVM classifying plane.
 *     Usually it is 0 and should be specified in the detector coefficients (as the last free coefficient).
 *     But if the free coefficient is omitted (which is allowed), you can specify it manually here.
 * @param winStride Window stride. It must be a multiple of block stride.
 * @param padding Padding
 * @param scale Coefficient of the detection window increase.
 * @param finalThreshold Final threshold
 */
- (void)detectMultiScale:(Mat*)img foundLocations:(NSMutableArray<Rect2i*>*)foundLocations foundWeights:(DoubleVector*)foundWeights hitThreshold:(double)hitThreshold winStride:(Size2i*)winStride padding:(Size2i*)padding scale:(double)scale finalThreshold:(double)finalThreshold NS_SWIFT_NAME(detectMultiScale(img:foundLocations:foundWeights:hitThreshold:winStride:padding:scale:finalThreshold:));

/**
 * Detects objects of different sizes in the input image. The detected objects are returned as a list
 *     of rectangles.
 * @param img Matrix of the type CV_8U or CV_8UC3 containing an image where objects are detected.
 * @param foundLocations Vector of rectangles where each rectangle contains the detected object.
 * @param foundWeights Vector that will contain confidence values for each detected object.
 * @param hitThreshold Threshold for the distance between features and SVM classifying plane.
 *     Usually it is 0 and should be specified in the detector coefficients (as the last free coefficient).
 *     But if the free coefficient is omitted (which is allowed), you can specify it manually here.
 * @param winStride Window stride. It must be a multiple of block stride.
 * @param padding Padding
 * @param scale Coefficient of the detection window increase.
 */
- (void)detectMultiScale:(Mat*)img foundLocations:(NSMutableArray<Rect2i*>*)foundLocations foundWeights:(DoubleVector*)foundWeights hitThreshold:(double)hitThreshold winStride:(Size2i*)winStride padding:(Size2i*)padding scale:(double)scale NS_SWIFT_NAME(detectMultiScale(img:foundLocations:foundWeights:hitThreshold:winStride:padding:scale:));

/**
 * Detects objects of different sizes in the input image. The detected objects are returned as a list
 *     of rectangles.
 * @param img Matrix of the type CV_8U or CV_8UC3 containing an image where objects are detected.
 * @param foundLocations Vector of rectangles where each rectangle contains the detected object.
 * @param foundWeights Vector that will contain confidence values for each detected object.
 * @param hitThreshold Threshold for the distance between features and SVM classifying plane.
 *     Usually it is 0 and should be specified in the detector coefficients (as the last free coefficient).
 *     But if the free coefficient is omitted (which is allowed), you can specify it manually here.
 * @param winStride Window stride. It must be a multiple of block stride.
 * @param padding Padding
 */
- (void)detectMultiScale:(Mat*)img foundLocations:(NSMutableArray<Rect2i*>*)foundLocations foundWeights:(DoubleVector*)foundWeights hitThreshold:(double)hitThreshold winStride:(Size2i*)winStride padding:(Size2i*)padding NS_SWIFT_NAME(detectMultiScale(img:foundLocations:foundWeights:hitThreshold:winStride:padding:));

/**
 * Detects objects of different sizes in the input image. The detected objects are returned as a list
 *     of rectangles.
 * @param img Matrix of the type CV_8U or CV_8UC3 containing an image where objects are detected.
 * @param foundLocations Vector of rectangles where each rectangle contains the detected object.
 * @param foundWeights Vector that will contain confidence values for each detected object.
 * @param hitThreshold Threshold for the distance between features and SVM classifying plane.
 *     Usually it is 0 and should be specified in the detector coefficients (as the last free coefficient).
 *     But if the free coefficient is omitted (which is allowed), you can specify it manually here.
 * @param winStride Window stride. It must be a multiple of block stride.
 */
- (void)detectMultiScale:(Mat*)img foundLocations:(NSMutableArray<Rect2i*>*)foundLocations foundWeights:(DoubleVector*)foundWeights hitThreshold:(double)hitThreshold winStride:(Size2i*)winStride NS_SWIFT_NAME(detectMultiScale(img:foundLocations:foundWeights:hitThreshold:winStride:));

/**
 * Detects objects of different sizes in the input image. The detected objects are returned as a list
 *     of rectangles.
 * @param img Matrix of the type CV_8U or CV_8UC3 containing an image where objects are detected.
 * @param foundLocations Vector of rectangles where each rectangle contains the detected object.
 * @param foundWeights Vector that will contain confidence values for each detected object.
 * @param hitThreshold Threshold for the distance between features and SVM classifying plane.
 *     Usually it is 0 and should be specified in the detector coefficients (as the last free coefficient).
 *     But if the free coefficient is omitted (which is allowed), you can specify it manually here.
 */
- (void)detectMultiScale:(Mat*)img foundLocations:(NSMutableArray<Rect2i*>*)foundLocations foundWeights:(DoubleVector*)foundWeights hitThreshold:(double)hitThreshold NS_SWIFT_NAME(detectMultiScale(img:foundLocations:foundWeights:hitThreshold:));

/**
 * Detects objects of different sizes in the input image. The detected objects are returned as a list
 *     of rectangles.
 * @param img Matrix of the type CV_8U or CV_8UC3 containing an image where objects are detected.
 * @param foundLocations Vector of rectangles where each rectangle contains the detected object.
 * @param foundWeights Vector that will contain confidence values for each detected object.
 *     Usually it is 0 and should be specified in the detector coefficients (as the last free coefficient).
 *     But if the free coefficient is omitted (which is allowed), you can specify it manually here.
 */
- (void)detectMultiScale:(Mat*)img foundLocations:(NSMutableArray<Rect2i*>*)foundLocations foundWeights:(DoubleVector*)foundWeights NS_SWIFT_NAME(detectMultiScale(img:foundLocations:foundWeights:));


//
//  void cv::HOGDescriptor::save(String filename, String objname = String())
//
/**
 * saves HOGDescriptor parameters and coefficients for the linear SVM classifier to a file
 * @param filename File name
 * @param objname Object name
 */
- (void)save:(NSString*)filename objname:(NSString*)objname NS_SWIFT_NAME(save(filename:objname:));

/**
 * saves HOGDescriptor parameters and coefficients for the linear SVM classifier to a file
 * @param filename File name
 */
- (void)save:(NSString*)filename NS_SWIFT_NAME(save(filename:));


//
//  void cv::HOGDescriptor::setSVMDetector(Mat svmdetector)
//
/**
 * Sets coefficients for the linear SVM classifier.
 * @param svmdetector coefficients for the linear SVM classifier.
 */
- (void)setSVMDetector:(Mat*)svmdetector NS_SWIFT_NAME(setSVMDetector(svmdetector:));


    //
    // C++: Size cv::HOGDescriptor::winSize
    //

@property (readonly) Size2i* winSize;

    //
    // C++: Size cv::HOGDescriptor::blockSize
    //

@property (readonly) Size2i* blockSize;

    //
    // C++: Size cv::HOGDescriptor::blockStride
    //

@property (readonly) Size2i* blockStride;

    //
    // C++: Size cv::HOGDescriptor::cellSize
    //

@property (readonly) Size2i* cellSize;

    //
    // C++: int cv::HOGDescriptor::nbins
    //

@property (readonly) int nbins;

    //
    // C++: int cv::HOGDescriptor::derivAperture
    //

@property (readonly) int derivAperture;

    //
    // C++: double cv::HOGDescriptor::winSigma
    //

@property (readonly) double winSigma;

    //
    // C++: HOGDescriptor_HistogramNormType cv::HOGDescriptor::histogramNormType
    //

@property (readonly) HistogramNormType histogramNormType;

    //
    // C++: double cv::HOGDescriptor::L2HysThreshold
    //

@property (readonly) double L2HysThreshold;

    //
    // C++: bool cv::HOGDescriptor::gammaCorrection
    //

@property (readonly) BOOL gammaCorrection;

    //
    // C++: vector_float cv::HOGDescriptor::svmDetector
    //

@property (readonly) FloatVector* svmDetector;

    //
    // C++: int cv::HOGDescriptor::nlevels
    //

@property (readonly) int nlevels;

    //
    // C++: bool cv::HOGDescriptor::signedGradient
    //

@property (readonly) BOOL signedGradient;


@end

NS_ASSUME_NONNULL_END



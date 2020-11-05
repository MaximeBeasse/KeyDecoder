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

@class BackgroundSubtractorKNN;
@class BackgroundSubtractorMOG2;
@class Mat;
@class Rect2i;
@class RotatedRect;
@class Size2i;
@class TermCriteria;



NS_ASSUME_NONNULL_BEGIN

// C++: class Video
/**
 * The Video module
 *
 * Member classes: `BackgroundSubtractor`, `BackgroundSubtractorMOG2`, `BackgroundSubtractorKNN`, `KalmanFilter`, `DenseOpticalFlow`, `SparseOpticalFlow`, `FarnebackOpticalFlow`, `VariationalRefinement`, `DISOpticalFlow`, `SparsePyrLKOpticalFlow`
 *
 */
CV_EXPORTS @interface Video : NSObject

#pragma mark - Class Constants


@property (class, readonly) int OPTFLOW_USE_INITIAL_FLOW NS_SWIFT_NAME(OPTFLOW_USE_INITIAL_FLOW);
@property (class, readonly) int OPTFLOW_LK_GET_MIN_EIGENVALS NS_SWIFT_NAME(OPTFLOW_LK_GET_MIN_EIGENVALS);
@property (class, readonly) int OPTFLOW_FARNEBACK_GAUSSIAN NS_SWIFT_NAME(OPTFLOW_FARNEBACK_GAUSSIAN);
@property (class, readonly) int MOTION_TRANSLATION NS_SWIFT_NAME(MOTION_TRANSLATION);
@property (class, readonly) int MOTION_EUCLIDEAN NS_SWIFT_NAME(MOTION_EUCLIDEAN);
@property (class, readonly) int MOTION_AFFINE NS_SWIFT_NAME(MOTION_AFFINE);
@property (class, readonly) int MOTION_HOMOGRAPHY NS_SWIFT_NAME(MOTION_HOMOGRAPHY);

#pragma mark - Methods


//
//  Mat cv::readOpticalFlow(String path)
//
/**
 * Read a .flo file
 *
 * @param path Path to the file to be loaded
 *
 *  The function readOpticalFlow loads a flow field from a file and returns it as a single matrix.
 *  Resulting Mat has a type CV_32FC2 - floating-point, 2-channel. First channel corresponds to the
 *  flow in the horizontal direction (u), second - vertical (v).
 */
+ (Mat*)readOpticalFlow:(NSString*)path NS_SWIFT_NAME(readOpticalFlow(path:));


//
//  Ptr_BackgroundSubtractorKNN cv::createBackgroundSubtractorKNN(int history = 500, double dist2Threshold = 400.0, bool detectShadows = true)
//
/**
 * Creates KNN Background Subtractor
 *
 * @param history Length of the history.
 * @param dist2Threshold Threshold on the squared distance between the pixel and the sample to decide
 * whether a pixel is close to that sample. This parameter does not affect the background update.
 * @param detectShadows If true, the algorithm will detect shadows and mark them. It decreases the
 * speed a bit, so if you do not need this feature, set the parameter to false.
 */
+ (BackgroundSubtractorKNN*)createBackgroundSubtractorKNN:(int)history dist2Threshold:(double)dist2Threshold detectShadows:(BOOL)detectShadows NS_SWIFT_NAME(createBackgroundSubtractorKNN(history:dist2Threshold:detectShadows:));

/**
 * Creates KNN Background Subtractor
 *
 * @param history Length of the history.
 * @param dist2Threshold Threshold on the squared distance between the pixel and the sample to decide
 * whether a pixel is close to that sample. This parameter does not affect the background update.
 * speed a bit, so if you do not need this feature, set the parameter to false.
 */
+ (BackgroundSubtractorKNN*)createBackgroundSubtractorKNN:(int)history dist2Threshold:(double)dist2Threshold NS_SWIFT_NAME(createBackgroundSubtractorKNN(history:dist2Threshold:));

/**
 * Creates KNN Background Subtractor
 *
 * @param history Length of the history.
 * whether a pixel is close to that sample. This parameter does not affect the background update.
 * speed a bit, so if you do not need this feature, set the parameter to false.
 */
+ (BackgroundSubtractorKNN*)createBackgroundSubtractorKNN:(int)history NS_SWIFT_NAME(createBackgroundSubtractorKNN(history:));

/**
 * Creates KNN Background Subtractor
 *
 * whether a pixel is close to that sample. This parameter does not affect the background update.
 * speed a bit, so if you do not need this feature, set the parameter to false.
 */
+ (BackgroundSubtractorKNN*)createBackgroundSubtractorKNN NS_SWIFT_NAME(createBackgroundSubtractorKNN());


//
//  Ptr_BackgroundSubtractorMOG2 cv::createBackgroundSubtractorMOG2(int history = 500, double varThreshold = 16, bool detectShadows = true)
//
/**
 * Creates MOG2 Background Subtractor
 *
 * @param history Length of the history.
 * @param varThreshold Threshold on the squared Mahalanobis distance between the pixel and the model
 * to decide whether a pixel is well described by the background model. This parameter does not
 * affect the background update.
 * @param detectShadows If true, the algorithm will detect shadows and mark them. It decreases the
 * speed a bit, so if you do not need this feature, set the parameter to false.
 */
+ (BackgroundSubtractorMOG2*)createBackgroundSubtractorMOG2:(int)history varThreshold:(double)varThreshold detectShadows:(BOOL)detectShadows NS_SWIFT_NAME(createBackgroundSubtractorMOG2(history:varThreshold:detectShadows:));

/**
 * Creates MOG2 Background Subtractor
 *
 * @param history Length of the history.
 * @param varThreshold Threshold on the squared Mahalanobis distance between the pixel and the model
 * to decide whether a pixel is well described by the background model. This parameter does not
 * affect the background update.
 * speed a bit, so if you do not need this feature, set the parameter to false.
 */
+ (BackgroundSubtractorMOG2*)createBackgroundSubtractorMOG2:(int)history varThreshold:(double)varThreshold NS_SWIFT_NAME(createBackgroundSubtractorMOG2(history:varThreshold:));

/**
 * Creates MOG2 Background Subtractor
 *
 * @param history Length of the history.
 * to decide whether a pixel is well described by the background model. This parameter does not
 * affect the background update.
 * speed a bit, so if you do not need this feature, set the parameter to false.
 */
+ (BackgroundSubtractorMOG2*)createBackgroundSubtractorMOG2:(int)history NS_SWIFT_NAME(createBackgroundSubtractorMOG2(history:));

/**
 * Creates MOG2 Background Subtractor
 *
 * to decide whether a pixel is well described by the background model. This parameter does not
 * affect the background update.
 * speed a bit, so if you do not need this feature, set the parameter to false.
 */
+ (BackgroundSubtractorMOG2*)createBackgroundSubtractorMOG2 NS_SWIFT_NAME(createBackgroundSubtractorMOG2());


//
//  RotatedRect cv::CamShift(Mat probImage, Rect& window, TermCriteria criteria)
//
/**
 * Finds an object center, size, and orientation.
 *
 * @param probImage Back projection of the object histogram. See calcBackProject.
 * @param window Initial search window.
 * @param criteria Stop criteria for the underlying meanShift.
 * returns
 * (in old interfaces) Number of iterations CAMSHIFT took to converge
 * The function implements the CAMSHIFT object tracking algorithm CITE: Bradski98 . First, it finds an
 * object center using meanShift and then adjusts the window size and finds the optimal rotation. The
 * function returns the rotated rectangle structure that includes the object position, size, and
 * orientation. The next position of the search window can be obtained with RotatedRect::boundingRect()
 *
 * See the OpenCV sample camshiftdemo.c that tracks colored objects.
 *
 * @note
 * -   (Python) A sample explaining the camshift tracking algorithm can be found at
 *     opencv_source_code/samples/python/camshift.py
 */
+ (RotatedRect*)CamShift:(Mat*)probImage window:(Rect2i*)window criteria:(TermCriteria*)criteria NS_SWIFT_NAME(CamShift(probImage:window:criteria:));


//
//  bool cv::writeOpticalFlow(String path, Mat flow)
//
/**
 * Write a .flo to disk
 *
 * @param path Path to the file to be written
 * @param flow Flow field to be stored
 *
 *  The function stores a flow field in a file, returns true on success, false otherwise.
 *  The flow field must be a 2-channel, floating-point matrix (CV_32FC2). First channel corresponds
 *  to the flow in the horizontal direction (u), second - vertical (v).
 */
+ (BOOL)writeOpticalFlow:(NSString*)path flow:(Mat*)flow NS_SWIFT_NAME(writeOpticalFlow(path:flow:));


//
//  double cv::computeECC(Mat templateImage, Mat inputImage, Mat inputMask = Mat())
//
/**
 * Computes the Enhanced Correlation Coefficient value between two images CITE: EP08 .
 *
 * @param templateImage single-channel template image; CV_8U or CV_32F array.
 * @param inputImage single-channel input image to be warped to provide an image similar to
 *  templateImage, same type as templateImage.
 * @param inputMask An optional mask to indicate valid values of inputImage.
 *
 * @sa
 * findTransformECC
 */
+ (double)computeECC:(Mat*)templateImage inputImage:(Mat*)inputImage inputMask:(Mat*)inputMask NS_SWIFT_NAME(computeECC(templateImage:inputImage:inputMask:));

/**
 * Computes the Enhanced Correlation Coefficient value between two images CITE: EP08 .
 *
 * @param templateImage single-channel template image; CV_8U or CV_32F array.
 * @param inputImage single-channel input image to be warped to provide an image similar to
 *  templateImage, same type as templateImage.
 *
 * @sa
 * findTransformECC
 */
+ (double)computeECC:(Mat*)templateImage inputImage:(Mat*)inputImage NS_SWIFT_NAME(computeECC(templateImage:inputImage:));


//
//  double cv::findTransformECC(Mat templateImage, Mat inputImage, Mat& warpMatrix, int motionType, TermCriteria criteria, Mat inputMask, int gaussFiltSize)
//
/**
 * Finds the geometric transform (warp) between two images in terms of the ECC criterion CITE: EP08 .
 *
 * @param templateImage single-channel template image; CV_8U or CV_32F array.
 * @param inputImage single-channel input image which should be warped with the final warpMatrix in
 * order to provide an image similar to templateImage, same type as templateImage.
 * @param warpMatrix floating-point `$$2\times 3$$` or `$$3\times 3$$` mapping matrix (warp).
 * @param motionType parameter, specifying the type of motion:
 *  -   **MOTION_TRANSLATION** sets a translational motion model; warpMatrix is `$$2\times 3$$` with
 *      the first `$$2\times 2$$` part being the unity matrix and the rest two parameters being
 *      estimated.
 *  -   **MOTION_EUCLIDEAN** sets a Euclidean (rigid) transformation as motion model; three
 *      parameters are estimated; warpMatrix is `$$2\times 3$$`.
 *  -   **MOTION_AFFINE** sets an affine motion model (DEFAULT); six parameters are estimated;
 *      warpMatrix is `$$2\times 3$$`.
 *  -   **MOTION_HOMOGRAPHY** sets a homography as a motion model; eight parameters are
 *      estimated;\`warpMatrix\` is `$$3\times 3$$`.
 * @param criteria parameter, specifying the termination criteria of the ECC algorithm;
 * criteria.epsilon defines the threshold of the increment in the correlation coefficient between two
 * iterations (a negative criteria.epsilon makes criteria.maxcount the only termination criterion).
 * Default values are shown in the declaration above.
 * @param inputMask An optional mask to indicate valid values of inputImage.
 * @param gaussFiltSize An optional value indicating size of gaussian blur filter; (DEFAULT: 5)
 *
 * The function estimates the optimum transformation (warpMatrix) with respect to ECC criterion
 * (CITE: EP08), that is
 *
 * `$$\texttt{warpMatrix} = \arg\max_{W} \texttt{ECC}(\texttt{templateImage}(x,y),\texttt{inputImage}(x',y'))$$`
 *
 * where
 *
 * `$$\begin{bmatrix} x' \\ y' \end{bmatrix} = W \cdot \begin{bmatrix} x \\ y \\ 1 \end{bmatrix}$$`
 *
 * (the equation holds with homogeneous coordinates for homography). It returns the final enhanced
 * correlation coefficient, that is the correlation coefficient between the template image and the
 * final warped input image. When a `$$3\times 3$$` matrix is given with motionType =0, 1 or 2, the third
 * row is ignored.
 *
 * Unlike findHomography and estimateRigidTransform, the function findTransformECC implements an
 * area-based alignment that builds on intensity similarities. In essence, the function updates the
 * initial transformation that roughly aligns the images. If this information is missing, the identity
 * warp (unity matrix) is used as an initialization. Note that if images undergo strong
 * displacements/rotations, an initial transformation that roughly aligns the images is necessary
 * (e.g., a simple euclidean/similarity transform that allows for the images showing the same image
 * content approximately). Use inverse warping in the second image to take an image close to the first
 * one, i.e. use the flag WARP_INVERSE_MAP with warpAffine or warpPerspective. See also the OpenCV
 * sample image_alignment.cpp that demonstrates the use of the function. Note that the function throws
 * an exception if algorithm does not converges.
 *
 * @sa
 * computeECC, estimateAffine2D, estimateAffinePartial2D, findHomography
 */
+ (double)findTransformECC:(Mat*)templateImage inputImage:(Mat*)inputImage warpMatrix:(Mat*)warpMatrix motionType:(int)motionType criteria:(TermCriteria*)criteria inputMask:(Mat*)inputMask gaussFiltSize:(int)gaussFiltSize NS_SWIFT_NAME(findTransformECC(templateImage:inputImage:warpMatrix:motionType:criteria:inputMask:gaussFiltSize:));


//
//  int cv::buildOpticalFlowPyramid(Mat img, vector_Mat& pyramid, Size winSize, int maxLevel, bool withDerivatives = true, int pyrBorder = BORDER_REFLECT_101, int derivBorder = BORDER_CONSTANT, bool tryReuseInputImage = true)
//
/**
 * Constructs the image pyramid which can be passed to calcOpticalFlowPyrLK.
 *
 * @param img 8-bit input image.
 * @param pyramid output pyramid.
 * @param winSize window size of optical flow algorithm. Must be not less than winSize argument of
 * calcOpticalFlowPyrLK. It is needed to calculate required padding for pyramid levels.
 * @param maxLevel 0-based maximal pyramid level number.
 * @param withDerivatives set to precompute gradients for the every pyramid level. If pyramid is
 * constructed without the gradients then calcOpticalFlowPyrLK will calculate them internally.
 * @param pyrBorder the border mode for pyramid layers.
 * @param derivBorder the border mode for gradients.
 * @param tryReuseInputImage put ROI of input image into the pyramid if possible. You can pass false
 * to force data copying.
 * @return number of levels in constructed pyramid. Can be less than maxLevel.
 */
+ (int)buildOpticalFlowPyramid:(Mat*)img pyramid:(NSMutableArray<Mat*>*)pyramid winSize:(Size2i*)winSize maxLevel:(int)maxLevel withDerivatives:(BOOL)withDerivatives pyrBorder:(int)pyrBorder derivBorder:(int)derivBorder tryReuseInputImage:(BOOL)tryReuseInputImage NS_SWIFT_NAME(buildOpticalFlowPyramid(img:pyramid:winSize:maxLevel:withDerivatives:pyrBorder:derivBorder:tryReuseInputImage:));

/**
 * Constructs the image pyramid which can be passed to calcOpticalFlowPyrLK.
 *
 * @param img 8-bit input image.
 * @param pyramid output pyramid.
 * @param winSize window size of optical flow algorithm. Must be not less than winSize argument of
 * calcOpticalFlowPyrLK. It is needed to calculate required padding for pyramid levels.
 * @param maxLevel 0-based maximal pyramid level number.
 * @param withDerivatives set to precompute gradients for the every pyramid level. If pyramid is
 * constructed without the gradients then calcOpticalFlowPyrLK will calculate them internally.
 * @param pyrBorder the border mode for pyramid layers.
 * @param derivBorder the border mode for gradients.
 * to force data copying.
 * @return number of levels in constructed pyramid. Can be less than maxLevel.
 */
+ (int)buildOpticalFlowPyramid:(Mat*)img pyramid:(NSMutableArray<Mat*>*)pyramid winSize:(Size2i*)winSize maxLevel:(int)maxLevel withDerivatives:(BOOL)withDerivatives pyrBorder:(int)pyrBorder derivBorder:(int)derivBorder NS_SWIFT_NAME(buildOpticalFlowPyramid(img:pyramid:winSize:maxLevel:withDerivatives:pyrBorder:derivBorder:));

/**
 * Constructs the image pyramid which can be passed to calcOpticalFlowPyrLK.
 *
 * @param img 8-bit input image.
 * @param pyramid output pyramid.
 * @param winSize window size of optical flow algorithm. Must be not less than winSize argument of
 * calcOpticalFlowPyrLK. It is needed to calculate required padding for pyramid levels.
 * @param maxLevel 0-based maximal pyramid level number.
 * @param withDerivatives set to precompute gradients for the every pyramid level. If pyramid is
 * constructed without the gradients then calcOpticalFlowPyrLK will calculate them internally.
 * @param pyrBorder the border mode for pyramid layers.
 * to force data copying.
 * @return number of levels in constructed pyramid. Can be less than maxLevel.
 */
+ (int)buildOpticalFlowPyramid:(Mat*)img pyramid:(NSMutableArray<Mat*>*)pyramid winSize:(Size2i*)winSize maxLevel:(int)maxLevel withDerivatives:(BOOL)withDerivatives pyrBorder:(int)pyrBorder NS_SWIFT_NAME(buildOpticalFlowPyramid(img:pyramid:winSize:maxLevel:withDerivatives:pyrBorder:));

/**
 * Constructs the image pyramid which can be passed to calcOpticalFlowPyrLK.
 *
 * @param img 8-bit input image.
 * @param pyramid output pyramid.
 * @param winSize window size of optical flow algorithm. Must be not less than winSize argument of
 * calcOpticalFlowPyrLK. It is needed to calculate required padding for pyramid levels.
 * @param maxLevel 0-based maximal pyramid level number.
 * @param withDerivatives set to precompute gradients for the every pyramid level. If pyramid is
 * constructed without the gradients then calcOpticalFlowPyrLK will calculate them internally.
 * to force data copying.
 * @return number of levels in constructed pyramid. Can be less than maxLevel.
 */
+ (int)buildOpticalFlowPyramid:(Mat*)img pyramid:(NSMutableArray<Mat*>*)pyramid winSize:(Size2i*)winSize maxLevel:(int)maxLevel withDerivatives:(BOOL)withDerivatives NS_SWIFT_NAME(buildOpticalFlowPyramid(img:pyramid:winSize:maxLevel:withDerivatives:));

/**
 * Constructs the image pyramid which can be passed to calcOpticalFlowPyrLK.
 *
 * @param img 8-bit input image.
 * @param pyramid output pyramid.
 * @param winSize window size of optical flow algorithm. Must be not less than winSize argument of
 * calcOpticalFlowPyrLK. It is needed to calculate required padding for pyramid levels.
 * @param maxLevel 0-based maximal pyramid level number.
 * constructed without the gradients then calcOpticalFlowPyrLK will calculate them internally.
 * to force data copying.
 * @return number of levels in constructed pyramid. Can be less than maxLevel.
 */
+ (int)buildOpticalFlowPyramid:(Mat*)img pyramid:(NSMutableArray<Mat*>*)pyramid winSize:(Size2i*)winSize maxLevel:(int)maxLevel NS_SWIFT_NAME(buildOpticalFlowPyramid(img:pyramid:winSize:maxLevel:));


//
//  int cv::meanShift(Mat probImage, Rect& window, TermCriteria criteria)
//
/**
 * Finds an object on a back projection image.
 *
 * @param probImage Back projection of the object histogram. See calcBackProject for details.
 * @param window Initial search window.
 * @param criteria Stop criteria for the iterative search algorithm.
 * returns
 * :   Number of iterations CAMSHIFT took to converge.
 * The function implements the iterative object search algorithm. It takes the input back projection of
 * an object and the initial position. The mass center in window of the back projection image is
 * computed and the search window center shifts to the mass center. The procedure is repeated until the
 * specified number of iterations criteria.maxCount is done or until the window center shifts by less
 * than criteria.epsilon. The algorithm is used inside CamShift and, unlike CamShift , the search
 * window size or orientation do not change during the search. You can simply pass the output of
 * calcBackProject to this function. But better results can be obtained if you pre-filter the back
 * projection and remove the noise. For example, you can do this by retrieving connected components
 * with findContours , throwing away contours with small area ( contourArea ), and rendering the
 * remaining contours with drawContours.
 */
+ (int)meanShift:(Mat*)probImage window:(Rect2i*)window criteria:(TermCriteria*)criteria NS_SWIFT_NAME(meanShift(probImage:window:criteria:));


//
//  void cv::calcOpticalFlowFarneback(Mat prev, Mat next, Mat& flow, double pyr_scale, int levels, int winsize, int iterations, int poly_n, double poly_sigma, int flags)
//
/**
 * Computes a dense optical flow using the Gunnar Farneback's algorithm.
 *
 * @param prev first 8-bit single-channel input image.
 * @param next second input image of the same size and the same type as prev.
 * @param flow computed flow image that has the same size as prev and type CV_32FC2.
 * @param pyr_scale parameter, specifying the image scale (\<1) to build pyramids for each image;
 * pyr_scale=0.5 means a classical pyramid, where each next layer is twice smaller than the previous
 * one.
 * @param levels number of pyramid layers including the initial image; levels=1 means that no extra
 * layers are created and only the original images are used.
 * @param winsize averaging window size; larger values increase the algorithm robustness to image
 * noise and give more chances for fast motion detection, but yield more blurred motion field.
 * @param iterations number of iterations the algorithm does at each pyramid level.
 * @param poly_n size of the pixel neighborhood used to find polynomial expansion in each pixel;
 * larger values mean that the image will be approximated with smoother surfaces, yielding more
 * robust algorithm and more blurred motion field, typically poly_n =5 or 7.
 * @param poly_sigma standard deviation of the Gaussian that is used to smooth derivatives used as a
 * basis for the polynomial expansion; for poly_n=5, you can set poly_sigma=1.1, for poly_n=7, a
 * good value would be poly_sigma=1.5.
 * @param flags operation flags that can be a combination of the following:
 *  -   **OPTFLOW_USE_INITIAL_FLOW** uses the input flow as an initial flow approximation.
 *  -   **OPTFLOW_FARNEBACK_GAUSSIAN** uses the Gaussian `$$\texttt{winsize}\times\texttt{winsize}$$`
 *      filter instead of a box filter of the same size for optical flow estimation; usually, this
 *      option gives z more accurate flow than with a box filter, at the cost of lower speed;
 *      normally, winsize for a Gaussian window should be set to a larger value to achieve the same
 *      level of robustness.
 *
 * The function finds an optical flow for each prev pixel using the CITE: Farneback2003 algorithm so that
 *
 * `$$\texttt{prev} (y,x)  \sim \texttt{next} ( y + \texttt{flow} (y,x)[1],  x + \texttt{flow} (y,x)[0])$$`
 *
 * @note
 *
 * -   An example using the optical flow algorithm described by Gunnar Farneback can be found at
 *     opencv_source_code/samples/cpp/fback.cpp
 * -   (Python) An example using the optical flow algorithm described by Gunnar Farneback can be
 *     found at opencv_source_code/samples/python/opt_flow.py
 */
+ (void)calcOpticalFlowFarneback:(Mat*)prev next:(Mat*)next flow:(Mat*)flow pyr_scale:(double)pyr_scale levels:(int)levels winsize:(int)winsize iterations:(int)iterations poly_n:(int)poly_n poly_sigma:(double)poly_sigma flags:(int)flags NS_SWIFT_NAME(calcOpticalFlowFarneback(prev:next:flow:pyr_scale:levels:winsize:iterations:poly_n:poly_sigma:flags:));


//
//  void cv::calcOpticalFlowPyrLK(Mat prevImg, Mat nextImg, Mat prevPts, Mat& nextPts, Mat& status, Mat& err, Size winSize = Size(21,21), int maxLevel = 3, TermCriteria criteria = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 0.01), int flags = 0, double minEigThreshold = 1e-4)
//
/**
 * Calculates an optical flow for a sparse feature set using the iterative Lucas-Kanade method with
 * pyramids.
 *
 * @param prevImg first 8-bit input image or pyramid constructed by buildOpticalFlowPyramid.
 * @param nextImg second input image or pyramid of the same size and the same type as prevImg.
 * @param prevPts vector of 2D points for which the flow needs to be found; point coordinates must be
 * single-precision floating-point numbers.
 * @param nextPts output vector of 2D points (with single-precision floating-point coordinates)
 * containing the calculated new positions of input features in the second image; when
 * OPTFLOW_USE_INITIAL_FLOW flag is passed, the vector must have the same size as in the input.
 * @param status output status vector (of unsigned chars); each element of the vector is set to 1 if
 * the flow for the corresponding features has been found, otherwise, it is set to 0.
 * @param err output vector of errors; each element of the vector is set to an error for the
 * corresponding feature, type of the error measure can be set in flags parameter; if the flow wasn't
 * found then the error is not defined (use the status parameter to find such cases).
 * @param winSize size of the search window at each pyramid level.
 * @param maxLevel 0-based maximal pyramid level number; if set to 0, pyramids are not used (single
 * level), if set to 1, two levels are used, and so on; if pyramids are passed to input then
 * algorithm will use as many levels as pyramids have but no more than maxLevel.
 * @param criteria parameter, specifying the termination criteria of the iterative search algorithm
 * (after the specified maximum number of iterations criteria.maxCount or when the search window
 * moves by less than criteria.epsilon.
 * @param flags operation flags:
 *  -   **OPTFLOW_USE_INITIAL_FLOW** uses initial estimations, stored in nextPts; if the flag is
 *      not set, then prevPts is copied to nextPts and is considered the initial estimate.
 *  -   **OPTFLOW_LK_GET_MIN_EIGENVALS** use minimum eigen values as an error measure (see
 *      minEigThreshold description); if the flag is not set, then L1 distance between patches
 *      around the original and a moved point, divided by number of pixels in a window, is used as a
 *      error measure.
 * @param minEigThreshold the algorithm calculates the minimum eigen value of a 2x2 normal matrix of
 * optical flow equations (this matrix is called a spatial gradient matrix in CITE: Bouguet00), divided
 * by number of pixels in a window; if this value is less than minEigThreshold, then a corresponding
 * feature is filtered out and its flow is not processed, so it allows to remove bad points and get a
 * performance boost.
 *
 * The function implements a sparse iterative version of the Lucas-Kanade optical flow in pyramids. See
 * CITE: Bouguet00 . The function is parallelized with the TBB library.
 *
 * @note
 *
 * -   An example using the Lucas-Kanade optical flow algorithm can be found at
 *     opencv_source_code/samples/cpp/lkdemo.cpp
 * -   (Python) An example using the Lucas-Kanade optical flow algorithm can be found at
 *     opencv_source_code/samples/python/lk_track.py
 * -   (Python) An example using the Lucas-Kanade tracker for homography matching can be found at
 *     opencv_source_code/samples/python/lk_homography.py
 */
+ (void)calcOpticalFlowPyrLK:(Mat*)prevImg nextImg:(Mat*)nextImg prevPts:(Mat*)prevPts nextPts:(Mat*)nextPts status:(Mat*)status err:(Mat*)err winSize:(Size2i*)winSize maxLevel:(int)maxLevel criteria:(TermCriteria*)criteria flags:(int)flags minEigThreshold:(double)minEigThreshold NS_SWIFT_NAME(calcOpticalFlowPyrLK(prevImg:nextImg:prevPts:nextPts:status:err:winSize:maxLevel:criteria:flags:minEigThreshold:));

/**
 * Calculates an optical flow for a sparse feature set using the iterative Lucas-Kanade method with
 * pyramids.
 *
 * @param prevImg first 8-bit input image or pyramid constructed by buildOpticalFlowPyramid.
 * @param nextImg second input image or pyramid of the same size and the same type as prevImg.
 * @param prevPts vector of 2D points for which the flow needs to be found; point coordinates must be
 * single-precision floating-point numbers.
 * @param nextPts output vector of 2D points (with single-precision floating-point coordinates)
 * containing the calculated new positions of input features in the second image; when
 * OPTFLOW_USE_INITIAL_FLOW flag is passed, the vector must have the same size as in the input.
 * @param status output status vector (of unsigned chars); each element of the vector is set to 1 if
 * the flow for the corresponding features has been found, otherwise, it is set to 0.
 * @param err output vector of errors; each element of the vector is set to an error for the
 * corresponding feature, type of the error measure can be set in flags parameter; if the flow wasn't
 * found then the error is not defined (use the status parameter to find such cases).
 * @param winSize size of the search window at each pyramid level.
 * @param maxLevel 0-based maximal pyramid level number; if set to 0, pyramids are not used (single
 * level), if set to 1, two levels are used, and so on; if pyramids are passed to input then
 * algorithm will use as many levels as pyramids have but no more than maxLevel.
 * @param criteria parameter, specifying the termination criteria of the iterative search algorithm
 * (after the specified maximum number of iterations criteria.maxCount or when the search window
 * moves by less than criteria.epsilon.
 * @param flags operation flags:
 *  -   **OPTFLOW_USE_INITIAL_FLOW** uses initial estimations, stored in nextPts; if the flag is
 *      not set, then prevPts is copied to nextPts and is considered the initial estimate.
 *  -   **OPTFLOW_LK_GET_MIN_EIGENVALS** use minimum eigen values as an error measure (see
 *      minEigThreshold description); if the flag is not set, then L1 distance between patches
 *      around the original and a moved point, divided by number of pixels in a window, is used as a
 *      error measure.
 * optical flow equations (this matrix is called a spatial gradient matrix in CITE: Bouguet00), divided
 * by number of pixels in a window; if this value is less than minEigThreshold, then a corresponding
 * feature is filtered out and its flow is not processed, so it allows to remove bad points and get a
 * performance boost.
 *
 * The function implements a sparse iterative version of the Lucas-Kanade optical flow in pyramids. See
 * CITE: Bouguet00 . The function is parallelized with the TBB library.
 *
 * @note
 *
 * -   An example using the Lucas-Kanade optical flow algorithm can be found at
 *     opencv_source_code/samples/cpp/lkdemo.cpp
 * -   (Python) An example using the Lucas-Kanade optical flow algorithm can be found at
 *     opencv_source_code/samples/python/lk_track.py
 * -   (Python) An example using the Lucas-Kanade tracker for homography matching can be found at
 *     opencv_source_code/samples/python/lk_homography.py
 */
+ (void)calcOpticalFlowPyrLK:(Mat*)prevImg nextImg:(Mat*)nextImg prevPts:(Mat*)prevPts nextPts:(Mat*)nextPts status:(Mat*)status err:(Mat*)err winSize:(Size2i*)winSize maxLevel:(int)maxLevel criteria:(TermCriteria*)criteria flags:(int)flags NS_SWIFT_NAME(calcOpticalFlowPyrLK(prevImg:nextImg:prevPts:nextPts:status:err:winSize:maxLevel:criteria:flags:));

/**
 * Calculates an optical flow for a sparse feature set using the iterative Lucas-Kanade method with
 * pyramids.
 *
 * @param prevImg first 8-bit input image or pyramid constructed by buildOpticalFlowPyramid.
 * @param nextImg second input image or pyramid of the same size and the same type as prevImg.
 * @param prevPts vector of 2D points for which the flow needs to be found; point coordinates must be
 * single-precision floating-point numbers.
 * @param nextPts output vector of 2D points (with single-precision floating-point coordinates)
 * containing the calculated new positions of input features in the second image; when
 * OPTFLOW_USE_INITIAL_FLOW flag is passed, the vector must have the same size as in the input.
 * @param status output status vector (of unsigned chars); each element of the vector is set to 1 if
 * the flow for the corresponding features has been found, otherwise, it is set to 0.
 * @param err output vector of errors; each element of the vector is set to an error for the
 * corresponding feature, type of the error measure can be set in flags parameter; if the flow wasn't
 * found then the error is not defined (use the status parameter to find such cases).
 * @param winSize size of the search window at each pyramid level.
 * @param maxLevel 0-based maximal pyramid level number; if set to 0, pyramids are not used (single
 * level), if set to 1, two levels are used, and so on; if pyramids are passed to input then
 * algorithm will use as many levels as pyramids have but no more than maxLevel.
 * @param criteria parameter, specifying the termination criteria of the iterative search algorithm
 * (after the specified maximum number of iterations criteria.maxCount or when the search window
 * moves by less than criteria.epsilon.
 *  -   **OPTFLOW_USE_INITIAL_FLOW** uses initial estimations, stored in nextPts; if the flag is
 *      not set, then prevPts is copied to nextPts and is considered the initial estimate.
 *  -   **OPTFLOW_LK_GET_MIN_EIGENVALS** use minimum eigen values as an error measure (see
 *      minEigThreshold description); if the flag is not set, then L1 distance between patches
 *      around the original and a moved point, divided by number of pixels in a window, is used as a
 *      error measure.
 * optical flow equations (this matrix is called a spatial gradient matrix in CITE: Bouguet00), divided
 * by number of pixels in a window; if this value is less than minEigThreshold, then a corresponding
 * feature is filtered out and its flow is not processed, so it allows to remove bad points and get a
 * performance boost.
 *
 * The function implements a sparse iterative version of the Lucas-Kanade optical flow in pyramids. See
 * CITE: Bouguet00 . The function is parallelized with the TBB library.
 *
 * @note
 *
 * -   An example using the Lucas-Kanade optical flow algorithm can be found at
 *     opencv_source_code/samples/cpp/lkdemo.cpp
 * -   (Python) An example using the Lucas-Kanade optical flow algorithm can be found at
 *     opencv_source_code/samples/python/lk_track.py
 * -   (Python) An example using the Lucas-Kanade tracker for homography matching can be found at
 *     opencv_source_code/samples/python/lk_homography.py
 */
+ (void)calcOpticalFlowPyrLK:(Mat*)prevImg nextImg:(Mat*)nextImg prevPts:(Mat*)prevPts nextPts:(Mat*)nextPts status:(Mat*)status err:(Mat*)err winSize:(Size2i*)winSize maxLevel:(int)maxLevel criteria:(TermCriteria*)criteria NS_SWIFT_NAME(calcOpticalFlowPyrLK(prevImg:nextImg:prevPts:nextPts:status:err:winSize:maxLevel:criteria:));

/**
 * Calculates an optical flow for a sparse feature set using the iterative Lucas-Kanade method with
 * pyramids.
 *
 * @param prevImg first 8-bit input image or pyramid constructed by buildOpticalFlowPyramid.
 * @param nextImg second input image or pyramid of the same size and the same type as prevImg.
 * @param prevPts vector of 2D points for which the flow needs to be found; point coordinates must be
 * single-precision floating-point numbers.
 * @param nextPts output vector of 2D points (with single-precision floating-point coordinates)
 * containing the calculated new positions of input features in the second image; when
 * OPTFLOW_USE_INITIAL_FLOW flag is passed, the vector must have the same size as in the input.
 * @param status output status vector (of unsigned chars); each element of the vector is set to 1 if
 * the flow for the corresponding features has been found, otherwise, it is set to 0.
 * @param err output vector of errors; each element of the vector is set to an error for the
 * corresponding feature, type of the error measure can be set in flags parameter; if the flow wasn't
 * found then the error is not defined (use the status parameter to find such cases).
 * @param winSize size of the search window at each pyramid level.
 * @param maxLevel 0-based maximal pyramid level number; if set to 0, pyramids are not used (single
 * level), if set to 1, two levels are used, and so on; if pyramids are passed to input then
 * algorithm will use as many levels as pyramids have but no more than maxLevel.
 * (after the specified maximum number of iterations criteria.maxCount or when the search window
 * moves by less than criteria.epsilon.
 *  -   **OPTFLOW_USE_INITIAL_FLOW** uses initial estimations, stored in nextPts; if the flag is
 *      not set, then prevPts is copied to nextPts and is considered the initial estimate.
 *  -   **OPTFLOW_LK_GET_MIN_EIGENVALS** use minimum eigen values as an error measure (see
 *      minEigThreshold description); if the flag is not set, then L1 distance between patches
 *      around the original and a moved point, divided by number of pixels in a window, is used as a
 *      error measure.
 * optical flow equations (this matrix is called a spatial gradient matrix in CITE: Bouguet00), divided
 * by number of pixels in a window; if this value is less than minEigThreshold, then a corresponding
 * feature is filtered out and its flow is not processed, so it allows to remove bad points and get a
 * performance boost.
 *
 * The function implements a sparse iterative version of the Lucas-Kanade optical flow in pyramids. See
 * CITE: Bouguet00 . The function is parallelized with the TBB library.
 *
 * @note
 *
 * -   An example using the Lucas-Kanade optical flow algorithm can be found at
 *     opencv_source_code/samples/cpp/lkdemo.cpp
 * -   (Python) An example using the Lucas-Kanade optical flow algorithm can be found at
 *     opencv_source_code/samples/python/lk_track.py
 * -   (Python) An example using the Lucas-Kanade tracker for homography matching can be found at
 *     opencv_source_code/samples/python/lk_homography.py
 */
+ (void)calcOpticalFlowPyrLK:(Mat*)prevImg nextImg:(Mat*)nextImg prevPts:(Mat*)prevPts nextPts:(Mat*)nextPts status:(Mat*)status err:(Mat*)err winSize:(Size2i*)winSize maxLevel:(int)maxLevel NS_SWIFT_NAME(calcOpticalFlowPyrLK(prevImg:nextImg:prevPts:nextPts:status:err:winSize:maxLevel:));

/**
 * Calculates an optical flow for a sparse feature set using the iterative Lucas-Kanade method with
 * pyramids.
 *
 * @param prevImg first 8-bit input image or pyramid constructed by buildOpticalFlowPyramid.
 * @param nextImg second input image or pyramid of the same size and the same type as prevImg.
 * @param prevPts vector of 2D points for which the flow needs to be found; point coordinates must be
 * single-precision floating-point numbers.
 * @param nextPts output vector of 2D points (with single-precision floating-point coordinates)
 * containing the calculated new positions of input features in the second image; when
 * OPTFLOW_USE_INITIAL_FLOW flag is passed, the vector must have the same size as in the input.
 * @param status output status vector (of unsigned chars); each element of the vector is set to 1 if
 * the flow for the corresponding features has been found, otherwise, it is set to 0.
 * @param err output vector of errors; each element of the vector is set to an error for the
 * corresponding feature, type of the error measure can be set in flags parameter; if the flow wasn't
 * found then the error is not defined (use the status parameter to find such cases).
 * @param winSize size of the search window at each pyramid level.
 * level), if set to 1, two levels are used, and so on; if pyramids are passed to input then
 * algorithm will use as many levels as pyramids have but no more than maxLevel.
 * (after the specified maximum number of iterations criteria.maxCount or when the search window
 * moves by less than criteria.epsilon.
 *  -   **OPTFLOW_USE_INITIAL_FLOW** uses initial estimations, stored in nextPts; if the flag is
 *      not set, then prevPts is copied to nextPts and is considered the initial estimate.
 *  -   **OPTFLOW_LK_GET_MIN_EIGENVALS** use minimum eigen values as an error measure (see
 *      minEigThreshold description); if the flag is not set, then L1 distance between patches
 *      around the original and a moved point, divided by number of pixels in a window, is used as a
 *      error measure.
 * optical flow equations (this matrix is called a spatial gradient matrix in CITE: Bouguet00), divided
 * by number of pixels in a window; if this value is less than minEigThreshold, then a corresponding
 * feature is filtered out and its flow is not processed, so it allows to remove bad points and get a
 * performance boost.
 *
 * The function implements a sparse iterative version of the Lucas-Kanade optical flow in pyramids. See
 * CITE: Bouguet00 . The function is parallelized with the TBB library.
 *
 * @note
 *
 * -   An example using the Lucas-Kanade optical flow algorithm can be found at
 *     opencv_source_code/samples/cpp/lkdemo.cpp
 * -   (Python) An example using the Lucas-Kanade optical flow algorithm can be found at
 *     opencv_source_code/samples/python/lk_track.py
 * -   (Python) An example using the Lucas-Kanade tracker for homography matching can be found at
 *     opencv_source_code/samples/python/lk_homography.py
 */
+ (void)calcOpticalFlowPyrLK:(Mat*)prevImg nextImg:(Mat*)nextImg prevPts:(Mat*)prevPts nextPts:(Mat*)nextPts status:(Mat*)status err:(Mat*)err winSize:(Size2i*)winSize NS_SWIFT_NAME(calcOpticalFlowPyrLK(prevImg:nextImg:prevPts:nextPts:status:err:winSize:));

/**
 * Calculates an optical flow for a sparse feature set using the iterative Lucas-Kanade method with
 * pyramids.
 *
 * @param prevImg first 8-bit input image or pyramid constructed by buildOpticalFlowPyramid.
 * @param nextImg second input image or pyramid of the same size and the same type as prevImg.
 * @param prevPts vector of 2D points for which the flow needs to be found; point coordinates must be
 * single-precision floating-point numbers.
 * @param nextPts output vector of 2D points (with single-precision floating-point coordinates)
 * containing the calculated new positions of input features in the second image; when
 * OPTFLOW_USE_INITIAL_FLOW flag is passed, the vector must have the same size as in the input.
 * @param status output status vector (of unsigned chars); each element of the vector is set to 1 if
 * the flow for the corresponding features has been found, otherwise, it is set to 0.
 * @param err output vector of errors; each element of the vector is set to an error for the
 * corresponding feature, type of the error measure can be set in flags parameter; if the flow wasn't
 * found then the error is not defined (use the status parameter to find such cases).
 * level), if set to 1, two levels are used, and so on; if pyramids are passed to input then
 * algorithm will use as many levels as pyramids have but no more than maxLevel.
 * (after the specified maximum number of iterations criteria.maxCount or when the search window
 * moves by less than criteria.epsilon.
 *  -   **OPTFLOW_USE_INITIAL_FLOW** uses initial estimations, stored in nextPts; if the flag is
 *      not set, then prevPts is copied to nextPts and is considered the initial estimate.
 *  -   **OPTFLOW_LK_GET_MIN_EIGENVALS** use minimum eigen values as an error measure (see
 *      minEigThreshold description); if the flag is not set, then L1 distance between patches
 *      around the original and a moved point, divided by number of pixels in a window, is used as a
 *      error measure.
 * optical flow equations (this matrix is called a spatial gradient matrix in CITE: Bouguet00), divided
 * by number of pixels in a window; if this value is less than minEigThreshold, then a corresponding
 * feature is filtered out and its flow is not processed, so it allows to remove bad points and get a
 * performance boost.
 *
 * The function implements a sparse iterative version of the Lucas-Kanade optical flow in pyramids. See
 * CITE: Bouguet00 . The function is parallelized with the TBB library.
 *
 * @note
 *
 * -   An example using the Lucas-Kanade optical flow algorithm can be found at
 *     opencv_source_code/samples/cpp/lkdemo.cpp
 * -   (Python) An example using the Lucas-Kanade optical flow algorithm can be found at
 *     opencv_source_code/samples/python/lk_track.py
 * -   (Python) An example using the Lucas-Kanade tracker for homography matching can be found at
 *     opencv_source_code/samples/python/lk_homography.py
 */
+ (void)calcOpticalFlowPyrLK:(Mat*)prevImg nextImg:(Mat*)nextImg prevPts:(Mat*)prevPts nextPts:(Mat*)nextPts status:(Mat*)status err:(Mat*)err NS_SWIFT_NAME(calcOpticalFlowPyrLK(prevImg:nextImg:prevPts:nextPts:status:err:));



@end

NS_ASSUME_NONNULL_END



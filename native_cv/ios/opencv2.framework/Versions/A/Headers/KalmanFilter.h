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

// C++: class KalmanFilter
/**
 * Kalman filter class.
 *
 * The class implements a standard Kalman filter <http://en.wikipedia.org/wiki/Kalman_filter>,
 * CITE: Welch95 . However, you can modify transitionMatrix, controlMatrix, and measurementMatrix to get
 * an extended Kalman filter functionality.
 * @note In C API when CvKalman\* kalmanFilter structure is not needed anymore, it should be released
 * with cvReleaseKalman(&kalmanFilter)
 *
 * Member of `Video`
 */
CV_EXPORTS @interface KalmanFilter : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::KalmanFilter> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::KalmanFilter>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::KalmanFilter>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::KalmanFilter::KalmanFilter(int dynamParams, int measureParams, int controlParams = 0, int type = CV_32F)
//
/**
 *
 * @param dynamParams Dimensionality of the state.
 * @param measureParams Dimensionality of the measurement.
 * @param controlParams Dimensionality of the control vector.
 * @param type Type of the created matrices that should be CV_32F or CV_64F.
 */
- (instancetype)initWithDynamParams:(int)dynamParams measureParams:(int)measureParams controlParams:(int)controlParams type:(int)type;

/**
 *
 * @param dynamParams Dimensionality of the state.
 * @param measureParams Dimensionality of the measurement.
 * @param controlParams Dimensionality of the control vector.
 */
- (instancetype)initWithDynamParams:(int)dynamParams measureParams:(int)measureParams controlParams:(int)controlParams;

/**
 *
 * @param dynamParams Dimensionality of the state.
 * @param measureParams Dimensionality of the measurement.
 */
- (instancetype)initWithDynamParams:(int)dynamParams measureParams:(int)measureParams;


//
//   cv::KalmanFilter::KalmanFilter()
//
- (instancetype)init;


//
//  Mat cv::KalmanFilter::correct(Mat measurement)
//
/**
 * Updates the predicted state from the measurement.
 *
 * @param measurement The measured system parameters
 */
- (Mat*)correct:(Mat*)measurement NS_SWIFT_NAME(correct(measurement:));


//
//  Mat cv::KalmanFilter::predict(Mat control = Mat())
//
/**
 * Computes a predicted state.
 *
 * @param control The optional input control
 */
- (Mat*)predict:(Mat*)control NS_SWIFT_NAME(predict(control:));

/**
 * Computes a predicted state.
 *
 */
- (Mat*)predict NS_SWIFT_NAME(predict());


    //
    // C++: Mat cv::KalmanFilter::statePre
    //

@property Mat* statePre;

    //
    // C++: Mat cv::KalmanFilter::statePost
    //

@property Mat* statePost;

    //
    // C++: Mat cv::KalmanFilter::transitionMatrix
    //

@property Mat* transitionMatrix;

    //
    // C++: Mat cv::KalmanFilter::controlMatrix
    //

@property Mat* controlMatrix;

    //
    // C++: Mat cv::KalmanFilter::measurementMatrix
    //

@property Mat* measurementMatrix;

    //
    // C++: Mat cv::KalmanFilter::processNoiseCov
    //

@property Mat* processNoiseCov;

    //
    // C++: Mat cv::KalmanFilter::measurementNoiseCov
    //

@property Mat* measurementNoiseCov;

    //
    // C++: Mat cv::KalmanFilter::errorCovPre
    //

@property Mat* errorCovPre;

    //
    // C++: Mat cv::KalmanFilter::gain
    //

@property Mat* gain;

    //
    // C++: Mat cv::KalmanFilter::errorCovPost
    //

@property Mat* errorCovPost;


@end

NS_ASSUME_NONNULL_END



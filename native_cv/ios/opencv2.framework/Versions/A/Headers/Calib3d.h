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

@class CirclesGridFinderParameters;
@class Double3;
@class Mat;
@class Point2d;
@class Rect2i;
@class Scalar;
@class Size2i;
@class TermCriteria;


// C++: enum UndistortTypes
typedef NS_ENUM(int, UndistortTypes) {
    PROJ_SPHERICAL_ORTHO = 0,
    PROJ_SPHERICAL_EQRECT = 1
};


// C++: enum SolvePnPMethod
typedef NS_ENUM(int, SolvePnPMethod) {
    SOLVEPNP_ITERATIVE = 0,
    SOLVEPNP_EPNP = 1,
    SOLVEPNP_P3P = 2,
    SOLVEPNP_DLS = 3,
    SOLVEPNP_UPNP = 4,
    SOLVEPNP_AP3P = 5,
    SOLVEPNP_IPPE = 6,
    SOLVEPNP_IPPE_SQUARE = 7,
    SOLVEPNP_MAX_COUNT = 7+1
};


// C++: enum HandEyeCalibrationMethod
typedef NS_ENUM(int, HandEyeCalibrationMethod) {
    CALIB_HAND_EYE_TSAI = 0,
    CALIB_HAND_EYE_PARK = 1,
    CALIB_HAND_EYE_HORAUD = 2,
    CALIB_HAND_EYE_ANDREFF = 3,
    CALIB_HAND_EYE_DANIILIDIS = 4
};



NS_ASSUME_NONNULL_BEGIN

// C++: class Calib3d
/**
 * The Calib3d module
 *
 * Member classes: `CirclesGridFinderParameters`, `StereoMatcher`, `StereoBM`, `StereoSGBM`
 *
 * Member enums: `SolvePnPMethod`, `HandEyeCalibrationMethod`, `GridType`, `UndistortTypes`
 */
CV_EXPORTS @interface Calib3d : NSObject

#pragma mark - Class Constants


@property (class, readonly) int CV_ITERATIVE NS_SWIFT_NAME(CV_ITERATIVE);
@property (class, readonly) int CV_EPNP NS_SWIFT_NAME(CV_EPNP);
@property (class, readonly) int CV_P3P NS_SWIFT_NAME(CV_P3P);
@property (class, readonly) int CV_DLS NS_SWIFT_NAME(CV_DLS);
@property (class, readonly) int CvLevMarq_DONE NS_SWIFT_NAME(CvLevMarq_DONE);
@property (class, readonly) int CvLevMarq_STARTED NS_SWIFT_NAME(CvLevMarq_STARTED);
@property (class, readonly) int CvLevMarq_CALC_J NS_SWIFT_NAME(CvLevMarq_CALC_J);
@property (class, readonly) int CvLevMarq_CHECK_ERR NS_SWIFT_NAME(CvLevMarq_CHECK_ERR);
@property (class, readonly) int LMEDS NS_SWIFT_NAME(LMEDS);
@property (class, readonly) int RANSAC NS_SWIFT_NAME(RANSAC);
@property (class, readonly) int RHO NS_SWIFT_NAME(RHO);
@property (class, readonly) int CALIB_CB_ADAPTIVE_THRESH NS_SWIFT_NAME(CALIB_CB_ADAPTIVE_THRESH);
@property (class, readonly) int CALIB_CB_NORMALIZE_IMAGE NS_SWIFT_NAME(CALIB_CB_NORMALIZE_IMAGE);
@property (class, readonly) int CALIB_CB_FILTER_QUADS NS_SWIFT_NAME(CALIB_CB_FILTER_QUADS);
@property (class, readonly) int CALIB_CB_FAST_CHECK NS_SWIFT_NAME(CALIB_CB_FAST_CHECK);
@property (class, readonly) int CALIB_CB_EXHAUSTIVE NS_SWIFT_NAME(CALIB_CB_EXHAUSTIVE);
@property (class, readonly) int CALIB_CB_ACCURACY NS_SWIFT_NAME(CALIB_CB_ACCURACY);
@property (class, readonly) int CALIB_CB_LARGER NS_SWIFT_NAME(CALIB_CB_LARGER);
@property (class, readonly) int CALIB_CB_MARKER NS_SWIFT_NAME(CALIB_CB_MARKER);
@property (class, readonly) int CALIB_CB_SYMMETRIC_GRID NS_SWIFT_NAME(CALIB_CB_SYMMETRIC_GRID);
@property (class, readonly) int CALIB_CB_ASYMMETRIC_GRID NS_SWIFT_NAME(CALIB_CB_ASYMMETRIC_GRID);
@property (class, readonly) int CALIB_CB_CLUSTERING NS_SWIFT_NAME(CALIB_CB_CLUSTERING);
@property (class, readonly) int CALIB_NINTRINSIC NS_SWIFT_NAME(CALIB_NINTRINSIC);
@property (class, readonly) int CALIB_USE_INTRINSIC_GUESS NS_SWIFT_NAME(CALIB_USE_INTRINSIC_GUESS);
@property (class, readonly) int CALIB_FIX_ASPECT_RATIO NS_SWIFT_NAME(CALIB_FIX_ASPECT_RATIO);
@property (class, readonly) int CALIB_FIX_PRINCIPAL_POINT NS_SWIFT_NAME(CALIB_FIX_PRINCIPAL_POINT);
@property (class, readonly) int CALIB_ZERO_TANGENT_DIST NS_SWIFT_NAME(CALIB_ZERO_TANGENT_DIST);
@property (class, readonly) int CALIB_FIX_FOCAL_LENGTH NS_SWIFT_NAME(CALIB_FIX_FOCAL_LENGTH);
@property (class, readonly) int CALIB_FIX_K1 NS_SWIFT_NAME(CALIB_FIX_K1);
@property (class, readonly) int CALIB_FIX_K2 NS_SWIFT_NAME(CALIB_FIX_K2);
@property (class, readonly) int CALIB_FIX_K3 NS_SWIFT_NAME(CALIB_FIX_K3);
@property (class, readonly) int CALIB_FIX_K4 NS_SWIFT_NAME(CALIB_FIX_K4);
@property (class, readonly) int CALIB_FIX_K5 NS_SWIFT_NAME(CALIB_FIX_K5);
@property (class, readonly) int CALIB_FIX_K6 NS_SWIFT_NAME(CALIB_FIX_K6);
@property (class, readonly) int CALIB_RATIONAL_MODEL NS_SWIFT_NAME(CALIB_RATIONAL_MODEL);
@property (class, readonly) int CALIB_THIN_PRISM_MODEL NS_SWIFT_NAME(CALIB_THIN_PRISM_MODEL);
@property (class, readonly) int CALIB_FIX_S1_S2_S3_S4 NS_SWIFT_NAME(CALIB_FIX_S1_S2_S3_S4);
@property (class, readonly) int CALIB_TILTED_MODEL NS_SWIFT_NAME(CALIB_TILTED_MODEL);
@property (class, readonly) int CALIB_FIX_TAUX_TAUY NS_SWIFT_NAME(CALIB_FIX_TAUX_TAUY);
@property (class, readonly) int CALIB_USE_QR NS_SWIFT_NAME(CALIB_USE_QR);
@property (class, readonly) int CALIB_FIX_TANGENT_DIST NS_SWIFT_NAME(CALIB_FIX_TANGENT_DIST);
@property (class, readonly) int CALIB_FIX_INTRINSIC NS_SWIFT_NAME(CALIB_FIX_INTRINSIC);
@property (class, readonly) int CALIB_SAME_FOCAL_LENGTH NS_SWIFT_NAME(CALIB_SAME_FOCAL_LENGTH);
@property (class, readonly) int CALIB_ZERO_DISPARITY NS_SWIFT_NAME(CALIB_ZERO_DISPARITY);
@property (class, readonly) int CALIB_USE_LU NS_SWIFT_NAME(CALIB_USE_LU);
@property (class, readonly) int CALIB_USE_EXTRINSIC_GUESS NS_SWIFT_NAME(CALIB_USE_EXTRINSIC_GUESS);
@property (class, readonly) int FM_7POINT NS_SWIFT_NAME(FM_7POINT);
@property (class, readonly) int FM_8POINT NS_SWIFT_NAME(FM_8POINT);
@property (class, readonly) int FM_LMEDS NS_SWIFT_NAME(FM_LMEDS);
@property (class, readonly) int FM_RANSAC NS_SWIFT_NAME(FM_RANSAC);
@property (class, readonly) int CALIB_RECOMPUTE_EXTRINSIC NS_SWIFT_NAME(CALIB_RECOMPUTE_EXTRINSIC);
@property (class, readonly) int CALIB_CHECK_COND NS_SWIFT_NAME(CALIB_CHECK_COND);
@property (class, readonly) int CALIB_FIX_SKEW NS_SWIFT_NAME(CALIB_FIX_SKEW);

#pragma mark - Methods


//
//  Mat cv::estimateAffine2D(Mat from, Mat to, Mat& inliers = Mat(), int method = RANSAC, double ransacReprojThreshold = 3, size_t maxIters = 2000, double confidence = 0.99, size_t refineIters = 10)
//
/**
 * Computes an optimal affine transformation between two 2D point sets.
 *
 * It computes
 * `$$
 * \begin{bmatrix}
 * x\\
 * y\\
 * \end{bmatrix}
 * =
 * \begin{bmatrix}
 * a_{11} & a_{12}\\
 * a_{21} & a_{22}\\
 * \end{bmatrix}
 * \begin{bmatrix}
 * X\\
 * Y\\
 * \end{bmatrix}
 * +
 * \begin{bmatrix}
 * b_1\\
 * b_2\\
 * \end{bmatrix}
 * $$`
 *
 * @param from First input 2D point set containing `$$(X,Y)$$`.
 * @param to Second input 2D point set containing `$$(x,y)$$`.
 * @param inliers Output vector indicating which points are inliers (1-inlier, 0-outlier).
 * @param method Robust method used to compute transformation. The following methods are possible:
 * -   cv::RANSAC - RANSAC-based robust method
 * -   cv::LMEDS - Least-Median robust method
 * RANSAC is the default method.
 * @param ransacReprojThreshold Maximum reprojection error in the RANSAC algorithm to consider
 * a point as an inlier. Applies only to RANSAC.
 * @param maxIters The maximum number of robust method iterations.
 * @param confidence Confidence level, between 0 and 1, for the estimated transformation. Anything
 * between 0.95 and 0.99 is usually good enough. Values too close to 1 can slow down the estimation
 * significantly. Values lower than 0.8-0.9 can result in an incorrectly estimated transformation.
 * @param refineIters Maximum number of iterations of refining algorithm (Levenberg-Marquardt).
 * Passing 0 will disable refining, so the output matrix will be output of robust method.
 *
 * @return Output 2D affine transformation matrix `$$2 \times 3$$` or empty matrix if transformation
 * could not be estimated. The returned matrix has the following form:
 * `$$
 * \begin{bmatrix}
 * a_{11} & a_{12} & b_1\\
 * a_{21} & a_{22} & b_2\\
 * \end{bmatrix}
 * $$`
 *
 * The function estimates an optimal 2D affine transformation between two 2D point sets using the
 * selected robust algorithm.
 *
 * The computed transformation is then refined further (using only inliers) with the
 * Levenberg-Marquardt method to reduce the re-projection error even more.
 *
 * @note
 * The RANSAC method can handle practically any ratio of outliers but needs a threshold to
 * distinguish inliers from outliers. The method LMeDS does not need any threshold but it works
 * correctly only when there are more than 50% of inliers.
 *
 * @see `+estimateAffinePartial2D:to:inliers:method:ransacReprojThreshold:maxIters:confidence:refineIters:`, `getAffineTransform`
 */
+ (Mat*)estimateAffine2D:(Mat*)from to:(Mat*)to inliers:(Mat*)inliers method:(int)method ransacReprojThreshold:(double)ransacReprojThreshold maxIters:(size_t)maxIters confidence:(double)confidence refineIters:(size_t)refineIters NS_SWIFT_NAME(estimateAffine2D(from:to:inliers:method:ransacReprojThreshold:maxIters:confidence:refineIters:));

/**
 * Computes an optimal affine transformation between two 2D point sets.
 *
 * It computes
 * `$$
 * \begin{bmatrix}
 * x\\
 * y\\
 * \end{bmatrix}
 * =
 * \begin{bmatrix}
 * a_{11} & a_{12}\\
 * a_{21} & a_{22}\\
 * \end{bmatrix}
 * \begin{bmatrix}
 * X\\
 * Y\\
 * \end{bmatrix}
 * +
 * \begin{bmatrix}
 * b_1\\
 * b_2\\
 * \end{bmatrix}
 * $$`
 *
 * @param from First input 2D point set containing `$$(X,Y)$$`.
 * @param to Second input 2D point set containing `$$(x,y)$$`.
 * @param inliers Output vector indicating which points are inliers (1-inlier, 0-outlier).
 * @param method Robust method used to compute transformation. The following methods are possible:
 * -   cv::RANSAC - RANSAC-based robust method
 * -   cv::LMEDS - Least-Median robust method
 * RANSAC is the default method.
 * @param ransacReprojThreshold Maximum reprojection error in the RANSAC algorithm to consider
 * a point as an inlier. Applies only to RANSAC.
 * @param maxIters The maximum number of robust method iterations.
 * @param confidence Confidence level, between 0 and 1, for the estimated transformation. Anything
 * between 0.95 and 0.99 is usually good enough. Values too close to 1 can slow down the estimation
 * significantly. Values lower than 0.8-0.9 can result in an incorrectly estimated transformation.
 * Passing 0 will disable refining, so the output matrix will be output of robust method.
 *
 * @return Output 2D affine transformation matrix `$$2 \times 3$$` or empty matrix if transformation
 * could not be estimated. The returned matrix has the following form:
 * `$$
 * \begin{bmatrix}
 * a_{11} & a_{12} & b_1\\
 * a_{21} & a_{22} & b_2\\
 * \end{bmatrix}
 * $$`
 *
 * The function estimates an optimal 2D affine transformation between two 2D point sets using the
 * selected robust algorithm.
 *
 * The computed transformation is then refined further (using only inliers) with the
 * Levenberg-Marquardt method to reduce the re-projection error even more.
 *
 * @note
 * The RANSAC method can handle practically any ratio of outliers but needs a threshold to
 * distinguish inliers from outliers. The method LMeDS does not need any threshold but it works
 * correctly only when there are more than 50% of inliers.
 *
 * @see `+estimateAffinePartial2D:to:inliers:method:ransacReprojThreshold:maxIters:confidence:refineIters:`, `getAffineTransform`
 */
+ (Mat*)estimateAffine2D:(Mat*)from to:(Mat*)to inliers:(Mat*)inliers method:(int)method ransacReprojThreshold:(double)ransacReprojThreshold maxIters:(size_t)maxIters confidence:(double)confidence NS_SWIFT_NAME(estimateAffine2D(from:to:inliers:method:ransacReprojThreshold:maxIters:confidence:));

/**
 * Computes an optimal affine transformation between two 2D point sets.
 *
 * It computes
 * `$$
 * \begin{bmatrix}
 * x\\
 * y\\
 * \end{bmatrix}
 * =
 * \begin{bmatrix}
 * a_{11} & a_{12}\\
 * a_{21} & a_{22}\\
 * \end{bmatrix}
 * \begin{bmatrix}
 * X\\
 * Y\\
 * \end{bmatrix}
 * +
 * \begin{bmatrix}
 * b_1\\
 * b_2\\
 * \end{bmatrix}
 * $$`
 *
 * @param from First input 2D point set containing `$$(X,Y)$$`.
 * @param to Second input 2D point set containing `$$(x,y)$$`.
 * @param inliers Output vector indicating which points are inliers (1-inlier, 0-outlier).
 * @param method Robust method used to compute transformation. The following methods are possible:
 * -   cv::RANSAC - RANSAC-based robust method
 * -   cv::LMEDS - Least-Median robust method
 * RANSAC is the default method.
 * @param ransacReprojThreshold Maximum reprojection error in the RANSAC algorithm to consider
 * a point as an inlier. Applies only to RANSAC.
 * @param maxIters The maximum number of robust method iterations.
 * between 0.95 and 0.99 is usually good enough. Values too close to 1 can slow down the estimation
 * significantly. Values lower than 0.8-0.9 can result in an incorrectly estimated transformation.
 * Passing 0 will disable refining, so the output matrix will be output of robust method.
 *
 * @return Output 2D affine transformation matrix `$$2 \times 3$$` or empty matrix if transformation
 * could not be estimated. The returned matrix has the following form:
 * `$$
 * \begin{bmatrix}
 * a_{11} & a_{12} & b_1\\
 * a_{21} & a_{22} & b_2\\
 * \end{bmatrix}
 * $$`
 *
 * The function estimates an optimal 2D affine transformation between two 2D point sets using the
 * selected robust algorithm.
 *
 * The computed transformation is then refined further (using only inliers) with the
 * Levenberg-Marquardt method to reduce the re-projection error even more.
 *
 * @note
 * The RANSAC method can handle practically any ratio of outliers but needs a threshold to
 * distinguish inliers from outliers. The method LMeDS does not need any threshold but it works
 * correctly only when there are more than 50% of inliers.
 *
 * @see `+estimateAffinePartial2D:to:inliers:method:ransacReprojThreshold:maxIters:confidence:refineIters:`, `getAffineTransform`
 */
+ (Mat*)estimateAffine2D:(Mat*)from to:(Mat*)to inliers:(Mat*)inliers method:(int)method ransacReprojThreshold:(double)ransacReprojThreshold maxIters:(size_t)maxIters NS_SWIFT_NAME(estimateAffine2D(from:to:inliers:method:ransacReprojThreshold:maxIters:));

/**
 * Computes an optimal affine transformation between two 2D point sets.
 *
 * It computes
 * `$$
 * \begin{bmatrix}
 * x\\
 * y\\
 * \end{bmatrix}
 * =
 * \begin{bmatrix}
 * a_{11} & a_{12}\\
 * a_{21} & a_{22}\\
 * \end{bmatrix}
 * \begin{bmatrix}
 * X\\
 * Y\\
 * \end{bmatrix}
 * +
 * \begin{bmatrix}
 * b_1\\
 * b_2\\
 * \end{bmatrix}
 * $$`
 *
 * @param from First input 2D point set containing `$$(X,Y)$$`.
 * @param to Second input 2D point set containing `$$(x,y)$$`.
 * @param inliers Output vector indicating which points are inliers (1-inlier, 0-outlier).
 * @param method Robust method used to compute transformation. The following methods are possible:
 * -   cv::RANSAC - RANSAC-based robust method
 * -   cv::LMEDS - Least-Median robust method
 * RANSAC is the default method.
 * @param ransacReprojThreshold Maximum reprojection error in the RANSAC algorithm to consider
 * a point as an inlier. Applies only to RANSAC.
 * between 0.95 and 0.99 is usually good enough. Values too close to 1 can slow down the estimation
 * significantly. Values lower than 0.8-0.9 can result in an incorrectly estimated transformation.
 * Passing 0 will disable refining, so the output matrix will be output of robust method.
 *
 * @return Output 2D affine transformation matrix `$$2 \times 3$$` or empty matrix if transformation
 * could not be estimated. The returned matrix has the following form:
 * `$$
 * \begin{bmatrix}
 * a_{11} & a_{12} & b_1\\
 * a_{21} & a_{22} & b_2\\
 * \end{bmatrix}
 * $$`
 *
 * The function estimates an optimal 2D affine transformation between two 2D point sets using the
 * selected robust algorithm.
 *
 * The computed transformation is then refined further (using only inliers) with the
 * Levenberg-Marquardt method to reduce the re-projection error even more.
 *
 * @note
 * The RANSAC method can handle practically any ratio of outliers but needs a threshold to
 * distinguish inliers from outliers. The method LMeDS does not need any threshold but it works
 * correctly only when there are more than 50% of inliers.
 *
 * @see `+estimateAffinePartial2D:to:inliers:method:ransacReprojThreshold:maxIters:confidence:refineIters:`, `getAffineTransform`
 */
+ (Mat*)estimateAffine2D:(Mat*)from to:(Mat*)to inliers:(Mat*)inliers method:(int)method ransacReprojThreshold:(double)ransacReprojThreshold NS_SWIFT_NAME(estimateAffine2D(from:to:inliers:method:ransacReprojThreshold:));

/**
 * Computes an optimal affine transformation between two 2D point sets.
 *
 * It computes
 * `$$
 * \begin{bmatrix}
 * x\\
 * y\\
 * \end{bmatrix}
 * =
 * \begin{bmatrix}
 * a_{11} & a_{12}\\
 * a_{21} & a_{22}\\
 * \end{bmatrix}
 * \begin{bmatrix}
 * X\\
 * Y\\
 * \end{bmatrix}
 * +
 * \begin{bmatrix}
 * b_1\\
 * b_2\\
 * \end{bmatrix}
 * $$`
 *
 * @param from First input 2D point set containing `$$(X,Y)$$`.
 * @param to Second input 2D point set containing `$$(x,y)$$`.
 * @param inliers Output vector indicating which points are inliers (1-inlier, 0-outlier).
 * @param method Robust method used to compute transformation. The following methods are possible:
 * -   cv::RANSAC - RANSAC-based robust method
 * -   cv::LMEDS - Least-Median robust method
 * RANSAC is the default method.
 * a point as an inlier. Applies only to RANSAC.
 * between 0.95 and 0.99 is usually good enough. Values too close to 1 can slow down the estimation
 * significantly. Values lower than 0.8-0.9 can result in an incorrectly estimated transformation.
 * Passing 0 will disable refining, so the output matrix will be output of robust method.
 *
 * @return Output 2D affine transformation matrix `$$2 \times 3$$` or empty matrix if transformation
 * could not be estimated. The returned matrix has the following form:
 * `$$
 * \begin{bmatrix}
 * a_{11} & a_{12} & b_1\\
 * a_{21} & a_{22} & b_2\\
 * \end{bmatrix}
 * $$`
 *
 * The function estimates an optimal 2D affine transformation between two 2D point sets using the
 * selected robust algorithm.
 *
 * The computed transformation is then refined further (using only inliers) with the
 * Levenberg-Marquardt method to reduce the re-projection error even more.
 *
 * @note
 * The RANSAC method can handle practically any ratio of outliers but needs a threshold to
 * distinguish inliers from outliers. The method LMeDS does not need any threshold but it works
 * correctly only when there are more than 50% of inliers.
 *
 * @see `+estimateAffinePartial2D:to:inliers:method:ransacReprojThreshold:maxIters:confidence:refineIters:`, `getAffineTransform`
 */
+ (Mat*)estimateAffine2D:(Mat*)from to:(Mat*)to inliers:(Mat*)inliers method:(int)method NS_SWIFT_NAME(estimateAffine2D(from:to:inliers:method:));

/**
 * Computes an optimal affine transformation between two 2D point sets.
 *
 * It computes
 * `$$
 * \begin{bmatrix}
 * x\\
 * y\\
 * \end{bmatrix}
 * =
 * \begin{bmatrix}
 * a_{11} & a_{12}\\
 * a_{21} & a_{22}\\
 * \end{bmatrix}
 * \begin{bmatrix}
 * X\\
 * Y\\
 * \end{bmatrix}
 * +
 * \begin{bmatrix}
 * b_1\\
 * b_2\\
 * \end{bmatrix}
 * $$`
 *
 * @param from First input 2D point set containing `$$(X,Y)$$`.
 * @param to Second input 2D point set containing `$$(x,y)$$`.
 * @param inliers Output vector indicating which points are inliers (1-inlier, 0-outlier).
 * -   cv::RANSAC - RANSAC-based robust method
 * -   cv::LMEDS - Least-Median robust method
 * RANSAC is the default method.
 * a point as an inlier. Applies only to RANSAC.
 * between 0.95 and 0.99 is usually good enough. Values too close to 1 can slow down the estimation
 * significantly. Values lower than 0.8-0.9 can result in an incorrectly estimated transformation.
 * Passing 0 will disable refining, so the output matrix will be output of robust method.
 *
 * @return Output 2D affine transformation matrix `$$2 \times 3$$` or empty matrix if transformation
 * could not be estimated. The returned matrix has the following form:
 * `$$
 * \begin{bmatrix}
 * a_{11} & a_{12} & b_1\\
 * a_{21} & a_{22} & b_2\\
 * \end{bmatrix}
 * $$`
 *
 * The function estimates an optimal 2D affine transformation between two 2D point sets using the
 * selected robust algorithm.
 *
 * The computed transformation is then refined further (using only inliers) with the
 * Levenberg-Marquardt method to reduce the re-projection error even more.
 *
 * @note
 * The RANSAC method can handle practically any ratio of outliers but needs a threshold to
 * distinguish inliers from outliers. The method LMeDS does not need any threshold but it works
 * correctly only when there are more than 50% of inliers.
 *
 * @see `+estimateAffinePartial2D:to:inliers:method:ransacReprojThreshold:maxIters:confidence:refineIters:`, `getAffineTransform`
 */
+ (Mat*)estimateAffine2D:(Mat*)from to:(Mat*)to inliers:(Mat*)inliers NS_SWIFT_NAME(estimateAffine2D(from:to:inliers:));

/**
 * Computes an optimal affine transformation between two 2D point sets.
 *
 * It computes
 * `$$
 * \begin{bmatrix}
 * x\\
 * y\\
 * \end{bmatrix}
 * =
 * \begin{bmatrix}
 * a_{11} & a_{12}\\
 * a_{21} & a_{22}\\
 * \end{bmatrix}
 * \begin{bmatrix}
 * X\\
 * Y\\
 * \end{bmatrix}
 * +
 * \begin{bmatrix}
 * b_1\\
 * b_2\\
 * \end{bmatrix}
 * $$`
 *
 * @param from First input 2D point set containing `$$(X,Y)$$`.
 * @param to Second input 2D point set containing `$$(x,y)$$`.
 * -   cv::RANSAC - RANSAC-based robust method
 * -   cv::LMEDS - Least-Median robust method
 * RANSAC is the default method.
 * a point as an inlier. Applies only to RANSAC.
 * between 0.95 and 0.99 is usually good enough. Values too close to 1 can slow down the estimation
 * significantly. Values lower than 0.8-0.9 can result in an incorrectly estimated transformation.
 * Passing 0 will disable refining, so the output matrix will be output of robust method.
 *
 * @return Output 2D affine transformation matrix `$$2 \times 3$$` or empty matrix if transformation
 * could not be estimated. The returned matrix has the following form:
 * `$$
 * \begin{bmatrix}
 * a_{11} & a_{12} & b_1\\
 * a_{21} & a_{22} & b_2\\
 * \end{bmatrix}
 * $$`
 *
 * The function estimates an optimal 2D affine transformation between two 2D point sets using the
 * selected robust algorithm.
 *
 * The computed transformation is then refined further (using only inliers) with the
 * Levenberg-Marquardt method to reduce the re-projection error even more.
 *
 * @note
 * The RANSAC method can handle practically any ratio of outliers but needs a threshold to
 * distinguish inliers from outliers. The method LMeDS does not need any threshold but it works
 * correctly only when there are more than 50% of inliers.
 *
 * @see `+estimateAffinePartial2D:to:inliers:method:ransacReprojThreshold:maxIters:confidence:refineIters:`, `getAffineTransform`
 */
+ (Mat*)estimateAffine2D:(Mat*)from to:(Mat*)to NS_SWIFT_NAME(estimateAffine2D(from:to:));


//
//  Mat cv::estimateAffinePartial2D(Mat from, Mat to, Mat& inliers = Mat(), int method = RANSAC, double ransacReprojThreshold = 3, size_t maxIters = 2000, double confidence = 0.99, size_t refineIters = 10)
//
/**
 * Computes an optimal limited affine transformation with 4 degrees of freedom between
 * two 2D point sets.
 *
 * @param from First input 2D point set.
 * @param to Second input 2D point set.
 * @param inliers Output vector indicating which points are inliers.
 * @param method Robust method used to compute transformation. The following methods are possible:
 * -   cv::RANSAC - RANSAC-based robust method
 * -   cv::LMEDS - Least-Median robust method
 * RANSAC is the default method.
 * @param ransacReprojThreshold Maximum reprojection error in the RANSAC algorithm to consider
 * a point as an inlier. Applies only to RANSAC.
 * @param maxIters The maximum number of robust method iterations.
 * @param confidence Confidence level, between 0 and 1, for the estimated transformation. Anything
 * between 0.95 and 0.99 is usually good enough. Values too close to 1 can slow down the estimation
 * significantly. Values lower than 0.8-0.9 can result in an incorrectly estimated transformation.
 * @param refineIters Maximum number of iterations of refining algorithm (Levenberg-Marquardt).
 * Passing 0 will disable refining, so the output matrix will be output of robust method.
 *
 * @return Output 2D affine transformation (4 degrees of freedom) matrix `$$2 \times 3$$` or
 * empty matrix if transformation could not be estimated.
 *
 * The function estimates an optimal 2D affine transformation with 4 degrees of freedom limited to
 * combinations of translation, rotation, and uniform scaling. Uses the selected algorithm for robust
 * estimation.
 *
 * The computed transformation is then refined further (using only inliers) with the
 * Levenberg-Marquardt method to reduce the re-projection error even more.
 *
 * Estimated transformation matrix is:
 * `$$ \begin{bmatrix} \cos(\theta) \cdot s & -\sin(\theta) \cdot s & t_x \\
 *                 \sin(\theta) \cdot s & \cos(\theta) \cdot s & t_y
 * \end{bmatrix} $$`
 * Where `$$ \theta $$` is the rotation angle, `$$ s $$` the scaling factor and `$$ t_x, t_y $$` are
 * translations in `$$ x, y $$` axes respectively.
 *
 * @note
 * The RANSAC method can handle practically any ratio of outliers but need a threshold to
 * distinguish inliers from outliers. The method LMeDS does not need any threshold but it works
 * correctly only when there are more than 50% of inliers.
 *
 * @see `+estimateAffine2D:to:inliers:method:ransacReprojThreshold:maxIters:confidence:refineIters:`, `getAffineTransform`
 */
+ (Mat*)estimateAffinePartial2D:(Mat*)from to:(Mat*)to inliers:(Mat*)inliers method:(int)method ransacReprojThreshold:(double)ransacReprojThreshold maxIters:(size_t)maxIters confidence:(double)confidence refineIters:(size_t)refineIters NS_SWIFT_NAME(estimateAffinePartial2D(from:to:inliers:method:ransacReprojThreshold:maxIters:confidence:refineIters:));

/**
 * Computes an optimal limited affine transformation with 4 degrees of freedom between
 * two 2D point sets.
 *
 * @param from First input 2D point set.
 * @param to Second input 2D point set.
 * @param inliers Output vector indicating which points are inliers.
 * @param method Robust method used to compute transformation. The following methods are possible:
 * -   cv::RANSAC - RANSAC-based robust method
 * -   cv::LMEDS - Least-Median robust method
 * RANSAC is the default method.
 * @param ransacReprojThreshold Maximum reprojection error in the RANSAC algorithm to consider
 * a point as an inlier. Applies only to RANSAC.
 * @param maxIters The maximum number of robust method iterations.
 * @param confidence Confidence level, between 0 and 1, for the estimated transformation. Anything
 * between 0.95 and 0.99 is usually good enough. Values too close to 1 can slow down the estimation
 * significantly. Values lower than 0.8-0.9 can result in an incorrectly estimated transformation.
 * Passing 0 will disable refining, so the output matrix will be output of robust method.
 *
 * @return Output 2D affine transformation (4 degrees of freedom) matrix `$$2 \times 3$$` or
 * empty matrix if transformation could not be estimated.
 *
 * The function estimates an optimal 2D affine transformation with 4 degrees of freedom limited to
 * combinations of translation, rotation, and uniform scaling. Uses the selected algorithm for robust
 * estimation.
 *
 * The computed transformation is then refined further (using only inliers) with the
 * Levenberg-Marquardt method to reduce the re-projection error even more.
 *
 * Estimated transformation matrix is:
 * `$$ \begin{bmatrix} \cos(\theta) \cdot s & -\sin(\theta) \cdot s & t_x \\
 *                 \sin(\theta) \cdot s & \cos(\theta) \cdot s & t_y
 * \end{bmatrix} $$`
 * Where `$$ \theta $$` is the rotation angle, `$$ s $$` the scaling factor and `$$ t_x, t_y $$` are
 * translations in `$$ x, y $$` axes respectively.
 *
 * @note
 * The RANSAC method can handle practically any ratio of outliers but need a threshold to
 * distinguish inliers from outliers. The method LMeDS does not need any threshold but it works
 * correctly only when there are more than 50% of inliers.
 *
 * @see `+estimateAffine2D:to:inliers:method:ransacReprojThreshold:maxIters:confidence:refineIters:`, `getAffineTransform`
 */
+ (Mat*)estimateAffinePartial2D:(Mat*)from to:(Mat*)to inliers:(Mat*)inliers method:(int)method ransacReprojThreshold:(double)ransacReprojThreshold maxIters:(size_t)maxIters confidence:(double)confidence NS_SWIFT_NAME(estimateAffinePartial2D(from:to:inliers:method:ransacReprojThreshold:maxIters:confidence:));

/**
 * Computes an optimal limited affine transformation with 4 degrees of freedom between
 * two 2D point sets.
 *
 * @param from First input 2D point set.
 * @param to Second input 2D point set.
 * @param inliers Output vector indicating which points are inliers.
 * @param method Robust method used to compute transformation. The following methods are possible:
 * -   cv::RANSAC - RANSAC-based robust method
 * -   cv::LMEDS - Least-Median robust method
 * RANSAC is the default method.
 * @param ransacReprojThreshold Maximum reprojection error in the RANSAC algorithm to consider
 * a point as an inlier. Applies only to RANSAC.
 * @param maxIters The maximum number of robust method iterations.
 * between 0.95 and 0.99 is usually good enough. Values too close to 1 can slow down the estimation
 * significantly. Values lower than 0.8-0.9 can result in an incorrectly estimated transformation.
 * Passing 0 will disable refining, so the output matrix will be output of robust method.
 *
 * @return Output 2D affine transformation (4 degrees of freedom) matrix `$$2 \times 3$$` or
 * empty matrix if transformation could not be estimated.
 *
 * The function estimates an optimal 2D affine transformation with 4 degrees of freedom limited to
 * combinations of translation, rotation, and uniform scaling. Uses the selected algorithm for robust
 * estimation.
 *
 * The computed transformation is then refined further (using only inliers) with the
 * Levenberg-Marquardt method to reduce the re-projection error even more.
 *
 * Estimated transformation matrix is:
 * `$$ \begin{bmatrix} \cos(\theta) \cdot s & -\sin(\theta) \cdot s & t_x \\
 *                 \sin(\theta) \cdot s & \cos(\theta) \cdot s & t_y
 * \end{bmatrix} $$`
 * Where `$$ \theta $$` is the rotation angle, `$$ s $$` the scaling factor and `$$ t_x, t_y $$` are
 * translations in `$$ x, y $$` axes respectively.
 *
 * @note
 * The RANSAC method can handle practically any ratio of outliers but need a threshold to
 * distinguish inliers from outliers. The method LMeDS does not need any threshold but it works
 * correctly only when there are more than 50% of inliers.
 *
 * @see `+estimateAffine2D:to:inliers:method:ransacReprojThreshold:maxIters:confidence:refineIters:`, `getAffineTransform`
 */
+ (Mat*)estimateAffinePartial2D:(Mat*)from to:(Mat*)to inliers:(Mat*)inliers method:(int)method ransacReprojThreshold:(double)ransacReprojThreshold maxIters:(size_t)maxIters NS_SWIFT_NAME(estimateAffinePartial2D(from:to:inliers:method:ransacReprojThreshold:maxIters:));

/**
 * Computes an optimal limited affine transformation with 4 degrees of freedom between
 * two 2D point sets.
 *
 * @param from First input 2D point set.
 * @param to Second input 2D point set.
 * @param inliers Output vector indicating which points are inliers.
 * @param method Robust method used to compute transformation. The following methods are possible:
 * -   cv::RANSAC - RANSAC-based robust method
 * -   cv::LMEDS - Least-Median robust method
 * RANSAC is the default method.
 * @param ransacReprojThreshold Maximum reprojection error in the RANSAC algorithm to consider
 * a point as an inlier. Applies only to RANSAC.
 * between 0.95 and 0.99 is usually good enough. Values too close to 1 can slow down the estimation
 * significantly. Values lower than 0.8-0.9 can result in an incorrectly estimated transformation.
 * Passing 0 will disable refining, so the output matrix will be output of robust method.
 *
 * @return Output 2D affine transformation (4 degrees of freedom) matrix `$$2 \times 3$$` or
 * empty matrix if transformation could not be estimated.
 *
 * The function estimates an optimal 2D affine transformation with 4 degrees of freedom limited to
 * combinations of translation, rotation, and uniform scaling. Uses the selected algorithm for robust
 * estimation.
 *
 * The computed transformation is then refined further (using only inliers) with the
 * Levenberg-Marquardt method to reduce the re-projection error even more.
 *
 * Estimated transformation matrix is:
 * `$$ \begin{bmatrix} \cos(\theta) \cdot s & -\sin(\theta) \cdot s & t_x \\
 *                 \sin(\theta) \cdot s & \cos(\theta) \cdot s & t_y
 * \end{bmatrix} $$`
 * Where `$$ \theta $$` is the rotation angle, `$$ s $$` the scaling factor and `$$ t_x, t_y $$` are
 * translations in `$$ x, y $$` axes respectively.
 *
 * @note
 * The RANSAC method can handle practically any ratio of outliers but need a threshold to
 * distinguish inliers from outliers. The method LMeDS does not need any threshold but it works
 * correctly only when there are more than 50% of inliers.
 *
 * @see `+estimateAffine2D:to:inliers:method:ransacReprojThreshold:maxIters:confidence:refineIters:`, `getAffineTransform`
 */
+ (Mat*)estimateAffinePartial2D:(Mat*)from to:(Mat*)to inliers:(Mat*)inliers method:(int)method ransacReprojThreshold:(double)ransacReprojThreshold NS_SWIFT_NAME(estimateAffinePartial2D(from:to:inliers:method:ransacReprojThreshold:));

/**
 * Computes an optimal limited affine transformation with 4 degrees of freedom between
 * two 2D point sets.
 *
 * @param from First input 2D point set.
 * @param to Second input 2D point set.
 * @param inliers Output vector indicating which points are inliers.
 * @param method Robust method used to compute transformation. The following methods are possible:
 * -   cv::RANSAC - RANSAC-based robust method
 * -   cv::LMEDS - Least-Median robust method
 * RANSAC is the default method.
 * a point as an inlier. Applies only to RANSAC.
 * between 0.95 and 0.99 is usually good enough. Values too close to 1 can slow down the estimation
 * significantly. Values lower than 0.8-0.9 can result in an incorrectly estimated transformation.
 * Passing 0 will disable refining, so the output matrix will be output of robust method.
 *
 * @return Output 2D affine transformation (4 degrees of freedom) matrix `$$2 \times 3$$` or
 * empty matrix if transformation could not be estimated.
 *
 * The function estimates an optimal 2D affine transformation with 4 degrees of freedom limited to
 * combinations of translation, rotation, and uniform scaling. Uses the selected algorithm for robust
 * estimation.
 *
 * The computed transformation is then refined further (using only inliers) with the
 * Levenberg-Marquardt method to reduce the re-projection error even more.
 *
 * Estimated transformation matrix is:
 * `$$ \begin{bmatrix} \cos(\theta) \cdot s & -\sin(\theta) \cdot s & t_x \\
 *                 \sin(\theta) \cdot s & \cos(\theta) \cdot s & t_y
 * \end{bmatrix} $$`
 * Where `$$ \theta $$` is the rotation angle, `$$ s $$` the scaling factor and `$$ t_x, t_y $$` are
 * translations in `$$ x, y $$` axes respectively.
 *
 * @note
 * The RANSAC method can handle practically any ratio of outliers but need a threshold to
 * distinguish inliers from outliers. The method LMeDS does not need any threshold but it works
 * correctly only when there are more than 50% of inliers.
 *
 * @see `+estimateAffine2D:to:inliers:method:ransacReprojThreshold:maxIters:confidence:refineIters:`, `getAffineTransform`
 */
+ (Mat*)estimateAffinePartial2D:(Mat*)from to:(Mat*)to inliers:(Mat*)inliers method:(int)method NS_SWIFT_NAME(estimateAffinePartial2D(from:to:inliers:method:));

/**
 * Computes an optimal limited affine transformation with 4 degrees of freedom between
 * two 2D point sets.
 *
 * @param from First input 2D point set.
 * @param to Second input 2D point set.
 * @param inliers Output vector indicating which points are inliers.
 * -   cv::RANSAC - RANSAC-based robust method
 * -   cv::LMEDS - Least-Median robust method
 * RANSAC is the default method.
 * a point as an inlier. Applies only to RANSAC.
 * between 0.95 and 0.99 is usually good enough. Values too close to 1 can slow down the estimation
 * significantly. Values lower than 0.8-0.9 can result in an incorrectly estimated transformation.
 * Passing 0 will disable refining, so the output matrix will be output of robust method.
 *
 * @return Output 2D affine transformation (4 degrees of freedom) matrix `$$2 \times 3$$` or
 * empty matrix if transformation could not be estimated.
 *
 * The function estimates an optimal 2D affine transformation with 4 degrees of freedom limited to
 * combinations of translation, rotation, and uniform scaling. Uses the selected algorithm for robust
 * estimation.
 *
 * The computed transformation is then refined further (using only inliers) with the
 * Levenberg-Marquardt method to reduce the re-projection error even more.
 *
 * Estimated transformation matrix is:
 * `$$ \begin{bmatrix} \cos(\theta) \cdot s & -\sin(\theta) \cdot s & t_x \\
 *                 \sin(\theta) \cdot s & \cos(\theta) \cdot s & t_y
 * \end{bmatrix} $$`
 * Where `$$ \theta $$` is the rotation angle, `$$ s $$` the scaling factor and `$$ t_x, t_y $$` are
 * translations in `$$ x, y $$` axes respectively.
 *
 * @note
 * The RANSAC method can handle practically any ratio of outliers but need a threshold to
 * distinguish inliers from outliers. The method LMeDS does not need any threshold but it works
 * correctly only when there are more than 50% of inliers.
 *
 * @see `+estimateAffine2D:to:inliers:method:ransacReprojThreshold:maxIters:confidence:refineIters:`, `getAffineTransform`
 */
+ (Mat*)estimateAffinePartial2D:(Mat*)from to:(Mat*)to inliers:(Mat*)inliers NS_SWIFT_NAME(estimateAffinePartial2D(from:to:inliers:));

/**
 * Computes an optimal limited affine transformation with 4 degrees of freedom between
 * two 2D point sets.
 *
 * @param from First input 2D point set.
 * @param to Second input 2D point set.
 * -   cv::RANSAC - RANSAC-based robust method
 * -   cv::LMEDS - Least-Median robust method
 * RANSAC is the default method.
 * a point as an inlier. Applies only to RANSAC.
 * between 0.95 and 0.99 is usually good enough. Values too close to 1 can slow down the estimation
 * significantly. Values lower than 0.8-0.9 can result in an incorrectly estimated transformation.
 * Passing 0 will disable refining, so the output matrix will be output of robust method.
 *
 * @return Output 2D affine transformation (4 degrees of freedom) matrix `$$2 \times 3$$` or
 * empty matrix if transformation could not be estimated.
 *
 * The function estimates an optimal 2D affine transformation with 4 degrees of freedom limited to
 * combinations of translation, rotation, and uniform scaling. Uses the selected algorithm for robust
 * estimation.
 *
 * The computed transformation is then refined further (using only inliers) with the
 * Levenberg-Marquardt method to reduce the re-projection error even more.
 *
 * Estimated transformation matrix is:
 * `$$ \begin{bmatrix} \cos(\theta) \cdot s & -\sin(\theta) \cdot s & t_x \\
 *                 \sin(\theta) \cdot s & \cos(\theta) \cdot s & t_y
 * \end{bmatrix} $$`
 * Where `$$ \theta $$` is the rotation angle, `$$ s $$` the scaling factor and `$$ t_x, t_y $$` are
 * translations in `$$ x, y $$` axes respectively.
 *
 * @note
 * The RANSAC method can handle practically any ratio of outliers but need a threshold to
 * distinguish inliers from outliers. The method LMeDS does not need any threshold but it works
 * correctly only when there are more than 50% of inliers.
 *
 * @see `+estimateAffine2D:to:inliers:method:ransacReprojThreshold:maxIters:confidence:refineIters:`, `getAffineTransform`
 */
+ (Mat*)estimateAffinePartial2D:(Mat*)from to:(Mat*)to NS_SWIFT_NAME(estimateAffinePartial2D(from:to:));


//
//  Mat cv::findEssentialMat(Mat points1, Mat points2, Mat cameraMatrix, int method = RANSAC, double prob = 0.999, double threshold = 1.0, Mat& mask = Mat())
//
/**
 * Calculates an essential matrix from the corresponding points in two images.
 *
 * @param points1 Array of N (N \>= 5) 2D points from the first image. The point coordinates should
 * be floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1 .
 * @param cameraMatrix Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } K = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * Note that this function assumes that points1 and points2 are feature points from cameras with the
 * same camera matrix. If this assumption does not hold for your use case, use
 * `undistortPoints()` with `P = cv::NoArray()` for both cameras to transform image points
 * to normalized image coordinates, which are valid for the identity camera matrix. When
 * passing these coordinates, pass the identity matrix for this parameter.
 * @param method Method for computing an essential matrix.
 * -   **RANSAC** for the RANSAC algorithm.
 * -   **LMEDS** for the LMedS algorithm.
 * @param prob Parameter used for the RANSAC or LMedS methods only. It specifies a desirable level of
 * confidence (probability) that the estimated matrix is correct.
 * @param threshold Parameter used for RANSAC. It is the maximum distance from a point to an epipolar
 * line in pixels, beyond which the point is considered an outlier and is not used for computing the
 * final fundamental matrix. It can be set to something like 1-3, depending on the accuracy of the
 * point localization, image resolution, and the image noise.
 * @param mask Output array of N elements, every element of which is set to 0 for outliers and to 1
 * for the other points. The array is computed only in the RANSAC and LMedS methods.
 *
 * This function estimates essential matrix based on the five-point algorithm solver in CITE: Nister03 .
 * CITE: SteweniusCFS is also a related. The epipolar geometry is described by the following equation:
 *
 * `$$[p_2; 1]^T K^{-T} E K^{-1} [p_1; 1] = 0$$`
 *
 * where `$$E$$` is an essential matrix, `$$p_1$$` and `$$p_2$$` are corresponding points in the first and the
 * second images, respectively. The result of this function may be passed further to
 * decomposeEssentialMat or recoverPose to recover the relative pose between cameras.
 */
+ (Mat*)findEssentialMat:(Mat*)points1 points2:(Mat*)points2 cameraMatrix:(Mat*)cameraMatrix method:(int)method prob:(double)prob threshold:(double)threshold mask:(Mat*)mask NS_SWIFT_NAME(findEssentialMat(points1:points2:cameraMatrix:method:prob:threshold:mask:));

/**
 * Calculates an essential matrix from the corresponding points in two images.
 *
 * @param points1 Array of N (N \>= 5) 2D points from the first image. The point coordinates should
 * be floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1 .
 * @param cameraMatrix Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } K = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * Note that this function assumes that points1 and points2 are feature points from cameras with the
 * same camera matrix. If this assumption does not hold for your use case, use
 * `undistortPoints()` with `P = cv::NoArray()` for both cameras to transform image points
 * to normalized image coordinates, which are valid for the identity camera matrix. When
 * passing these coordinates, pass the identity matrix for this parameter.
 * @param method Method for computing an essential matrix.
 * -   **RANSAC** for the RANSAC algorithm.
 * -   **LMEDS** for the LMedS algorithm.
 * @param prob Parameter used for the RANSAC or LMedS methods only. It specifies a desirable level of
 * confidence (probability) that the estimated matrix is correct.
 * @param threshold Parameter used for RANSAC. It is the maximum distance from a point to an epipolar
 * line in pixels, beyond which the point is considered an outlier and is not used for computing the
 * final fundamental matrix. It can be set to something like 1-3, depending on the accuracy of the
 * point localization, image resolution, and the image noise.
 * for the other points. The array is computed only in the RANSAC and LMedS methods.
 *
 * This function estimates essential matrix based on the five-point algorithm solver in CITE: Nister03 .
 * CITE: SteweniusCFS is also a related. The epipolar geometry is described by the following equation:
 *
 * `$$[p_2; 1]^T K^{-T} E K^{-1} [p_1; 1] = 0$$`
 *
 * where `$$E$$` is an essential matrix, `$$p_1$$` and `$$p_2$$` are corresponding points in the first and the
 * second images, respectively. The result of this function may be passed further to
 * decomposeEssentialMat or recoverPose to recover the relative pose between cameras.
 */
+ (Mat*)findEssentialMat:(Mat*)points1 points2:(Mat*)points2 cameraMatrix:(Mat*)cameraMatrix method:(int)method prob:(double)prob threshold:(double)threshold NS_SWIFT_NAME(findEssentialMat(points1:points2:cameraMatrix:method:prob:threshold:));

/**
 * Calculates an essential matrix from the corresponding points in two images.
 *
 * @param points1 Array of N (N \>= 5) 2D points from the first image. The point coordinates should
 * be floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1 .
 * @param cameraMatrix Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } K = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * Note that this function assumes that points1 and points2 are feature points from cameras with the
 * same camera matrix. If this assumption does not hold for your use case, use
 * `undistortPoints()` with `P = cv::NoArray()` for both cameras to transform image points
 * to normalized image coordinates, which are valid for the identity camera matrix. When
 * passing these coordinates, pass the identity matrix for this parameter.
 * @param method Method for computing an essential matrix.
 * -   **RANSAC** for the RANSAC algorithm.
 * -   **LMEDS** for the LMedS algorithm.
 * @param prob Parameter used for the RANSAC or LMedS methods only. It specifies a desirable level of
 * confidence (probability) that the estimated matrix is correct.
 * line in pixels, beyond which the point is considered an outlier and is not used for computing the
 * final fundamental matrix. It can be set to something like 1-3, depending on the accuracy of the
 * point localization, image resolution, and the image noise.
 * for the other points. The array is computed only in the RANSAC and LMedS methods.
 *
 * This function estimates essential matrix based on the five-point algorithm solver in CITE: Nister03 .
 * CITE: SteweniusCFS is also a related. The epipolar geometry is described by the following equation:
 *
 * `$$[p_2; 1]^T K^{-T} E K^{-1} [p_1; 1] = 0$$`
 *
 * where `$$E$$` is an essential matrix, `$$p_1$$` and `$$p_2$$` are corresponding points in the first and the
 * second images, respectively. The result of this function may be passed further to
 * decomposeEssentialMat or recoverPose to recover the relative pose between cameras.
 */
+ (Mat*)findEssentialMat:(Mat*)points1 points2:(Mat*)points2 cameraMatrix:(Mat*)cameraMatrix method:(int)method prob:(double)prob NS_SWIFT_NAME(findEssentialMat(points1:points2:cameraMatrix:method:prob:));

/**
 * Calculates an essential matrix from the corresponding points in two images.
 *
 * @param points1 Array of N (N \>= 5) 2D points from the first image. The point coordinates should
 * be floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1 .
 * @param cameraMatrix Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } K = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * Note that this function assumes that points1 and points2 are feature points from cameras with the
 * same camera matrix. If this assumption does not hold for your use case, use
 * `undistortPoints()` with `P = cv::NoArray()` for both cameras to transform image points
 * to normalized image coordinates, which are valid for the identity camera matrix. When
 * passing these coordinates, pass the identity matrix for this parameter.
 * @param method Method for computing an essential matrix.
 * -   **RANSAC** for the RANSAC algorithm.
 * -   **LMEDS** for the LMedS algorithm.
 * confidence (probability) that the estimated matrix is correct.
 * line in pixels, beyond which the point is considered an outlier and is not used for computing the
 * final fundamental matrix. It can be set to something like 1-3, depending on the accuracy of the
 * point localization, image resolution, and the image noise.
 * for the other points. The array is computed only in the RANSAC and LMedS methods.
 *
 * This function estimates essential matrix based on the five-point algorithm solver in CITE: Nister03 .
 * CITE: SteweniusCFS is also a related. The epipolar geometry is described by the following equation:
 *
 * `$$[p_2; 1]^T K^{-T} E K^{-1} [p_1; 1] = 0$$`
 *
 * where `$$E$$` is an essential matrix, `$$p_1$$` and `$$p_2$$` are corresponding points in the first and the
 * second images, respectively. The result of this function may be passed further to
 * decomposeEssentialMat or recoverPose to recover the relative pose between cameras.
 */
+ (Mat*)findEssentialMat:(Mat*)points1 points2:(Mat*)points2 cameraMatrix:(Mat*)cameraMatrix method:(int)method NS_SWIFT_NAME(findEssentialMat(points1:points2:cameraMatrix:method:));

/**
 * Calculates an essential matrix from the corresponding points in two images.
 *
 * @param points1 Array of N (N \>= 5) 2D points from the first image. The point coordinates should
 * be floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1 .
 * @param cameraMatrix Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } K = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * Note that this function assumes that points1 and points2 are feature points from cameras with the
 * same camera matrix. If this assumption does not hold for your use case, use
 * `undistortPoints()` with `P = cv::NoArray()` for both cameras to transform image points
 * to normalized image coordinates, which are valid for the identity camera matrix. When
 * passing these coordinates, pass the identity matrix for this parameter.
 * -   **RANSAC** for the RANSAC algorithm.
 * -   **LMEDS** for the LMedS algorithm.
 * confidence (probability) that the estimated matrix is correct.
 * line in pixels, beyond which the point is considered an outlier and is not used for computing the
 * final fundamental matrix. It can be set to something like 1-3, depending on the accuracy of the
 * point localization, image resolution, and the image noise.
 * for the other points. The array is computed only in the RANSAC and LMedS methods.
 *
 * This function estimates essential matrix based on the five-point algorithm solver in CITE: Nister03 .
 * CITE: SteweniusCFS is also a related. The epipolar geometry is described by the following equation:
 *
 * `$$[p_2; 1]^T K^{-T} E K^{-1} [p_1; 1] = 0$$`
 *
 * where `$$E$$` is an essential matrix, `$$p_1$$` and `$$p_2$$` are corresponding points in the first and the
 * second images, respectively. The result of this function may be passed further to
 * decomposeEssentialMat or recoverPose to recover the relative pose between cameras.
 */
+ (Mat*)findEssentialMat:(Mat*)points1 points2:(Mat*)points2 cameraMatrix:(Mat*)cameraMatrix NS_SWIFT_NAME(findEssentialMat(points1:points2:cameraMatrix:));


//
//  Mat cv::findEssentialMat(Mat points1, Mat points2, double focal = 1.0, Point2d pp = Point2d(0, 0), int method = RANSAC, double prob = 0.999, double threshold = 1.0, Mat& mask = Mat())
//
/**
 *
 * @param points1 Array of N (N \>= 5) 2D points from the first image. The point coordinates should
 * be floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1 .
 * @param focal focal length of the camera. Note that this function assumes that points1 and points2
 * are feature points from cameras with same focal length and principal point.
 * @param pp principal point of the camera.
 * @param method Method for computing a fundamental matrix.
 * -   **RANSAC** for the RANSAC algorithm.
 * -   **LMEDS** for the LMedS algorithm.
 * @param threshold Parameter used for RANSAC. It is the maximum distance from a point to an epipolar
 * line in pixels, beyond which the point is considered an outlier and is not used for computing the
 * final fundamental matrix. It can be set to something like 1-3, depending on the accuracy of the
 * point localization, image resolution, and the image noise.
 * @param prob Parameter used for the RANSAC or LMedS methods only. It specifies a desirable level of
 * confidence (probability) that the estimated matrix is correct.
 * @param mask Output array of N elements, every element of which is set to 0 for outliers and to 1
 * for the other points. The array is computed only in the RANSAC and LMedS methods.
 *
 * This function differs from the one above that it computes camera matrix from focal length and
 * principal point:
 *
 * `$$K =
 * \begin{bmatrix}
 * f & 0 & x_{pp}  \\
 * 0 & f & y_{pp}  \\
 * 0 & 0 & 1
 * \end{bmatrix}$$`
 */
+ (Mat*)findEssentialMat:(Mat*)points1 points2:(Mat*)points2 focal:(double)focal pp:(Point2d*)pp method:(int)method prob:(double)prob threshold:(double)threshold mask:(Mat*)mask NS_SWIFT_NAME(findEssentialMat(points1:points2:focal:pp:method:prob:threshold:mask:));

/**
 *
 * @param points1 Array of N (N \>= 5) 2D points from the first image. The point coordinates should
 * be floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1 .
 * @param focal focal length of the camera. Note that this function assumes that points1 and points2
 * are feature points from cameras with same focal length and principal point.
 * @param pp principal point of the camera.
 * @param method Method for computing a fundamental matrix.
 * -   **RANSAC** for the RANSAC algorithm.
 * -   **LMEDS** for the LMedS algorithm.
 * @param threshold Parameter used for RANSAC. It is the maximum distance from a point to an epipolar
 * line in pixels, beyond which the point is considered an outlier and is not used for computing the
 * final fundamental matrix. It can be set to something like 1-3, depending on the accuracy of the
 * point localization, image resolution, and the image noise.
 * @param prob Parameter used for the RANSAC or LMedS methods only. It specifies a desirable level of
 * confidence (probability) that the estimated matrix is correct.
 * for the other points. The array is computed only in the RANSAC and LMedS methods.
 *
 * This function differs from the one above that it computes camera matrix from focal length and
 * principal point:
 *
 * `$$K =
 * \begin{bmatrix}
 * f & 0 & x_{pp}  \\
 * 0 & f & y_{pp}  \\
 * 0 & 0 & 1
 * \end{bmatrix}$$`
 */
+ (Mat*)findEssentialMat:(Mat*)points1 points2:(Mat*)points2 focal:(double)focal pp:(Point2d*)pp method:(int)method prob:(double)prob threshold:(double)threshold NS_SWIFT_NAME(findEssentialMat(points1:points2:focal:pp:method:prob:threshold:));

/**
 *
 * @param points1 Array of N (N \>= 5) 2D points from the first image. The point coordinates should
 * be floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1 .
 * @param focal focal length of the camera. Note that this function assumes that points1 and points2
 * are feature points from cameras with same focal length and principal point.
 * @param pp principal point of the camera.
 * @param method Method for computing a fundamental matrix.
 * -   **RANSAC** for the RANSAC algorithm.
 * -   **LMEDS** for the LMedS algorithm.
 * line in pixels, beyond which the point is considered an outlier and is not used for computing the
 * final fundamental matrix. It can be set to something like 1-3, depending on the accuracy of the
 * point localization, image resolution, and the image noise.
 * @param prob Parameter used for the RANSAC or LMedS methods only. It specifies a desirable level of
 * confidence (probability) that the estimated matrix is correct.
 * for the other points. The array is computed only in the RANSAC and LMedS methods.
 *
 * This function differs from the one above that it computes camera matrix from focal length and
 * principal point:
 *
 * `$$K =
 * \begin{bmatrix}
 * f & 0 & x_{pp}  \\
 * 0 & f & y_{pp}  \\
 * 0 & 0 & 1
 * \end{bmatrix}$$`
 */
+ (Mat*)findEssentialMat:(Mat*)points1 points2:(Mat*)points2 focal:(double)focal pp:(Point2d*)pp method:(int)method prob:(double)prob NS_SWIFT_NAME(findEssentialMat(points1:points2:focal:pp:method:prob:));

/**
 *
 * @param points1 Array of N (N \>= 5) 2D points from the first image. The point coordinates should
 * be floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1 .
 * @param focal focal length of the camera. Note that this function assumes that points1 and points2
 * are feature points from cameras with same focal length and principal point.
 * @param pp principal point of the camera.
 * @param method Method for computing a fundamental matrix.
 * -   **RANSAC** for the RANSAC algorithm.
 * -   **LMEDS** for the LMedS algorithm.
 * line in pixels, beyond which the point is considered an outlier and is not used for computing the
 * final fundamental matrix. It can be set to something like 1-3, depending on the accuracy of the
 * point localization, image resolution, and the image noise.
 * confidence (probability) that the estimated matrix is correct.
 * for the other points. The array is computed only in the RANSAC and LMedS methods.
 *
 * This function differs from the one above that it computes camera matrix from focal length and
 * principal point:
 *
 * `$$K =
 * \begin{bmatrix}
 * f & 0 & x_{pp}  \\
 * 0 & f & y_{pp}  \\
 * 0 & 0 & 1
 * \end{bmatrix}$$`
 */
+ (Mat*)findEssentialMat:(Mat*)points1 points2:(Mat*)points2 focal:(double)focal pp:(Point2d*)pp method:(int)method NS_SWIFT_NAME(findEssentialMat(points1:points2:focal:pp:method:));

/**
 *
 * @param points1 Array of N (N \>= 5) 2D points from the first image. The point coordinates should
 * be floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1 .
 * @param focal focal length of the camera. Note that this function assumes that points1 and points2
 * are feature points from cameras with same focal length and principal point.
 * @param pp principal point of the camera.
 * -   **RANSAC** for the RANSAC algorithm.
 * -   **LMEDS** for the LMedS algorithm.
 * line in pixels, beyond which the point is considered an outlier and is not used for computing the
 * final fundamental matrix. It can be set to something like 1-3, depending on the accuracy of the
 * point localization, image resolution, and the image noise.
 * confidence (probability) that the estimated matrix is correct.
 * for the other points. The array is computed only in the RANSAC and LMedS methods.
 *
 * This function differs from the one above that it computes camera matrix from focal length and
 * principal point:
 *
 * `$$K =
 * \begin{bmatrix}
 * f & 0 & x_{pp}  \\
 * 0 & f & y_{pp}  \\
 * 0 & 0 & 1
 * \end{bmatrix}$$`
 */
+ (Mat*)findEssentialMat:(Mat*)points1 points2:(Mat*)points2 focal:(double)focal pp:(Point2d*)pp NS_SWIFT_NAME(findEssentialMat(points1:points2:focal:pp:));

/**
 *
 * @param points1 Array of N (N \>= 5) 2D points from the first image. The point coordinates should
 * be floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1 .
 * @param focal focal length of the camera. Note that this function assumes that points1 and points2
 * are feature points from cameras with same focal length and principal point.
 * -   **RANSAC** for the RANSAC algorithm.
 * -   **LMEDS** for the LMedS algorithm.
 * line in pixels, beyond which the point is considered an outlier and is not used for computing the
 * final fundamental matrix. It can be set to something like 1-3, depending on the accuracy of the
 * point localization, image resolution, and the image noise.
 * confidence (probability) that the estimated matrix is correct.
 * for the other points. The array is computed only in the RANSAC and LMedS methods.
 *
 * This function differs from the one above that it computes camera matrix from focal length and
 * principal point:
 *
 * `$$K =
 * \begin{bmatrix}
 * f & 0 & x_{pp}  \\
 * 0 & f & y_{pp}  \\
 * 0 & 0 & 1
 * \end{bmatrix}$$`
 */
+ (Mat*)findEssentialMat:(Mat*)points1 points2:(Mat*)points2 focal:(double)focal NS_SWIFT_NAME(findEssentialMat(points1:points2:focal:));

/**
 *
 * @param points1 Array of N (N \>= 5) 2D points from the first image. The point coordinates should
 * be floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1 .
 * are feature points from cameras with same focal length and principal point.
 * -   **RANSAC** for the RANSAC algorithm.
 * -   **LMEDS** for the LMedS algorithm.
 * line in pixels, beyond which the point is considered an outlier and is not used for computing the
 * final fundamental matrix. It can be set to something like 1-3, depending on the accuracy of the
 * point localization, image resolution, and the image noise.
 * confidence (probability) that the estimated matrix is correct.
 * for the other points. The array is computed only in the RANSAC and LMedS methods.
 *
 * This function differs from the one above that it computes camera matrix from focal length and
 * principal point:
 *
 * `$$K =
 * \begin{bmatrix}
 * f & 0 & x_{pp}  \\
 * 0 & f & y_{pp}  \\
 * 0 & 0 & 1
 * \end{bmatrix}$$`
 */
+ (Mat*)findEssentialMat:(Mat*)points1 points2:(Mat*)points2 NS_SWIFT_NAME(findEssentialMat(points1:points2:));


//
//  Mat cv::findFundamentalMat(Mat points1, Mat points2, int method, double ransacReprojThreshold, double confidence, int maxIters, Mat& mask = Mat())
//
/**
 * Calculates a fundamental matrix from the corresponding points in two images.
 *
 * @param points1 Array of N points from the first image. The point coordinates should be
 * floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1 .
 * @param method Method for computing a fundamental matrix.
 * -   **CV_FM_7POINT** for a 7-point algorithm. `$$N = 7$$`
 * -   **CV_FM_8POINT** for an 8-point algorithm. `$$N \ge 8$$`
 * -   **CV_FM_RANSAC** for the RANSAC algorithm. `$$N \ge 8$$`
 * -   **CV_FM_LMEDS** for the LMedS algorithm. `$$N \ge 8$$`
 * @param ransacReprojThreshold Parameter used only for RANSAC. It is the maximum distance from a point to an epipolar
 * line in pixels, beyond which the point is considered an outlier and is not used for computing the
 * final fundamental matrix. It can be set to something like 1-3, depending on the accuracy of the
 * point localization, image resolution, and the image noise.
 * @param confidence Parameter used for the RANSAC and LMedS methods only. It specifies a desirable level
 * of confidence (probability) that the estimated matrix is correct.
 * @param mask
 * @param maxIters The maximum number of robust method iterations.
 *
 * The epipolar geometry is described by the following equation:
 *
 * `$$[p_2; 1]^T F [p_1; 1] = 0$$`
 *
 * where `$$F$$` is a fundamental matrix, `$$p_1$$` and `$$p_2$$` are corresponding points in the first and the
 * second images, respectively.
 *
 * The function calculates the fundamental matrix using one of four methods listed above and returns
 * the found fundamental matrix. Normally just one matrix is found. But in case of the 7-point
 * algorithm, the function may return up to 3 solutions ( `$$9 \times 3$$` matrix that stores all 3
 * matrices sequentially).
 *
 * The calculated fundamental matrix may be passed further to computeCorrespondEpilines that finds the
 * epipolar lines corresponding to the specified points. It can also be passed to
 * stereoRectifyUncalibrated to compute the rectification transformation. :
 *
 *     // Example. Estimation of fundamental matrix using the RANSAC algorithm
 *     int point_count = 100;
 *     vector<Point2f> points1(point_count);
 *     vector<Point2f> points2(point_count);
 *
 *     // initialize the points here ...
 *     for( int i = 0; i < point_count; i++ )
 *     {
 *         points1[i] = ...;
 *         points2[i] = ...;
 *     }
 *
 *     Mat fundamental_matrix =
 *      findFundamentalMat(points1, points2, FM_RANSAC, 3, 0.99);
 *
 */
+ (Mat*)findFundamentalMat:(Mat*)points1 points2:(Mat*)points2 method:(int)method ransacReprojThreshold:(double)ransacReprojThreshold confidence:(double)confidence maxIters:(int)maxIters mask:(Mat*)mask NS_SWIFT_NAME(findFundamentalMat(points1:points2:method:ransacReprojThreshold:confidence:maxIters:mask:));

/**
 * Calculates a fundamental matrix from the corresponding points in two images.
 *
 * @param points1 Array of N points from the first image. The point coordinates should be
 * floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1 .
 * @param method Method for computing a fundamental matrix.
 * -   **CV_FM_7POINT** for a 7-point algorithm. `$$N = 7$$`
 * -   **CV_FM_8POINT** for an 8-point algorithm. `$$N \ge 8$$`
 * -   **CV_FM_RANSAC** for the RANSAC algorithm. `$$N \ge 8$$`
 * -   **CV_FM_LMEDS** for the LMedS algorithm. `$$N \ge 8$$`
 * @param ransacReprojThreshold Parameter used only for RANSAC. It is the maximum distance from a point to an epipolar
 * line in pixels, beyond which the point is considered an outlier and is not used for computing the
 * final fundamental matrix. It can be set to something like 1-3, depending on the accuracy of the
 * point localization, image resolution, and the image noise.
 * @param confidence Parameter used for the RANSAC and LMedS methods only. It specifies a desirable level
 * of confidence (probability) that the estimated matrix is correct.
 * @param maxIters The maximum number of robust method iterations.
 *
 * The epipolar geometry is described by the following equation:
 *
 * `$$[p_2; 1]^T F [p_1; 1] = 0$$`
 *
 * where `$$F$$` is a fundamental matrix, `$$p_1$$` and `$$p_2$$` are corresponding points in the first and the
 * second images, respectively.
 *
 * The function calculates the fundamental matrix using one of four methods listed above and returns
 * the found fundamental matrix. Normally just one matrix is found. But in case of the 7-point
 * algorithm, the function may return up to 3 solutions ( `$$9 \times 3$$` matrix that stores all 3
 * matrices sequentially).
 *
 * The calculated fundamental matrix may be passed further to computeCorrespondEpilines that finds the
 * epipolar lines corresponding to the specified points. It can also be passed to
 * stereoRectifyUncalibrated to compute the rectification transformation. :
 *
 *     // Example. Estimation of fundamental matrix using the RANSAC algorithm
 *     int point_count = 100;
 *     vector<Point2f> points1(point_count);
 *     vector<Point2f> points2(point_count);
 *
 *     // initialize the points here ...
 *     for( int i = 0; i < point_count; i++ )
 *     {
 *         points1[i] = ...;
 *         points2[i] = ...;
 *     }
 *
 *     Mat fundamental_matrix =
 *      findFundamentalMat(points1, points2, FM_RANSAC, 3, 0.99);
 *
 */
+ (Mat*)findFundamentalMat:(Mat*)points1 points2:(Mat*)points2 method:(int)method ransacReprojThreshold:(double)ransacReprojThreshold confidence:(double)confidence maxIters:(int)maxIters NS_SWIFT_NAME(findFundamentalMat(points1:points2:method:ransacReprojThreshold:confidence:maxIters:));


//
//  Mat cv::findFundamentalMat(Mat points1, Mat points2, int method = FM_RANSAC, double ransacReprojThreshold = 3., double confidence = 0.99, Mat& mask = Mat())
//
+ (Mat*)findFundamentalMat:(Mat*)points1 points2:(Mat*)points2 method:(int)method ransacReprojThreshold:(double)ransacReprojThreshold confidence:(double)confidence mask:(Mat*)mask NS_SWIFT_NAME(findFundamentalMat(points1:points2:method:ransacReprojThreshold:confidence:mask:));

+ (Mat*)findFundamentalMat:(Mat*)points1 points2:(Mat*)points2 method:(int)method ransacReprojThreshold:(double)ransacReprojThreshold confidence:(double)confidence NS_SWIFT_NAME(findFundamentalMat(points1:points2:method:ransacReprojThreshold:confidence:));

+ (Mat*)findFundamentalMat:(Mat*)points1 points2:(Mat*)points2 method:(int)method ransacReprojThreshold:(double)ransacReprojThreshold NS_SWIFT_NAME(findFundamentalMat(points1:points2:method:ransacReprojThreshold:));

+ (Mat*)findFundamentalMat:(Mat*)points1 points2:(Mat*)points2 method:(int)method NS_SWIFT_NAME(findFundamentalMat(points1:points2:method:));

+ (Mat*)findFundamentalMat:(Mat*)points1 points2:(Mat*)points2 NS_SWIFT_NAME(findFundamentalMat(points1:points2:));


//
//  Mat cv::findHomography(Mat srcPoints, Mat dstPoints, int method = 0, double ransacReprojThreshold = 3, Mat& mask = Mat(), int maxIters = 2000, double confidence = 0.995)
//
/**
 * Finds a perspective transformation between two planes.
 *
 * @param srcPoints Coordinates of the points in the original plane, a matrix of the type CV_32FC2
 * or vector\<Point2f\> .
 * @param dstPoints Coordinates of the points in the target plane, a matrix of the type CV_32FC2 or
 * a vector\<Point2f\> .
 * @param method Method used to compute a homography matrix. The following methods are possible:
 * -   **0** - a regular method using all the points, i.e., the least squares method
 * -   **RANSAC** - RANSAC-based robust method
 * -   **LMEDS** - Least-Median robust method
 * -   **RHO** - PROSAC-based robust method
 * @param ransacReprojThreshold Maximum allowed reprojection error to treat a point pair as an inlier
 * (used in the RANSAC and RHO methods only). That is, if
 * `$$\| \texttt{dstPoints} _i -  \texttt{convertPointsHomogeneous} ( \texttt{H} * \texttt{srcPoints} _i) \|_2  >  \texttt{ransacReprojThreshold}$$`
 * then the point `$$i$$` is considered as an outlier. If srcPoints and dstPoints are measured in pixels,
 * it usually makes sense to set this parameter somewhere in the range of 1 to 10.
 * @param mask Optional output mask set by a robust method ( RANSAC or LMEDS ). Note that the input
 * mask values are ignored.
 * @param maxIters The maximum number of RANSAC iterations.
 * @param confidence Confidence level, between 0 and 1.
 *
 * The function finds and returns the perspective transformation `$$H$$` between the source and the
 * destination planes:
 *
 * `$$s_i  \vecthree{x'_i}{y'_i}{1} \sim H  \vecthree{x_i}{y_i}{1}$$`
 *
 * so that the back-projection error
 *
 * `$$\sum _i \left ( x'_i- \frac{h_{11} x_i + h_{12} y_i + h_{13}}{h_{31} x_i + h_{32} y_i + h_{33}} \right )^2+ \left ( y'_i- \frac{h_{21} x_i + h_{22} y_i + h_{23}}{h_{31} x_i + h_{32} y_i + h_{33}} \right )^2$$`
 *
 * is minimized. If the parameter method is set to the default value 0, the function uses all the point
 * pairs to compute an initial homography estimate with a simple least-squares scheme.
 *
 * However, if not all of the point pairs ( `$$srcPoints_i$$`, `$$dstPoints_i$$` ) fit the rigid perspective
 * transformation (that is, there are some outliers), this initial estimate will be poor. In this case,
 * you can use one of the three robust methods. The methods RANSAC, LMeDS and RHO try many different
 * random subsets of the corresponding point pairs (of four pairs each, collinear pairs are discarded), estimate the homography matrix
 * using this subset and a simple least-squares algorithm, and then compute the quality/goodness of the
 * computed homography (which is the number of inliers for RANSAC or the least median re-projection error for
 * LMeDS). The best subset is then used to produce the initial estimate of the homography matrix and
 * the mask of inliers/outliers.
 *
 * Regardless of the method, robust or not, the computed homography matrix is refined further (using
 * inliers only in case of a robust method) with the Levenberg-Marquardt method to reduce the
 * re-projection error even more.
 *
 * The methods RANSAC and RHO can handle practically any ratio of outliers but need a threshold to
 * distinguish inliers from outliers. The method LMeDS does not need any threshold but it works
 * correctly only when there are more than 50% of inliers. Finally, if there are no outliers and the
 * noise is rather small, use the default method (method=0).
 *
 * The function is used to find initial intrinsic and extrinsic matrices. Homography matrix is
 * determined up to a scale. Thus, it is normalized so that `$$h_{33}=1$$`. Note that whenever an `$$H$$` matrix
 * cannot be estimated, an empty one will be returned.
 *
 * @sa
 * getAffineTransform, estimateAffine2D, estimateAffinePartial2D, getPerspectiveTransform, warpPerspective,
 * perspectiveTransform
 */
+ (Mat*)findHomography:(Mat*)srcPoints dstPoints:(Mat*)dstPoints method:(int)method ransacReprojThreshold:(double)ransacReprojThreshold mask:(Mat*)mask maxIters:(int)maxIters confidence:(double)confidence NS_SWIFT_NAME(findHomography(srcPoints:dstPoints:method:ransacReprojThreshold:mask:maxIters:confidence:));

/**
 * Finds a perspective transformation between two planes.
 *
 * @param srcPoints Coordinates of the points in the original plane, a matrix of the type CV_32FC2
 * or vector\<Point2f\> .
 * @param dstPoints Coordinates of the points in the target plane, a matrix of the type CV_32FC2 or
 * a vector\<Point2f\> .
 * @param method Method used to compute a homography matrix. The following methods are possible:
 * -   **0** - a regular method using all the points, i.e., the least squares method
 * -   **RANSAC** - RANSAC-based robust method
 * -   **LMEDS** - Least-Median robust method
 * -   **RHO** - PROSAC-based robust method
 * @param ransacReprojThreshold Maximum allowed reprojection error to treat a point pair as an inlier
 * (used in the RANSAC and RHO methods only). That is, if
 * `$$\| \texttt{dstPoints} _i -  \texttt{convertPointsHomogeneous} ( \texttt{H} * \texttt{srcPoints} _i) \|_2  >  \texttt{ransacReprojThreshold}$$`
 * then the point `$$i$$` is considered as an outlier. If srcPoints and dstPoints are measured in pixels,
 * it usually makes sense to set this parameter somewhere in the range of 1 to 10.
 * @param mask Optional output mask set by a robust method ( RANSAC or LMEDS ). Note that the input
 * mask values are ignored.
 * @param maxIters The maximum number of RANSAC iterations.
 *
 * The function finds and returns the perspective transformation `$$H$$` between the source and the
 * destination planes:
 *
 * `$$s_i  \vecthree{x'_i}{y'_i}{1} \sim H  \vecthree{x_i}{y_i}{1}$$`
 *
 * so that the back-projection error
 *
 * `$$\sum _i \left ( x'_i- \frac{h_{11} x_i + h_{12} y_i + h_{13}}{h_{31} x_i + h_{32} y_i + h_{33}} \right )^2+ \left ( y'_i- \frac{h_{21} x_i + h_{22} y_i + h_{23}}{h_{31} x_i + h_{32} y_i + h_{33}} \right )^2$$`
 *
 * is minimized. If the parameter method is set to the default value 0, the function uses all the point
 * pairs to compute an initial homography estimate with a simple least-squares scheme.
 *
 * However, if not all of the point pairs ( `$$srcPoints_i$$`, `$$dstPoints_i$$` ) fit the rigid perspective
 * transformation (that is, there are some outliers), this initial estimate will be poor. In this case,
 * you can use one of the three robust methods. The methods RANSAC, LMeDS and RHO try many different
 * random subsets of the corresponding point pairs (of four pairs each, collinear pairs are discarded), estimate the homography matrix
 * using this subset and a simple least-squares algorithm, and then compute the quality/goodness of the
 * computed homography (which is the number of inliers for RANSAC or the least median re-projection error for
 * LMeDS). The best subset is then used to produce the initial estimate of the homography matrix and
 * the mask of inliers/outliers.
 *
 * Regardless of the method, robust or not, the computed homography matrix is refined further (using
 * inliers only in case of a robust method) with the Levenberg-Marquardt method to reduce the
 * re-projection error even more.
 *
 * The methods RANSAC and RHO can handle practically any ratio of outliers but need a threshold to
 * distinguish inliers from outliers. The method LMeDS does not need any threshold but it works
 * correctly only when there are more than 50% of inliers. Finally, if there are no outliers and the
 * noise is rather small, use the default method (method=0).
 *
 * The function is used to find initial intrinsic and extrinsic matrices. Homography matrix is
 * determined up to a scale. Thus, it is normalized so that `$$h_{33}=1$$`. Note that whenever an `$$H$$` matrix
 * cannot be estimated, an empty one will be returned.
 *
 * @sa
 * getAffineTransform, estimateAffine2D, estimateAffinePartial2D, getPerspectiveTransform, warpPerspective,
 * perspectiveTransform
 */
+ (Mat*)findHomography:(Mat*)srcPoints dstPoints:(Mat*)dstPoints method:(int)method ransacReprojThreshold:(double)ransacReprojThreshold mask:(Mat*)mask maxIters:(int)maxIters NS_SWIFT_NAME(findHomography(srcPoints:dstPoints:method:ransacReprojThreshold:mask:maxIters:));

/**
 * Finds a perspective transformation between two planes.
 *
 * @param srcPoints Coordinates of the points in the original plane, a matrix of the type CV_32FC2
 * or vector\<Point2f\> .
 * @param dstPoints Coordinates of the points in the target plane, a matrix of the type CV_32FC2 or
 * a vector\<Point2f\> .
 * @param method Method used to compute a homography matrix. The following methods are possible:
 * -   **0** - a regular method using all the points, i.e., the least squares method
 * -   **RANSAC** - RANSAC-based robust method
 * -   **LMEDS** - Least-Median robust method
 * -   **RHO** - PROSAC-based robust method
 * @param ransacReprojThreshold Maximum allowed reprojection error to treat a point pair as an inlier
 * (used in the RANSAC and RHO methods only). That is, if
 * `$$\| \texttt{dstPoints} _i -  \texttt{convertPointsHomogeneous} ( \texttt{H} * \texttt{srcPoints} _i) \|_2  >  \texttt{ransacReprojThreshold}$$`
 * then the point `$$i$$` is considered as an outlier. If srcPoints and dstPoints are measured in pixels,
 * it usually makes sense to set this parameter somewhere in the range of 1 to 10.
 * @param mask Optional output mask set by a robust method ( RANSAC or LMEDS ). Note that the input
 * mask values are ignored.
 *
 * The function finds and returns the perspective transformation `$$H$$` between the source and the
 * destination planes:
 *
 * `$$s_i  \vecthree{x'_i}{y'_i}{1} \sim H  \vecthree{x_i}{y_i}{1}$$`
 *
 * so that the back-projection error
 *
 * `$$\sum _i \left ( x'_i- \frac{h_{11} x_i + h_{12} y_i + h_{13}}{h_{31} x_i + h_{32} y_i + h_{33}} \right )^2+ \left ( y'_i- \frac{h_{21} x_i + h_{22} y_i + h_{23}}{h_{31} x_i + h_{32} y_i + h_{33}} \right )^2$$`
 *
 * is minimized. If the parameter method is set to the default value 0, the function uses all the point
 * pairs to compute an initial homography estimate with a simple least-squares scheme.
 *
 * However, if not all of the point pairs ( `$$srcPoints_i$$`, `$$dstPoints_i$$` ) fit the rigid perspective
 * transformation (that is, there are some outliers), this initial estimate will be poor. In this case,
 * you can use one of the three robust methods. The methods RANSAC, LMeDS and RHO try many different
 * random subsets of the corresponding point pairs (of four pairs each, collinear pairs are discarded), estimate the homography matrix
 * using this subset and a simple least-squares algorithm, and then compute the quality/goodness of the
 * computed homography (which is the number of inliers for RANSAC or the least median re-projection error for
 * LMeDS). The best subset is then used to produce the initial estimate of the homography matrix and
 * the mask of inliers/outliers.
 *
 * Regardless of the method, robust or not, the computed homography matrix is refined further (using
 * inliers only in case of a robust method) with the Levenberg-Marquardt method to reduce the
 * re-projection error even more.
 *
 * The methods RANSAC and RHO can handle practically any ratio of outliers but need a threshold to
 * distinguish inliers from outliers. The method LMeDS does not need any threshold but it works
 * correctly only when there are more than 50% of inliers. Finally, if there are no outliers and the
 * noise is rather small, use the default method (method=0).
 *
 * The function is used to find initial intrinsic and extrinsic matrices. Homography matrix is
 * determined up to a scale. Thus, it is normalized so that `$$h_{33}=1$$`. Note that whenever an `$$H$$` matrix
 * cannot be estimated, an empty one will be returned.
 *
 * @sa
 * getAffineTransform, estimateAffine2D, estimateAffinePartial2D, getPerspectiveTransform, warpPerspective,
 * perspectiveTransform
 */
+ (Mat*)findHomography:(Mat*)srcPoints dstPoints:(Mat*)dstPoints method:(int)method ransacReprojThreshold:(double)ransacReprojThreshold mask:(Mat*)mask NS_SWIFT_NAME(findHomography(srcPoints:dstPoints:method:ransacReprojThreshold:mask:));

/**
 * Finds a perspective transformation between two planes.
 *
 * @param srcPoints Coordinates of the points in the original plane, a matrix of the type CV_32FC2
 * or vector\<Point2f\> .
 * @param dstPoints Coordinates of the points in the target plane, a matrix of the type CV_32FC2 or
 * a vector\<Point2f\> .
 * @param method Method used to compute a homography matrix. The following methods are possible:
 * -   **0** - a regular method using all the points, i.e., the least squares method
 * -   **RANSAC** - RANSAC-based robust method
 * -   **LMEDS** - Least-Median robust method
 * -   **RHO** - PROSAC-based robust method
 * @param ransacReprojThreshold Maximum allowed reprojection error to treat a point pair as an inlier
 * (used in the RANSAC and RHO methods only). That is, if
 * `$$\| \texttt{dstPoints} _i -  \texttt{convertPointsHomogeneous} ( \texttt{H} * \texttt{srcPoints} _i) \|_2  >  \texttt{ransacReprojThreshold}$$`
 * then the point `$$i$$` is considered as an outlier. If srcPoints and dstPoints are measured in pixels,
 * it usually makes sense to set this parameter somewhere in the range of 1 to 10.
 * mask values are ignored.
 *
 * The function finds and returns the perspective transformation `$$H$$` between the source and the
 * destination planes:
 *
 * `$$s_i  \vecthree{x'_i}{y'_i}{1} \sim H  \vecthree{x_i}{y_i}{1}$$`
 *
 * so that the back-projection error
 *
 * `$$\sum _i \left ( x'_i- \frac{h_{11} x_i + h_{12} y_i + h_{13}}{h_{31} x_i + h_{32} y_i + h_{33}} \right )^2+ \left ( y'_i- \frac{h_{21} x_i + h_{22} y_i + h_{23}}{h_{31} x_i + h_{32} y_i + h_{33}} \right )^2$$`
 *
 * is minimized. If the parameter method is set to the default value 0, the function uses all the point
 * pairs to compute an initial homography estimate with a simple least-squares scheme.
 *
 * However, if not all of the point pairs ( `$$srcPoints_i$$`, `$$dstPoints_i$$` ) fit the rigid perspective
 * transformation (that is, there are some outliers), this initial estimate will be poor. In this case,
 * you can use one of the three robust methods. The methods RANSAC, LMeDS and RHO try many different
 * random subsets of the corresponding point pairs (of four pairs each, collinear pairs are discarded), estimate the homography matrix
 * using this subset and a simple least-squares algorithm, and then compute the quality/goodness of the
 * computed homography (which is the number of inliers for RANSAC or the least median re-projection error for
 * LMeDS). The best subset is then used to produce the initial estimate of the homography matrix and
 * the mask of inliers/outliers.
 *
 * Regardless of the method, robust or not, the computed homography matrix is refined further (using
 * inliers only in case of a robust method) with the Levenberg-Marquardt method to reduce the
 * re-projection error even more.
 *
 * The methods RANSAC and RHO can handle practically any ratio of outliers but need a threshold to
 * distinguish inliers from outliers. The method LMeDS does not need any threshold but it works
 * correctly only when there are more than 50% of inliers. Finally, if there are no outliers and the
 * noise is rather small, use the default method (method=0).
 *
 * The function is used to find initial intrinsic and extrinsic matrices. Homography matrix is
 * determined up to a scale. Thus, it is normalized so that `$$h_{33}=1$$`. Note that whenever an `$$H$$` matrix
 * cannot be estimated, an empty one will be returned.
 *
 * @sa
 * getAffineTransform, estimateAffine2D, estimateAffinePartial2D, getPerspectiveTransform, warpPerspective,
 * perspectiveTransform
 */
+ (Mat*)findHomography:(Mat*)srcPoints dstPoints:(Mat*)dstPoints method:(int)method ransacReprojThreshold:(double)ransacReprojThreshold NS_SWIFT_NAME(findHomography(srcPoints:dstPoints:method:ransacReprojThreshold:));

/**
 * Finds a perspective transformation between two planes.
 *
 * @param srcPoints Coordinates of the points in the original plane, a matrix of the type CV_32FC2
 * or vector\<Point2f\> .
 * @param dstPoints Coordinates of the points in the target plane, a matrix of the type CV_32FC2 or
 * a vector\<Point2f\> .
 * @param method Method used to compute a homography matrix. The following methods are possible:
 * -   **0** - a regular method using all the points, i.e., the least squares method
 * -   **RANSAC** - RANSAC-based robust method
 * -   **LMEDS** - Least-Median robust method
 * -   **RHO** - PROSAC-based robust method
 * (used in the RANSAC and RHO methods only). That is, if
 * `$$\| \texttt{dstPoints} _i -  \texttt{convertPointsHomogeneous} ( \texttt{H} * \texttt{srcPoints} _i) \|_2  >  \texttt{ransacReprojThreshold}$$`
 * then the point `$$i$$` is considered as an outlier. If srcPoints and dstPoints are measured in pixels,
 * it usually makes sense to set this parameter somewhere in the range of 1 to 10.
 * mask values are ignored.
 *
 * The function finds and returns the perspective transformation `$$H$$` between the source and the
 * destination planes:
 *
 * `$$s_i  \vecthree{x'_i}{y'_i}{1} \sim H  \vecthree{x_i}{y_i}{1}$$`
 *
 * so that the back-projection error
 *
 * `$$\sum _i \left ( x'_i- \frac{h_{11} x_i + h_{12} y_i + h_{13}}{h_{31} x_i + h_{32} y_i + h_{33}} \right )^2+ \left ( y'_i- \frac{h_{21} x_i + h_{22} y_i + h_{23}}{h_{31} x_i + h_{32} y_i + h_{33}} \right )^2$$`
 *
 * is minimized. If the parameter method is set to the default value 0, the function uses all the point
 * pairs to compute an initial homography estimate with a simple least-squares scheme.
 *
 * However, if not all of the point pairs ( `$$srcPoints_i$$`, `$$dstPoints_i$$` ) fit the rigid perspective
 * transformation (that is, there are some outliers), this initial estimate will be poor. In this case,
 * you can use one of the three robust methods. The methods RANSAC, LMeDS and RHO try many different
 * random subsets of the corresponding point pairs (of four pairs each, collinear pairs are discarded), estimate the homography matrix
 * using this subset and a simple least-squares algorithm, and then compute the quality/goodness of the
 * computed homography (which is the number of inliers for RANSAC or the least median re-projection error for
 * LMeDS). The best subset is then used to produce the initial estimate of the homography matrix and
 * the mask of inliers/outliers.
 *
 * Regardless of the method, robust or not, the computed homography matrix is refined further (using
 * inliers only in case of a robust method) with the Levenberg-Marquardt method to reduce the
 * re-projection error even more.
 *
 * The methods RANSAC and RHO can handle practically any ratio of outliers but need a threshold to
 * distinguish inliers from outliers. The method LMeDS does not need any threshold but it works
 * correctly only when there are more than 50% of inliers. Finally, if there are no outliers and the
 * noise is rather small, use the default method (method=0).
 *
 * The function is used to find initial intrinsic and extrinsic matrices. Homography matrix is
 * determined up to a scale. Thus, it is normalized so that `$$h_{33}=1$$`. Note that whenever an `$$H$$` matrix
 * cannot be estimated, an empty one will be returned.
 *
 * @sa
 * getAffineTransform, estimateAffine2D, estimateAffinePartial2D, getPerspectiveTransform, warpPerspective,
 * perspectiveTransform
 */
+ (Mat*)findHomography:(Mat*)srcPoints dstPoints:(Mat*)dstPoints method:(int)method NS_SWIFT_NAME(findHomography(srcPoints:dstPoints:method:));

/**
 * Finds a perspective transformation between two planes.
 *
 * @param srcPoints Coordinates of the points in the original plane, a matrix of the type CV_32FC2
 * or vector\<Point2f\> .
 * @param dstPoints Coordinates of the points in the target plane, a matrix of the type CV_32FC2 or
 * a vector\<Point2f\> .
 * -   **0** - a regular method using all the points, i.e., the least squares method
 * -   **RANSAC** - RANSAC-based robust method
 * -   **LMEDS** - Least-Median robust method
 * -   **RHO** - PROSAC-based robust method
 * (used in the RANSAC and RHO methods only). That is, if
 * `$$\| \texttt{dstPoints} _i -  \texttt{convertPointsHomogeneous} ( \texttt{H} * \texttt{srcPoints} _i) \|_2  >  \texttt{ransacReprojThreshold}$$`
 * then the point `$$i$$` is considered as an outlier. If srcPoints and dstPoints are measured in pixels,
 * it usually makes sense to set this parameter somewhere in the range of 1 to 10.
 * mask values are ignored.
 *
 * The function finds and returns the perspective transformation `$$H$$` between the source and the
 * destination planes:
 *
 * `$$s_i  \vecthree{x'_i}{y'_i}{1} \sim H  \vecthree{x_i}{y_i}{1}$$`
 *
 * so that the back-projection error
 *
 * `$$\sum _i \left ( x'_i- \frac{h_{11} x_i + h_{12} y_i + h_{13}}{h_{31} x_i + h_{32} y_i + h_{33}} \right )^2+ \left ( y'_i- \frac{h_{21} x_i + h_{22} y_i + h_{23}}{h_{31} x_i + h_{32} y_i + h_{33}} \right )^2$$`
 *
 * is minimized. If the parameter method is set to the default value 0, the function uses all the point
 * pairs to compute an initial homography estimate with a simple least-squares scheme.
 *
 * However, if not all of the point pairs ( `$$srcPoints_i$$`, `$$dstPoints_i$$` ) fit the rigid perspective
 * transformation (that is, there are some outliers), this initial estimate will be poor. In this case,
 * you can use one of the three robust methods. The methods RANSAC, LMeDS and RHO try many different
 * random subsets of the corresponding point pairs (of four pairs each, collinear pairs are discarded), estimate the homography matrix
 * using this subset and a simple least-squares algorithm, and then compute the quality/goodness of the
 * computed homography (which is the number of inliers for RANSAC or the least median re-projection error for
 * LMeDS). The best subset is then used to produce the initial estimate of the homography matrix and
 * the mask of inliers/outliers.
 *
 * Regardless of the method, robust or not, the computed homography matrix is refined further (using
 * inliers only in case of a robust method) with the Levenberg-Marquardt method to reduce the
 * re-projection error even more.
 *
 * The methods RANSAC and RHO can handle practically any ratio of outliers but need a threshold to
 * distinguish inliers from outliers. The method LMeDS does not need any threshold but it works
 * correctly only when there are more than 50% of inliers. Finally, if there are no outliers and the
 * noise is rather small, use the default method (method=0).
 *
 * The function is used to find initial intrinsic and extrinsic matrices. Homography matrix is
 * determined up to a scale. Thus, it is normalized so that `$$h_{33}=1$$`. Note that whenever an `$$H$$` matrix
 * cannot be estimated, an empty one will be returned.
 *
 * @sa
 * getAffineTransform, estimateAffine2D, estimateAffinePartial2D, getPerspectiveTransform, warpPerspective,
 * perspectiveTransform
 */
+ (Mat*)findHomography:(Mat*)srcPoints dstPoints:(Mat*)dstPoints NS_SWIFT_NAME(findHomography(srcPoints:dstPoints:));


//
//  Mat cv::getDefaultNewCameraMatrix(Mat cameraMatrix, Size imgsize = Size(), bool centerPrincipalPoint = false)
//
/**
 * Returns the default new camera matrix.
 *
 * The function returns the camera matrix that is either an exact copy of the input cameraMatrix (when
 * centerPrinicipalPoint=false ), or the modified one (when centerPrincipalPoint=true).
 *
 * In the latter case, the new camera matrix will be:
 *
 * `$$\begin{bmatrix} f_x && 0 && ( \texttt{imgSize.width} -1)*0.5  \\ 0 && f_y && ( \texttt{imgSize.height} -1)*0.5  \\ 0 && 0 && 1 \end{bmatrix} ,$$`
 *
 * where `$$f_x$$` and `$$f_y$$` are `$$(0,0)$$` and `$$(1,1)$$` elements of cameraMatrix, respectively.
 *
 * By default, the undistortion functions in OpenCV (see #initUndistortRectifyMap, #undistort) do not
 * move the principal point. However, when you work with stereo, it is important to move the principal
 * points in both views to the same y-coordinate (which is required by most of stereo correspondence
 * algorithms), and may be to the same x-coordinate too. So, you can form the new camera matrix for
 * each view where the principal points are located at the center.
 *
 * @param cameraMatrix Input camera matrix.
 * @param imgsize Camera view image size in pixels.
 * @param centerPrincipalPoint Location of the principal point in the new camera matrix. The
 * parameter indicates whether this location should be at the image center or not.
 */
+ (Mat*)getDefaultNewCameraMatrix:(Mat*)cameraMatrix imgsize:(Size2i*)imgsize centerPrincipalPoint:(BOOL)centerPrincipalPoint NS_SWIFT_NAME(getDefaultNewCameraMatrix(cameraMatrix:imgsize:centerPrincipalPoint:));

/**
 * Returns the default new camera matrix.
 *
 * The function returns the camera matrix that is either an exact copy of the input cameraMatrix (when
 * centerPrinicipalPoint=false ), or the modified one (when centerPrincipalPoint=true).
 *
 * In the latter case, the new camera matrix will be:
 *
 * `$$\begin{bmatrix} f_x && 0 && ( \texttt{imgSize.width} -1)*0.5  \\ 0 && f_y && ( \texttt{imgSize.height} -1)*0.5  \\ 0 && 0 && 1 \end{bmatrix} ,$$`
 *
 * where `$$f_x$$` and `$$f_y$$` are `$$(0,0)$$` and `$$(1,1)$$` elements of cameraMatrix, respectively.
 *
 * By default, the undistortion functions in OpenCV (see #initUndistortRectifyMap, #undistort) do not
 * move the principal point. However, when you work with stereo, it is important to move the principal
 * points in both views to the same y-coordinate (which is required by most of stereo correspondence
 * algorithms), and may be to the same x-coordinate too. So, you can form the new camera matrix for
 * each view where the principal points are located at the center.
 *
 * @param cameraMatrix Input camera matrix.
 * @param imgsize Camera view image size in pixels.
 * parameter indicates whether this location should be at the image center or not.
 */
+ (Mat*)getDefaultNewCameraMatrix:(Mat*)cameraMatrix imgsize:(Size2i*)imgsize NS_SWIFT_NAME(getDefaultNewCameraMatrix(cameraMatrix:imgsize:));

/**
 * Returns the default new camera matrix.
 *
 * The function returns the camera matrix that is either an exact copy of the input cameraMatrix (when
 * centerPrinicipalPoint=false ), or the modified one (when centerPrincipalPoint=true).
 *
 * In the latter case, the new camera matrix will be:
 *
 * `$$\begin{bmatrix} f_x && 0 && ( \texttt{imgSize.width} -1)*0.5  \\ 0 && f_y && ( \texttt{imgSize.height} -1)*0.5  \\ 0 && 0 && 1 \end{bmatrix} ,$$`
 *
 * where `$$f_x$$` and `$$f_y$$` are `$$(0,0)$$` and `$$(1,1)$$` elements of cameraMatrix, respectively.
 *
 * By default, the undistortion functions in OpenCV (see #initUndistortRectifyMap, #undistort) do not
 * move the principal point. However, when you work with stereo, it is important to move the principal
 * points in both views to the same y-coordinate (which is required by most of stereo correspondence
 * algorithms), and may be to the same x-coordinate too. So, you can form the new camera matrix for
 * each view where the principal points are located at the center.
 *
 * @param cameraMatrix Input camera matrix.
 * parameter indicates whether this location should be at the image center or not.
 */
+ (Mat*)getDefaultNewCameraMatrix:(Mat*)cameraMatrix NS_SWIFT_NAME(getDefaultNewCameraMatrix(cameraMatrix:));


//
//  Mat cv::getOptimalNewCameraMatrix(Mat cameraMatrix, Mat distCoeffs, Size imageSize, double alpha, Size newImgSize = Size(), Rect* validPixROI = 0, bool centerPrincipalPoint = false)
//
/**
 * Returns the new camera matrix based on the free scaling parameter.
 *
 * @param cameraMatrix Input camera matrix.
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param imageSize Original image size.
 * @param alpha Free scaling parameter between 0 (when all the pixels in the undistorted image are
 * valid) and 1 (when all the source image pixels are retained in the undistorted image). See
 * stereoRectify for details.
 * @param newImgSize Image size after rectification. By default, it is set to imageSize .
 * @param validPixROI Optional output rectangle that outlines all-good-pixels region in the
 * undistorted image. See roi1, roi2 description in stereoRectify .
 * @param centerPrincipalPoint Optional flag that indicates whether in the new camera matrix the
 * principal point should be at the image center or not. By default, the principal point is chosen to
 * best fit a subset of the source image (determined by alpha) to the corrected image.
 * @return new_camera_matrix Output new camera matrix.
 *
 * The function computes and returns the optimal new camera matrix based on the free scaling parameter.
 * By varying this parameter, you may retrieve only sensible pixels alpha=0 , keep all the original
 * image pixels if there is valuable information in the corners alpha=1 , or get something in between.
 * When alpha\>0 , the undistorted result is likely to have some black pixels corresponding to
 * "virtual" pixels outside of the captured distorted image. The original camera matrix, distortion
 * coefficients, the computed new camera matrix, and newImageSize should be passed to
 * initUndistortRectifyMap to produce the maps for remap .
 */
+ (Mat*)getOptimalNewCameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs imageSize:(Size2i*)imageSize alpha:(double)alpha newImgSize:(Size2i*)newImgSize validPixROI:(Rect2i*)validPixROI centerPrincipalPoint:(BOOL)centerPrincipalPoint NS_SWIFT_NAME(getOptimalNewCameraMatrix(cameraMatrix:distCoeffs:imageSize:alpha:newImgSize:validPixROI:centerPrincipalPoint:));

/**
 * Returns the new camera matrix based on the free scaling parameter.
 *
 * @param cameraMatrix Input camera matrix.
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param imageSize Original image size.
 * @param alpha Free scaling parameter between 0 (when all the pixels in the undistorted image are
 * valid) and 1 (when all the source image pixels are retained in the undistorted image). See
 * stereoRectify for details.
 * @param newImgSize Image size after rectification. By default, it is set to imageSize .
 * @param validPixROI Optional output rectangle that outlines all-good-pixels region in the
 * undistorted image. See roi1, roi2 description in stereoRectify .
 * principal point should be at the image center or not. By default, the principal point is chosen to
 * best fit a subset of the source image (determined by alpha) to the corrected image.
 * @return new_camera_matrix Output new camera matrix.
 *
 * The function computes and returns the optimal new camera matrix based on the free scaling parameter.
 * By varying this parameter, you may retrieve only sensible pixels alpha=0 , keep all the original
 * image pixels if there is valuable information in the corners alpha=1 , or get something in between.
 * When alpha\>0 , the undistorted result is likely to have some black pixels corresponding to
 * "virtual" pixels outside of the captured distorted image. The original camera matrix, distortion
 * coefficients, the computed new camera matrix, and newImageSize should be passed to
 * initUndistortRectifyMap to produce the maps for remap .
 */
+ (Mat*)getOptimalNewCameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs imageSize:(Size2i*)imageSize alpha:(double)alpha newImgSize:(Size2i*)newImgSize validPixROI:(Rect2i*)validPixROI NS_SWIFT_NAME(getOptimalNewCameraMatrix(cameraMatrix:distCoeffs:imageSize:alpha:newImgSize:validPixROI:));

/**
 * Returns the new camera matrix based on the free scaling parameter.
 *
 * @param cameraMatrix Input camera matrix.
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param imageSize Original image size.
 * @param alpha Free scaling parameter between 0 (when all the pixels in the undistorted image are
 * valid) and 1 (when all the source image pixels are retained in the undistorted image). See
 * stereoRectify for details.
 * @param newImgSize Image size after rectification. By default, it is set to imageSize .
 * undistorted image. See roi1, roi2 description in stereoRectify .
 * principal point should be at the image center or not. By default, the principal point is chosen to
 * best fit a subset of the source image (determined by alpha) to the corrected image.
 * @return new_camera_matrix Output new camera matrix.
 *
 * The function computes and returns the optimal new camera matrix based on the free scaling parameter.
 * By varying this parameter, you may retrieve only sensible pixels alpha=0 , keep all the original
 * image pixels if there is valuable information in the corners alpha=1 , or get something in between.
 * When alpha\>0 , the undistorted result is likely to have some black pixels corresponding to
 * "virtual" pixels outside of the captured distorted image. The original camera matrix, distortion
 * coefficients, the computed new camera matrix, and newImageSize should be passed to
 * initUndistortRectifyMap to produce the maps for remap .
 */
+ (Mat*)getOptimalNewCameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs imageSize:(Size2i*)imageSize alpha:(double)alpha newImgSize:(Size2i*)newImgSize NS_SWIFT_NAME(getOptimalNewCameraMatrix(cameraMatrix:distCoeffs:imageSize:alpha:newImgSize:));

/**
 * Returns the new camera matrix based on the free scaling parameter.
 *
 * @param cameraMatrix Input camera matrix.
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param imageSize Original image size.
 * @param alpha Free scaling parameter between 0 (when all the pixels in the undistorted image are
 * valid) and 1 (when all the source image pixels are retained in the undistorted image). See
 * stereoRectify for details.
 * undistorted image. See roi1, roi2 description in stereoRectify .
 * principal point should be at the image center or not. By default, the principal point is chosen to
 * best fit a subset of the source image (determined by alpha) to the corrected image.
 * @return new_camera_matrix Output new camera matrix.
 *
 * The function computes and returns the optimal new camera matrix based on the free scaling parameter.
 * By varying this parameter, you may retrieve only sensible pixels alpha=0 , keep all the original
 * image pixels if there is valuable information in the corners alpha=1 , or get something in between.
 * When alpha\>0 , the undistorted result is likely to have some black pixels corresponding to
 * "virtual" pixels outside of the captured distorted image. The original camera matrix, distortion
 * coefficients, the computed new camera matrix, and newImageSize should be passed to
 * initUndistortRectifyMap to produce the maps for remap .
 */
+ (Mat*)getOptimalNewCameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs imageSize:(Size2i*)imageSize alpha:(double)alpha NS_SWIFT_NAME(getOptimalNewCameraMatrix(cameraMatrix:distCoeffs:imageSize:alpha:));


//
//  Mat cv::initCameraMatrix2D(vector_Mat objectPoints, vector_Mat imagePoints, Size imageSize, double aspectRatio = 1.0)
//
/**
 * Finds an initial camera matrix from 3D-2D point correspondences.
 *
 * @param objectPoints Vector of vectors of the calibration pattern points in the calibration pattern
 * coordinate space. In the old interface all the per-view vectors are concatenated. See
 * calibrateCamera for details.
 * @param imagePoints Vector of vectors of the projections of the calibration pattern points. In the
 * old interface all the per-view vectors are concatenated.
 * @param imageSize Image size in pixels used to initialize the principal point.
 * @param aspectRatio If it is zero or negative, both `$$f_x$$` and `$$f_y$$` are estimated independently.
 * Otherwise, `$$f_x = f_y * \texttt{aspectRatio}$$` .
 *
 * The function estimates and returns an initial camera matrix for the camera calibration process.
 * Currently, the function only supports planar calibration patterns, which are patterns where each
 * object point has z-coordinate =0.
 */
+ (Mat*)initCameraMatrix2D:(NSArray<Mat*>*)objectPoints imagePoints:(NSArray<Mat*>*)imagePoints imageSize:(Size2i*)imageSize aspectRatio:(double)aspectRatio NS_SWIFT_NAME(initCameraMatrix2D(objectPoints:imagePoints:imageSize:aspectRatio:));

/**
 * Finds an initial camera matrix from 3D-2D point correspondences.
 *
 * @param objectPoints Vector of vectors of the calibration pattern points in the calibration pattern
 * coordinate space. In the old interface all the per-view vectors are concatenated. See
 * calibrateCamera for details.
 * @param imagePoints Vector of vectors of the projections of the calibration pattern points. In the
 * old interface all the per-view vectors are concatenated.
 * @param imageSize Image size in pixels used to initialize the principal point.
 * Otherwise, `$$f_x = f_y * \texttt{aspectRatio}$$` .
 *
 * The function estimates and returns an initial camera matrix for the camera calibration process.
 * Currently, the function only supports planar calibration patterns, which are patterns where each
 * object point has z-coordinate =0.
 */
+ (Mat*)initCameraMatrix2D:(NSArray<Mat*>*)objectPoints imagePoints:(NSArray<Mat*>*)imagePoints imageSize:(Size2i*)imageSize NS_SWIFT_NAME(initCameraMatrix2D(objectPoints:imagePoints:imageSize:));


//
//  Rect cv::getValidDisparityROI(Rect roi1, Rect roi2, int minDisparity, int numberOfDisparities, int blockSize)
//
+ (Rect2i*)getValidDisparityROI:(Rect2i*)roi1 roi2:(Rect2i*)roi2 minDisparity:(int)minDisparity numberOfDisparities:(int)numberOfDisparities blockSize:(int)blockSize NS_SWIFT_NAME(getValidDisparityROI(roi1:roi2:minDisparity:numberOfDisparities:blockSize:));


//
//  Scalar cv::estimateChessboardSharpness(Mat image, Size patternSize, Mat corners, float rise_distance = 0.8F, bool vertical = false, Mat& sharpness = Mat())
//
/**
 * Estimates the sharpness of a detected chessboard.
 *
 * Image sharpness, as well as brightness, are a critical parameter for accuracte
 * camera calibration. For accessing these parameters for filtering out
 * problematic calibraiton images, this method calculates edge profiles by traveling from
 * black to white chessboard cell centers. Based on this, the number of pixels is
 * calculated required to transit from black to white. This width of the
 * transition area is a good indication of how sharp the chessboard is imaged
 * and should be below ~3.0 pixels.
 *
 * @param image Gray image used to find chessboard corners
 * @param patternSize Size of a found chessboard pattern
 * @param corners Corners found by findChessboardCorners(SB)
 * @param rise_distance Rise distance 0.8 means 10% ... 90% of the final signal strength
 * @param vertical By default edge responses for horizontal lines are calculated
 * @param sharpness Optional output array with a sharpness value for calculated edge responses (see description)
 *
 * The optional sharpness array is of type CV_32FC1 and has for each calculated
 * profile one row with the following five entries:
 * 0 = x coordinate of the underlying edge in the image
 * 1 = y coordinate of the underlying edge in the image
 * 2 = width of the transition area (sharpness)
 * 3 = signal strength in the black cell (min brightness)
 * 4 = signal strength in the white cell (max brightness)
 *
 * @return Scalar(average sharpness, average min brightness, average max brightness,0)
 */
+ (Scalar*)estimateChessboardSharpness:(Mat*)image patternSize:(Size2i*)patternSize corners:(Mat*)corners rise_distance:(float)rise_distance vertical:(BOOL)vertical sharpness:(Mat*)sharpness NS_SWIFT_NAME(estimateChessboardSharpness(image:patternSize:corners:rise_distance:vertical:sharpness:));

/**
 * Estimates the sharpness of a detected chessboard.
 *
 * Image sharpness, as well as brightness, are a critical parameter for accuracte
 * camera calibration. For accessing these parameters for filtering out
 * problematic calibraiton images, this method calculates edge profiles by traveling from
 * black to white chessboard cell centers. Based on this, the number of pixels is
 * calculated required to transit from black to white. This width of the
 * transition area is a good indication of how sharp the chessboard is imaged
 * and should be below ~3.0 pixels.
 *
 * @param image Gray image used to find chessboard corners
 * @param patternSize Size of a found chessboard pattern
 * @param corners Corners found by findChessboardCorners(SB)
 * @param rise_distance Rise distance 0.8 means 10% ... 90% of the final signal strength
 * @param vertical By default edge responses for horizontal lines are calculated
 *
 * The optional sharpness array is of type CV_32FC1 and has for each calculated
 * profile one row with the following five entries:
 * 0 = x coordinate of the underlying edge in the image
 * 1 = y coordinate of the underlying edge in the image
 * 2 = width of the transition area (sharpness)
 * 3 = signal strength in the black cell (min brightness)
 * 4 = signal strength in the white cell (max brightness)
 *
 * @return Scalar(average sharpness, average min brightness, average max brightness,0)
 */
+ (Scalar*)estimateChessboardSharpness:(Mat*)image patternSize:(Size2i*)patternSize corners:(Mat*)corners rise_distance:(float)rise_distance vertical:(BOOL)vertical NS_SWIFT_NAME(estimateChessboardSharpness(image:patternSize:corners:rise_distance:vertical:));

/**
 * Estimates the sharpness of a detected chessboard.
 *
 * Image sharpness, as well as brightness, are a critical parameter for accuracte
 * camera calibration. For accessing these parameters for filtering out
 * problematic calibraiton images, this method calculates edge profiles by traveling from
 * black to white chessboard cell centers. Based on this, the number of pixels is
 * calculated required to transit from black to white. This width of the
 * transition area is a good indication of how sharp the chessboard is imaged
 * and should be below ~3.0 pixels.
 *
 * @param image Gray image used to find chessboard corners
 * @param patternSize Size of a found chessboard pattern
 * @param corners Corners found by findChessboardCorners(SB)
 * @param rise_distance Rise distance 0.8 means 10% ... 90% of the final signal strength
 *
 * The optional sharpness array is of type CV_32FC1 and has for each calculated
 * profile one row with the following five entries:
 * 0 = x coordinate of the underlying edge in the image
 * 1 = y coordinate of the underlying edge in the image
 * 2 = width of the transition area (sharpness)
 * 3 = signal strength in the black cell (min brightness)
 * 4 = signal strength in the white cell (max brightness)
 *
 * @return Scalar(average sharpness, average min brightness, average max brightness,0)
 */
+ (Scalar*)estimateChessboardSharpness:(Mat*)image patternSize:(Size2i*)patternSize corners:(Mat*)corners rise_distance:(float)rise_distance NS_SWIFT_NAME(estimateChessboardSharpness(image:patternSize:corners:rise_distance:));

/**
 * Estimates the sharpness of a detected chessboard.
 *
 * Image sharpness, as well as brightness, are a critical parameter for accuracte
 * camera calibration. For accessing these parameters for filtering out
 * problematic calibraiton images, this method calculates edge profiles by traveling from
 * black to white chessboard cell centers. Based on this, the number of pixels is
 * calculated required to transit from black to white. This width of the
 * transition area is a good indication of how sharp the chessboard is imaged
 * and should be below ~3.0 pixels.
 *
 * @param image Gray image used to find chessboard corners
 * @param patternSize Size of a found chessboard pattern
 * @param corners Corners found by findChessboardCorners(SB)
 *
 * The optional sharpness array is of type CV_32FC1 and has for each calculated
 * profile one row with the following five entries:
 * 0 = x coordinate of the underlying edge in the image
 * 1 = y coordinate of the underlying edge in the image
 * 2 = width of the transition area (sharpness)
 * 3 = signal strength in the black cell (min brightness)
 * 4 = signal strength in the white cell (max brightness)
 *
 * @return Scalar(average sharpness, average min brightness, average max brightness,0)
 */
+ (Scalar*)estimateChessboardSharpness:(Mat*)image patternSize:(Size2i*)patternSize corners:(Mat*)corners NS_SWIFT_NAME(estimateChessboardSharpness(image:patternSize:corners:));


//
//  Vec3d cv::RQDecomp3x3(Mat src, Mat& mtxR, Mat& mtxQ, Mat& Qx = Mat(), Mat& Qy = Mat(), Mat& Qz = Mat())
//
/**
 * Computes an RQ decomposition of 3x3 matrices.
 *
 * @param src 3x3 input matrix.
 * @param mtxR Output 3x3 upper-triangular matrix.
 * @param mtxQ Output 3x3 orthogonal matrix.
 * @param Qx Optional output 3x3 rotation matrix around x-axis.
 * @param Qy Optional output 3x3 rotation matrix around y-axis.
 * @param Qz Optional output 3x3 rotation matrix around z-axis.
 *
 * The function computes a RQ decomposition using the given rotations. This function is used in
 * decomposeProjectionMatrix to decompose the left 3x3 submatrix of a projection matrix into a camera
 * and a rotation matrix.
 *
 * It optionally returns three rotation matrices, one for each axis, and the three Euler angles in
 * degrees (as the return value) that could be used in OpenGL. Note, there is always more than one
 * sequence of rotations about the three principal axes that results in the same orientation of an
 * object, e.g. see CITE: Slabaugh . Returned tree rotation matrices and corresponding three Euler angles
 * are only one of the possible solutions.
 */
+ (Double3*)RQDecomp3x3:(Mat*)src mtxR:(Mat*)mtxR mtxQ:(Mat*)mtxQ Qx:(Mat*)Qx Qy:(Mat*)Qy Qz:(Mat*)Qz NS_SWIFT_NAME(RQDecomp3x3(src:mtxR:mtxQ:Qx:Qy:Qz:));

/**
 * Computes an RQ decomposition of 3x3 matrices.
 *
 * @param src 3x3 input matrix.
 * @param mtxR Output 3x3 upper-triangular matrix.
 * @param mtxQ Output 3x3 orthogonal matrix.
 * @param Qx Optional output 3x3 rotation matrix around x-axis.
 * @param Qy Optional output 3x3 rotation matrix around y-axis.
 *
 * The function computes a RQ decomposition using the given rotations. This function is used in
 * decomposeProjectionMatrix to decompose the left 3x3 submatrix of a projection matrix into a camera
 * and a rotation matrix.
 *
 * It optionally returns three rotation matrices, one for each axis, and the three Euler angles in
 * degrees (as the return value) that could be used in OpenGL. Note, there is always more than one
 * sequence of rotations about the three principal axes that results in the same orientation of an
 * object, e.g. see CITE: Slabaugh . Returned tree rotation matrices and corresponding three Euler angles
 * are only one of the possible solutions.
 */
+ (Double3*)RQDecomp3x3:(Mat*)src mtxR:(Mat*)mtxR mtxQ:(Mat*)mtxQ Qx:(Mat*)Qx Qy:(Mat*)Qy NS_SWIFT_NAME(RQDecomp3x3(src:mtxR:mtxQ:Qx:Qy:));

/**
 * Computes an RQ decomposition of 3x3 matrices.
 *
 * @param src 3x3 input matrix.
 * @param mtxR Output 3x3 upper-triangular matrix.
 * @param mtxQ Output 3x3 orthogonal matrix.
 * @param Qx Optional output 3x3 rotation matrix around x-axis.
 *
 * The function computes a RQ decomposition using the given rotations. This function is used in
 * decomposeProjectionMatrix to decompose the left 3x3 submatrix of a projection matrix into a camera
 * and a rotation matrix.
 *
 * It optionally returns three rotation matrices, one for each axis, and the three Euler angles in
 * degrees (as the return value) that could be used in OpenGL. Note, there is always more than one
 * sequence of rotations about the three principal axes that results in the same orientation of an
 * object, e.g. see CITE: Slabaugh . Returned tree rotation matrices and corresponding three Euler angles
 * are only one of the possible solutions.
 */
+ (Double3*)RQDecomp3x3:(Mat*)src mtxR:(Mat*)mtxR mtxQ:(Mat*)mtxQ Qx:(Mat*)Qx NS_SWIFT_NAME(RQDecomp3x3(src:mtxR:mtxQ:Qx:));

/**
 * Computes an RQ decomposition of 3x3 matrices.
 *
 * @param src 3x3 input matrix.
 * @param mtxR Output 3x3 upper-triangular matrix.
 * @param mtxQ Output 3x3 orthogonal matrix.
 *
 * The function computes a RQ decomposition using the given rotations. This function is used in
 * decomposeProjectionMatrix to decompose the left 3x3 submatrix of a projection matrix into a camera
 * and a rotation matrix.
 *
 * It optionally returns three rotation matrices, one for each axis, and the three Euler angles in
 * degrees (as the return value) that could be used in OpenGL. Note, there is always more than one
 * sequence of rotations about the three principal axes that results in the same orientation of an
 * object, e.g. see CITE: Slabaugh . Returned tree rotation matrices and corresponding three Euler angles
 * are only one of the possible solutions.
 */
+ (Double3*)RQDecomp3x3:(Mat*)src mtxR:(Mat*)mtxR mtxQ:(Mat*)mtxQ NS_SWIFT_NAME(RQDecomp3x3(src:mtxR:mtxQ:));


//
//  bool cv::checkChessboard(Mat img, Size size)
//
+ (BOOL)checkChessboard:(Mat*)img size:(Size2i*)size NS_SWIFT_NAME(checkChessboard(img:size:));


//
//  bool cv::find4QuadCornerSubpix(Mat img, Mat& corners, Size region_size)
//
+ (BOOL)find4QuadCornerSubpix:(Mat*)img corners:(Mat*)corners region_size:(Size2i*)region_size NS_SWIFT_NAME(find4QuadCornerSubpix(img:corners:region_size:));


//
//  bool cv::findChessboardCorners(Mat image, Size patternSize, Mat& corners, int flags = CALIB_CB_ADAPTIVE_THRESH + CALIB_CB_NORMALIZE_IMAGE)
//
/**
 * Finds the positions of internal corners of the chessboard.
 *
 * @param image Source chessboard view. It must be an 8-bit grayscale or color image.
 * @param patternSize Number of inner corners per a chessboard row and column
 * ( patternSize = cv::Size(points_per_row,points_per_colum) = cv::Size(columns,rows) ).
 * @param corners Output array of detected corners.
 * @param flags Various operation flags that can be zero or a combination of the following values:
 * -   **CALIB_CB_ADAPTIVE_THRESH** Use adaptive thresholding to convert the image to black
 * and white, rather than a fixed threshold level (computed from the average image brightness).
 * -   **CALIB_CB_NORMALIZE_IMAGE** Normalize the image gamma with equalizeHist before
 * applying fixed or adaptive thresholding.
 * -   **CALIB_CB_FILTER_QUADS** Use additional criteria (like contour area, perimeter,
 * square-like shape) to filter out false quads extracted at the contour retrieval stage.
 * -   **CALIB_CB_FAST_CHECK** Run a fast check on the image that looks for chessboard corners,
 * and shortcut the call if none is found. This can drastically speed up the call in the
 * degenerate condition when no chessboard is observed.
 *
 * The function attempts to determine whether the input image is a view of the chessboard pattern and
 * locate the internal chessboard corners. The function returns a non-zero value if all of the corners
 * are found and they are placed in a certain order (row by row, left to right in every row).
 * Otherwise, if the function fails to find all the corners or reorder them, it returns 0. For example,
 * a regular chessboard has 8 x 8 squares and 7 x 7 internal corners, that is, points where the black
 * squares touch each other. The detected coordinates are approximate, and to determine their positions
 * more accurately, the function calls cornerSubPix. You also may use the function cornerSubPix with
 * different parameters if returned coordinates are not accurate enough.
 *
 * Sample usage of detecting and drawing chessboard corners: :
 *
 *     Size patternsize(8,6); //interior number of corners
 *     Mat gray = ....; //source image
 *     vector<Point2f> corners; //this will be filled by the detected corners
 *
 *     //CALIB_CB_FAST_CHECK saves a lot of time on images
 *     //that do not contain any chessboard corners
 *     bool patternfound = findChessboardCorners(gray, patternsize, corners,
 *             CALIB_CB_ADAPTIVE_THRESH + CALIB_CB_NORMALIZE_IMAGE
 *             + CALIB_CB_FAST_CHECK);
 *
 *     if(patternfound)
 *       cornerSubPix(gray, corners, Size(11, 11), Size(-1, -1),
 *         TermCriteria(CV_TERMCRIT_EPS + CV_TERMCRIT_ITER, 30, 0.1));
 *
 *     drawChessboardCorners(img, patternsize, Mat(corners), patternfound);
 *
 * @note The function requires white space (like a square-thick border, the wider the better) around
 * the board to make the detection more robust in various environments. Otherwise, if there is no
 * border and the background is dark, the outer black squares cannot be segmented properly and so the
 * square grouping and ordering algorithm fails.
 */
+ (BOOL)findChessboardCorners:(Mat*)image patternSize:(Size2i*)patternSize corners:(Mat*)corners flags:(int)flags NS_SWIFT_NAME(findChessboardCorners(image:patternSize:corners:flags:));

/**
 * Finds the positions of internal corners of the chessboard.
 *
 * @param image Source chessboard view. It must be an 8-bit grayscale or color image.
 * @param patternSize Number of inner corners per a chessboard row and column
 * ( patternSize = cv::Size(points_per_row,points_per_colum) = cv::Size(columns,rows) ).
 * @param corners Output array of detected corners.
 * -   **CALIB_CB_ADAPTIVE_THRESH** Use adaptive thresholding to convert the image to black
 * and white, rather than a fixed threshold level (computed from the average image brightness).
 * -   **CALIB_CB_NORMALIZE_IMAGE** Normalize the image gamma with equalizeHist before
 * applying fixed or adaptive thresholding.
 * -   **CALIB_CB_FILTER_QUADS** Use additional criteria (like contour area, perimeter,
 * square-like shape) to filter out false quads extracted at the contour retrieval stage.
 * -   **CALIB_CB_FAST_CHECK** Run a fast check on the image that looks for chessboard corners,
 * and shortcut the call if none is found. This can drastically speed up the call in the
 * degenerate condition when no chessboard is observed.
 *
 * The function attempts to determine whether the input image is a view of the chessboard pattern and
 * locate the internal chessboard corners. The function returns a non-zero value if all of the corners
 * are found and they are placed in a certain order (row by row, left to right in every row).
 * Otherwise, if the function fails to find all the corners or reorder them, it returns 0. For example,
 * a regular chessboard has 8 x 8 squares and 7 x 7 internal corners, that is, points where the black
 * squares touch each other. The detected coordinates are approximate, and to determine their positions
 * more accurately, the function calls cornerSubPix. You also may use the function cornerSubPix with
 * different parameters if returned coordinates are not accurate enough.
 *
 * Sample usage of detecting and drawing chessboard corners: :
 *
 *     Size patternsize(8,6); //interior number of corners
 *     Mat gray = ....; //source image
 *     vector<Point2f> corners; //this will be filled by the detected corners
 *
 *     //CALIB_CB_FAST_CHECK saves a lot of time on images
 *     //that do not contain any chessboard corners
 *     bool patternfound = findChessboardCorners(gray, patternsize, corners,
 *             CALIB_CB_ADAPTIVE_THRESH + CALIB_CB_NORMALIZE_IMAGE
 *             + CALIB_CB_FAST_CHECK);
 *
 *     if(patternfound)
 *       cornerSubPix(gray, corners, Size(11, 11), Size(-1, -1),
 *         TermCriteria(CV_TERMCRIT_EPS + CV_TERMCRIT_ITER, 30, 0.1));
 *
 *     drawChessboardCorners(img, patternsize, Mat(corners), patternfound);
 *
 * @note The function requires white space (like a square-thick border, the wider the better) around
 * the board to make the detection more robust in various environments. Otherwise, if there is no
 * border and the background is dark, the outer black squares cannot be segmented properly and so the
 * square grouping and ordering algorithm fails.
 */
+ (BOOL)findChessboardCorners:(Mat*)image patternSize:(Size2i*)patternSize corners:(Mat*)corners NS_SWIFT_NAME(findChessboardCorners(image:patternSize:corners:));


//
//  bool cv::findChessboardCornersSB(Mat image, Size patternSize, Mat& corners, int flags, Mat& meta)
//
/**
 * Finds the positions of internal corners of the chessboard using a sector based approach.
 *
 * @param image Source chessboard view. It must be an 8-bit grayscale or color image.
 * @param patternSize Number of inner corners per a chessboard row and column
 * ( patternSize = cv::Size(points_per_row,points_per_colum) = cv::Size(columns,rows) ).
 * @param corners Output array of detected corners.
 * @param flags Various operation flags that can be zero or a combination of the following values:
 * -   **CALIB_CB_NORMALIZE_IMAGE** Normalize the image gamma with equalizeHist before detection.
 * -   **CALIB_CB_EXHAUSTIVE** Run an exhaustive search to improve detection rate.
 * -   **CALIB_CB_ACCURACY** Up sample input image to improve sub-pixel accuracy due to aliasing effects.
 * -   **CALIB_CB_LARGER** The detected pattern is allowed to be larger than patternSize (see description).
 * -   **CALIB_CB_MARKER** The detected pattern must have a marker (see description).
 * This should be used if an accurate camera calibration is required.
 * @param meta Optional output arrray of detected corners (CV_8UC1 and size = cv::Size(columns,rows)).
 * Each entry stands for one corner of the pattern and can have one of the following values:
 * -   0 = no meta data attached
 * -   1 = left-top corner of a black cell
 * -   2 = left-top corner of a white cell
 * -   3 = left-top corner of a black cell with a white marker dot
 * -   4 = left-top corner of a white cell with a black marker dot (pattern origin in case of markers otherwise first corner)
 *
 * The function is analog to findchessboardCorners but uses a localized radon
 * transformation approximated by box filters being more robust to all sort of
 * noise, faster on larger images and is able to directly return the sub-pixel
 * position of the internal chessboard corners. The Method is based on the paper
 * CITE: duda2018 "Accurate Detection and Localization of Checkerboard Corners for
 * Calibration" demonstrating that the returned sub-pixel positions are more
 * accurate than the one returned by cornerSubPix allowing a precise camera
 * calibration for demanding applications.
 *
 * In the case, the flags **CALIB_CB_LARGER** or **CALIB_CB_MARKER** are given,
 * the result can be recovered from the optional meta array. Both flags are
 * helpful to use calibration patterns exceeding the field of view of the camera.
 * These oversized patterns allow more accurate calibrations as corners can be
 * utilized, which are as close as possible to the image borders.  For a
 * consistent coordinate system across all images, the optional marker (see image
 * below) can be used to move the origin of the board to the location where the
 * black circle is located.
 *
 * @note The function requires a white boarder with roughly the same width as one
 * of the checkerboard fields around the whole board to improve the detection in
 * various environments. In addition, because of the localized radon
 * transformation it is beneficial to use round corners for the field corners
 * which are located on the outside of the board. The following figure illustrates
 * a sample checkerboard optimized for the detection. However, any other checkerboard
 * can be used as well.
 * ![Checkerboard](pics/checkerboard_radon.png)
 */
+ (BOOL)findChessboardCornersSBWithMeta:(Mat*)image patternSize:(Size2i*)patternSize corners:(Mat*)corners flags:(int)flags meta:(Mat*)meta NS_SWIFT_NAME(findChessboardCornersSB(image:patternSize:corners:flags:meta:));


//
//  bool cv::findChessboardCornersSB(Mat image, Size patternSize, Mat& corners, int flags = 0)
//
+ (BOOL)findChessboardCornersSB:(Mat*)image patternSize:(Size2i*)patternSize corners:(Mat*)corners flags:(int)flags NS_SWIFT_NAME(findChessboardCornersSB(image:patternSize:corners:flags:));

+ (BOOL)findChessboardCornersSB:(Mat*)image patternSize:(Size2i*)patternSize corners:(Mat*)corners NS_SWIFT_NAME(findChessboardCornersSB(image:patternSize:corners:));


//
//  bool cv::findCirclesGrid(Mat image, Size patternSize, Mat& centers, int flags,  _hidden_  blobDetector = cv::SimpleBlobDetector::create(), CirclesGridFinderParameters parameters)
//
/**
 * Finds centers in the grid of circles.
 *
 * @param image grid view of input circles; it must be an 8-bit grayscale or color image.
 * @param patternSize number of circles per row and column
 * ( patternSize = Size(points_per_row, points_per_colum) ).
 * @param centers output array of detected centers.
 * @param flags various operation flags that can be one of the following values:
 * -   **CALIB_CB_SYMMETRIC_GRID** uses symmetric pattern of circles.
 * -   **CALIB_CB_ASYMMETRIC_GRID** uses asymmetric pattern of circles.
 * -   **CALIB_CB_CLUSTERING** uses a special algorithm for grid detection. It is more robust to
 * perspective distortions but much more sensitive to background clutter.
 * @param blobDetector feature detector that finds blobs like dark circles on light background.
 * @param parameters struct for finding circles in a grid pattern.
 *
 * The function attempts to determine whether the input image contains a grid of circles. If it is, the
 * function locates centers of the circles. The function returns a non-zero value if all of the centers
 * have been found and they have been placed in a certain order (row by row, left to right in every
 * row). Otherwise, if the function fails to find all the corners or reorder them, it returns 0.
 *
 * Sample usage of detecting and drawing the centers of circles: :
 *
 *     Size patternsize(7,7); //number of centers
 *     Mat gray = ....; //source image
 *     vector<Point2f> centers; //this will be filled by the detected centers
 *
 *     bool patternfound = findCirclesGrid(gray, patternsize, centers);
 *
 *     drawChessboardCorners(img, patternsize, Mat(centers), patternfound);
 *
 * @note The function requires white space (like a square-thick border, the wider the better) around
 * the board to make the detection more robust in various environments.
 */
+ (BOOL)findCirclesGrid:(Mat*)image patternSize:(Size2i*)patternSize centers:(Mat*)centers flags:(int)flags parameters:(CirclesGridFinderParameters*)parameters NS_SWIFT_NAME(findCirclesGrid(image:patternSize:centers:flags:parameters:));


//
//  bool cv::findCirclesGrid(Mat image, Size patternSize, Mat& centers, int flags = CALIB_CB_SYMMETRIC_GRID,  _hidden_  blobDetector = cv::SimpleBlobDetector::create())
//
+ (BOOL)findCirclesGrid:(Mat*)image patternSize:(Size2i*)patternSize centers:(Mat*)centers flags:(int)flags NS_SWIFT_NAME(findCirclesGrid(image:patternSize:centers:flags:));

+ (BOOL)findCirclesGrid:(Mat*)image patternSize:(Size2i*)patternSize centers:(Mat*)centers NS_SWIFT_NAME(findCirclesGrid(image:patternSize:centers:));


//
//  bool cv::solvePnP(Mat objectPoints, Mat imagePoints, Mat cameraMatrix, Mat distCoeffs, Mat& rvec, Mat& tvec, bool useExtrinsicGuess = false, int flags = SOLVEPNP_ITERATIVE)
//
/**
 * Finds an object pose from 3D-2D point correspondences.
 * This function returns the rotation and the translation vectors that transform a 3D point expressed in the object
 * coordinate frame to the camera coordinate frame, using different methods:
 * - P3P methods (REF: SOLVEPNP_P3P, REF: SOLVEPNP_AP3P): need 4 input points to return a unique solution.
 * - REF: SOLVEPNP_IPPE Input points must be >= 4 and object points must be coplanar.
 * - REF: SOLVEPNP_IPPE_SQUARE Special case suitable for marker pose estimation.
 * Number of input points must be 4. Object points must be defined in the following order:
 *   - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *   - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *   - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *   - point 3: [-squareLength / 2, -squareLength / 2, 0]
 * - for all the other flags, number of input points must be >= 4 and object points can be in any configuration.
 *
 * @param objectPoints Array of object points in the object coordinate space, Nx3 1-channel or
 * 1xN/Nx1 3-channel, where N is the number of points. vector\<Point3d\> can be also passed here.
 * @param imagePoints Array of corresponding image points, Nx2 1-channel or 1xN/Nx1 2-channel,
 * where N is the number of points. vector\<Point2d\> can be also passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvec Output rotation vector (see REF: Rodrigues ) that, together with tvec, brings points from
 * the model coordinate system to the camera coordinate system.
 * @param tvec Output translation vector.
 * @param useExtrinsicGuess Parameter used for #SOLVEPNP_ITERATIVE. If true (1), the function uses
 * the provided rvec and tvec values as initial approximations of the rotation and translation
 * vectors, respectively, and further optimizes them.
 * @param flags Method for solving a PnP problem:
 * -   **SOLVEPNP_ITERATIVE** Iterative method is based on a Levenberg-Marquardt optimization. In
 * this case the function finds such a pose that minimizes reprojection error, that is the sum
 * of squared distances between the observed projections imagePoints and the projected (using
 * projectPoints ) objectPoints .
 * -   **SOLVEPNP_P3P** Method is based on the paper of X.S. Gao, X.-R. Hou, J. Tang, H.-F. Chang
 * "Complete Solution Classification for the Perspective-Three-Point Problem" (CITE: gao2003complete).
 * In this case the function requires exactly four object and image points.
 * -   **SOLVEPNP_AP3P** Method is based on the paper of T. Ke, S. Roumeliotis
 * "An Efficient Algebraic Solution to the Perspective-Three-Point Problem" (CITE: Ke17).
 * In this case the function requires exactly four object and image points.
 * -   **SOLVEPNP_EPNP** Method has been introduced by F. Moreno-Noguer, V. Lepetit and P. Fua in the
 * paper "EPnP: Efficient Perspective-n-Point Camera Pose Estimation" (CITE: lepetit2009epnp).
 * -   **SOLVEPNP_DLS** Method is based on the paper of J. Hesch and S. Roumeliotis.
 * "A Direct Least-Squares (DLS) Method for PnP" (CITE: hesch2011direct).
 * -   **SOLVEPNP_UPNP** Method is based on the paper of A. Penate-Sanchez, J. Andrade-Cetto,
 * F. Moreno-Noguer. "Exhaustive Linearization for Robust Camera Pose and Focal Length
 * Estimation" (CITE: penate2013exhaustive). In this case the function also estimates the parameters `$$f_x$$` and `$$f_y$$`
 * assuming that both have the same value. Then the cameraMatrix is updated with the estimated
 * focal length.
 * -   **SOLVEPNP_IPPE** Method is based on the paper of T. Collins and A. Bartoli.
 * "Infinitesimal Plane-Based Pose Estimation" (CITE: Collins14). This method requires coplanar object points.
 * -   **SOLVEPNP_IPPE_SQUARE** Method is based on the paper of Toby Collins and Adrien Bartoli.
 * "Infinitesimal Plane-Based Pose Estimation" (CITE: Collins14). This method is suitable for marker pose estimation.
 * It requires 4 coplanar object points defined in the following order:
 *   - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *   - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *   - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *   - point 3: [-squareLength / 2, -squareLength / 2, 0]
 *
 * The function estimates the object pose given a set of object points, their corresponding image
 * projections, as well as the camera matrix and the distortion coefficients, see the figure below
 * (more precisely, the X-axis of the camera frame is pointing to the right, the Y-axis downward
 * and the Z-axis forward).
 *
 * ![](pnp.jpg)
 *
 * Points expressed in the world frame `$$ \bf{X}_w $$` are projected into the image plane `$$ \left[ u, v \right] $$`
 * using the perspective projection model `$$ \Pi $$` and the camera intrinsic parameters matrix `$$ \bf{A} $$`:
 *
 * `$$
 *   \begin{align*}
 *   \begin{bmatrix}
 *   u \\
 *   v \\
 *   1
 *   \end{bmatrix} &=
 *   \bf{A} \hspace{0.1em} \Pi \hspace{0.2em} ^{c}\bf{T}_w
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix} \\
 *   \begin{bmatrix}
 *   u \\
 *   v \\
 *   1
 *   \end{bmatrix} &=
 *   \begin{bmatrix}
 *   f_x & 0 & c_x \\
 *   0 & f_y & c_y \\
 *   0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   1 & 0 & 0 & 0 \\
 *   0 & 1 & 0 & 0 \\
 *   0 & 0 & 1 & 0
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   r_{11} & r_{12} & r_{13} & t_x \\
 *   r_{21} & r_{22} & r_{23} & t_y \\
 *   r_{31} & r_{32} & r_{33} & t_z \\
 *   0 & 0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix}
 *   \end{align*}
 * $$`
 *
 * The estimated pose is thus the rotation (`rvec`) and the translation (`tvec`) vectors that allow transforming
 * a 3D point expressed in the world frame into the camera frame:
 *
 * `$$
 *   \begin{align*}
 *   \begin{bmatrix}
 *   X_c \\
 *   Y_c \\
 *   Z_c \\
 *   1
 *   \end{bmatrix} &=
 *   \hspace{0.2em} ^{c}\bf{T}_w
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix} \\
 *   \begin{bmatrix}
 *   X_c \\
 *   Y_c \\
 *   Z_c \\
 *   1
 *   \end{bmatrix} &=
 *   \begin{bmatrix}
 *   r_{11} & r_{12} & r_{13} & t_x \\
 *   r_{21} & r_{22} & r_{23} & t_y \\
 *   r_{31} & r_{32} & r_{33} & t_z \\
 *   0 & 0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix}
 *   \end{align*}
 * $$`
 *
 * @note
 *    -   An example of how to use solvePnP for planar augmented reality can be found at
 *         opencv_source_code/samples/python/plane_ar.py
 *    -   If you are using Python:
 *         - Numpy array slices won't work as input because solvePnP requires contiguous
 *         arrays (enforced by the assertion using cv::Mat::checkVector() around line 55 of
 *         modules/calib3d/src/solvepnp.cpp version 2.4.9)
 *         - The P3P algorithm requires image points to be in an array of shape (N,1,2) due
 *         to its calling of cv::undistortPoints (around line 75 of modules/calib3d/src/solvepnp.cpp version 2.4.9)
 *         which requires 2-channel information.
 *         - Thus, given some data D = np.array(...) where D.shape = (N,M), in order to use a subset of
 *         it as, e.g., imagePoints, one must effectively copy it into a new array: imagePoints =
 *         np.ascontiguousarray(D[:,:2]).reshape((N,1,2))
 *    -   The methods **SOLVEPNP_DLS** and **SOLVEPNP_UPNP** cannot be used as the current implementations are
 *        unstable and sometimes give completely wrong results. If you pass one of these two
 *        flags, **SOLVEPNP_EPNP** method will be used instead.
 *    -   The minimum number of points is 4 in the general case. In the case of **SOLVEPNP_P3P** and **SOLVEPNP_AP3P**
 *        methods, it is required to use exactly 4 points (the first 3 points are used to estimate all the solutions
 *        of the P3P problem, the last one is used to retain the best solution that minimizes the reprojection error).
 *    -   With **SOLVEPNP_ITERATIVE** method and `useExtrinsicGuess=true`, the minimum number of points is 3 (3 points
 *        are sufficient to compute a pose but there are up to 4 solutions). The initial solution should be close to the
 *        global solution to converge.
 *    -   With **SOLVEPNP_IPPE** input points must be >= 4 and object points must be coplanar.
 *    -   With **SOLVEPNP_IPPE_SQUARE** this is a special case suitable for marker pose estimation.
 *        Number of input points must be 4. Object points must be defined in the following order:
 *          - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *          - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *          - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *          - point 3: [-squareLength / 2, -squareLength / 2, 0]
 */
+ (BOOL)solvePnP:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvec:(Mat*)rvec tvec:(Mat*)tvec useExtrinsicGuess:(BOOL)useExtrinsicGuess flags:(int)flags NS_SWIFT_NAME(solvePnP(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvec:tvec:useExtrinsicGuess:flags:));

/**
 * Finds an object pose from 3D-2D point correspondences.
 * This function returns the rotation and the translation vectors that transform a 3D point expressed in the object
 * coordinate frame to the camera coordinate frame, using different methods:
 * - P3P methods (REF: SOLVEPNP_P3P, REF: SOLVEPNP_AP3P): need 4 input points to return a unique solution.
 * - REF: SOLVEPNP_IPPE Input points must be >= 4 and object points must be coplanar.
 * - REF: SOLVEPNP_IPPE_SQUARE Special case suitable for marker pose estimation.
 * Number of input points must be 4. Object points must be defined in the following order:
 *   - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *   - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *   - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *   - point 3: [-squareLength / 2, -squareLength / 2, 0]
 * - for all the other flags, number of input points must be >= 4 and object points can be in any configuration.
 *
 * @param objectPoints Array of object points in the object coordinate space, Nx3 1-channel or
 * 1xN/Nx1 3-channel, where N is the number of points. vector\<Point3d\> can be also passed here.
 * @param imagePoints Array of corresponding image points, Nx2 1-channel or 1xN/Nx1 2-channel,
 * where N is the number of points. vector\<Point2d\> can be also passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvec Output rotation vector (see REF: Rodrigues ) that, together with tvec, brings points from
 * the model coordinate system to the camera coordinate system.
 * @param tvec Output translation vector.
 * @param useExtrinsicGuess Parameter used for #SOLVEPNP_ITERATIVE. If true (1), the function uses
 * the provided rvec and tvec values as initial approximations of the rotation and translation
 * vectors, respectively, and further optimizes them.
 * -   **SOLVEPNP_ITERATIVE** Iterative method is based on a Levenberg-Marquardt optimization. In
 * this case the function finds such a pose that minimizes reprojection error, that is the sum
 * of squared distances between the observed projections imagePoints and the projected (using
 * projectPoints ) objectPoints .
 * -   **SOLVEPNP_P3P** Method is based on the paper of X.S. Gao, X.-R. Hou, J. Tang, H.-F. Chang
 * "Complete Solution Classification for the Perspective-Three-Point Problem" (CITE: gao2003complete).
 * In this case the function requires exactly four object and image points.
 * -   **SOLVEPNP_AP3P** Method is based on the paper of T. Ke, S. Roumeliotis
 * "An Efficient Algebraic Solution to the Perspective-Three-Point Problem" (CITE: Ke17).
 * In this case the function requires exactly four object and image points.
 * -   **SOLVEPNP_EPNP** Method has been introduced by F. Moreno-Noguer, V. Lepetit and P. Fua in the
 * paper "EPnP: Efficient Perspective-n-Point Camera Pose Estimation" (CITE: lepetit2009epnp).
 * -   **SOLVEPNP_DLS** Method is based on the paper of J. Hesch and S. Roumeliotis.
 * "A Direct Least-Squares (DLS) Method for PnP" (CITE: hesch2011direct).
 * -   **SOLVEPNP_UPNP** Method is based on the paper of A. Penate-Sanchez, J. Andrade-Cetto,
 * F. Moreno-Noguer. "Exhaustive Linearization for Robust Camera Pose and Focal Length
 * Estimation" (CITE: penate2013exhaustive). In this case the function also estimates the parameters `$$f_x$$` and `$$f_y$$`
 * assuming that both have the same value. Then the cameraMatrix is updated with the estimated
 * focal length.
 * -   **SOLVEPNP_IPPE** Method is based on the paper of T. Collins and A. Bartoli.
 * "Infinitesimal Plane-Based Pose Estimation" (CITE: Collins14). This method requires coplanar object points.
 * -   **SOLVEPNP_IPPE_SQUARE** Method is based on the paper of Toby Collins and Adrien Bartoli.
 * "Infinitesimal Plane-Based Pose Estimation" (CITE: Collins14). This method is suitable for marker pose estimation.
 * It requires 4 coplanar object points defined in the following order:
 *   - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *   - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *   - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *   - point 3: [-squareLength / 2, -squareLength / 2, 0]
 *
 * The function estimates the object pose given a set of object points, their corresponding image
 * projections, as well as the camera matrix and the distortion coefficients, see the figure below
 * (more precisely, the X-axis of the camera frame is pointing to the right, the Y-axis downward
 * and the Z-axis forward).
 *
 * ![](pnp.jpg)
 *
 * Points expressed in the world frame `$$ \bf{X}_w $$` are projected into the image plane `$$ \left[ u, v \right] $$`
 * using the perspective projection model `$$ \Pi $$` and the camera intrinsic parameters matrix `$$ \bf{A} $$`:
 *
 * `$$
 *   \begin{align*}
 *   \begin{bmatrix}
 *   u \\
 *   v \\
 *   1
 *   \end{bmatrix} &=
 *   \bf{A} \hspace{0.1em} \Pi \hspace{0.2em} ^{c}\bf{T}_w
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix} \\
 *   \begin{bmatrix}
 *   u \\
 *   v \\
 *   1
 *   \end{bmatrix} &=
 *   \begin{bmatrix}
 *   f_x & 0 & c_x \\
 *   0 & f_y & c_y \\
 *   0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   1 & 0 & 0 & 0 \\
 *   0 & 1 & 0 & 0 \\
 *   0 & 0 & 1 & 0
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   r_{11} & r_{12} & r_{13} & t_x \\
 *   r_{21} & r_{22} & r_{23} & t_y \\
 *   r_{31} & r_{32} & r_{33} & t_z \\
 *   0 & 0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix}
 *   \end{align*}
 * $$`
 *
 * The estimated pose is thus the rotation (`rvec`) and the translation (`tvec`) vectors that allow transforming
 * a 3D point expressed in the world frame into the camera frame:
 *
 * `$$
 *   \begin{align*}
 *   \begin{bmatrix}
 *   X_c \\
 *   Y_c \\
 *   Z_c \\
 *   1
 *   \end{bmatrix} &=
 *   \hspace{0.2em} ^{c}\bf{T}_w
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix} \\
 *   \begin{bmatrix}
 *   X_c \\
 *   Y_c \\
 *   Z_c \\
 *   1
 *   \end{bmatrix} &=
 *   \begin{bmatrix}
 *   r_{11} & r_{12} & r_{13} & t_x \\
 *   r_{21} & r_{22} & r_{23} & t_y \\
 *   r_{31} & r_{32} & r_{33} & t_z \\
 *   0 & 0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix}
 *   \end{align*}
 * $$`
 *
 * @note
 *    -   An example of how to use solvePnP for planar augmented reality can be found at
 *         opencv_source_code/samples/python/plane_ar.py
 *    -   If you are using Python:
 *         - Numpy array slices won't work as input because solvePnP requires contiguous
 *         arrays (enforced by the assertion using cv::Mat::checkVector() around line 55 of
 *         modules/calib3d/src/solvepnp.cpp version 2.4.9)
 *         - The P3P algorithm requires image points to be in an array of shape (N,1,2) due
 *         to its calling of cv::undistortPoints (around line 75 of modules/calib3d/src/solvepnp.cpp version 2.4.9)
 *         which requires 2-channel information.
 *         - Thus, given some data D = np.array(...) where D.shape = (N,M), in order to use a subset of
 *         it as, e.g., imagePoints, one must effectively copy it into a new array: imagePoints =
 *         np.ascontiguousarray(D[:,:2]).reshape((N,1,2))
 *    -   The methods **SOLVEPNP_DLS** and **SOLVEPNP_UPNP** cannot be used as the current implementations are
 *        unstable and sometimes give completely wrong results. If you pass one of these two
 *        flags, **SOLVEPNP_EPNP** method will be used instead.
 *    -   The minimum number of points is 4 in the general case. In the case of **SOLVEPNP_P3P** and **SOLVEPNP_AP3P**
 *        methods, it is required to use exactly 4 points (the first 3 points are used to estimate all the solutions
 *        of the P3P problem, the last one is used to retain the best solution that minimizes the reprojection error).
 *    -   With **SOLVEPNP_ITERATIVE** method and `useExtrinsicGuess=true`, the minimum number of points is 3 (3 points
 *        are sufficient to compute a pose but there are up to 4 solutions). The initial solution should be close to the
 *        global solution to converge.
 *    -   With **SOLVEPNP_IPPE** input points must be >= 4 and object points must be coplanar.
 *    -   With **SOLVEPNP_IPPE_SQUARE** this is a special case suitable for marker pose estimation.
 *        Number of input points must be 4. Object points must be defined in the following order:
 *          - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *          - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *          - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *          - point 3: [-squareLength / 2, -squareLength / 2, 0]
 */
+ (BOOL)solvePnP:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvec:(Mat*)rvec tvec:(Mat*)tvec useExtrinsicGuess:(BOOL)useExtrinsicGuess NS_SWIFT_NAME(solvePnP(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvec:tvec:useExtrinsicGuess:));

/**
 * Finds an object pose from 3D-2D point correspondences.
 * This function returns the rotation and the translation vectors that transform a 3D point expressed in the object
 * coordinate frame to the camera coordinate frame, using different methods:
 * - P3P methods (REF: SOLVEPNP_P3P, REF: SOLVEPNP_AP3P): need 4 input points to return a unique solution.
 * - REF: SOLVEPNP_IPPE Input points must be >= 4 and object points must be coplanar.
 * - REF: SOLVEPNP_IPPE_SQUARE Special case suitable for marker pose estimation.
 * Number of input points must be 4. Object points must be defined in the following order:
 *   - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *   - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *   - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *   - point 3: [-squareLength / 2, -squareLength / 2, 0]
 * - for all the other flags, number of input points must be >= 4 and object points can be in any configuration.
 *
 * @param objectPoints Array of object points in the object coordinate space, Nx3 1-channel or
 * 1xN/Nx1 3-channel, where N is the number of points. vector\<Point3d\> can be also passed here.
 * @param imagePoints Array of corresponding image points, Nx2 1-channel or 1xN/Nx1 2-channel,
 * where N is the number of points. vector\<Point2d\> can be also passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvec Output rotation vector (see REF: Rodrigues ) that, together with tvec, brings points from
 * the model coordinate system to the camera coordinate system.
 * @param tvec Output translation vector.
 * the provided rvec and tvec values as initial approximations of the rotation and translation
 * vectors, respectively, and further optimizes them.
 * -   **SOLVEPNP_ITERATIVE** Iterative method is based on a Levenberg-Marquardt optimization. In
 * this case the function finds such a pose that minimizes reprojection error, that is the sum
 * of squared distances between the observed projections imagePoints and the projected (using
 * projectPoints ) objectPoints .
 * -   **SOLVEPNP_P3P** Method is based on the paper of X.S. Gao, X.-R. Hou, J. Tang, H.-F. Chang
 * "Complete Solution Classification for the Perspective-Three-Point Problem" (CITE: gao2003complete).
 * In this case the function requires exactly four object and image points.
 * -   **SOLVEPNP_AP3P** Method is based on the paper of T. Ke, S. Roumeliotis
 * "An Efficient Algebraic Solution to the Perspective-Three-Point Problem" (CITE: Ke17).
 * In this case the function requires exactly four object and image points.
 * -   **SOLVEPNP_EPNP** Method has been introduced by F. Moreno-Noguer, V. Lepetit and P. Fua in the
 * paper "EPnP: Efficient Perspective-n-Point Camera Pose Estimation" (CITE: lepetit2009epnp).
 * -   **SOLVEPNP_DLS** Method is based on the paper of J. Hesch and S. Roumeliotis.
 * "A Direct Least-Squares (DLS) Method for PnP" (CITE: hesch2011direct).
 * -   **SOLVEPNP_UPNP** Method is based on the paper of A. Penate-Sanchez, J. Andrade-Cetto,
 * F. Moreno-Noguer. "Exhaustive Linearization for Robust Camera Pose and Focal Length
 * Estimation" (CITE: penate2013exhaustive). In this case the function also estimates the parameters `$$f_x$$` and `$$f_y$$`
 * assuming that both have the same value. Then the cameraMatrix is updated with the estimated
 * focal length.
 * -   **SOLVEPNP_IPPE** Method is based on the paper of T. Collins and A. Bartoli.
 * "Infinitesimal Plane-Based Pose Estimation" (CITE: Collins14). This method requires coplanar object points.
 * -   **SOLVEPNP_IPPE_SQUARE** Method is based on the paper of Toby Collins and Adrien Bartoli.
 * "Infinitesimal Plane-Based Pose Estimation" (CITE: Collins14). This method is suitable for marker pose estimation.
 * It requires 4 coplanar object points defined in the following order:
 *   - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *   - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *   - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *   - point 3: [-squareLength / 2, -squareLength / 2, 0]
 *
 * The function estimates the object pose given a set of object points, their corresponding image
 * projections, as well as the camera matrix and the distortion coefficients, see the figure below
 * (more precisely, the X-axis of the camera frame is pointing to the right, the Y-axis downward
 * and the Z-axis forward).
 *
 * ![](pnp.jpg)
 *
 * Points expressed in the world frame `$$ \bf{X}_w $$` are projected into the image plane `$$ \left[ u, v \right] $$`
 * using the perspective projection model `$$ \Pi $$` and the camera intrinsic parameters matrix `$$ \bf{A} $$`:
 *
 * `$$
 *   \begin{align*}
 *   \begin{bmatrix}
 *   u \\
 *   v \\
 *   1
 *   \end{bmatrix} &=
 *   \bf{A} \hspace{0.1em} \Pi \hspace{0.2em} ^{c}\bf{T}_w
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix} \\
 *   \begin{bmatrix}
 *   u \\
 *   v \\
 *   1
 *   \end{bmatrix} &=
 *   \begin{bmatrix}
 *   f_x & 0 & c_x \\
 *   0 & f_y & c_y \\
 *   0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   1 & 0 & 0 & 0 \\
 *   0 & 1 & 0 & 0 \\
 *   0 & 0 & 1 & 0
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   r_{11} & r_{12} & r_{13} & t_x \\
 *   r_{21} & r_{22} & r_{23} & t_y \\
 *   r_{31} & r_{32} & r_{33} & t_z \\
 *   0 & 0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix}
 *   \end{align*}
 * $$`
 *
 * The estimated pose is thus the rotation (`rvec`) and the translation (`tvec`) vectors that allow transforming
 * a 3D point expressed in the world frame into the camera frame:
 *
 * `$$
 *   \begin{align*}
 *   \begin{bmatrix}
 *   X_c \\
 *   Y_c \\
 *   Z_c \\
 *   1
 *   \end{bmatrix} &=
 *   \hspace{0.2em} ^{c}\bf{T}_w
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix} \\
 *   \begin{bmatrix}
 *   X_c \\
 *   Y_c \\
 *   Z_c \\
 *   1
 *   \end{bmatrix} &=
 *   \begin{bmatrix}
 *   r_{11} & r_{12} & r_{13} & t_x \\
 *   r_{21} & r_{22} & r_{23} & t_y \\
 *   r_{31} & r_{32} & r_{33} & t_z \\
 *   0 & 0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix}
 *   \end{align*}
 * $$`
 *
 * @note
 *    -   An example of how to use solvePnP for planar augmented reality can be found at
 *         opencv_source_code/samples/python/plane_ar.py
 *    -   If you are using Python:
 *         - Numpy array slices won't work as input because solvePnP requires contiguous
 *         arrays (enforced by the assertion using cv::Mat::checkVector() around line 55 of
 *         modules/calib3d/src/solvepnp.cpp version 2.4.9)
 *         - The P3P algorithm requires image points to be in an array of shape (N,1,2) due
 *         to its calling of cv::undistortPoints (around line 75 of modules/calib3d/src/solvepnp.cpp version 2.4.9)
 *         which requires 2-channel information.
 *         - Thus, given some data D = np.array(...) where D.shape = (N,M), in order to use a subset of
 *         it as, e.g., imagePoints, one must effectively copy it into a new array: imagePoints =
 *         np.ascontiguousarray(D[:,:2]).reshape((N,1,2))
 *    -   The methods **SOLVEPNP_DLS** and **SOLVEPNP_UPNP** cannot be used as the current implementations are
 *        unstable and sometimes give completely wrong results. If you pass one of these two
 *        flags, **SOLVEPNP_EPNP** method will be used instead.
 *    -   The minimum number of points is 4 in the general case. In the case of **SOLVEPNP_P3P** and **SOLVEPNP_AP3P**
 *        methods, it is required to use exactly 4 points (the first 3 points are used to estimate all the solutions
 *        of the P3P problem, the last one is used to retain the best solution that minimizes the reprojection error).
 *    -   With **SOLVEPNP_ITERATIVE** method and `useExtrinsicGuess=true`, the minimum number of points is 3 (3 points
 *        are sufficient to compute a pose but there are up to 4 solutions). The initial solution should be close to the
 *        global solution to converge.
 *    -   With **SOLVEPNP_IPPE** input points must be >= 4 and object points must be coplanar.
 *    -   With **SOLVEPNP_IPPE_SQUARE** this is a special case suitable for marker pose estimation.
 *        Number of input points must be 4. Object points must be defined in the following order:
 *          - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *          - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *          - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *          - point 3: [-squareLength / 2, -squareLength / 2, 0]
 */
+ (BOOL)solvePnP:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvec:(Mat*)rvec tvec:(Mat*)tvec NS_SWIFT_NAME(solvePnP(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvec:tvec:));


//
//  bool cv::solvePnPRansac(Mat objectPoints, Mat imagePoints, Mat cameraMatrix, Mat distCoeffs, Mat& rvec, Mat& tvec, bool useExtrinsicGuess = false, int iterationsCount = 100, float reprojectionError = 8.0, double confidence = 0.99, Mat& inliers = Mat(), int flags = SOLVEPNP_ITERATIVE)
//
/**
 * Finds an object pose from 3D-2D point correspondences using the RANSAC scheme.
 *
 * @param objectPoints Array of object points in the object coordinate space, Nx3 1-channel or
 * 1xN/Nx1 3-channel, where N is the number of points. vector\<Point3d\> can be also passed here.
 * @param imagePoints Array of corresponding image points, Nx2 1-channel or 1xN/Nx1 2-channel,
 * where N is the number of points. vector\<Point2d\> can be also passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{fx}{0}{cx}{0}{fy}{cy}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvec Output rotation vector (see REF: Rodrigues ) that, together with tvec, brings points from
 * the model coordinate system to the camera coordinate system.
 * @param tvec Output translation vector.
 * @param useExtrinsicGuess Parameter used for REF: SOLVEPNP_ITERATIVE. If true (1), the function uses
 * the provided rvec and tvec values as initial approximations of the rotation and translation
 * vectors, respectively, and further optimizes them.
 * @param iterationsCount Number of iterations.
 * @param reprojectionError Inlier threshold value used by the RANSAC procedure. The parameter value
 * is the maximum allowed distance between the observed and computed point projections to consider it
 * an inlier.
 * @param confidence The probability that the algorithm produces a useful result.
 * @param inliers Output vector that contains indices of inliers in objectPoints and imagePoints .
 * @param flags Method for solving a PnP problem (see REF: solvePnP ).
 *
 * The function estimates an object pose given a set of object points, their corresponding image
 * projections, as well as the camera matrix and the distortion coefficients. This function finds such
 * a pose that minimizes reprojection error, that is, the sum of squared distances between the observed
 * projections imagePoints and the projected (using REF: projectPoints ) objectPoints. The use of RANSAC
 * makes the function resistant to outliers.
 *
 * @note
 *    -   An example of how to use solvePNPRansac for object detection can be found at
 *         opencv_source_code/samples/cpp/tutorial_code/calib3d/real_time_pose_estimation/
 *    -   The default method used to estimate the camera pose for the Minimal Sample Sets step
 *        is #SOLVEPNP_EPNP. Exceptions are:
 *          - if you choose #SOLVEPNP_P3P or #SOLVEPNP_AP3P, these methods will be used.
 *          - if the number of input points is equal to 4, #SOLVEPNP_P3P is used.
 *    -   The method used to estimate the camera pose using all the inliers is defined by the
 *        flags parameters unless it is equal to #SOLVEPNP_P3P or #SOLVEPNP_AP3P. In this case,
 *        the method #SOLVEPNP_EPNP will be used instead.
 */
+ (BOOL)solvePnPRansac:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvec:(Mat*)rvec tvec:(Mat*)tvec useExtrinsicGuess:(BOOL)useExtrinsicGuess iterationsCount:(int)iterationsCount reprojectionError:(float)reprojectionError confidence:(double)confidence inliers:(Mat*)inliers flags:(int)flags NS_SWIFT_NAME(solvePnPRansac(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvec:tvec:useExtrinsicGuess:iterationsCount:reprojectionError:confidence:inliers:flags:));

/**
 * Finds an object pose from 3D-2D point correspondences using the RANSAC scheme.
 *
 * @param objectPoints Array of object points in the object coordinate space, Nx3 1-channel or
 * 1xN/Nx1 3-channel, where N is the number of points. vector\<Point3d\> can be also passed here.
 * @param imagePoints Array of corresponding image points, Nx2 1-channel or 1xN/Nx1 2-channel,
 * where N is the number of points. vector\<Point2d\> can be also passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{fx}{0}{cx}{0}{fy}{cy}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvec Output rotation vector (see REF: Rodrigues ) that, together with tvec, brings points from
 * the model coordinate system to the camera coordinate system.
 * @param tvec Output translation vector.
 * @param useExtrinsicGuess Parameter used for REF: SOLVEPNP_ITERATIVE. If true (1), the function uses
 * the provided rvec and tvec values as initial approximations of the rotation and translation
 * vectors, respectively, and further optimizes them.
 * @param iterationsCount Number of iterations.
 * @param reprojectionError Inlier threshold value used by the RANSAC procedure. The parameter value
 * is the maximum allowed distance between the observed and computed point projections to consider it
 * an inlier.
 * @param confidence The probability that the algorithm produces a useful result.
 * @param inliers Output vector that contains indices of inliers in objectPoints and imagePoints .
 *
 * The function estimates an object pose given a set of object points, their corresponding image
 * projections, as well as the camera matrix and the distortion coefficients. This function finds such
 * a pose that minimizes reprojection error, that is, the sum of squared distances between the observed
 * projections imagePoints and the projected (using REF: projectPoints ) objectPoints. The use of RANSAC
 * makes the function resistant to outliers.
 *
 * @note
 *    -   An example of how to use solvePNPRansac for object detection can be found at
 *         opencv_source_code/samples/cpp/tutorial_code/calib3d/real_time_pose_estimation/
 *    -   The default method used to estimate the camera pose for the Minimal Sample Sets step
 *        is #SOLVEPNP_EPNP. Exceptions are:
 *          - if you choose #SOLVEPNP_P3P or #SOLVEPNP_AP3P, these methods will be used.
 *          - if the number of input points is equal to 4, #SOLVEPNP_P3P is used.
 *    -   The method used to estimate the camera pose using all the inliers is defined by the
 *        flags parameters unless it is equal to #SOLVEPNP_P3P or #SOLVEPNP_AP3P. In this case,
 *        the method #SOLVEPNP_EPNP will be used instead.
 */
+ (BOOL)solvePnPRansac:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvec:(Mat*)rvec tvec:(Mat*)tvec useExtrinsicGuess:(BOOL)useExtrinsicGuess iterationsCount:(int)iterationsCount reprojectionError:(float)reprojectionError confidence:(double)confidence inliers:(Mat*)inliers NS_SWIFT_NAME(solvePnPRansac(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvec:tvec:useExtrinsicGuess:iterationsCount:reprojectionError:confidence:inliers:));

/**
 * Finds an object pose from 3D-2D point correspondences using the RANSAC scheme.
 *
 * @param objectPoints Array of object points in the object coordinate space, Nx3 1-channel or
 * 1xN/Nx1 3-channel, where N is the number of points. vector\<Point3d\> can be also passed here.
 * @param imagePoints Array of corresponding image points, Nx2 1-channel or 1xN/Nx1 2-channel,
 * where N is the number of points. vector\<Point2d\> can be also passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{fx}{0}{cx}{0}{fy}{cy}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvec Output rotation vector (see REF: Rodrigues ) that, together with tvec, brings points from
 * the model coordinate system to the camera coordinate system.
 * @param tvec Output translation vector.
 * @param useExtrinsicGuess Parameter used for REF: SOLVEPNP_ITERATIVE. If true (1), the function uses
 * the provided rvec and tvec values as initial approximations of the rotation and translation
 * vectors, respectively, and further optimizes them.
 * @param iterationsCount Number of iterations.
 * @param reprojectionError Inlier threshold value used by the RANSAC procedure. The parameter value
 * is the maximum allowed distance between the observed and computed point projections to consider it
 * an inlier.
 * @param confidence The probability that the algorithm produces a useful result.
 *
 * The function estimates an object pose given a set of object points, their corresponding image
 * projections, as well as the camera matrix and the distortion coefficients. This function finds such
 * a pose that minimizes reprojection error, that is, the sum of squared distances between the observed
 * projections imagePoints and the projected (using REF: projectPoints ) objectPoints. The use of RANSAC
 * makes the function resistant to outliers.
 *
 * @note
 *    -   An example of how to use solvePNPRansac for object detection can be found at
 *         opencv_source_code/samples/cpp/tutorial_code/calib3d/real_time_pose_estimation/
 *    -   The default method used to estimate the camera pose for the Minimal Sample Sets step
 *        is #SOLVEPNP_EPNP. Exceptions are:
 *          - if you choose #SOLVEPNP_P3P or #SOLVEPNP_AP3P, these methods will be used.
 *          - if the number of input points is equal to 4, #SOLVEPNP_P3P is used.
 *    -   The method used to estimate the camera pose using all the inliers is defined by the
 *        flags parameters unless it is equal to #SOLVEPNP_P3P or #SOLVEPNP_AP3P. In this case,
 *        the method #SOLVEPNP_EPNP will be used instead.
 */
+ (BOOL)solvePnPRansac:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvec:(Mat*)rvec tvec:(Mat*)tvec useExtrinsicGuess:(BOOL)useExtrinsicGuess iterationsCount:(int)iterationsCount reprojectionError:(float)reprojectionError confidence:(double)confidence NS_SWIFT_NAME(solvePnPRansac(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvec:tvec:useExtrinsicGuess:iterationsCount:reprojectionError:confidence:));

/**
 * Finds an object pose from 3D-2D point correspondences using the RANSAC scheme.
 *
 * @param objectPoints Array of object points in the object coordinate space, Nx3 1-channel or
 * 1xN/Nx1 3-channel, where N is the number of points. vector\<Point3d\> can be also passed here.
 * @param imagePoints Array of corresponding image points, Nx2 1-channel or 1xN/Nx1 2-channel,
 * where N is the number of points. vector\<Point2d\> can be also passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{fx}{0}{cx}{0}{fy}{cy}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvec Output rotation vector (see REF: Rodrigues ) that, together with tvec, brings points from
 * the model coordinate system to the camera coordinate system.
 * @param tvec Output translation vector.
 * @param useExtrinsicGuess Parameter used for REF: SOLVEPNP_ITERATIVE. If true (1), the function uses
 * the provided rvec and tvec values as initial approximations of the rotation and translation
 * vectors, respectively, and further optimizes them.
 * @param iterationsCount Number of iterations.
 * @param reprojectionError Inlier threshold value used by the RANSAC procedure. The parameter value
 * is the maximum allowed distance between the observed and computed point projections to consider it
 * an inlier.
 *
 * The function estimates an object pose given a set of object points, their corresponding image
 * projections, as well as the camera matrix and the distortion coefficients. This function finds such
 * a pose that minimizes reprojection error, that is, the sum of squared distances between the observed
 * projections imagePoints and the projected (using REF: projectPoints ) objectPoints. The use of RANSAC
 * makes the function resistant to outliers.
 *
 * @note
 *    -   An example of how to use solvePNPRansac for object detection can be found at
 *         opencv_source_code/samples/cpp/tutorial_code/calib3d/real_time_pose_estimation/
 *    -   The default method used to estimate the camera pose for the Minimal Sample Sets step
 *        is #SOLVEPNP_EPNP. Exceptions are:
 *          - if you choose #SOLVEPNP_P3P or #SOLVEPNP_AP3P, these methods will be used.
 *          - if the number of input points is equal to 4, #SOLVEPNP_P3P is used.
 *    -   The method used to estimate the camera pose using all the inliers is defined by the
 *        flags parameters unless it is equal to #SOLVEPNP_P3P or #SOLVEPNP_AP3P. In this case,
 *        the method #SOLVEPNP_EPNP will be used instead.
 */
+ (BOOL)solvePnPRansac:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvec:(Mat*)rvec tvec:(Mat*)tvec useExtrinsicGuess:(BOOL)useExtrinsicGuess iterationsCount:(int)iterationsCount reprojectionError:(float)reprojectionError NS_SWIFT_NAME(solvePnPRansac(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvec:tvec:useExtrinsicGuess:iterationsCount:reprojectionError:));

/**
 * Finds an object pose from 3D-2D point correspondences using the RANSAC scheme.
 *
 * @param objectPoints Array of object points in the object coordinate space, Nx3 1-channel or
 * 1xN/Nx1 3-channel, where N is the number of points. vector\<Point3d\> can be also passed here.
 * @param imagePoints Array of corresponding image points, Nx2 1-channel or 1xN/Nx1 2-channel,
 * where N is the number of points. vector\<Point2d\> can be also passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{fx}{0}{cx}{0}{fy}{cy}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvec Output rotation vector (see REF: Rodrigues ) that, together with tvec, brings points from
 * the model coordinate system to the camera coordinate system.
 * @param tvec Output translation vector.
 * @param useExtrinsicGuess Parameter used for REF: SOLVEPNP_ITERATIVE. If true (1), the function uses
 * the provided rvec and tvec values as initial approximations of the rotation and translation
 * vectors, respectively, and further optimizes them.
 * @param iterationsCount Number of iterations.
 * is the maximum allowed distance between the observed and computed point projections to consider it
 * an inlier.
 *
 * The function estimates an object pose given a set of object points, their corresponding image
 * projections, as well as the camera matrix and the distortion coefficients. This function finds such
 * a pose that minimizes reprojection error, that is, the sum of squared distances between the observed
 * projections imagePoints and the projected (using REF: projectPoints ) objectPoints. The use of RANSAC
 * makes the function resistant to outliers.
 *
 * @note
 *    -   An example of how to use solvePNPRansac for object detection can be found at
 *         opencv_source_code/samples/cpp/tutorial_code/calib3d/real_time_pose_estimation/
 *    -   The default method used to estimate the camera pose for the Minimal Sample Sets step
 *        is #SOLVEPNP_EPNP. Exceptions are:
 *          - if you choose #SOLVEPNP_P3P or #SOLVEPNP_AP3P, these methods will be used.
 *          - if the number of input points is equal to 4, #SOLVEPNP_P3P is used.
 *    -   The method used to estimate the camera pose using all the inliers is defined by the
 *        flags parameters unless it is equal to #SOLVEPNP_P3P or #SOLVEPNP_AP3P. In this case,
 *        the method #SOLVEPNP_EPNP will be used instead.
 */
+ (BOOL)solvePnPRansac:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvec:(Mat*)rvec tvec:(Mat*)tvec useExtrinsicGuess:(BOOL)useExtrinsicGuess iterationsCount:(int)iterationsCount NS_SWIFT_NAME(solvePnPRansac(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvec:tvec:useExtrinsicGuess:iterationsCount:));

/**
 * Finds an object pose from 3D-2D point correspondences using the RANSAC scheme.
 *
 * @param objectPoints Array of object points in the object coordinate space, Nx3 1-channel or
 * 1xN/Nx1 3-channel, where N is the number of points. vector\<Point3d\> can be also passed here.
 * @param imagePoints Array of corresponding image points, Nx2 1-channel or 1xN/Nx1 2-channel,
 * where N is the number of points. vector\<Point2d\> can be also passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{fx}{0}{cx}{0}{fy}{cy}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvec Output rotation vector (see REF: Rodrigues ) that, together with tvec, brings points from
 * the model coordinate system to the camera coordinate system.
 * @param tvec Output translation vector.
 * @param useExtrinsicGuess Parameter used for REF: SOLVEPNP_ITERATIVE. If true (1), the function uses
 * the provided rvec and tvec values as initial approximations of the rotation and translation
 * vectors, respectively, and further optimizes them.
 * is the maximum allowed distance between the observed and computed point projections to consider it
 * an inlier.
 *
 * The function estimates an object pose given a set of object points, their corresponding image
 * projections, as well as the camera matrix and the distortion coefficients. This function finds such
 * a pose that minimizes reprojection error, that is, the sum of squared distances between the observed
 * projections imagePoints and the projected (using REF: projectPoints ) objectPoints. The use of RANSAC
 * makes the function resistant to outliers.
 *
 * @note
 *    -   An example of how to use solvePNPRansac for object detection can be found at
 *         opencv_source_code/samples/cpp/tutorial_code/calib3d/real_time_pose_estimation/
 *    -   The default method used to estimate the camera pose for the Minimal Sample Sets step
 *        is #SOLVEPNP_EPNP. Exceptions are:
 *          - if you choose #SOLVEPNP_P3P or #SOLVEPNP_AP3P, these methods will be used.
 *          - if the number of input points is equal to 4, #SOLVEPNP_P3P is used.
 *    -   The method used to estimate the camera pose using all the inliers is defined by the
 *        flags parameters unless it is equal to #SOLVEPNP_P3P or #SOLVEPNP_AP3P. In this case,
 *        the method #SOLVEPNP_EPNP will be used instead.
 */
+ (BOOL)solvePnPRansac:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvec:(Mat*)rvec tvec:(Mat*)tvec useExtrinsicGuess:(BOOL)useExtrinsicGuess NS_SWIFT_NAME(solvePnPRansac(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvec:tvec:useExtrinsicGuess:));

/**
 * Finds an object pose from 3D-2D point correspondences using the RANSAC scheme.
 *
 * @param objectPoints Array of object points in the object coordinate space, Nx3 1-channel or
 * 1xN/Nx1 3-channel, where N is the number of points. vector\<Point3d\> can be also passed here.
 * @param imagePoints Array of corresponding image points, Nx2 1-channel or 1xN/Nx1 2-channel,
 * where N is the number of points. vector\<Point2d\> can be also passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{fx}{0}{cx}{0}{fy}{cy}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvec Output rotation vector (see REF: Rodrigues ) that, together with tvec, brings points from
 * the model coordinate system to the camera coordinate system.
 * @param tvec Output translation vector.
 * the provided rvec and tvec values as initial approximations of the rotation and translation
 * vectors, respectively, and further optimizes them.
 * is the maximum allowed distance between the observed and computed point projections to consider it
 * an inlier.
 *
 * The function estimates an object pose given a set of object points, their corresponding image
 * projections, as well as the camera matrix and the distortion coefficients. This function finds such
 * a pose that minimizes reprojection error, that is, the sum of squared distances between the observed
 * projections imagePoints and the projected (using REF: projectPoints ) objectPoints. The use of RANSAC
 * makes the function resistant to outliers.
 *
 * @note
 *    -   An example of how to use solvePNPRansac for object detection can be found at
 *         opencv_source_code/samples/cpp/tutorial_code/calib3d/real_time_pose_estimation/
 *    -   The default method used to estimate the camera pose for the Minimal Sample Sets step
 *        is #SOLVEPNP_EPNP. Exceptions are:
 *          - if you choose #SOLVEPNP_P3P or #SOLVEPNP_AP3P, these methods will be used.
 *          - if the number of input points is equal to 4, #SOLVEPNP_P3P is used.
 *    -   The method used to estimate the camera pose using all the inliers is defined by the
 *        flags parameters unless it is equal to #SOLVEPNP_P3P or #SOLVEPNP_AP3P. In this case,
 *        the method #SOLVEPNP_EPNP will be used instead.
 */
+ (BOOL)solvePnPRansac:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvec:(Mat*)rvec tvec:(Mat*)tvec NS_SWIFT_NAME(solvePnPRansac(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvec:tvec:));


//
//  bool cv::stereoRectifyUncalibrated(Mat points1, Mat points2, Mat F, Size imgSize, Mat& H1, Mat& H2, double threshold = 5)
//
/**
 * Computes a rectification transform for an uncalibrated stereo camera.
 *
 * @param points1 Array of feature points in the first image.
 * @param points2 The corresponding points in the second image. The same formats as in
 * findFundamentalMat are supported.
 * @param F Input fundamental matrix. It can be computed from the same set of point pairs using
 * findFundamentalMat .
 * @param imgSize Size of the image.
 * @param H1 Output rectification homography matrix for the first image.
 * @param H2 Output rectification homography matrix for the second image.
 * @param threshold Optional threshold used to filter out the outliers. If the parameter is greater
 * than zero, all the point pairs that do not comply with the epipolar geometry (that is, the points
 * for which `$$|\texttt{points2[i]}^T*\texttt{F}*\texttt{points1[i]}|>\texttt{threshold}$$` ) are
 * rejected prior to computing the homographies. Otherwise, all the points are considered inliers.
 *
 * The function computes the rectification transformations without knowing intrinsic parameters of the
 * cameras and their relative position in the space, which explains the suffix "uncalibrated". Another
 * related difference from stereoRectify is that the function outputs not the rectification
 * transformations in the object (3D) space, but the planar perspective transformations encoded by the
 * homography matrices H1 and H2 . The function implements the algorithm CITE: Hartley99 .
 *
 * @note
 *    While the algorithm does not need to know the intrinsic parameters of the cameras, it heavily
 *     depends on the epipolar geometry. Therefore, if the camera lenses have a significant distortion,
 *     it would be better to correct it before computing the fundamental matrix and calling this
 *     function. For example, distortion coefficients can be estimated for each head of stereo camera
 *     separately by using calibrateCamera . Then, the images can be corrected using undistort , or
 *     just the point coordinates can be corrected with undistortPoints .
 */
+ (BOOL)stereoRectifyUncalibrated:(Mat*)points1 points2:(Mat*)points2 F:(Mat*)F imgSize:(Size2i*)imgSize H1:(Mat*)H1 H2:(Mat*)H2 threshold:(double)threshold NS_SWIFT_NAME(stereoRectifyUncalibrated(points1:points2:F:imgSize:H1:H2:threshold:));

/**
 * Computes a rectification transform for an uncalibrated stereo camera.
 *
 * @param points1 Array of feature points in the first image.
 * @param points2 The corresponding points in the second image. The same formats as in
 * findFundamentalMat are supported.
 * @param F Input fundamental matrix. It can be computed from the same set of point pairs using
 * findFundamentalMat .
 * @param imgSize Size of the image.
 * @param H1 Output rectification homography matrix for the first image.
 * @param H2 Output rectification homography matrix for the second image.
 * than zero, all the point pairs that do not comply with the epipolar geometry (that is, the points
 * for which `$$|\texttt{points2[i]}^T*\texttt{F}*\texttt{points1[i]}|>\texttt{threshold}$$` ) are
 * rejected prior to computing the homographies. Otherwise, all the points are considered inliers.
 *
 * The function computes the rectification transformations without knowing intrinsic parameters of the
 * cameras and their relative position in the space, which explains the suffix "uncalibrated". Another
 * related difference from stereoRectify is that the function outputs not the rectification
 * transformations in the object (3D) space, but the planar perspective transformations encoded by the
 * homography matrices H1 and H2 . The function implements the algorithm CITE: Hartley99 .
 *
 * @note
 *    While the algorithm does not need to know the intrinsic parameters of the cameras, it heavily
 *     depends on the epipolar geometry. Therefore, if the camera lenses have a significant distortion,
 *     it would be better to correct it before computing the fundamental matrix and calling this
 *     function. For example, distortion coefficients can be estimated for each head of stereo camera
 *     separately by using calibrateCamera . Then, the images can be corrected using undistort , or
 *     just the point coordinates can be corrected with undistortPoints .
 */
+ (BOOL)stereoRectifyUncalibrated:(Mat*)points1 points2:(Mat*)points2 F:(Mat*)F imgSize:(Size2i*)imgSize H1:(Mat*)H1 H2:(Mat*)H2 NS_SWIFT_NAME(stereoRectifyUncalibrated(points1:points2:F:imgSize:H1:H2:));


//
//  double cv::calibrateCamera(vector_Mat objectPoints, vector_Mat imagePoints, Size imageSize, Mat& cameraMatrix, Mat& distCoeffs, vector_Mat& rvecs, vector_Mat& tvecs, Mat& stdDeviationsIntrinsics, Mat& stdDeviationsExtrinsics, Mat& perViewErrors, int flags = 0, TermCriteria criteria = TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON))
//
/**
 * Finds the camera intrinsic and extrinsic parameters from several views of a calibration
 * pattern.
 *
 * @param objectPoints In the new interface it is a vector of vectors of calibration pattern points in
 * the calibration pattern coordinate space (e.g. std::vector<std::vector<cv::Vec3f>>). The outer
 * vector contains as many elements as the number of pattern views. If the same calibration pattern
 * is shown in each view and it is fully visible, all the vectors will be the same. Although, it is
 * possible to use partially occluded patterns or even different patterns in different views. Then,
 * the vectors will be different. Although the points are 3D, they all lie in the calibration pattern's
 * XY coordinate plane (thus 0 in the Z-coordinate), if the used calibration pattern is a planar rig.
 * In the old interface all the vectors of object points from different views are concatenated
 * together.
 * @param imagePoints In the new interface it is a vector of vectors of the projections of calibration
 * pattern points (e.g. std::vector<std::vector<cv::Vec2f>>). imagePoints.size() and
 * objectPoints.size(), and imagePoints[i].size() and objectPoints[i].size() for each i, must be equal,
 * respectively. In the old interface all the vectors of object points from different views are
 * concatenated together.
 * @param imageSize Size of the image used only to initialize the intrinsic camera matrix.
 * @param cameraMatrix Input/output 3x3 floating-point camera matrix
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` . If CV\_CALIB\_USE\_INTRINSIC\_GUESS
 * and/or CALIB_FIX_ASPECT_RATIO are specified, some or all of fx, fy, cx, cy must be
 * initialized before calling the function.
 * @param distCoeffs Input/output vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements.
 * @param rvecs Output vector of rotation vectors (REF: Rodrigues ) estimated for each pattern view
 * (e.g. std::vector<cv::Mat>>). That is, each i-th rotation vector together with the corresponding
 * i-th translation vector (see the next output parameter description) brings the calibration pattern
 * from the object coordinate space (in which object points are specified) to the camera coordinate
 * space. In more technical terms, the tuple of the i-th rotation and translation vector performs
 * a change of basis from object coordinate space to camera coordinate space. Due to its duality, this
 * tuple is equivalent to the position of the calibration pattern with respect to the camera coordinate
 * space.
 * @param tvecs Output vector of translation vectors estimated for each pattern view, see parameter
 * describtion above.
 * @param stdDeviationsIntrinsics Output vector of standard deviations estimated for intrinsic
 * parameters. Order of deviations values:
 * `$$(f_x, f_y, c_x, c_y, k_1, k_2, p_1, p_2, k_3, k_4, k_5, k_6 , s_1, s_2, s_3,
 *  s_4, \tau_x, \tau_y)$$` If one of parameters is not estimated, it's deviation is equals to zero.
 * @param stdDeviationsExtrinsics Output vector of standard deviations estimated for extrinsic
 * parameters. Order of deviations values: `$$(R_0, T_0, \dotsc , R_{M - 1}, T_{M - 1})$$` where M is
 * the number of pattern views. `$$R_i, T_i$$` are concatenated 1x3 vectors.
 * @param perViewErrors Output vector of the RMS re-projection error estimated for each pattern view.
 * @param flags Different flags that may be zero or a combination of the following values:
 * -   **CALIB_USE_INTRINSIC_GUESS** cameraMatrix contains valid initial values of
 * fx, fy, cx, cy that are optimized further. Otherwise, (cx, cy) is initially set to the image
 * center ( imageSize is used), and focal distances are computed in a least-squares fashion.
 * Note, that if intrinsic parameters are known, there is no need to use this function just to
 * estimate extrinsic parameters. Use solvePnP instead.
 * -   **CALIB_FIX_PRINCIPAL_POINT** The principal point is not changed during the global
 * optimization. It stays at the center or at a different location specified when
 * CALIB_USE_INTRINSIC_GUESS is set too.
 * -   **CALIB_FIX_ASPECT_RATIO** The functions consider only fy as a free parameter. The
 * ratio fx/fy stays the same as in the input cameraMatrix . When
 * CALIB_USE_INTRINSIC_GUESS is not set, the actual input values of fx and fy are
 * ignored, only their ratio is computed and used further.
 * -   **CALIB_ZERO_TANGENT_DIST** Tangential distortion coefficients `$$(p_1, p_2)$$` are set
 * to zeros and stay zero.
 * -   **CALIB_FIX_K1,...,CALIB_FIX_K6** The corresponding radial distortion
 * coefficient is not changed during the optimization. If CALIB_USE_INTRINSIC_GUESS is
 * set, the coefficient from the supplied distCoeffs matrix is used. Otherwise, it is set to 0.
 * -   **CALIB_RATIONAL_MODEL** Coefficients k4, k5, and k6 are enabled. To provide the
 * backward compatibility, this extra flag should be explicitly specified to make the
 * calibration function use the rational model and return 8 coefficients. If the flag is not
 * set, the function computes and returns only 5 distortion coefficients.
 * -   **CALIB_THIN_PRISM_MODEL** Coefficients s1, s2, s3 and s4 are enabled. To provide the
 * backward compatibility, this extra flag should be explicitly specified to make the
 * calibration function use the thin prism model and return 12 coefficients. If the flag is not
 * set, the function computes and returns only 5 distortion coefficients.
 * -   **CALIB_FIX_S1_S2_S3_S4** The thin prism distortion coefficients are not changed during
 * the optimization. If CALIB_USE_INTRINSIC_GUESS is set, the coefficient from the
 * supplied distCoeffs matrix is used. Otherwise, it is set to 0.
 * -   **CALIB_TILTED_MODEL** Coefficients tauX and tauY are enabled. To provide the
 * backward compatibility, this extra flag should be explicitly specified to make the
 * calibration function use the tilted sensor model and return 14 coefficients. If the flag is not
 * set, the function computes and returns only 5 distortion coefficients.
 * -   **CALIB_FIX_TAUX_TAUY** The coefficients of the tilted sensor model are not changed during
 * the optimization. If CALIB_USE_INTRINSIC_GUESS is set, the coefficient from the
 * supplied distCoeffs matrix is used. Otherwise, it is set to 0.
 * @param criteria Termination criteria for the iterative optimization algorithm.
 *
 * @return the overall RMS re-projection error.
 *
 * The function estimates the intrinsic camera parameters and extrinsic parameters for each of the
 * views. The algorithm is based on CITE: Zhang2000 and CITE: BouguetMCT . The coordinates of 3D object
 * points and their corresponding 2D projections in each view must be specified. That may be achieved
 * by using an object with known geometry and easily detectable feature points. Such an object is
 * called a calibration rig or calibration pattern, and OpenCV has built-in support for a chessboard as
 * a calibration rig (see REF: findChessboardCorners). Currently, initialization of intrinsic
 * parameters (when CALIB_USE_INTRINSIC_GUESS is not set) is only implemented for planar calibration
 * patterns (where Z-coordinates of the object points must be all zeros). 3D calibration rigs can also
 * be used as long as initial cameraMatrix is provided.
 *
 * The algorithm performs the following steps:
 *
 * -   Compute the initial intrinsic parameters (the option only available for planar calibration
 *     patterns) or read them from the input parameters. The distortion coefficients are all set to
 *     zeros initially unless some of CALIB_FIX_K? are specified.
 *
 * -   Estimate the initial camera pose as if the intrinsic parameters have been already known. This is
 *     done using solvePnP .
 *
 * -   Run the global Levenberg-Marquardt optimization algorithm to minimize the reprojection error,
 *     that is, the total sum of squared distances between the observed feature points imagePoints and
 *     the projected (using the current estimates for camera parameters and the poses) object points
 *     objectPoints. See projectPoints for details.
 *
 * @note
 *     If you use a non-square (i.e. non-N-by-N) grid and REF: findChessboardCorners for calibration,
 *     and REF: calibrateCamera returns bad values (zero distortion coefficients, `$$c_x$$` and
 *     `$$c_y$$` very far from the image center, and/or large differences between `$$f_x$$` and
 *     `$$f_y$$` (ratios of 10:1 or more)), then you are probably using patternSize=cvSize(rows,cols)
 *     instead of using patternSize=cvSize(cols,rows) in REF: findChessboardCorners.
 *
 * @sa
 *    calibrateCameraRO, findChessboardCorners, solvePnP, initCameraMatrix2D, stereoCalibrate,
 *    undistort
 */
+ (double)calibrateCameraExtended:(NSArray<Mat*>*)objectPoints imagePoints:(NSArray<Mat*>*)imagePoints imageSize:(Size2i*)imageSize cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs stdDeviationsIntrinsics:(Mat*)stdDeviationsIntrinsics stdDeviationsExtrinsics:(Mat*)stdDeviationsExtrinsics perViewErrors:(Mat*)perViewErrors flags:(int)flags criteria:(TermCriteria*)criteria NS_SWIFT_NAME(calibrateCamera(objectPoints:imagePoints:imageSize:cameraMatrix:distCoeffs:rvecs:tvecs:stdDeviationsIntrinsics:stdDeviationsExtrinsics:perViewErrors:flags:criteria:));

/**
 * Finds the camera intrinsic and extrinsic parameters from several views of a calibration
 * pattern.
 *
 * @param objectPoints In the new interface it is a vector of vectors of calibration pattern points in
 * the calibration pattern coordinate space (e.g. std::vector<std::vector<cv::Vec3f>>). The outer
 * vector contains as many elements as the number of pattern views. If the same calibration pattern
 * is shown in each view and it is fully visible, all the vectors will be the same. Although, it is
 * possible to use partially occluded patterns or even different patterns in different views. Then,
 * the vectors will be different. Although the points are 3D, they all lie in the calibration pattern's
 * XY coordinate plane (thus 0 in the Z-coordinate), if the used calibration pattern is a planar rig.
 * In the old interface all the vectors of object points from different views are concatenated
 * together.
 * @param imagePoints In the new interface it is a vector of vectors of the projections of calibration
 * pattern points (e.g. std::vector<std::vector<cv::Vec2f>>). imagePoints.size() and
 * objectPoints.size(), and imagePoints[i].size() and objectPoints[i].size() for each i, must be equal,
 * respectively. In the old interface all the vectors of object points from different views are
 * concatenated together.
 * @param imageSize Size of the image used only to initialize the intrinsic camera matrix.
 * @param cameraMatrix Input/output 3x3 floating-point camera matrix
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` . If CV\_CALIB\_USE\_INTRINSIC\_GUESS
 * and/or CALIB_FIX_ASPECT_RATIO are specified, some or all of fx, fy, cx, cy must be
 * initialized before calling the function.
 * @param distCoeffs Input/output vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements.
 * @param rvecs Output vector of rotation vectors (REF: Rodrigues ) estimated for each pattern view
 * (e.g. std::vector<cv::Mat>>). That is, each i-th rotation vector together with the corresponding
 * i-th translation vector (see the next output parameter description) brings the calibration pattern
 * from the object coordinate space (in which object points are specified) to the camera coordinate
 * space. In more technical terms, the tuple of the i-th rotation and translation vector performs
 * a change of basis from object coordinate space to camera coordinate space. Due to its duality, this
 * tuple is equivalent to the position of the calibration pattern with respect to the camera coordinate
 * space.
 * @param tvecs Output vector of translation vectors estimated for each pattern view, see parameter
 * describtion above.
 * @param stdDeviationsIntrinsics Output vector of standard deviations estimated for intrinsic
 * parameters. Order of deviations values:
 * `$$(f_x, f_y, c_x, c_y, k_1, k_2, p_1, p_2, k_3, k_4, k_5, k_6 , s_1, s_2, s_3,
 *  s_4, \tau_x, \tau_y)$$` If one of parameters is not estimated, it's deviation is equals to zero.
 * @param stdDeviationsExtrinsics Output vector of standard deviations estimated for extrinsic
 * parameters. Order of deviations values: `$$(R_0, T_0, \dotsc , R_{M - 1}, T_{M - 1})$$` where M is
 * the number of pattern views. `$$R_i, T_i$$` are concatenated 1x3 vectors.
 * @param perViewErrors Output vector of the RMS re-projection error estimated for each pattern view.
 * @param flags Different flags that may be zero or a combination of the following values:
 * -   **CALIB_USE_INTRINSIC_GUESS** cameraMatrix contains valid initial values of
 * fx, fy, cx, cy that are optimized further. Otherwise, (cx, cy) is initially set to the image
 * center ( imageSize is used), and focal distances are computed in a least-squares fashion.
 * Note, that if intrinsic parameters are known, there is no need to use this function just to
 * estimate extrinsic parameters. Use solvePnP instead.
 * -   **CALIB_FIX_PRINCIPAL_POINT** The principal point is not changed during the global
 * optimization. It stays at the center or at a different location specified when
 * CALIB_USE_INTRINSIC_GUESS is set too.
 * -   **CALIB_FIX_ASPECT_RATIO** The functions consider only fy as a free parameter. The
 * ratio fx/fy stays the same as in the input cameraMatrix . When
 * CALIB_USE_INTRINSIC_GUESS is not set, the actual input values of fx and fy are
 * ignored, only their ratio is computed and used further.
 * -   **CALIB_ZERO_TANGENT_DIST** Tangential distortion coefficients `$$(p_1, p_2)$$` are set
 * to zeros and stay zero.
 * -   **CALIB_FIX_K1,...,CALIB_FIX_K6** The corresponding radial distortion
 * coefficient is not changed during the optimization. If CALIB_USE_INTRINSIC_GUESS is
 * set, the coefficient from the supplied distCoeffs matrix is used. Otherwise, it is set to 0.
 * -   **CALIB_RATIONAL_MODEL** Coefficients k4, k5, and k6 are enabled. To provide the
 * backward compatibility, this extra flag should be explicitly specified to make the
 * calibration function use the rational model and return 8 coefficients. If the flag is not
 * set, the function computes and returns only 5 distortion coefficients.
 * -   **CALIB_THIN_PRISM_MODEL** Coefficients s1, s2, s3 and s4 are enabled. To provide the
 * backward compatibility, this extra flag should be explicitly specified to make the
 * calibration function use the thin prism model and return 12 coefficients. If the flag is not
 * set, the function computes and returns only 5 distortion coefficients.
 * -   **CALIB_FIX_S1_S2_S3_S4** The thin prism distortion coefficients are not changed during
 * the optimization. If CALIB_USE_INTRINSIC_GUESS is set, the coefficient from the
 * supplied distCoeffs matrix is used. Otherwise, it is set to 0.
 * -   **CALIB_TILTED_MODEL** Coefficients tauX and tauY are enabled. To provide the
 * backward compatibility, this extra flag should be explicitly specified to make the
 * calibration function use the tilted sensor model and return 14 coefficients. If the flag is not
 * set, the function computes and returns only 5 distortion coefficients.
 * -   **CALIB_FIX_TAUX_TAUY** The coefficients of the tilted sensor model are not changed during
 * the optimization. If CALIB_USE_INTRINSIC_GUESS is set, the coefficient from the
 * supplied distCoeffs matrix is used. Otherwise, it is set to 0.
 *
 * @return the overall RMS re-projection error.
 *
 * The function estimates the intrinsic camera parameters and extrinsic parameters for each of the
 * views. The algorithm is based on CITE: Zhang2000 and CITE: BouguetMCT . The coordinates of 3D object
 * points and their corresponding 2D projections in each view must be specified. That may be achieved
 * by using an object with known geometry and easily detectable feature points. Such an object is
 * called a calibration rig or calibration pattern, and OpenCV has built-in support for a chessboard as
 * a calibration rig (see REF: findChessboardCorners). Currently, initialization of intrinsic
 * parameters (when CALIB_USE_INTRINSIC_GUESS is not set) is only implemented for planar calibration
 * patterns (where Z-coordinates of the object points must be all zeros). 3D calibration rigs can also
 * be used as long as initial cameraMatrix is provided.
 *
 * The algorithm performs the following steps:
 *
 * -   Compute the initial intrinsic parameters (the option only available for planar calibration
 *     patterns) or read them from the input parameters. The distortion coefficients are all set to
 *     zeros initially unless some of CALIB_FIX_K? are specified.
 *
 * -   Estimate the initial camera pose as if the intrinsic parameters have been already known. This is
 *     done using solvePnP .
 *
 * -   Run the global Levenberg-Marquardt optimization algorithm to minimize the reprojection error,
 *     that is, the total sum of squared distances between the observed feature points imagePoints and
 *     the projected (using the current estimates for camera parameters and the poses) object points
 *     objectPoints. See projectPoints for details.
 *
 * @note
 *     If you use a non-square (i.e. non-N-by-N) grid and REF: findChessboardCorners for calibration,
 *     and REF: calibrateCamera returns bad values (zero distortion coefficients, `$$c_x$$` and
 *     `$$c_y$$` very far from the image center, and/or large differences between `$$f_x$$` and
 *     `$$f_y$$` (ratios of 10:1 or more)), then you are probably using patternSize=cvSize(rows,cols)
 *     instead of using patternSize=cvSize(cols,rows) in REF: findChessboardCorners.
 *
 * @sa
 *    calibrateCameraRO, findChessboardCorners, solvePnP, initCameraMatrix2D, stereoCalibrate,
 *    undistort
 */
+ (double)calibrateCameraExtended:(NSArray<Mat*>*)objectPoints imagePoints:(NSArray<Mat*>*)imagePoints imageSize:(Size2i*)imageSize cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs stdDeviationsIntrinsics:(Mat*)stdDeviationsIntrinsics stdDeviationsExtrinsics:(Mat*)stdDeviationsExtrinsics perViewErrors:(Mat*)perViewErrors flags:(int)flags NS_SWIFT_NAME(calibrateCamera(objectPoints:imagePoints:imageSize:cameraMatrix:distCoeffs:rvecs:tvecs:stdDeviationsIntrinsics:stdDeviationsExtrinsics:perViewErrors:flags:));

/**
 * Finds the camera intrinsic and extrinsic parameters from several views of a calibration
 * pattern.
 *
 * @param objectPoints In the new interface it is a vector of vectors of calibration pattern points in
 * the calibration pattern coordinate space (e.g. std::vector<std::vector<cv::Vec3f>>). The outer
 * vector contains as many elements as the number of pattern views. If the same calibration pattern
 * is shown in each view and it is fully visible, all the vectors will be the same. Although, it is
 * possible to use partially occluded patterns or even different patterns in different views. Then,
 * the vectors will be different. Although the points are 3D, they all lie in the calibration pattern's
 * XY coordinate plane (thus 0 in the Z-coordinate), if the used calibration pattern is a planar rig.
 * In the old interface all the vectors of object points from different views are concatenated
 * together.
 * @param imagePoints In the new interface it is a vector of vectors of the projections of calibration
 * pattern points (e.g. std::vector<std::vector<cv::Vec2f>>). imagePoints.size() and
 * objectPoints.size(), and imagePoints[i].size() and objectPoints[i].size() for each i, must be equal,
 * respectively. In the old interface all the vectors of object points from different views are
 * concatenated together.
 * @param imageSize Size of the image used only to initialize the intrinsic camera matrix.
 * @param cameraMatrix Input/output 3x3 floating-point camera matrix
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` . If CV\_CALIB\_USE\_INTRINSIC\_GUESS
 * and/or CALIB_FIX_ASPECT_RATIO are specified, some or all of fx, fy, cx, cy must be
 * initialized before calling the function.
 * @param distCoeffs Input/output vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements.
 * @param rvecs Output vector of rotation vectors (REF: Rodrigues ) estimated for each pattern view
 * (e.g. std::vector<cv::Mat>>). That is, each i-th rotation vector together with the corresponding
 * i-th translation vector (see the next output parameter description) brings the calibration pattern
 * from the object coordinate space (in which object points are specified) to the camera coordinate
 * space. In more technical terms, the tuple of the i-th rotation and translation vector performs
 * a change of basis from object coordinate space to camera coordinate space. Due to its duality, this
 * tuple is equivalent to the position of the calibration pattern with respect to the camera coordinate
 * space.
 * @param tvecs Output vector of translation vectors estimated for each pattern view, see parameter
 * describtion above.
 * @param stdDeviationsIntrinsics Output vector of standard deviations estimated for intrinsic
 * parameters. Order of deviations values:
 * `$$(f_x, f_y, c_x, c_y, k_1, k_2, p_1, p_2, k_3, k_4, k_5, k_6 , s_1, s_2, s_3,
 *  s_4, \tau_x, \tau_y)$$` If one of parameters is not estimated, it's deviation is equals to zero.
 * @param stdDeviationsExtrinsics Output vector of standard deviations estimated for extrinsic
 * parameters. Order of deviations values: `$$(R_0, T_0, \dotsc , R_{M - 1}, T_{M - 1})$$` where M is
 * the number of pattern views. `$$R_i, T_i$$` are concatenated 1x3 vectors.
 * @param perViewErrors Output vector of the RMS re-projection error estimated for each pattern view.
 * -   **CALIB_USE_INTRINSIC_GUESS** cameraMatrix contains valid initial values of
 * fx, fy, cx, cy that are optimized further. Otherwise, (cx, cy) is initially set to the image
 * center ( imageSize is used), and focal distances are computed in a least-squares fashion.
 * Note, that if intrinsic parameters are known, there is no need to use this function just to
 * estimate extrinsic parameters. Use solvePnP instead.
 * -   **CALIB_FIX_PRINCIPAL_POINT** The principal point is not changed during the global
 * optimization. It stays at the center or at a different location specified when
 * CALIB_USE_INTRINSIC_GUESS is set too.
 * -   **CALIB_FIX_ASPECT_RATIO** The functions consider only fy as a free parameter. The
 * ratio fx/fy stays the same as in the input cameraMatrix . When
 * CALIB_USE_INTRINSIC_GUESS is not set, the actual input values of fx and fy are
 * ignored, only their ratio is computed and used further.
 * -   **CALIB_ZERO_TANGENT_DIST** Tangential distortion coefficients `$$(p_1, p_2)$$` are set
 * to zeros and stay zero.
 * -   **CALIB_FIX_K1,...,CALIB_FIX_K6** The corresponding radial distortion
 * coefficient is not changed during the optimization. If CALIB_USE_INTRINSIC_GUESS is
 * set, the coefficient from the supplied distCoeffs matrix is used. Otherwise, it is set to 0.
 * -   **CALIB_RATIONAL_MODEL** Coefficients k4, k5, and k6 are enabled. To provide the
 * backward compatibility, this extra flag should be explicitly specified to make the
 * calibration function use the rational model and return 8 coefficients. If the flag is not
 * set, the function computes and returns only 5 distortion coefficients.
 * -   **CALIB_THIN_PRISM_MODEL** Coefficients s1, s2, s3 and s4 are enabled. To provide the
 * backward compatibility, this extra flag should be explicitly specified to make the
 * calibration function use the thin prism model and return 12 coefficients. If the flag is not
 * set, the function computes and returns only 5 distortion coefficients.
 * -   **CALIB_FIX_S1_S2_S3_S4** The thin prism distortion coefficients are not changed during
 * the optimization. If CALIB_USE_INTRINSIC_GUESS is set, the coefficient from the
 * supplied distCoeffs matrix is used. Otherwise, it is set to 0.
 * -   **CALIB_TILTED_MODEL** Coefficients tauX and tauY are enabled. To provide the
 * backward compatibility, this extra flag should be explicitly specified to make the
 * calibration function use the tilted sensor model and return 14 coefficients. If the flag is not
 * set, the function computes and returns only 5 distortion coefficients.
 * -   **CALIB_FIX_TAUX_TAUY** The coefficients of the tilted sensor model are not changed during
 * the optimization. If CALIB_USE_INTRINSIC_GUESS is set, the coefficient from the
 * supplied distCoeffs matrix is used. Otherwise, it is set to 0.
 *
 * @return the overall RMS re-projection error.
 *
 * The function estimates the intrinsic camera parameters and extrinsic parameters for each of the
 * views. The algorithm is based on CITE: Zhang2000 and CITE: BouguetMCT . The coordinates of 3D object
 * points and their corresponding 2D projections in each view must be specified. That may be achieved
 * by using an object with known geometry and easily detectable feature points. Such an object is
 * called a calibration rig or calibration pattern, and OpenCV has built-in support for a chessboard as
 * a calibration rig (see REF: findChessboardCorners). Currently, initialization of intrinsic
 * parameters (when CALIB_USE_INTRINSIC_GUESS is not set) is only implemented for planar calibration
 * patterns (where Z-coordinates of the object points must be all zeros). 3D calibration rigs can also
 * be used as long as initial cameraMatrix is provided.
 *
 * The algorithm performs the following steps:
 *
 * -   Compute the initial intrinsic parameters (the option only available for planar calibration
 *     patterns) or read them from the input parameters. The distortion coefficients are all set to
 *     zeros initially unless some of CALIB_FIX_K? are specified.
 *
 * -   Estimate the initial camera pose as if the intrinsic parameters have been already known. This is
 *     done using solvePnP .
 *
 * -   Run the global Levenberg-Marquardt optimization algorithm to minimize the reprojection error,
 *     that is, the total sum of squared distances between the observed feature points imagePoints and
 *     the projected (using the current estimates for camera parameters and the poses) object points
 *     objectPoints. See projectPoints for details.
 *
 * @note
 *     If you use a non-square (i.e. non-N-by-N) grid and REF: findChessboardCorners for calibration,
 *     and REF: calibrateCamera returns bad values (zero distortion coefficients, `$$c_x$$` and
 *     `$$c_y$$` very far from the image center, and/or large differences between `$$f_x$$` and
 *     `$$f_y$$` (ratios of 10:1 or more)), then you are probably using patternSize=cvSize(rows,cols)
 *     instead of using patternSize=cvSize(cols,rows) in REF: findChessboardCorners.
 *
 * @sa
 *    calibrateCameraRO, findChessboardCorners, solvePnP, initCameraMatrix2D, stereoCalibrate,
 *    undistort
 */
+ (double)calibrateCameraExtended:(NSArray<Mat*>*)objectPoints imagePoints:(NSArray<Mat*>*)imagePoints imageSize:(Size2i*)imageSize cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs stdDeviationsIntrinsics:(Mat*)stdDeviationsIntrinsics stdDeviationsExtrinsics:(Mat*)stdDeviationsExtrinsics perViewErrors:(Mat*)perViewErrors NS_SWIFT_NAME(calibrateCamera(objectPoints:imagePoints:imageSize:cameraMatrix:distCoeffs:rvecs:tvecs:stdDeviationsIntrinsics:stdDeviationsExtrinsics:perViewErrors:));


//
//  double cv::calibrateCamera(vector_Mat objectPoints, vector_Mat imagePoints, Size imageSize, Mat& cameraMatrix, Mat& distCoeffs, vector_Mat& rvecs, vector_Mat& tvecs, int flags = 0, TermCriteria criteria = TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON))
//
+ (double)calibrateCamera:(NSArray<Mat*>*)objectPoints imagePoints:(NSArray<Mat*>*)imagePoints imageSize:(Size2i*)imageSize cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs flags:(int)flags criteria:(TermCriteria*)criteria NS_SWIFT_NAME(calibrateCamera(objectPoints:imagePoints:imageSize:cameraMatrix:distCoeffs:rvecs:tvecs:flags:criteria:));

+ (double)calibrateCamera:(NSArray<Mat*>*)objectPoints imagePoints:(NSArray<Mat*>*)imagePoints imageSize:(Size2i*)imageSize cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs flags:(int)flags NS_SWIFT_NAME(calibrateCamera(objectPoints:imagePoints:imageSize:cameraMatrix:distCoeffs:rvecs:tvecs:flags:));

+ (double)calibrateCamera:(NSArray<Mat*>*)objectPoints imagePoints:(NSArray<Mat*>*)imagePoints imageSize:(Size2i*)imageSize cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs NS_SWIFT_NAME(calibrateCamera(objectPoints:imagePoints:imageSize:cameraMatrix:distCoeffs:rvecs:tvecs:));


//
//  double cv::calibrateCameraRO(vector_Mat objectPoints, vector_Mat imagePoints, Size imageSize, int iFixedPoint, Mat& cameraMatrix, Mat& distCoeffs, vector_Mat& rvecs, vector_Mat& tvecs, Mat& newObjPoints, Mat& stdDeviationsIntrinsics, Mat& stdDeviationsExtrinsics, Mat& stdDeviationsObjPoints, Mat& perViewErrors, int flags = 0, TermCriteria criteria = TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON))
//
/**
 * Finds the camera intrinsic and extrinsic parameters from several views of a calibration pattern.
 *
 * This function is an extension of calibrateCamera() with the method of releasing object which was
 * proposed in CITE: strobl2011iccv. In many common cases with inaccurate, unmeasured, roughly planar
 * targets (calibration plates), this method can dramatically improve the precision of the estimated
 * camera parameters. Both the object-releasing method and standard method are supported by this
 * function. Use the parameter **iFixedPoint** for method selection. In the internal implementation,
 * calibrateCamera() is a wrapper for this function.
 *
 * @param objectPoints Vector of vectors of calibration pattern points in the calibration pattern
 * coordinate space. See calibrateCamera() for details. If the method of releasing object to be used,
 * the identical calibration board must be used in each view and it must be fully visible, and all
 * objectPoints[i] must be the same and all points should be roughly close to a plane. **The calibration
 * target has to be rigid, or at least static if the camera (rather than the calibration target) is
 * shifted for grabbing images.**
 * @param imagePoints Vector of vectors of the projections of calibration pattern points. See
 * calibrateCamera() for details.
 * @param imageSize Size of the image used only to initialize the intrinsic camera matrix.
 * @param iFixedPoint The index of the 3D object point in objectPoints[0] to be fixed. It also acts as
 * a switch for calibration method selection. If object-releasing method to be used, pass in the
 * parameter in the range of [1, objectPoints[0].size()-2], otherwise a value out of this range will
 * make standard calibration method selected. Usually the top-right corner point of the calibration
 * board grid is recommended to be fixed when object-releasing method being utilized. According to
 * \cite strobl2011iccv, two other points are also fixed. In this implementation, objectPoints[0].front
 * and objectPoints[0].back.z are used. With object-releasing method, accurate rvecs, tvecs and
 * newObjPoints are only possible if coordinates of these three fixed points are accurate enough.
 * @param cameraMatrix Output 3x3 floating-point camera matrix. See calibrateCamera() for details.
 * @param distCoeffs Output vector of distortion coefficients. See calibrateCamera() for details.
 * @param rvecs Output vector of rotation vectors estimated for each pattern view. See calibrateCamera()
 * for details.
 * @param tvecs Output vector of translation vectors estimated for each pattern view.
 * @param newObjPoints The updated output vector of calibration pattern points. The coordinates might
 * be scaled based on three fixed points. The returned coordinates are accurate only if the above
 * mentioned three fixed points are accurate. If not needed, noArray() can be passed in. This parameter
 * is ignored with standard calibration method.
 * @param stdDeviationsIntrinsics Output vector of standard deviations estimated for intrinsic parameters.
 * See calibrateCamera() for details.
 * @param stdDeviationsExtrinsics Output vector of standard deviations estimated for extrinsic parameters.
 * See calibrateCamera() for details.
 * @param stdDeviationsObjPoints Output vector of standard deviations estimated for refined coordinates
 * of calibration pattern points. It has the same size and order as objectPoints[0] vector. This
 * parameter is ignored with standard calibration method.
 * @param perViewErrors Output vector of the RMS re-projection error estimated for each pattern view.
 * @param flags Different flags that may be zero or a combination of some predefined values. See
 * calibrateCamera() for details. If the method of releasing object is used, the calibration time may
 * be much longer. CALIB_USE_QR or CALIB_USE_LU could be used for faster calibration with potentially
 * less precise and less stable in some rare cases.
 * @param criteria Termination criteria for the iterative optimization algorithm.
 *
 * @return the overall RMS re-projection error.
 *
 * The function estimates the intrinsic camera parameters and extrinsic parameters for each of the
 * views. The algorithm is based on CITE: Zhang2000, CITE: BouguetMCT and CITE: strobl2011iccv. See
 * calibrateCamera() for other detailed explanations.
 * @sa
 *    calibrateCamera, findChessboardCorners, solvePnP, initCameraMatrix2D, stereoCalibrate, undistort
 */
+ (double)calibrateCameraROExtended:(NSArray<Mat*>*)objectPoints imagePoints:(NSArray<Mat*>*)imagePoints imageSize:(Size2i*)imageSize iFixedPoint:(int)iFixedPoint cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs newObjPoints:(Mat*)newObjPoints stdDeviationsIntrinsics:(Mat*)stdDeviationsIntrinsics stdDeviationsExtrinsics:(Mat*)stdDeviationsExtrinsics stdDeviationsObjPoints:(Mat*)stdDeviationsObjPoints perViewErrors:(Mat*)perViewErrors flags:(int)flags criteria:(TermCriteria*)criteria NS_SWIFT_NAME(calibrateCameraRO(objectPoints:imagePoints:imageSize:iFixedPoint:cameraMatrix:distCoeffs:rvecs:tvecs:newObjPoints:stdDeviationsIntrinsics:stdDeviationsExtrinsics:stdDeviationsObjPoints:perViewErrors:flags:criteria:));

/**
 * Finds the camera intrinsic and extrinsic parameters from several views of a calibration pattern.
 *
 * This function is an extension of calibrateCamera() with the method of releasing object which was
 * proposed in CITE: strobl2011iccv. In many common cases with inaccurate, unmeasured, roughly planar
 * targets (calibration plates), this method can dramatically improve the precision of the estimated
 * camera parameters. Both the object-releasing method and standard method are supported by this
 * function. Use the parameter **iFixedPoint** for method selection. In the internal implementation,
 * calibrateCamera() is a wrapper for this function.
 *
 * @param objectPoints Vector of vectors of calibration pattern points in the calibration pattern
 * coordinate space. See calibrateCamera() for details. If the method of releasing object to be used,
 * the identical calibration board must be used in each view and it must be fully visible, and all
 * objectPoints[i] must be the same and all points should be roughly close to a plane. **The calibration
 * target has to be rigid, or at least static if the camera (rather than the calibration target) is
 * shifted for grabbing images.**
 * @param imagePoints Vector of vectors of the projections of calibration pattern points. See
 * calibrateCamera() for details.
 * @param imageSize Size of the image used only to initialize the intrinsic camera matrix.
 * @param iFixedPoint The index of the 3D object point in objectPoints[0] to be fixed. It also acts as
 * a switch for calibration method selection. If object-releasing method to be used, pass in the
 * parameter in the range of [1, objectPoints[0].size()-2], otherwise a value out of this range will
 * make standard calibration method selected. Usually the top-right corner point of the calibration
 * board grid is recommended to be fixed when object-releasing method being utilized. According to
 * \cite strobl2011iccv, two other points are also fixed. In this implementation, objectPoints[0].front
 * and objectPoints[0].back.z are used. With object-releasing method, accurate rvecs, tvecs and
 * newObjPoints are only possible if coordinates of these three fixed points are accurate enough.
 * @param cameraMatrix Output 3x3 floating-point camera matrix. See calibrateCamera() for details.
 * @param distCoeffs Output vector of distortion coefficients. See calibrateCamera() for details.
 * @param rvecs Output vector of rotation vectors estimated for each pattern view. See calibrateCamera()
 * for details.
 * @param tvecs Output vector of translation vectors estimated for each pattern view.
 * @param newObjPoints The updated output vector of calibration pattern points. The coordinates might
 * be scaled based on three fixed points. The returned coordinates are accurate only if the above
 * mentioned three fixed points are accurate. If not needed, noArray() can be passed in. This parameter
 * is ignored with standard calibration method.
 * @param stdDeviationsIntrinsics Output vector of standard deviations estimated for intrinsic parameters.
 * See calibrateCamera() for details.
 * @param stdDeviationsExtrinsics Output vector of standard deviations estimated for extrinsic parameters.
 * See calibrateCamera() for details.
 * @param stdDeviationsObjPoints Output vector of standard deviations estimated for refined coordinates
 * of calibration pattern points. It has the same size and order as objectPoints[0] vector. This
 * parameter is ignored with standard calibration method.
 * @param perViewErrors Output vector of the RMS re-projection error estimated for each pattern view.
 * @param flags Different flags that may be zero or a combination of some predefined values. See
 * calibrateCamera() for details. If the method of releasing object is used, the calibration time may
 * be much longer. CALIB_USE_QR or CALIB_USE_LU could be used for faster calibration with potentially
 * less precise and less stable in some rare cases.
 *
 * @return the overall RMS re-projection error.
 *
 * The function estimates the intrinsic camera parameters and extrinsic parameters for each of the
 * views. The algorithm is based on CITE: Zhang2000, CITE: BouguetMCT and CITE: strobl2011iccv. See
 * calibrateCamera() for other detailed explanations.
 * @sa
 *    calibrateCamera, findChessboardCorners, solvePnP, initCameraMatrix2D, stereoCalibrate, undistort
 */
+ (double)calibrateCameraROExtended:(NSArray<Mat*>*)objectPoints imagePoints:(NSArray<Mat*>*)imagePoints imageSize:(Size2i*)imageSize iFixedPoint:(int)iFixedPoint cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs newObjPoints:(Mat*)newObjPoints stdDeviationsIntrinsics:(Mat*)stdDeviationsIntrinsics stdDeviationsExtrinsics:(Mat*)stdDeviationsExtrinsics stdDeviationsObjPoints:(Mat*)stdDeviationsObjPoints perViewErrors:(Mat*)perViewErrors flags:(int)flags NS_SWIFT_NAME(calibrateCameraRO(objectPoints:imagePoints:imageSize:iFixedPoint:cameraMatrix:distCoeffs:rvecs:tvecs:newObjPoints:stdDeviationsIntrinsics:stdDeviationsExtrinsics:stdDeviationsObjPoints:perViewErrors:flags:));

/**
 * Finds the camera intrinsic and extrinsic parameters from several views of a calibration pattern.
 *
 * This function is an extension of calibrateCamera() with the method of releasing object which was
 * proposed in CITE: strobl2011iccv. In many common cases with inaccurate, unmeasured, roughly planar
 * targets (calibration plates), this method can dramatically improve the precision of the estimated
 * camera parameters. Both the object-releasing method and standard method are supported by this
 * function. Use the parameter **iFixedPoint** for method selection. In the internal implementation,
 * calibrateCamera() is a wrapper for this function.
 *
 * @param objectPoints Vector of vectors of calibration pattern points in the calibration pattern
 * coordinate space. See calibrateCamera() for details. If the method of releasing object to be used,
 * the identical calibration board must be used in each view and it must be fully visible, and all
 * objectPoints[i] must be the same and all points should be roughly close to a plane. **The calibration
 * target has to be rigid, or at least static if the camera (rather than the calibration target) is
 * shifted for grabbing images.**
 * @param imagePoints Vector of vectors of the projections of calibration pattern points. See
 * calibrateCamera() for details.
 * @param imageSize Size of the image used only to initialize the intrinsic camera matrix.
 * @param iFixedPoint The index of the 3D object point in objectPoints[0] to be fixed. It also acts as
 * a switch for calibration method selection. If object-releasing method to be used, pass in the
 * parameter in the range of [1, objectPoints[0].size()-2], otherwise a value out of this range will
 * make standard calibration method selected. Usually the top-right corner point of the calibration
 * board grid is recommended to be fixed when object-releasing method being utilized. According to
 * \cite strobl2011iccv, two other points are also fixed. In this implementation, objectPoints[0].front
 * and objectPoints[0].back.z are used. With object-releasing method, accurate rvecs, tvecs and
 * newObjPoints are only possible if coordinates of these three fixed points are accurate enough.
 * @param cameraMatrix Output 3x3 floating-point camera matrix. See calibrateCamera() for details.
 * @param distCoeffs Output vector of distortion coefficients. See calibrateCamera() for details.
 * @param rvecs Output vector of rotation vectors estimated for each pattern view. See calibrateCamera()
 * for details.
 * @param tvecs Output vector of translation vectors estimated for each pattern view.
 * @param newObjPoints The updated output vector of calibration pattern points. The coordinates might
 * be scaled based on three fixed points. The returned coordinates are accurate only if the above
 * mentioned three fixed points are accurate. If not needed, noArray() can be passed in. This parameter
 * is ignored with standard calibration method.
 * @param stdDeviationsIntrinsics Output vector of standard deviations estimated for intrinsic parameters.
 * See calibrateCamera() for details.
 * @param stdDeviationsExtrinsics Output vector of standard deviations estimated for extrinsic parameters.
 * See calibrateCamera() for details.
 * @param stdDeviationsObjPoints Output vector of standard deviations estimated for refined coordinates
 * of calibration pattern points. It has the same size and order as objectPoints[0] vector. This
 * parameter is ignored with standard calibration method.
 * @param perViewErrors Output vector of the RMS re-projection error estimated for each pattern view.
 * calibrateCamera() for details. If the method of releasing object is used, the calibration time may
 * be much longer. CALIB_USE_QR or CALIB_USE_LU could be used for faster calibration with potentially
 * less precise and less stable in some rare cases.
 *
 * @return the overall RMS re-projection error.
 *
 * The function estimates the intrinsic camera parameters and extrinsic parameters for each of the
 * views. The algorithm is based on CITE: Zhang2000, CITE: BouguetMCT and CITE: strobl2011iccv. See
 * calibrateCamera() for other detailed explanations.
 * @sa
 *    calibrateCamera, findChessboardCorners, solvePnP, initCameraMatrix2D, stereoCalibrate, undistort
 */
+ (double)calibrateCameraROExtended:(NSArray<Mat*>*)objectPoints imagePoints:(NSArray<Mat*>*)imagePoints imageSize:(Size2i*)imageSize iFixedPoint:(int)iFixedPoint cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs newObjPoints:(Mat*)newObjPoints stdDeviationsIntrinsics:(Mat*)stdDeviationsIntrinsics stdDeviationsExtrinsics:(Mat*)stdDeviationsExtrinsics stdDeviationsObjPoints:(Mat*)stdDeviationsObjPoints perViewErrors:(Mat*)perViewErrors NS_SWIFT_NAME(calibrateCameraRO(objectPoints:imagePoints:imageSize:iFixedPoint:cameraMatrix:distCoeffs:rvecs:tvecs:newObjPoints:stdDeviationsIntrinsics:stdDeviationsExtrinsics:stdDeviationsObjPoints:perViewErrors:));


//
//  double cv::calibrateCameraRO(vector_Mat objectPoints, vector_Mat imagePoints, Size imageSize, int iFixedPoint, Mat& cameraMatrix, Mat& distCoeffs, vector_Mat& rvecs, vector_Mat& tvecs, Mat& newObjPoints, int flags = 0, TermCriteria criteria = TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON))
//
+ (double)calibrateCameraRO:(NSArray<Mat*>*)objectPoints imagePoints:(NSArray<Mat*>*)imagePoints imageSize:(Size2i*)imageSize iFixedPoint:(int)iFixedPoint cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs newObjPoints:(Mat*)newObjPoints flags:(int)flags criteria:(TermCriteria*)criteria NS_SWIFT_NAME(calibrateCameraRO(objectPoints:imagePoints:imageSize:iFixedPoint:cameraMatrix:distCoeffs:rvecs:tvecs:newObjPoints:flags:criteria:));

+ (double)calibrateCameraRO:(NSArray<Mat*>*)objectPoints imagePoints:(NSArray<Mat*>*)imagePoints imageSize:(Size2i*)imageSize iFixedPoint:(int)iFixedPoint cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs newObjPoints:(Mat*)newObjPoints flags:(int)flags NS_SWIFT_NAME(calibrateCameraRO(objectPoints:imagePoints:imageSize:iFixedPoint:cameraMatrix:distCoeffs:rvecs:tvecs:newObjPoints:flags:));

+ (double)calibrateCameraRO:(NSArray<Mat*>*)objectPoints imagePoints:(NSArray<Mat*>*)imagePoints imageSize:(Size2i*)imageSize iFixedPoint:(int)iFixedPoint cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs newObjPoints:(Mat*)newObjPoints NS_SWIFT_NAME(calibrateCameraRO(objectPoints:imagePoints:imageSize:iFixedPoint:cameraMatrix:distCoeffs:rvecs:tvecs:newObjPoints:));


//
//  double cv::sampsonDistance(Mat pt1, Mat pt2, Mat F)
//
/**
 * Calculates the Sampson Distance between two points.
 *
 * The function cv::sampsonDistance calculates and returns the first order approximation of the geometric error as:
 * `$$
 * sd( \texttt{pt1} , \texttt{pt2} )=
 * \frac{(\texttt{pt2}^t \cdot \texttt{F} \cdot \texttt{pt1})^2}
 * {((\texttt{F} \cdot \texttt{pt1})(0))^2 +
 * ((\texttt{F} \cdot \texttt{pt1})(1))^2 +
 * ((\texttt{F}^t \cdot \texttt{pt2})(0))^2 +
 * ((\texttt{F}^t \cdot \texttt{pt2})(1))^2}
 * $$`
 * The fundamental matrix may be calculated using the cv::findFundamentalMat function. See CITE: HartleyZ00 11.4.3 for details.
 * @param pt1 first homogeneous 2d point
 * @param pt2 second homogeneous 2d point
 * @param F fundamental matrix
 * @return The computed Sampson distance.
 */
+ (double)sampsonDistance:(Mat*)pt1 pt2:(Mat*)pt2 F:(Mat*)F NS_SWIFT_NAME(sampsonDistance(pt1:pt2:F:));


//
//  double cv::stereoCalibrate(vector_Mat objectPoints, vector_Mat imagePoints1, vector_Mat imagePoints2, Mat& cameraMatrix1, Mat& distCoeffs1, Mat& cameraMatrix2, Mat& distCoeffs2, Size imageSize, Mat& R, Mat& T, Mat& E, Mat& F, Mat& perViewErrors, int flags = CALIB_FIX_INTRINSIC, TermCriteria criteria = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 1e-6))
//
/**
 * Calibrates a stereo camera set up. This function finds the intrinsic parameters
 * for each of the two cameras and the extrinsic parameters between the two cameras.
 *
 * @param objectPoints Vector of vectors of the calibration pattern points. The same structure as
 * in REF: calibrateCamera. For each pattern view, both cameras need to see the same object
 * points. Therefore, objectPoints.size(), imagePoints1.size(), and imagePoints2.size() need to be
 * equal as well as objectPoints[i].size(), imagePoints1[i].size(), and imagePoints2[i].size() need to
 * be equal for each i.
 * @param imagePoints1 Vector of vectors of the projections of the calibration pattern points,
 * observed by the first camera. The same structure as in REF: calibrateCamera.
 * @param imagePoints2 Vector of vectors of the projections of the calibration pattern points,
 * observed by the second camera. The same structure as in REF: calibrateCamera.
 * @param cameraMatrix1 Input/output camera matrix for the first camera, the same as in
 * REF: calibrateCamera. Furthermore, for the stereo case, additional flags may be used, see below.
 * @param distCoeffs1 Input/output vector of distortion coefficients, the same as in
 * REF: calibrateCamera.
 * @param cameraMatrix2 Input/output second camera matrix for the second camera. See description for
 * cameraMatrix1.
 * @param distCoeffs2 Input/output lens distortion coefficients for the second camera. See
 * description for distCoeffs1.
 * @param imageSize Size of the image used only to initialize the intrinsic camera matrices.
 * @param R Output rotation matrix. Together with the translation vector T, this matrix brings
 * points given in the first camera's coordinate system to points in the second camera's
 * coordinate system. In more technical terms, the tuple of R and T performs a change of basis
 * from the first camera's coordinate system to the second camera's coordinate system. Due to its
 * duality, this tuple is equivalent to the position of the first camera with respect to the
 * second camera coordinate system.
 * @param T Output translation vector, see description above.
 * @param E Output essential matrix.
 * @param F Output fundamental matrix.
 * @param perViewErrors Output vector of the RMS re-projection error estimated for each pattern view.
 * @param flags Different flags that may be zero or a combination of the following values:
 * -   **CALIB_FIX_INTRINSIC** Fix cameraMatrix? and distCoeffs? so that only R, T, E, and F
 * matrices are estimated.
 * -   **CALIB_USE_INTRINSIC_GUESS** Optimize some or all of the intrinsic parameters
 * according to the specified flags. Initial values are provided by the user.
 * -   **CALIB_USE_EXTRINSIC_GUESS** R and T contain valid initial values that are optimized further.
 * Otherwise R and T are initialized to the median value of the pattern views (each dimension separately).
 * -   **CALIB_FIX_PRINCIPAL_POINT** Fix the principal points during the optimization.
 * -   **CALIB_FIX_FOCAL_LENGTH** Fix `$$f^{(j)}_x$$` and `$$f^{(j)}_y$$` .
 * -   **CALIB_FIX_ASPECT_RATIO** Optimize `$$f^{(j)}_y$$` . Fix the ratio `$$f^{(j)}_x/f^{(j)}_y$$`
 * .
 * -   **CALIB_SAME_FOCAL_LENGTH** Enforce `$$f^{(0)}_x=f^{(1)}_x$$` and `$$f^{(0)}_y=f^{(1)}_y$$` .
 * -   **CALIB_ZERO_TANGENT_DIST** Set tangential distortion coefficients for each camera to
 * zeros and fix there.
 * -   **CALIB_FIX_K1,...,CALIB_FIX_K6** Do not change the corresponding radial
 * distortion coefficient during the optimization. If CALIB_USE_INTRINSIC_GUESS is set,
 * the coefficient from the supplied distCoeffs matrix is used. Otherwise, it is set to 0.
 * -   **CALIB_RATIONAL_MODEL** Enable coefficients k4, k5, and k6. To provide the backward
 * compatibility, this extra flag should be explicitly specified to make the calibration
 * function use the rational model and return 8 coefficients. If the flag is not set, the
 * function computes and returns only 5 distortion coefficients.
 * -   **CALIB_THIN_PRISM_MODEL** Coefficients s1, s2, s3 and s4 are enabled. To provide the
 * backward compatibility, this extra flag should be explicitly specified to make the
 * calibration function use the thin prism model and return 12 coefficients. If the flag is not
 * set, the function computes and returns only 5 distortion coefficients.
 * -   **CALIB_FIX_S1_S2_S3_S4** The thin prism distortion coefficients are not changed during
 * the optimization. If CALIB_USE_INTRINSIC_GUESS is set, the coefficient from the
 * supplied distCoeffs matrix is used. Otherwise, it is set to 0.
 * -   **CALIB_TILTED_MODEL** Coefficients tauX and tauY are enabled. To provide the
 * backward compatibility, this extra flag should be explicitly specified to make the
 * calibration function use the tilted sensor model and return 14 coefficients. If the flag is not
 * set, the function computes and returns only 5 distortion coefficients.
 * -   **CALIB_FIX_TAUX_TAUY** The coefficients of the tilted sensor model are not changed during
 * the optimization. If CALIB_USE_INTRINSIC_GUESS is set, the coefficient from the
 * supplied distCoeffs matrix is used. Otherwise, it is set to 0.
 * @param criteria Termination criteria for the iterative optimization algorithm.
 *
 * The function estimates the transformation between two cameras making a stereo pair. If one computes
 * the poses of an object relative to the first camera and to the second camera,
 * ( `$$R_1$$`,`$$T_1$$` ) and (`$$R_2$$`,`$$T_2$$`), respectively, for a stereo camera where the
 * relative position and orientation between the two cameras are fixed, then those poses definitely
 * relate to each other. This means, if the relative position and orientation (`$$R$$`,`$$T$$`) of the
 * two cameras is known, it is possible to compute (`$$R_2$$`,`$$T_2$$`) when (`$$R_1$$`,`$$T_1$$`) is
 * given. This is what the described function does. It computes (`$$R$$`,`$$T$$`) such that:
 *
 * `$$R_2=R R_1$$`
 * `$$T_2=R T_1 + T.$$`
 *
 * Therefore, one can compute the coordinate representation of a 3D point for the second camera's
 * coordinate system when given the point's coordinate representation in the first camera's coordinate
 * system:
 *
 * `$$\begin{bmatrix}
 * X_2 \\
 * Y_2 \\
 * Z_2 \\
 * 1
 * \end{bmatrix} = \begin{bmatrix}
 * R & T \\
 * 0 & 1
 * \end{bmatrix} \begin{bmatrix}
 * X_1 \\
 * Y_1 \\
 * Z_1 \\
 * 1
 * \end{bmatrix}.$$`
 *
 *
 * Optionally, it computes the essential matrix E:
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } E= \vecthreethree{0}{-T_2}{T_1}{T_2}{0}{-T_0}{-T_1}{T_0}{0} R$$`
 *
 * where `$$T_i$$` are components of the translation vector `$$T$$` : `$$T=[T_0, T_1, T_2]^T$$` .
 * And the function can also compute the fundamental matrix F:
 *
 * `$$F = cameraMatrix2^{-T}\cdot E \cdot cameraMatrix1^{-1}$$`
 *
 * Besides the stereo-related information, the function can also perform a full calibration of each of
 * the two cameras. However, due to the high dimensionality of the parameter space and noise in the
 * input data, the function can diverge from the correct solution. If the intrinsic parameters can be
 * estimated with high accuracy for each of the cameras individually (for example, using
 * calibrateCamera ), you are recommended to do so and then pass CALIB_FIX_INTRINSIC flag to the
 * function along with the computed intrinsic parameters. Otherwise, if all the parameters are
 * estimated at once, it makes sense to restrict some parameters, for example, pass
 * CALIB_SAME_FOCAL_LENGTH and CALIB_ZERO_TANGENT_DIST flags, which is usually a
 * reasonable assumption.
 *
 * Similarly to calibrateCamera, the function minimizes the total re-projection error for all the
 * points in all the available views from both cameras. The function returns the final value of the
 * re-projection error.
 */
+ (double)stereoCalibrateExtended:(NSArray<Mat*>*)objectPoints imagePoints1:(NSArray<Mat*>*)imagePoints1 imagePoints2:(NSArray<Mat*>*)imagePoints2 cameraMatrix1:(Mat*)cameraMatrix1 distCoeffs1:(Mat*)distCoeffs1 cameraMatrix2:(Mat*)cameraMatrix2 distCoeffs2:(Mat*)distCoeffs2 imageSize:(Size2i*)imageSize R:(Mat*)R T:(Mat*)T E:(Mat*)E F:(Mat*)F perViewErrors:(Mat*)perViewErrors flags:(int)flags criteria:(TermCriteria*)criteria NS_SWIFT_NAME(stereoCalibrate(objectPoints:imagePoints1:imagePoints2:cameraMatrix1:distCoeffs1:cameraMatrix2:distCoeffs2:imageSize:R:T:E:F:perViewErrors:flags:criteria:));

/**
 * Calibrates a stereo camera set up. This function finds the intrinsic parameters
 * for each of the two cameras and the extrinsic parameters between the two cameras.
 *
 * @param objectPoints Vector of vectors of the calibration pattern points. The same structure as
 * in REF: calibrateCamera. For each pattern view, both cameras need to see the same object
 * points. Therefore, objectPoints.size(), imagePoints1.size(), and imagePoints2.size() need to be
 * equal as well as objectPoints[i].size(), imagePoints1[i].size(), and imagePoints2[i].size() need to
 * be equal for each i.
 * @param imagePoints1 Vector of vectors of the projections of the calibration pattern points,
 * observed by the first camera. The same structure as in REF: calibrateCamera.
 * @param imagePoints2 Vector of vectors of the projections of the calibration pattern points,
 * observed by the second camera. The same structure as in REF: calibrateCamera.
 * @param cameraMatrix1 Input/output camera matrix for the first camera, the same as in
 * REF: calibrateCamera. Furthermore, for the stereo case, additional flags may be used, see below.
 * @param distCoeffs1 Input/output vector of distortion coefficients, the same as in
 * REF: calibrateCamera.
 * @param cameraMatrix2 Input/output second camera matrix for the second camera. See description for
 * cameraMatrix1.
 * @param distCoeffs2 Input/output lens distortion coefficients for the second camera. See
 * description for distCoeffs1.
 * @param imageSize Size of the image used only to initialize the intrinsic camera matrices.
 * @param R Output rotation matrix. Together with the translation vector T, this matrix brings
 * points given in the first camera's coordinate system to points in the second camera's
 * coordinate system. In more technical terms, the tuple of R and T performs a change of basis
 * from the first camera's coordinate system to the second camera's coordinate system. Due to its
 * duality, this tuple is equivalent to the position of the first camera with respect to the
 * second camera coordinate system.
 * @param T Output translation vector, see description above.
 * @param E Output essential matrix.
 * @param F Output fundamental matrix.
 * @param perViewErrors Output vector of the RMS re-projection error estimated for each pattern view.
 * @param flags Different flags that may be zero or a combination of the following values:
 * -   **CALIB_FIX_INTRINSIC** Fix cameraMatrix? and distCoeffs? so that only R, T, E, and F
 * matrices are estimated.
 * -   **CALIB_USE_INTRINSIC_GUESS** Optimize some or all of the intrinsic parameters
 * according to the specified flags. Initial values are provided by the user.
 * -   **CALIB_USE_EXTRINSIC_GUESS** R and T contain valid initial values that are optimized further.
 * Otherwise R and T are initialized to the median value of the pattern views (each dimension separately).
 * -   **CALIB_FIX_PRINCIPAL_POINT** Fix the principal points during the optimization.
 * -   **CALIB_FIX_FOCAL_LENGTH** Fix `$$f^{(j)}_x$$` and `$$f^{(j)}_y$$` .
 * -   **CALIB_FIX_ASPECT_RATIO** Optimize `$$f^{(j)}_y$$` . Fix the ratio `$$f^{(j)}_x/f^{(j)}_y$$`
 * .
 * -   **CALIB_SAME_FOCAL_LENGTH** Enforce `$$f^{(0)}_x=f^{(1)}_x$$` and `$$f^{(0)}_y=f^{(1)}_y$$` .
 * -   **CALIB_ZERO_TANGENT_DIST** Set tangential distortion coefficients for each camera to
 * zeros and fix there.
 * -   **CALIB_FIX_K1,...,CALIB_FIX_K6** Do not change the corresponding radial
 * distortion coefficient during the optimization. If CALIB_USE_INTRINSIC_GUESS is set,
 * the coefficient from the supplied distCoeffs matrix is used. Otherwise, it is set to 0.
 * -   **CALIB_RATIONAL_MODEL** Enable coefficients k4, k5, and k6. To provide the backward
 * compatibility, this extra flag should be explicitly specified to make the calibration
 * function use the rational model and return 8 coefficients. If the flag is not set, the
 * function computes and returns only 5 distortion coefficients.
 * -   **CALIB_THIN_PRISM_MODEL** Coefficients s1, s2, s3 and s4 are enabled. To provide the
 * backward compatibility, this extra flag should be explicitly specified to make the
 * calibration function use the thin prism model and return 12 coefficients. If the flag is not
 * set, the function computes and returns only 5 distortion coefficients.
 * -   **CALIB_FIX_S1_S2_S3_S4** The thin prism distortion coefficients are not changed during
 * the optimization. If CALIB_USE_INTRINSIC_GUESS is set, the coefficient from the
 * supplied distCoeffs matrix is used. Otherwise, it is set to 0.
 * -   **CALIB_TILTED_MODEL** Coefficients tauX and tauY are enabled. To provide the
 * backward compatibility, this extra flag should be explicitly specified to make the
 * calibration function use the tilted sensor model and return 14 coefficients. If the flag is not
 * set, the function computes and returns only 5 distortion coefficients.
 * -   **CALIB_FIX_TAUX_TAUY** The coefficients of the tilted sensor model are not changed during
 * the optimization. If CALIB_USE_INTRINSIC_GUESS is set, the coefficient from the
 * supplied distCoeffs matrix is used. Otherwise, it is set to 0.
 *
 * The function estimates the transformation between two cameras making a stereo pair. If one computes
 * the poses of an object relative to the first camera and to the second camera,
 * ( `$$R_1$$`,`$$T_1$$` ) and (`$$R_2$$`,`$$T_2$$`), respectively, for a stereo camera where the
 * relative position and orientation between the two cameras are fixed, then those poses definitely
 * relate to each other. This means, if the relative position and orientation (`$$R$$`,`$$T$$`) of the
 * two cameras is known, it is possible to compute (`$$R_2$$`,`$$T_2$$`) when (`$$R_1$$`,`$$T_1$$`) is
 * given. This is what the described function does. It computes (`$$R$$`,`$$T$$`) such that:
 *
 * `$$R_2=R R_1$$`
 * `$$T_2=R T_1 + T.$$`
 *
 * Therefore, one can compute the coordinate representation of a 3D point for the second camera's
 * coordinate system when given the point's coordinate representation in the first camera's coordinate
 * system:
 *
 * `$$\begin{bmatrix}
 * X_2 \\
 * Y_2 \\
 * Z_2 \\
 * 1
 * \end{bmatrix} = \begin{bmatrix}
 * R & T \\
 * 0 & 1
 * \end{bmatrix} \begin{bmatrix}
 * X_1 \\
 * Y_1 \\
 * Z_1 \\
 * 1
 * \end{bmatrix}.$$`
 *
 *
 * Optionally, it computes the essential matrix E:
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } E= \vecthreethree{0}{-T_2}{T_1}{T_2}{0}{-T_0}{-T_1}{T_0}{0} R$$`
 *
 * where `$$T_i$$` are components of the translation vector `$$T$$` : `$$T=[T_0, T_1, T_2]^T$$` .
 * And the function can also compute the fundamental matrix F:
 *
 * `$$F = cameraMatrix2^{-T}\cdot E \cdot cameraMatrix1^{-1}$$`
 *
 * Besides the stereo-related information, the function can also perform a full calibration of each of
 * the two cameras. However, due to the high dimensionality of the parameter space and noise in the
 * input data, the function can diverge from the correct solution. If the intrinsic parameters can be
 * estimated with high accuracy for each of the cameras individually (for example, using
 * calibrateCamera ), you are recommended to do so and then pass CALIB_FIX_INTRINSIC flag to the
 * function along with the computed intrinsic parameters. Otherwise, if all the parameters are
 * estimated at once, it makes sense to restrict some parameters, for example, pass
 * CALIB_SAME_FOCAL_LENGTH and CALIB_ZERO_TANGENT_DIST flags, which is usually a
 * reasonable assumption.
 *
 * Similarly to calibrateCamera, the function minimizes the total re-projection error for all the
 * points in all the available views from both cameras. The function returns the final value of the
 * re-projection error.
 */
+ (double)stereoCalibrateExtended:(NSArray<Mat*>*)objectPoints imagePoints1:(NSArray<Mat*>*)imagePoints1 imagePoints2:(NSArray<Mat*>*)imagePoints2 cameraMatrix1:(Mat*)cameraMatrix1 distCoeffs1:(Mat*)distCoeffs1 cameraMatrix2:(Mat*)cameraMatrix2 distCoeffs2:(Mat*)distCoeffs2 imageSize:(Size2i*)imageSize R:(Mat*)R T:(Mat*)T E:(Mat*)E F:(Mat*)F perViewErrors:(Mat*)perViewErrors flags:(int)flags NS_SWIFT_NAME(stereoCalibrate(objectPoints:imagePoints1:imagePoints2:cameraMatrix1:distCoeffs1:cameraMatrix2:distCoeffs2:imageSize:R:T:E:F:perViewErrors:flags:));

/**
 * Calibrates a stereo camera set up. This function finds the intrinsic parameters
 * for each of the two cameras and the extrinsic parameters between the two cameras.
 *
 * @param objectPoints Vector of vectors of the calibration pattern points. The same structure as
 * in REF: calibrateCamera. For each pattern view, both cameras need to see the same object
 * points. Therefore, objectPoints.size(), imagePoints1.size(), and imagePoints2.size() need to be
 * equal as well as objectPoints[i].size(), imagePoints1[i].size(), and imagePoints2[i].size() need to
 * be equal for each i.
 * @param imagePoints1 Vector of vectors of the projections of the calibration pattern points,
 * observed by the first camera. The same structure as in REF: calibrateCamera.
 * @param imagePoints2 Vector of vectors of the projections of the calibration pattern points,
 * observed by the second camera. The same structure as in REF: calibrateCamera.
 * @param cameraMatrix1 Input/output camera matrix for the first camera, the same as in
 * REF: calibrateCamera. Furthermore, for the stereo case, additional flags may be used, see below.
 * @param distCoeffs1 Input/output vector of distortion coefficients, the same as in
 * REF: calibrateCamera.
 * @param cameraMatrix2 Input/output second camera matrix for the second camera. See description for
 * cameraMatrix1.
 * @param distCoeffs2 Input/output lens distortion coefficients for the second camera. See
 * description for distCoeffs1.
 * @param imageSize Size of the image used only to initialize the intrinsic camera matrices.
 * @param R Output rotation matrix. Together with the translation vector T, this matrix brings
 * points given in the first camera's coordinate system to points in the second camera's
 * coordinate system. In more technical terms, the tuple of R and T performs a change of basis
 * from the first camera's coordinate system to the second camera's coordinate system. Due to its
 * duality, this tuple is equivalent to the position of the first camera with respect to the
 * second camera coordinate system.
 * @param T Output translation vector, see description above.
 * @param E Output essential matrix.
 * @param F Output fundamental matrix.
 * @param perViewErrors Output vector of the RMS re-projection error estimated for each pattern view.
 * -   **CALIB_FIX_INTRINSIC** Fix cameraMatrix? and distCoeffs? so that only R, T, E, and F
 * matrices are estimated.
 * -   **CALIB_USE_INTRINSIC_GUESS** Optimize some or all of the intrinsic parameters
 * according to the specified flags. Initial values are provided by the user.
 * -   **CALIB_USE_EXTRINSIC_GUESS** R and T contain valid initial values that are optimized further.
 * Otherwise R and T are initialized to the median value of the pattern views (each dimension separately).
 * -   **CALIB_FIX_PRINCIPAL_POINT** Fix the principal points during the optimization.
 * -   **CALIB_FIX_FOCAL_LENGTH** Fix `$$f^{(j)}_x$$` and `$$f^{(j)}_y$$` .
 * -   **CALIB_FIX_ASPECT_RATIO** Optimize `$$f^{(j)}_y$$` . Fix the ratio `$$f^{(j)}_x/f^{(j)}_y$$`
 * .
 * -   **CALIB_SAME_FOCAL_LENGTH** Enforce `$$f^{(0)}_x=f^{(1)}_x$$` and `$$f^{(0)}_y=f^{(1)}_y$$` .
 * -   **CALIB_ZERO_TANGENT_DIST** Set tangential distortion coefficients for each camera to
 * zeros and fix there.
 * -   **CALIB_FIX_K1,...,CALIB_FIX_K6** Do not change the corresponding radial
 * distortion coefficient during the optimization. If CALIB_USE_INTRINSIC_GUESS is set,
 * the coefficient from the supplied distCoeffs matrix is used. Otherwise, it is set to 0.
 * -   **CALIB_RATIONAL_MODEL** Enable coefficients k4, k5, and k6. To provide the backward
 * compatibility, this extra flag should be explicitly specified to make the calibration
 * function use the rational model and return 8 coefficients. If the flag is not set, the
 * function computes and returns only 5 distortion coefficients.
 * -   **CALIB_THIN_PRISM_MODEL** Coefficients s1, s2, s3 and s4 are enabled. To provide the
 * backward compatibility, this extra flag should be explicitly specified to make the
 * calibration function use the thin prism model and return 12 coefficients. If the flag is not
 * set, the function computes and returns only 5 distortion coefficients.
 * -   **CALIB_FIX_S1_S2_S3_S4** The thin prism distortion coefficients are not changed during
 * the optimization. If CALIB_USE_INTRINSIC_GUESS is set, the coefficient from the
 * supplied distCoeffs matrix is used. Otherwise, it is set to 0.
 * -   **CALIB_TILTED_MODEL** Coefficients tauX and tauY are enabled. To provide the
 * backward compatibility, this extra flag should be explicitly specified to make the
 * calibration function use the tilted sensor model and return 14 coefficients. If the flag is not
 * set, the function computes and returns only 5 distortion coefficients.
 * -   **CALIB_FIX_TAUX_TAUY** The coefficients of the tilted sensor model are not changed during
 * the optimization. If CALIB_USE_INTRINSIC_GUESS is set, the coefficient from the
 * supplied distCoeffs matrix is used. Otherwise, it is set to 0.
 *
 * The function estimates the transformation between two cameras making a stereo pair. If one computes
 * the poses of an object relative to the first camera and to the second camera,
 * ( `$$R_1$$`,`$$T_1$$` ) and (`$$R_2$$`,`$$T_2$$`), respectively, for a stereo camera where the
 * relative position and orientation between the two cameras are fixed, then those poses definitely
 * relate to each other. This means, if the relative position and orientation (`$$R$$`,`$$T$$`) of the
 * two cameras is known, it is possible to compute (`$$R_2$$`,`$$T_2$$`) when (`$$R_1$$`,`$$T_1$$`) is
 * given. This is what the described function does. It computes (`$$R$$`,`$$T$$`) such that:
 *
 * `$$R_2=R R_1$$`
 * `$$T_2=R T_1 + T.$$`
 *
 * Therefore, one can compute the coordinate representation of a 3D point for the second camera's
 * coordinate system when given the point's coordinate representation in the first camera's coordinate
 * system:
 *
 * `$$\begin{bmatrix}
 * X_2 \\
 * Y_2 \\
 * Z_2 \\
 * 1
 * \end{bmatrix} = \begin{bmatrix}
 * R & T \\
 * 0 & 1
 * \end{bmatrix} \begin{bmatrix}
 * X_1 \\
 * Y_1 \\
 * Z_1 \\
 * 1
 * \end{bmatrix}.$$`
 *
 *
 * Optionally, it computes the essential matrix E:
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } E= \vecthreethree{0}{-T_2}{T_1}{T_2}{0}{-T_0}{-T_1}{T_0}{0} R$$`
 *
 * where `$$T_i$$` are components of the translation vector `$$T$$` : `$$T=[T_0, T_1, T_2]^T$$` .
 * And the function can also compute the fundamental matrix F:
 *
 * `$$F = cameraMatrix2^{-T}\cdot E \cdot cameraMatrix1^{-1}$$`
 *
 * Besides the stereo-related information, the function can also perform a full calibration of each of
 * the two cameras. However, due to the high dimensionality of the parameter space and noise in the
 * input data, the function can diverge from the correct solution. If the intrinsic parameters can be
 * estimated with high accuracy for each of the cameras individually (for example, using
 * calibrateCamera ), you are recommended to do so and then pass CALIB_FIX_INTRINSIC flag to the
 * function along with the computed intrinsic parameters. Otherwise, if all the parameters are
 * estimated at once, it makes sense to restrict some parameters, for example, pass
 * CALIB_SAME_FOCAL_LENGTH and CALIB_ZERO_TANGENT_DIST flags, which is usually a
 * reasonable assumption.
 *
 * Similarly to calibrateCamera, the function minimizes the total re-projection error for all the
 * points in all the available views from both cameras. The function returns the final value of the
 * re-projection error.
 */
+ (double)stereoCalibrateExtended:(NSArray<Mat*>*)objectPoints imagePoints1:(NSArray<Mat*>*)imagePoints1 imagePoints2:(NSArray<Mat*>*)imagePoints2 cameraMatrix1:(Mat*)cameraMatrix1 distCoeffs1:(Mat*)distCoeffs1 cameraMatrix2:(Mat*)cameraMatrix2 distCoeffs2:(Mat*)distCoeffs2 imageSize:(Size2i*)imageSize R:(Mat*)R T:(Mat*)T E:(Mat*)E F:(Mat*)F perViewErrors:(Mat*)perViewErrors NS_SWIFT_NAME(stereoCalibrate(objectPoints:imagePoints1:imagePoints2:cameraMatrix1:distCoeffs1:cameraMatrix2:distCoeffs2:imageSize:R:T:E:F:perViewErrors:));


//
//  double cv::stereoCalibrate(vector_Mat objectPoints, vector_Mat imagePoints1, vector_Mat imagePoints2, Mat& cameraMatrix1, Mat& distCoeffs1, Mat& cameraMatrix2, Mat& distCoeffs2, Size imageSize, Mat& R, Mat& T, Mat& E, Mat& F, int flags = CALIB_FIX_INTRINSIC, TermCriteria criteria = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 1e-6))
//
+ (double)stereoCalibrate:(NSArray<Mat*>*)objectPoints imagePoints1:(NSArray<Mat*>*)imagePoints1 imagePoints2:(NSArray<Mat*>*)imagePoints2 cameraMatrix1:(Mat*)cameraMatrix1 distCoeffs1:(Mat*)distCoeffs1 cameraMatrix2:(Mat*)cameraMatrix2 distCoeffs2:(Mat*)distCoeffs2 imageSize:(Size2i*)imageSize R:(Mat*)R T:(Mat*)T E:(Mat*)E F:(Mat*)F flags:(int)flags criteria:(TermCriteria*)criteria NS_SWIFT_NAME(stereoCalibrate(objectPoints:imagePoints1:imagePoints2:cameraMatrix1:distCoeffs1:cameraMatrix2:distCoeffs2:imageSize:R:T:E:F:flags:criteria:));

+ (double)stereoCalibrate:(NSArray<Mat*>*)objectPoints imagePoints1:(NSArray<Mat*>*)imagePoints1 imagePoints2:(NSArray<Mat*>*)imagePoints2 cameraMatrix1:(Mat*)cameraMatrix1 distCoeffs1:(Mat*)distCoeffs1 cameraMatrix2:(Mat*)cameraMatrix2 distCoeffs2:(Mat*)distCoeffs2 imageSize:(Size2i*)imageSize R:(Mat*)R T:(Mat*)T E:(Mat*)E F:(Mat*)F flags:(int)flags NS_SWIFT_NAME(stereoCalibrate(objectPoints:imagePoints1:imagePoints2:cameraMatrix1:distCoeffs1:cameraMatrix2:distCoeffs2:imageSize:R:T:E:F:flags:));

+ (double)stereoCalibrate:(NSArray<Mat*>*)objectPoints imagePoints1:(NSArray<Mat*>*)imagePoints1 imagePoints2:(NSArray<Mat*>*)imagePoints2 cameraMatrix1:(Mat*)cameraMatrix1 distCoeffs1:(Mat*)distCoeffs1 cameraMatrix2:(Mat*)cameraMatrix2 distCoeffs2:(Mat*)distCoeffs2 imageSize:(Size2i*)imageSize R:(Mat*)R T:(Mat*)T E:(Mat*)E F:(Mat*)F NS_SWIFT_NAME(stereoCalibrate(objectPoints:imagePoints1:imagePoints2:cameraMatrix1:distCoeffs1:cameraMatrix2:distCoeffs2:imageSize:R:T:E:F:));


//
//  double cv::fisheye::calibrate(vector_Mat objectPoints, vector_Mat imagePoints, Size image_size, Mat& K, Mat& D, vector_Mat& rvecs, vector_Mat& tvecs, int flags = 0, TermCriteria criteria = TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 100, DBL_EPSILON))
//
/**
 * Performs camera calibaration
 *
 * @param objectPoints vector of vectors of calibration pattern points in the calibration pattern
 *     coordinate space.
 * @param imagePoints vector of vectors of the projections of calibration pattern points.
 *     imagePoints.size() and objectPoints.size() and imagePoints[i].size() must be equal to
 *     objectPoints[i].size() for each i.
 * @param image_size Size of the image used only to initialize the intrinsic camera matrix.
 * @param K Output 3x3 floating-point camera matrix
 *     `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` . If
 *     fisheye::CALIB_USE_INTRINSIC_GUESS/ is specified, some or all of fx, fy, cx, cy must be
 *     initialized before calling the function.
 * @param D Output vector of distortion coefficients `$$(k_1, k_2, k_3, k_4)$$`.
 * @param rvecs Output vector of rotation vectors (see Rodrigues ) estimated for each pattern view.
 *     That is, each k-th rotation vector together with the corresponding k-th translation vector (see
 *     the next output parameter description) brings the calibration pattern from the model coordinate
 *     space (in which object points are specified) to the world coordinate space, that is, a real
 *     position of the calibration pattern in the k-th pattern view (k=0.. *M* -1).
 * @param tvecs Output vector of translation vectors estimated for each pattern view.
 * @param flags Different flags that may be zero or a combination of the following values:
 *     -   **fisheye::CALIB_USE_INTRINSIC_GUESS** cameraMatrix contains valid initial values of
 *     fx, fy, cx, cy that are optimized further. Otherwise, (cx, cy) is initially set to the image
 *     center ( imageSize is used), and focal distances are computed in a least-squares fashion.
 *     -   **fisheye::CALIB_RECOMPUTE_EXTRINSIC** Extrinsic will be recomputed after each iteration
 *     of intrinsic optimization.
 *     -   **fisheye::CALIB_CHECK_COND** The functions will check validity of condition number.
 *     -   **fisheye::CALIB_FIX_SKEW** Skew coefficient (alpha) is set to zero and stay zero.
 *     -   **fisheye::CALIB_FIX_K1..fisheye::CALIB_FIX_K4** Selected distortion coefficients
 *     are set to zeros and stay zero.
 *     -   **fisheye::CALIB_FIX_PRINCIPAL_POINT** The principal point is not changed during the global
 * optimization. It stays at the center or at a different location specified when CALIB_USE_INTRINSIC_GUESS is set too.
 * @param criteria Termination criteria for the iterative optimization algorithm.
 */
+ (double)calibrate:(NSArray<Mat*>*)objectPoints imagePoints:(NSArray<Mat*>*)imagePoints image_size:(Size2i*)image_size K:(Mat*)K D:(Mat*)D rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs flags:(int)flags criteria:(TermCriteria*)criteria NS_SWIFT_NAME(calibrate(objectPoints:imagePoints:image_size:K:D:rvecs:tvecs:flags:criteria:));

/**
 * Performs camera calibaration
 *
 * @param objectPoints vector of vectors of calibration pattern points in the calibration pattern
 *     coordinate space.
 * @param imagePoints vector of vectors of the projections of calibration pattern points.
 *     imagePoints.size() and objectPoints.size() and imagePoints[i].size() must be equal to
 *     objectPoints[i].size() for each i.
 * @param image_size Size of the image used only to initialize the intrinsic camera matrix.
 * @param K Output 3x3 floating-point camera matrix
 *     `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` . If
 *     fisheye::CALIB_USE_INTRINSIC_GUESS/ is specified, some or all of fx, fy, cx, cy must be
 *     initialized before calling the function.
 * @param D Output vector of distortion coefficients `$$(k_1, k_2, k_3, k_4)$$`.
 * @param rvecs Output vector of rotation vectors (see Rodrigues ) estimated for each pattern view.
 *     That is, each k-th rotation vector together with the corresponding k-th translation vector (see
 *     the next output parameter description) brings the calibration pattern from the model coordinate
 *     space (in which object points are specified) to the world coordinate space, that is, a real
 *     position of the calibration pattern in the k-th pattern view (k=0.. *M* -1).
 * @param tvecs Output vector of translation vectors estimated for each pattern view.
 * @param flags Different flags that may be zero or a combination of the following values:
 *     -   **fisheye::CALIB_USE_INTRINSIC_GUESS** cameraMatrix contains valid initial values of
 *     fx, fy, cx, cy that are optimized further. Otherwise, (cx, cy) is initially set to the image
 *     center ( imageSize is used), and focal distances are computed in a least-squares fashion.
 *     -   **fisheye::CALIB_RECOMPUTE_EXTRINSIC** Extrinsic will be recomputed after each iteration
 *     of intrinsic optimization.
 *     -   **fisheye::CALIB_CHECK_COND** The functions will check validity of condition number.
 *     -   **fisheye::CALIB_FIX_SKEW** Skew coefficient (alpha) is set to zero and stay zero.
 *     -   **fisheye::CALIB_FIX_K1..fisheye::CALIB_FIX_K4** Selected distortion coefficients
 *     are set to zeros and stay zero.
 *     -   **fisheye::CALIB_FIX_PRINCIPAL_POINT** The principal point is not changed during the global
 * optimization. It stays at the center or at a different location specified when CALIB_USE_INTRINSIC_GUESS is set too.
 */
+ (double)calibrate:(NSArray<Mat*>*)objectPoints imagePoints:(NSArray<Mat*>*)imagePoints image_size:(Size2i*)image_size K:(Mat*)K D:(Mat*)D rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs flags:(int)flags NS_SWIFT_NAME(calibrate(objectPoints:imagePoints:image_size:K:D:rvecs:tvecs:flags:));

/**
 * Performs camera calibaration
 *
 * @param objectPoints vector of vectors of calibration pattern points in the calibration pattern
 *     coordinate space.
 * @param imagePoints vector of vectors of the projections of calibration pattern points.
 *     imagePoints.size() and objectPoints.size() and imagePoints[i].size() must be equal to
 *     objectPoints[i].size() for each i.
 * @param image_size Size of the image used only to initialize the intrinsic camera matrix.
 * @param K Output 3x3 floating-point camera matrix
 *     `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` . If
 *     fisheye::CALIB_USE_INTRINSIC_GUESS/ is specified, some or all of fx, fy, cx, cy must be
 *     initialized before calling the function.
 * @param D Output vector of distortion coefficients `$$(k_1, k_2, k_3, k_4)$$`.
 * @param rvecs Output vector of rotation vectors (see Rodrigues ) estimated for each pattern view.
 *     That is, each k-th rotation vector together with the corresponding k-th translation vector (see
 *     the next output parameter description) brings the calibration pattern from the model coordinate
 *     space (in which object points are specified) to the world coordinate space, that is, a real
 *     position of the calibration pattern in the k-th pattern view (k=0.. *M* -1).
 * @param tvecs Output vector of translation vectors estimated for each pattern view.
 *     -   **fisheye::CALIB_USE_INTRINSIC_GUESS** cameraMatrix contains valid initial values of
 *     fx, fy, cx, cy that are optimized further. Otherwise, (cx, cy) is initially set to the image
 *     center ( imageSize is used), and focal distances are computed in a least-squares fashion.
 *     -   **fisheye::CALIB_RECOMPUTE_EXTRINSIC** Extrinsic will be recomputed after each iteration
 *     of intrinsic optimization.
 *     -   **fisheye::CALIB_CHECK_COND** The functions will check validity of condition number.
 *     -   **fisheye::CALIB_FIX_SKEW** Skew coefficient (alpha) is set to zero and stay zero.
 *     -   **fisheye::CALIB_FIX_K1..fisheye::CALIB_FIX_K4** Selected distortion coefficients
 *     are set to zeros and stay zero.
 *     -   **fisheye::CALIB_FIX_PRINCIPAL_POINT** The principal point is not changed during the global
 * optimization. It stays at the center or at a different location specified when CALIB_USE_INTRINSIC_GUESS is set too.
 */
+ (double)calibrate:(NSArray<Mat*>*)objectPoints imagePoints:(NSArray<Mat*>*)imagePoints image_size:(Size2i*)image_size K:(Mat*)K D:(Mat*)D rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs NS_SWIFT_NAME(calibrate(objectPoints:imagePoints:image_size:K:D:rvecs:tvecs:));


//
//  double cv::fisheye::stereoCalibrate(vector_Mat objectPoints, vector_Mat imagePoints1, vector_Mat imagePoints2, Mat& K1, Mat& D1, Mat& K2, Mat& D2, Size imageSize, Mat& R, Mat& T, int flags = fisheye::CALIB_FIX_INTRINSIC, TermCriteria criteria = TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 100, DBL_EPSILON))
//
/**
 * Performs stereo calibration
 *
 * @param objectPoints Vector of vectors of the calibration pattern points.
 * @param imagePoints1 Vector of vectors of the projections of the calibration pattern points,
 *     observed by the first camera.
 * @param imagePoints2 Vector of vectors of the projections of the calibration pattern points,
 *     observed by the second camera.
 * @param K1 Input/output first camera matrix:
 *     `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree{f_x^{(j)}}{0}{c_x^{(j)}}{0}{f_y^{(j)}}{c_y^{(j)}}{0}{0}{1}$$` , `$$j = 0,\, 1$$` . If
 *     any of fisheye::CALIB_USE_INTRINSIC_GUESS , fisheye::CALIB_FIX_INTRINSIC are specified,
 *     some or all of the matrix components must be initialized.
 * @param D1 Input/output vector of distortion coefficients `$$(k_1, k_2, k_3, k_4)$$` of 4 elements.
 * @param K2 Input/output second camera matrix. The parameter is similar to K1 .
 * @param D2 Input/output lens distortion coefficients for the second camera. The parameter is
 *     similar to D1 .
 * @param imageSize Size of the image used only to initialize intrinsic camera matrix.
 * @param R Output rotation matrix between the 1st and the 2nd camera coordinate systems.
 * @param T Output translation vector between the coordinate systems of the cameras.
 * @param flags Different flags that may be zero or a combination of the following values:
 *     -   **fisheye::CALIB_FIX_INTRINSIC** Fix K1, K2? and D1, D2? so that only R, T matrices
 *     are estimated.
 *     -   **fisheye::CALIB_USE_INTRINSIC_GUESS** K1, K2 contains valid initial values of
 *     fx, fy, cx, cy that are optimized further. Otherwise, (cx, cy) is initially set to the image
 *     center (imageSize is used), and focal distances are computed in a least-squares fashion.
 *     -   **fisheye::CALIB_RECOMPUTE_EXTRINSIC** Extrinsic will be recomputed after each iteration
 *     of intrinsic optimization.
 *     -   **fisheye::CALIB_CHECK_COND** The functions will check validity of condition number.
 *     -   **fisheye::CALIB_FIX_SKEW** Skew coefficient (alpha) is set to zero and stay zero.
 *     -   **fisheye::CALIB_FIX_K1..4** Selected distortion coefficients are set to zeros and stay
 *     zero.
 * @param criteria Termination criteria for the iterative optimization algorithm.
 */
+ (double)stereoCalibrate:(NSArray<Mat*>*)objectPoints imagePoints1:(NSArray<Mat*>*)imagePoints1 imagePoints2:(NSArray<Mat*>*)imagePoints2 K1:(Mat*)K1 D1:(Mat*)D1 K2:(Mat*)K2 D2:(Mat*)D2 imageSize:(Size2i*)imageSize R:(Mat*)R T:(Mat*)T flags:(int)flags criteria:(TermCriteria*)criteria NS_SWIFT_NAME(stereoCalibrate(objectPoints:imagePoints1:imagePoints2:K1:D1:K2:D2:imageSize:R:T:flags:criteria:));

/**
 * Performs stereo calibration
 *
 * @param objectPoints Vector of vectors of the calibration pattern points.
 * @param imagePoints1 Vector of vectors of the projections of the calibration pattern points,
 *     observed by the first camera.
 * @param imagePoints2 Vector of vectors of the projections of the calibration pattern points,
 *     observed by the second camera.
 * @param K1 Input/output first camera matrix:
 *     `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree{f_x^{(j)}}{0}{c_x^{(j)}}{0}{f_y^{(j)}}{c_y^{(j)}}{0}{0}{1}$$` , `$$j = 0,\, 1$$` . If
 *     any of fisheye::CALIB_USE_INTRINSIC_GUESS , fisheye::CALIB_FIX_INTRINSIC are specified,
 *     some or all of the matrix components must be initialized.
 * @param D1 Input/output vector of distortion coefficients `$$(k_1, k_2, k_3, k_4)$$` of 4 elements.
 * @param K2 Input/output second camera matrix. The parameter is similar to K1 .
 * @param D2 Input/output lens distortion coefficients for the second camera. The parameter is
 *     similar to D1 .
 * @param imageSize Size of the image used only to initialize intrinsic camera matrix.
 * @param R Output rotation matrix between the 1st and the 2nd camera coordinate systems.
 * @param T Output translation vector between the coordinate systems of the cameras.
 * @param flags Different flags that may be zero or a combination of the following values:
 *     -   **fisheye::CALIB_FIX_INTRINSIC** Fix K1, K2? and D1, D2? so that only R, T matrices
 *     are estimated.
 *     -   **fisheye::CALIB_USE_INTRINSIC_GUESS** K1, K2 contains valid initial values of
 *     fx, fy, cx, cy that are optimized further. Otherwise, (cx, cy) is initially set to the image
 *     center (imageSize is used), and focal distances are computed in a least-squares fashion.
 *     -   **fisheye::CALIB_RECOMPUTE_EXTRINSIC** Extrinsic will be recomputed after each iteration
 *     of intrinsic optimization.
 *     -   **fisheye::CALIB_CHECK_COND** The functions will check validity of condition number.
 *     -   **fisheye::CALIB_FIX_SKEW** Skew coefficient (alpha) is set to zero and stay zero.
 *     -   **fisheye::CALIB_FIX_K1..4** Selected distortion coefficients are set to zeros and stay
 *     zero.
 */
+ (double)stereoCalibrate:(NSArray<Mat*>*)objectPoints imagePoints1:(NSArray<Mat*>*)imagePoints1 imagePoints2:(NSArray<Mat*>*)imagePoints2 K1:(Mat*)K1 D1:(Mat*)D1 K2:(Mat*)K2 D2:(Mat*)D2 imageSize:(Size2i*)imageSize R:(Mat*)R T:(Mat*)T flags:(int)flags NS_SWIFT_NAME(stereoCalibrate(objectPoints:imagePoints1:imagePoints2:K1:D1:K2:D2:imageSize:R:T:flags:));

/**
 * Performs stereo calibration
 *
 * @param objectPoints Vector of vectors of the calibration pattern points.
 * @param imagePoints1 Vector of vectors of the projections of the calibration pattern points,
 *     observed by the first camera.
 * @param imagePoints2 Vector of vectors of the projections of the calibration pattern points,
 *     observed by the second camera.
 * @param K1 Input/output first camera matrix:
 *     `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree{f_x^{(j)}}{0}{c_x^{(j)}}{0}{f_y^{(j)}}{c_y^{(j)}}{0}{0}{1}$$` , `$$j = 0,\, 1$$` . If
 *     any of fisheye::CALIB_USE_INTRINSIC_GUESS , fisheye::CALIB_FIX_INTRINSIC are specified,
 *     some or all of the matrix components must be initialized.
 * @param D1 Input/output vector of distortion coefficients `$$(k_1, k_2, k_3, k_4)$$` of 4 elements.
 * @param K2 Input/output second camera matrix. The parameter is similar to K1 .
 * @param D2 Input/output lens distortion coefficients for the second camera. The parameter is
 *     similar to D1 .
 * @param imageSize Size of the image used only to initialize intrinsic camera matrix.
 * @param R Output rotation matrix between the 1st and the 2nd camera coordinate systems.
 * @param T Output translation vector between the coordinate systems of the cameras.
 *     -   **fisheye::CALIB_FIX_INTRINSIC** Fix K1, K2? and D1, D2? so that only R, T matrices
 *     are estimated.
 *     -   **fisheye::CALIB_USE_INTRINSIC_GUESS** K1, K2 contains valid initial values of
 *     fx, fy, cx, cy that are optimized further. Otherwise, (cx, cy) is initially set to the image
 *     center (imageSize is used), and focal distances are computed in a least-squares fashion.
 *     -   **fisheye::CALIB_RECOMPUTE_EXTRINSIC** Extrinsic will be recomputed after each iteration
 *     of intrinsic optimization.
 *     -   **fisheye::CALIB_CHECK_COND** The functions will check validity of condition number.
 *     -   **fisheye::CALIB_FIX_SKEW** Skew coefficient (alpha) is set to zero and stay zero.
 *     -   **fisheye::CALIB_FIX_K1..4** Selected distortion coefficients are set to zeros and stay
 *     zero.
 */
+ (double)stereoCalibrate:(NSArray<Mat*>*)objectPoints imagePoints1:(NSArray<Mat*>*)imagePoints1 imagePoints2:(NSArray<Mat*>*)imagePoints2 K1:(Mat*)K1 D1:(Mat*)D1 K2:(Mat*)K2 D2:(Mat*)D2 imageSize:(Size2i*)imageSize R:(Mat*)R T:(Mat*)T NS_SWIFT_NAME(stereoCalibrate(objectPoints:imagePoints1:imagePoints2:K1:D1:K2:D2:imageSize:R:T:));


//
//  float cv::rectify3Collinear(Mat cameraMatrix1, Mat distCoeffs1, Mat cameraMatrix2, Mat distCoeffs2, Mat cameraMatrix3, Mat distCoeffs3, vector_Mat imgpt1, vector_Mat imgpt3, Size imageSize, Mat R12, Mat T12, Mat R13, Mat T13, Mat& R1, Mat& R2, Mat& R3, Mat& P1, Mat& P2, Mat& P3, Mat& Q, double alpha, Size newImgSize, Rect* roi1, Rect* roi2, int flags)
//
+ (float)rectify3Collinear:(Mat*)cameraMatrix1 distCoeffs1:(Mat*)distCoeffs1 cameraMatrix2:(Mat*)cameraMatrix2 distCoeffs2:(Mat*)distCoeffs2 cameraMatrix3:(Mat*)cameraMatrix3 distCoeffs3:(Mat*)distCoeffs3 imgpt1:(NSArray<Mat*>*)imgpt1 imgpt3:(NSArray<Mat*>*)imgpt3 imageSize:(Size2i*)imageSize R12:(Mat*)R12 T12:(Mat*)T12 R13:(Mat*)R13 T13:(Mat*)T13 R1:(Mat*)R1 R2:(Mat*)R2 R3:(Mat*)R3 P1:(Mat*)P1 P2:(Mat*)P2 P3:(Mat*)P3 Q:(Mat*)Q alpha:(double)alpha newImgSize:(Size2i*)newImgSize roi1:(Rect2i*)roi1 roi2:(Rect2i*)roi2 flags:(int)flags NS_SWIFT_NAME(rectify3Collinear(cameraMatrix1:distCoeffs1:cameraMatrix2:distCoeffs2:cameraMatrix3:distCoeffs3:imgpt1:imgpt3:imageSize:R12:T12:R13:T13:R1:R2:R3:P1:P2:P3:Q:alpha:newImgSize:roi1:roi2:flags:));


//
//  int cv::decomposeHomographyMat(Mat H, Mat K, vector_Mat& rotations, vector_Mat& translations, vector_Mat& normals)
//
/**
 * Decompose a homography matrix to rotation(s), translation(s) and plane normal(s).
 *
 * @param H The input homography matrix between two images.
 * @param K The input intrinsic camera calibration matrix.
 * @param rotations Array of rotation matrices.
 * @param translations Array of translation matrices.
 * @param normals Array of plane normal matrices.
 *
 * This function extracts relative camera motion between two views of a planar object and returns up to
 * four mathematical solution tuples of rotation, translation, and plane normal. The decomposition of
 * the homography matrix H is described in detail in CITE: Malis.
 *
 * If the homography H, induced by the plane, gives the constraint
 * `$$s_i \vecthree{x'_i}{y'_i}{1} \sim H \vecthree{x_i}{y_i}{1}$$` on the source image points
 * `$$p_i$$` and the destination image points `$$p'_i$$`, then the tuple of rotations[k] and
 * translations[k] is a change of basis from the source camera's coordinate system to the destination
 * camera's coordinate system. However, by decomposing H, one can only get the translation normalized
 * by the (typically unknown) depth of the scene, i.e. its direction but with normalized length.
 *
 * If point correspondences are available, at least two solutions may further be invalidated, by
 * applying positive depth constraint, i.e. all points must be in front of the camera.
 */
+ (int)decomposeHomographyMat:(Mat*)H K:(Mat*)K rotations:(NSMutableArray<Mat*>*)rotations translations:(NSMutableArray<Mat*>*)translations normals:(NSMutableArray<Mat*>*)normals NS_SWIFT_NAME(decomposeHomographyMat(H:K:rotations:translations:normals:));


//
//  int cv::estimateAffine3D(Mat src, Mat dst, Mat& out, Mat& inliers, double ransacThreshold = 3, double confidence = 0.99)
//
/**
 * Computes an optimal affine transformation between two 3D point sets.
 *
 * It computes
 * `$$
 * \begin{bmatrix}
 * x\\
 * y\\
 * z\\
 * \end{bmatrix}
 * =
 * \begin{bmatrix}
 * a_{11} & a_{12} & a_{13}\\
 * a_{21} & a_{22} & a_{23}\\
 * a_{31} & a_{32} & a_{33}\\
 * \end{bmatrix}
 * \begin{bmatrix}
 * X\\
 * Y\\
 * Z\\
 * \end{bmatrix}
 * +
 * \begin{bmatrix}
 * b_1\\
 * b_2\\
 * b_3\\
 * \end{bmatrix}
 * $$`
 *
 * @param src First input 3D point set containing `$$(X,Y,Z)$$`.
 * @param dst Second input 3D point set containing `$$(x,y,z)$$`.
 * @param out Output 3D affine transformation matrix `$$3 \times 4$$` of the form
 * `$$
 * \begin{bmatrix}
 * a_{11} & a_{12} & a_{13} & b_1\\
 * a_{21} & a_{22} & a_{23} & b_2\\
 * a_{31} & a_{32} & a_{33} & b_3\\
 * \end{bmatrix}
 * $$`
 * @param inliers Output vector indicating which points are inliers (1-inlier, 0-outlier).
 * @param ransacThreshold Maximum reprojection error in the RANSAC algorithm to consider a point as
 * an inlier.
 * @param confidence Confidence level, between 0 and 1, for the estimated transformation. Anything
 * between 0.95 and 0.99 is usually good enough. Values too close to 1 can slow down the estimation
 * significantly. Values lower than 0.8-0.9 can result in an incorrectly estimated transformation.
 *
 * The function estimates an optimal 3D affine transformation between two 3D point sets using the
 * RANSAC algorithm.
 */
+ (int)estimateAffine3D:(Mat*)src dst:(Mat*)dst out:(Mat*)out inliers:(Mat*)inliers ransacThreshold:(double)ransacThreshold confidence:(double)confidence NS_SWIFT_NAME(estimateAffine3D(src:dst:out:inliers:ransacThreshold:confidence:));

/**
 * Computes an optimal affine transformation between two 3D point sets.
 *
 * It computes
 * `$$
 * \begin{bmatrix}
 * x\\
 * y\\
 * z\\
 * \end{bmatrix}
 * =
 * \begin{bmatrix}
 * a_{11} & a_{12} & a_{13}\\
 * a_{21} & a_{22} & a_{23}\\
 * a_{31} & a_{32} & a_{33}\\
 * \end{bmatrix}
 * \begin{bmatrix}
 * X\\
 * Y\\
 * Z\\
 * \end{bmatrix}
 * +
 * \begin{bmatrix}
 * b_1\\
 * b_2\\
 * b_3\\
 * \end{bmatrix}
 * $$`
 *
 * @param src First input 3D point set containing `$$(X,Y,Z)$$`.
 * @param dst Second input 3D point set containing `$$(x,y,z)$$`.
 * @param out Output 3D affine transformation matrix `$$3 \times 4$$` of the form
 * `$$
 * \begin{bmatrix}
 * a_{11} & a_{12} & a_{13} & b_1\\
 * a_{21} & a_{22} & a_{23} & b_2\\
 * a_{31} & a_{32} & a_{33} & b_3\\
 * \end{bmatrix}
 * $$`
 * @param inliers Output vector indicating which points are inliers (1-inlier, 0-outlier).
 * @param ransacThreshold Maximum reprojection error in the RANSAC algorithm to consider a point as
 * an inlier.
 * between 0.95 and 0.99 is usually good enough. Values too close to 1 can slow down the estimation
 * significantly. Values lower than 0.8-0.9 can result in an incorrectly estimated transformation.
 *
 * The function estimates an optimal 3D affine transformation between two 3D point sets using the
 * RANSAC algorithm.
 */
+ (int)estimateAffine3D:(Mat*)src dst:(Mat*)dst out:(Mat*)out inliers:(Mat*)inliers ransacThreshold:(double)ransacThreshold NS_SWIFT_NAME(estimateAffine3D(src:dst:out:inliers:ransacThreshold:));

/**
 * Computes an optimal affine transformation between two 3D point sets.
 *
 * It computes
 * `$$
 * \begin{bmatrix}
 * x\\
 * y\\
 * z\\
 * \end{bmatrix}
 * =
 * \begin{bmatrix}
 * a_{11} & a_{12} & a_{13}\\
 * a_{21} & a_{22} & a_{23}\\
 * a_{31} & a_{32} & a_{33}\\
 * \end{bmatrix}
 * \begin{bmatrix}
 * X\\
 * Y\\
 * Z\\
 * \end{bmatrix}
 * +
 * \begin{bmatrix}
 * b_1\\
 * b_2\\
 * b_3\\
 * \end{bmatrix}
 * $$`
 *
 * @param src First input 3D point set containing `$$(X,Y,Z)$$`.
 * @param dst Second input 3D point set containing `$$(x,y,z)$$`.
 * @param out Output 3D affine transformation matrix `$$3 \times 4$$` of the form
 * `$$
 * \begin{bmatrix}
 * a_{11} & a_{12} & a_{13} & b_1\\
 * a_{21} & a_{22} & a_{23} & b_2\\
 * a_{31} & a_{32} & a_{33} & b_3\\
 * \end{bmatrix}
 * $$`
 * @param inliers Output vector indicating which points are inliers (1-inlier, 0-outlier).
 * an inlier.
 * between 0.95 and 0.99 is usually good enough. Values too close to 1 can slow down the estimation
 * significantly. Values lower than 0.8-0.9 can result in an incorrectly estimated transformation.
 *
 * The function estimates an optimal 3D affine transformation between two 3D point sets using the
 * RANSAC algorithm.
 */
+ (int)estimateAffine3D:(Mat*)src dst:(Mat*)dst out:(Mat*)out inliers:(Mat*)inliers NS_SWIFT_NAME(estimateAffine3D(src:dst:out:inliers:));


//
//  int cv::estimateTranslation3D(Mat src, Mat dst, Mat& out, Mat& inliers, double ransacThreshold = 3, double confidence = 0.99)
//
/**
 * Computes an optimal translation between two 3D point sets.
 *
 * It computes
 * `$$
 * \begin{bmatrix}
 * x\\
 * y\\
 * z\\
 * \end{bmatrix}
 * =
 * \begin{bmatrix}
 * X\\
 * Y\\
 * Z\\
 * \end{bmatrix}
 * +
 * \begin{bmatrix}
 * b_1\\
 * b_2\\
 * b_3\\
 * \end{bmatrix}
 * $$`
 *
 * @param src First input 3D point set containing `$$(X,Y,Z)$$`.
 * @param dst Second input 3D point set containing `$$(x,y,z)$$`.
 * @param out Output 3D translation vector `$$3 \times 1$$` of the form
 * `$$
 * \begin{bmatrix}
 * b_1 \\
 * b_2 \\
 * b_3 \\
 * \end{bmatrix}
 * $$`
 * @param inliers Output vector indicating which points are inliers (1-inlier, 0-outlier).
 * @param ransacThreshold Maximum reprojection error in the RANSAC algorithm to consider a point as
 * an inlier.
 * @param confidence Confidence level, between 0 and 1, for the estimated transformation. Anything
 * between 0.95 and 0.99 is usually good enough. Values too close to 1 can slow down the estimation
 * significantly. Values lower than 0.8-0.9 can result in an incorrectly estimated transformation.
 *
 * The function estimates an optimal 3D translation between two 3D point sets using the
 * RANSAC algorithm.
 *
 */
+ (int)estimateTranslation3D:(Mat*)src dst:(Mat*)dst out:(Mat*)out inliers:(Mat*)inliers ransacThreshold:(double)ransacThreshold confidence:(double)confidence NS_SWIFT_NAME(estimateTranslation3D(src:dst:out:inliers:ransacThreshold:confidence:));

/**
 * Computes an optimal translation between two 3D point sets.
 *
 * It computes
 * `$$
 * \begin{bmatrix}
 * x\\
 * y\\
 * z\\
 * \end{bmatrix}
 * =
 * \begin{bmatrix}
 * X\\
 * Y\\
 * Z\\
 * \end{bmatrix}
 * +
 * \begin{bmatrix}
 * b_1\\
 * b_2\\
 * b_3\\
 * \end{bmatrix}
 * $$`
 *
 * @param src First input 3D point set containing `$$(X,Y,Z)$$`.
 * @param dst Second input 3D point set containing `$$(x,y,z)$$`.
 * @param out Output 3D translation vector `$$3 \times 1$$` of the form
 * `$$
 * \begin{bmatrix}
 * b_1 \\
 * b_2 \\
 * b_3 \\
 * \end{bmatrix}
 * $$`
 * @param inliers Output vector indicating which points are inliers (1-inlier, 0-outlier).
 * @param ransacThreshold Maximum reprojection error in the RANSAC algorithm to consider a point as
 * an inlier.
 * between 0.95 and 0.99 is usually good enough. Values too close to 1 can slow down the estimation
 * significantly. Values lower than 0.8-0.9 can result in an incorrectly estimated transformation.
 *
 * The function estimates an optimal 3D translation between two 3D point sets using the
 * RANSAC algorithm.
 *
 */
+ (int)estimateTranslation3D:(Mat*)src dst:(Mat*)dst out:(Mat*)out inliers:(Mat*)inliers ransacThreshold:(double)ransacThreshold NS_SWIFT_NAME(estimateTranslation3D(src:dst:out:inliers:ransacThreshold:));

/**
 * Computes an optimal translation between two 3D point sets.
 *
 * It computes
 * `$$
 * \begin{bmatrix}
 * x\\
 * y\\
 * z\\
 * \end{bmatrix}
 * =
 * \begin{bmatrix}
 * X\\
 * Y\\
 * Z\\
 * \end{bmatrix}
 * +
 * \begin{bmatrix}
 * b_1\\
 * b_2\\
 * b_3\\
 * \end{bmatrix}
 * $$`
 *
 * @param src First input 3D point set containing `$$(X,Y,Z)$$`.
 * @param dst Second input 3D point set containing `$$(x,y,z)$$`.
 * @param out Output 3D translation vector `$$3 \times 1$$` of the form
 * `$$
 * \begin{bmatrix}
 * b_1 \\
 * b_2 \\
 * b_3 \\
 * \end{bmatrix}
 * $$`
 * @param inliers Output vector indicating which points are inliers (1-inlier, 0-outlier).
 * an inlier.
 * between 0.95 and 0.99 is usually good enough. Values too close to 1 can slow down the estimation
 * significantly. Values lower than 0.8-0.9 can result in an incorrectly estimated transformation.
 *
 * The function estimates an optimal 3D translation between two 3D point sets using the
 * RANSAC algorithm.
 *
 */
+ (int)estimateTranslation3D:(Mat*)src dst:(Mat*)dst out:(Mat*)out inliers:(Mat*)inliers NS_SWIFT_NAME(estimateTranslation3D(src:dst:out:inliers:));


//
//  int cv::recoverPose(Mat E, Mat points1, Mat points2, Mat& R, Mat& t, double focal = 1.0, Point2d pp = Point2d(0, 0), Mat& mask = Mat())
//
/**
 *
 * @param E The input essential matrix.
 * @param points1 Array of N 2D points from the first image. The point coordinates should be
 * floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1 .
 * @param R Output rotation matrix. Together with the translation vector, this matrix makes up a tuple
 * that performs a change of basis from the first camera's coordinate system to the second camera's
 * coordinate system. Note that, in general, t can not be used for this tuple, see the parameter
 * description below.
 * @param t Output translation vector. This vector is obtained by REF: decomposeEssentialMat and
 * therefore is only known up to scale, i.e. t is the direction of the translation vector and has unit
 * length.
 * @param focal Focal length of the camera. Note that this function assumes that points1 and points2
 * are feature points from cameras with same focal length and principal point.
 * @param pp principal point of the camera.
 * @param mask Input/output mask for inliers in points1 and points2. If it is not empty, then it marks
 * inliers in points1 and points2 for then given essential matrix E. Only these inliers will be used to
 * recover pose. In the output mask only inliers which pass the cheirality check.
 *
 * This function differs from the one above that it computes camera matrix from focal length and
 * principal point:
 *
 * `$$A =
 * \begin{bmatrix}
 * f & 0 & x_{pp}  \\
 * 0 & f & y_{pp}  \\
 * 0 & 0 & 1
 * \end{bmatrix}$$`
 */
+ (int)recoverPose:(Mat*)E points1:(Mat*)points1 points2:(Mat*)points2 R:(Mat*)R t:(Mat*)t focal:(double)focal pp:(Point2d*)pp mask:(Mat*)mask NS_SWIFT_NAME(recoverPose(E:points1:points2:R:t:focal:pp:mask:));

/**
 *
 * @param E The input essential matrix.
 * @param points1 Array of N 2D points from the first image. The point coordinates should be
 * floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1 .
 * @param R Output rotation matrix. Together with the translation vector, this matrix makes up a tuple
 * that performs a change of basis from the first camera's coordinate system to the second camera's
 * coordinate system. Note that, in general, t can not be used for this tuple, see the parameter
 * description below.
 * @param t Output translation vector. This vector is obtained by REF: decomposeEssentialMat and
 * therefore is only known up to scale, i.e. t is the direction of the translation vector and has unit
 * length.
 * @param focal Focal length of the camera. Note that this function assumes that points1 and points2
 * are feature points from cameras with same focal length and principal point.
 * @param pp principal point of the camera.
 * inliers in points1 and points2 for then given essential matrix E. Only these inliers will be used to
 * recover pose. In the output mask only inliers which pass the cheirality check.
 *
 * This function differs from the one above that it computes camera matrix from focal length and
 * principal point:
 *
 * `$$A =
 * \begin{bmatrix}
 * f & 0 & x_{pp}  \\
 * 0 & f & y_{pp}  \\
 * 0 & 0 & 1
 * \end{bmatrix}$$`
 */
+ (int)recoverPose:(Mat*)E points1:(Mat*)points1 points2:(Mat*)points2 R:(Mat*)R t:(Mat*)t focal:(double)focal pp:(Point2d*)pp NS_SWIFT_NAME(recoverPose(E:points1:points2:R:t:focal:pp:));

/**
 *
 * @param E The input essential matrix.
 * @param points1 Array of N 2D points from the first image. The point coordinates should be
 * floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1 .
 * @param R Output rotation matrix. Together with the translation vector, this matrix makes up a tuple
 * that performs a change of basis from the first camera's coordinate system to the second camera's
 * coordinate system. Note that, in general, t can not be used for this tuple, see the parameter
 * description below.
 * @param t Output translation vector. This vector is obtained by REF: decomposeEssentialMat and
 * therefore is only known up to scale, i.e. t is the direction of the translation vector and has unit
 * length.
 * @param focal Focal length of the camera. Note that this function assumes that points1 and points2
 * are feature points from cameras with same focal length and principal point.
 * inliers in points1 and points2 for then given essential matrix E. Only these inliers will be used to
 * recover pose. In the output mask only inliers which pass the cheirality check.
 *
 * This function differs from the one above that it computes camera matrix from focal length and
 * principal point:
 *
 * `$$A =
 * \begin{bmatrix}
 * f & 0 & x_{pp}  \\
 * 0 & f & y_{pp}  \\
 * 0 & 0 & 1
 * \end{bmatrix}$$`
 */
+ (int)recoverPose:(Mat*)E points1:(Mat*)points1 points2:(Mat*)points2 R:(Mat*)R t:(Mat*)t focal:(double)focal NS_SWIFT_NAME(recoverPose(E:points1:points2:R:t:focal:));

/**
 *
 * @param E The input essential matrix.
 * @param points1 Array of N 2D points from the first image. The point coordinates should be
 * floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1 .
 * @param R Output rotation matrix. Together with the translation vector, this matrix makes up a tuple
 * that performs a change of basis from the first camera's coordinate system to the second camera's
 * coordinate system. Note that, in general, t can not be used for this tuple, see the parameter
 * description below.
 * @param t Output translation vector. This vector is obtained by REF: decomposeEssentialMat and
 * therefore is only known up to scale, i.e. t is the direction of the translation vector and has unit
 * length.
 * are feature points from cameras with same focal length and principal point.
 * inliers in points1 and points2 for then given essential matrix E. Only these inliers will be used to
 * recover pose. In the output mask only inliers which pass the cheirality check.
 *
 * This function differs from the one above that it computes camera matrix from focal length and
 * principal point:
 *
 * `$$A =
 * \begin{bmatrix}
 * f & 0 & x_{pp}  \\
 * 0 & f & y_{pp}  \\
 * 0 & 0 & 1
 * \end{bmatrix}$$`
 */
+ (int)recoverPose:(Mat*)E points1:(Mat*)points1 points2:(Mat*)points2 R:(Mat*)R t:(Mat*)t NS_SWIFT_NAME(recoverPose(E:points1:points2:R:t:));


//
//  int cv::recoverPose(Mat E, Mat points1, Mat points2, Mat cameraMatrix, Mat& R, Mat& t, Mat& mask = Mat())
//
/**
 * Recovers the relative camera rotation and the translation from an estimated essential
 * matrix and the corresponding points in two images, using cheirality check. Returns the number of
 * inliers that pass the check.
 *
 * @param E The input essential matrix.
 * @param points1 Array of N 2D points from the first image. The point coordinates should be
 * floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1 .
 * @param cameraMatrix Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * Note that this function assumes that points1 and points2 are feature points from cameras with the
 * same camera matrix.
 * @param R Output rotation matrix. Together with the translation vector, this matrix makes up a tuple
 * that performs a change of basis from the first camera's coordinate system to the second camera's
 * coordinate system. Note that, in general, t can not be used for this tuple, see the parameter
 * described below.
 * @param t Output translation vector. This vector is obtained by REF: decomposeEssentialMat and
 * therefore is only known up to scale, i.e. t is the direction of the translation vector and has unit
 * length.
 * @param mask Input/output mask for inliers in points1 and points2. If it is not empty, then it marks
 * inliers in points1 and points2 for then given essential matrix E. Only these inliers will be used to
 * recover pose. In the output mask only inliers which pass the cheirality check.
 *
 * This function decomposes an essential matrix using REF: decomposeEssentialMat and then verifies
 * possible pose hypotheses by doing cheirality check. The cheirality check means that the
 * triangulated 3D points should have positive depth. Some details can be found in CITE: Nister03.
 *
 * This function can be used to process the output E and mask from REF: findEssentialMat. In this
 * scenario, points1 and points2 are the same input for findEssentialMat.:
 *
 *     // Example. Estimation of fundamental matrix using the RANSAC algorithm
 *     int point_count = 100;
 *     vector<Point2f> points1(point_count);
 *     vector<Point2f> points2(point_count);
 *
 *     // initialize the points here ...
 *     for( int i = 0; i < point_count; i++ )
 *     {
 *         points1[i] = ...;
 *         points2[i] = ...;
 *     }
 *
 *     // cametra matrix with both focal lengths = 1, and principal point = (0, 0)
 *     Mat cameraMatrix = Mat::eye(3, 3, CV_64F);
 *
 *     Mat E, R, t, mask;
 *
 *     E = findEssentialMat(points1, points2, cameraMatrix, RANSAC, 0.999, 1.0, mask);
 *     recoverPose(E, points1, points2, cameraMatrix, R, t, mask);
 *
 */
+ (int)recoverPose:(Mat*)E points1:(Mat*)points1 points2:(Mat*)points2 cameraMatrix:(Mat*)cameraMatrix R:(Mat*)R t:(Mat*)t mask:(Mat*)mask NS_SWIFT_NAME(recoverPose(E:points1:points2:cameraMatrix:R:t:mask:));

/**
 * Recovers the relative camera rotation and the translation from an estimated essential
 * matrix and the corresponding points in two images, using cheirality check. Returns the number of
 * inliers that pass the check.
 *
 * @param E The input essential matrix.
 * @param points1 Array of N 2D points from the first image. The point coordinates should be
 * floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1 .
 * @param cameraMatrix Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * Note that this function assumes that points1 and points2 are feature points from cameras with the
 * same camera matrix.
 * @param R Output rotation matrix. Together with the translation vector, this matrix makes up a tuple
 * that performs a change of basis from the first camera's coordinate system to the second camera's
 * coordinate system. Note that, in general, t can not be used for this tuple, see the parameter
 * described below.
 * @param t Output translation vector. This vector is obtained by REF: decomposeEssentialMat and
 * therefore is only known up to scale, i.e. t is the direction of the translation vector and has unit
 * length.
 * inliers in points1 and points2 for then given essential matrix E. Only these inliers will be used to
 * recover pose. In the output mask only inliers which pass the cheirality check.
 *
 * This function decomposes an essential matrix using REF: decomposeEssentialMat and then verifies
 * possible pose hypotheses by doing cheirality check. The cheirality check means that the
 * triangulated 3D points should have positive depth. Some details can be found in CITE: Nister03.
 *
 * This function can be used to process the output E and mask from REF: findEssentialMat. In this
 * scenario, points1 and points2 are the same input for findEssentialMat.:
 *
 *     // Example. Estimation of fundamental matrix using the RANSAC algorithm
 *     int point_count = 100;
 *     vector<Point2f> points1(point_count);
 *     vector<Point2f> points2(point_count);
 *
 *     // initialize the points here ...
 *     for( int i = 0; i < point_count; i++ )
 *     {
 *         points1[i] = ...;
 *         points2[i] = ...;
 *     }
 *
 *     // cametra matrix with both focal lengths = 1, and principal point = (0, 0)
 *     Mat cameraMatrix = Mat::eye(3, 3, CV_64F);
 *
 *     Mat E, R, t, mask;
 *
 *     E = findEssentialMat(points1, points2, cameraMatrix, RANSAC, 0.999, 1.0, mask);
 *     recoverPose(E, points1, points2, cameraMatrix, R, t, mask);
 *
 */
+ (int)recoverPose:(Mat*)E points1:(Mat*)points1 points2:(Mat*)points2 cameraMatrix:(Mat*)cameraMatrix R:(Mat*)R t:(Mat*)t NS_SWIFT_NAME(recoverPose(E:points1:points2:cameraMatrix:R:t:));


//
//  int cv::recoverPose(Mat E, Mat points1, Mat points2, Mat cameraMatrix, Mat& R, Mat& t, double distanceThresh, Mat& mask = Mat(), Mat& triangulatedPoints = Mat())
//
/**
 *
 * @param E The input essential matrix.
 * @param points1 Array of N 2D points from the first image. The point coordinates should be
 * floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1.
 * @param cameraMatrix Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * Note that this function assumes that points1 and points2 are feature points from cameras with the
 * same camera matrix.
 * @param R Output rotation matrix. Together with the translation vector, this matrix makes up a tuple
 * that performs a change of basis from the first camera's coordinate system to the second camera's
 * coordinate system. Note that, in general, t can not be used for this tuple, see the parameter
 * description below.
 * @param t Output translation vector. This vector is obtained by REF: decomposeEssentialMat and
 * therefore is only known up to scale, i.e. t is the direction of the translation vector and has unit
 * length.
 * @param distanceThresh threshold distance which is used to filter out far away points (i.e. infinite
 * points).
 * @param mask Input/output mask for inliers in points1 and points2. If it is not empty, then it marks
 * inliers in points1 and points2 for then given essential matrix E. Only these inliers will be used to
 * recover pose. In the output mask only inliers which pass the cheirality check.
 * @param triangulatedPoints 3D points which were reconstructed by triangulation.
 *
 * This function differs from the one above that it outputs the triangulated 3D point that are used for
 * the cheirality check.
 */
+ (int)recoverPose:(Mat*)E points1:(Mat*)points1 points2:(Mat*)points2 cameraMatrix:(Mat*)cameraMatrix R:(Mat*)R t:(Mat*)t distanceThresh:(double)distanceThresh mask:(Mat*)mask triangulatedPoints:(Mat*)triangulatedPoints NS_SWIFT_NAME(recoverPose(E:points1:points2:cameraMatrix:R:t:distanceThresh:mask:triangulatedPoints:));

/**
 *
 * @param E The input essential matrix.
 * @param points1 Array of N 2D points from the first image. The point coordinates should be
 * floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1.
 * @param cameraMatrix Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * Note that this function assumes that points1 and points2 are feature points from cameras with the
 * same camera matrix.
 * @param R Output rotation matrix. Together with the translation vector, this matrix makes up a tuple
 * that performs a change of basis from the first camera's coordinate system to the second camera's
 * coordinate system. Note that, in general, t can not be used for this tuple, see the parameter
 * description below.
 * @param t Output translation vector. This vector is obtained by REF: decomposeEssentialMat and
 * therefore is only known up to scale, i.e. t is the direction of the translation vector and has unit
 * length.
 * @param distanceThresh threshold distance which is used to filter out far away points (i.e. infinite
 * points).
 * @param mask Input/output mask for inliers in points1 and points2. If it is not empty, then it marks
 * inliers in points1 and points2 for then given essential matrix E. Only these inliers will be used to
 * recover pose. In the output mask only inliers which pass the cheirality check.
 *
 * This function differs from the one above that it outputs the triangulated 3D point that are used for
 * the cheirality check.
 */
+ (int)recoverPose:(Mat*)E points1:(Mat*)points1 points2:(Mat*)points2 cameraMatrix:(Mat*)cameraMatrix R:(Mat*)R t:(Mat*)t distanceThresh:(double)distanceThresh mask:(Mat*)mask NS_SWIFT_NAME(recoverPose(E:points1:points2:cameraMatrix:R:t:distanceThresh:mask:));

/**
 *
 * @param E The input essential matrix.
 * @param points1 Array of N 2D points from the first image. The point coordinates should be
 * floating-point (single or double precision).
 * @param points2 Array of the second image points of the same size and format as points1.
 * @param cameraMatrix Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * Note that this function assumes that points1 and points2 are feature points from cameras with the
 * same camera matrix.
 * @param R Output rotation matrix. Together with the translation vector, this matrix makes up a tuple
 * that performs a change of basis from the first camera's coordinate system to the second camera's
 * coordinate system. Note that, in general, t can not be used for this tuple, see the parameter
 * description below.
 * @param t Output translation vector. This vector is obtained by REF: decomposeEssentialMat and
 * therefore is only known up to scale, i.e. t is the direction of the translation vector and has unit
 * length.
 * @param distanceThresh threshold distance which is used to filter out far away points (i.e. infinite
 * points).
 * inliers in points1 and points2 for then given essential matrix E. Only these inliers will be used to
 * recover pose. In the output mask only inliers which pass the cheirality check.
 *
 * This function differs from the one above that it outputs the triangulated 3D point that are used for
 * the cheirality check.
 */
+ (int)recoverPose:(Mat*)E points1:(Mat*)points1 points2:(Mat*)points2 cameraMatrix:(Mat*)cameraMatrix R:(Mat*)R t:(Mat*)t distanceThresh:(double)distanceThresh NS_SWIFT_NAME(recoverPose(E:points1:points2:cameraMatrix:R:t:distanceThresh:));


//
//  int cv::solveP3P(Mat objectPoints, Mat imagePoints, Mat cameraMatrix, Mat distCoeffs, vector_Mat& rvecs, vector_Mat& tvecs, int flags)
//
/**
 * Finds an object pose from 3 3D-2D point correspondences.
 *
 * @param objectPoints Array of object points in the object coordinate space, 3x3 1-channel or
 * 1x3/3x1 3-channel. vector\<Point3f\> can be also passed here.
 * @param imagePoints Array of corresponding image points, 3x2 1-channel or 1x3/3x1 2-channel.
 *  vector\<Point2f\> can be also passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvecs Output rotation vectors (see REF: Rodrigues ) that, together with tvecs, brings points from
 * the model coordinate system to the camera coordinate system. A P3P problem has up to 4 solutions.
 * @param tvecs Output translation vectors.
 * @param flags Method for solving a P3P problem:
 * -   **SOLVEPNP_P3P** Method is based on the paper of X.S. Gao, X.-R. Hou, J. Tang, H.-F. Chang
 * "Complete Solution Classification for the Perspective-Three-Point Problem" (CITE: gao2003complete).
 * -   **SOLVEPNP_AP3P** Method is based on the paper of T. Ke and S. Roumeliotis.
 * "An Efficient Algebraic Solution to the Perspective-Three-Point Problem" (CITE: Ke17).
 *
 * The function estimates the object pose given 3 object points, their corresponding image
 * projections, as well as the camera matrix and the distortion coefficients.
 *
 * @note
 * The solutions are sorted by reprojection errors (lowest to highest).
 */
+ (int)solveP3P:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs flags:(int)flags NS_SWIFT_NAME(solveP3P(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvecs:tvecs:flags:));


//
//  int cv::solvePnPGeneric(Mat objectPoints, Mat imagePoints, Mat cameraMatrix, Mat distCoeffs, vector_Mat& rvecs, vector_Mat& tvecs, bool useExtrinsicGuess = false, SolvePnPMethod flags = SOLVEPNP_ITERATIVE, Mat rvec = Mat(), Mat tvec = Mat(), Mat& reprojectionError = Mat())
//
/**
 * Finds an object pose from 3D-2D point correspondences.
 * This function returns a list of all the possible solutions (a solution is a <rotation vector, translation vector>
 * couple), depending on the number of input points and the chosen method:
 * - P3P methods (REF: SOLVEPNP_P3P, REF: SOLVEPNP_AP3P): 3 or 4 input points. Number of returned solutions can be between 0 and 4 with 3 input points.
 * - REF: SOLVEPNP_IPPE Input points must be >= 4 and object points must be coplanar. Returns 2 solutions.
 * - REF: SOLVEPNP_IPPE_SQUARE Special case suitable for marker pose estimation.
 * Number of input points must be 4 and 2 solutions are returned. Object points must be defined in the following order:
 *   - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *   - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *   - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *   - point 3: [-squareLength / 2, -squareLength / 2, 0]
 * - for all the other flags, number of input points must be >= 4 and object points can be in any configuration.
 * Only 1 solution is returned.
 *
 * @param objectPoints Array of object points in the object coordinate space, Nx3 1-channel or
 * 1xN/Nx1 3-channel, where N is the number of points. vector\<Point3d\> can be also passed here.
 * @param imagePoints Array of corresponding image points, Nx2 1-channel or 1xN/Nx1 2-channel,
 * where N is the number of points. vector\<Point2d\> can be also passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvecs Vector of output rotation vectors (see REF: Rodrigues ) that, together with tvecs, brings points from
 * the model coordinate system to the camera coordinate system.
 * @param tvecs Vector of output translation vectors.
 * @param useExtrinsicGuess Parameter used for #SOLVEPNP_ITERATIVE. If true (1), the function uses
 * the provided rvec and tvec values as initial approximations of the rotation and translation
 * vectors, respectively, and further optimizes them.
 * @param flags Method for solving a PnP problem:
 * -   **SOLVEPNP_ITERATIVE** Iterative method is based on a Levenberg-Marquardt optimization. In
 * this case the function finds such a pose that minimizes reprojection error, that is the sum
 * of squared distances between the observed projections imagePoints and the projected (using
 * projectPoints ) objectPoints .
 * -   **SOLVEPNP_P3P** Method is based on the paper of X.S. Gao, X.-R. Hou, J. Tang, H.-F. Chang
 * "Complete Solution Classification for the Perspective-Three-Point Problem" (CITE: gao2003complete).
 * In this case the function requires exactly four object and image points.
 * -   **SOLVEPNP_AP3P** Method is based on the paper of T. Ke, S. Roumeliotis
 * "An Efficient Algebraic Solution to the Perspective-Three-Point Problem" (CITE: Ke17).
 * In this case the function requires exactly four object and image points.
 * -   **SOLVEPNP_EPNP** Method has been introduced by F.Moreno-Noguer, V.Lepetit and P.Fua in the
 * paper "EPnP: Efficient Perspective-n-Point Camera Pose Estimation" (CITE: lepetit2009epnp).
 * -   **SOLVEPNP_DLS** Method is based on the paper of Joel A. Hesch and Stergios I. Roumeliotis.
 * "A Direct Least-Squares (DLS) Method for PnP" (CITE: hesch2011direct).
 * -   **SOLVEPNP_UPNP** Method is based on the paper of A.Penate-Sanchez, J.Andrade-Cetto,
 * F.Moreno-Noguer. "Exhaustive Linearization for Robust Camera Pose and Focal Length
 * Estimation" (CITE: penate2013exhaustive). In this case the function also estimates the parameters `$$f_x$$` and `$$f_y$$`
 * assuming that both have the same value. Then the cameraMatrix is updated with the estimated
 * focal length.
 * -   **SOLVEPNP_IPPE** Method is based on the paper of T. Collins and A. Bartoli.
 * "Infinitesimal Plane-Based Pose Estimation" (CITE: Collins14). This method requires coplanar object points.
 * -   **SOLVEPNP_IPPE_SQUARE** Method is based on the paper of Toby Collins and Adrien Bartoli.
 * "Infinitesimal Plane-Based Pose Estimation" (CITE: Collins14). This method is suitable for marker pose estimation.
 * It requires 4 coplanar object points defined in the following order:
 *   - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *   - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *   - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *   - point 3: [-squareLength / 2, -squareLength / 2, 0]
 * @param rvec Rotation vector used to initialize an iterative PnP refinement algorithm, when flag is SOLVEPNP_ITERATIVE
 * and useExtrinsicGuess is set to true.
 * @param tvec Translation vector used to initialize an iterative PnP refinement algorithm, when flag is SOLVEPNP_ITERATIVE
 * and useExtrinsicGuess is set to true.
 * @param reprojectionError Optional vector of reprojection error, that is the RMS error
 * (`$$ \text{RMSE} = \sqrt{\frac{\sum_{i}^{N} \left ( \hat{y_i} - y_i \right )^2}{N}} $$`) between the input image points
 * and the 3D object points projected with the estimated pose.
 *
 * The function estimates the object pose given a set of object points, their corresponding image
 * projections, as well as the camera matrix and the distortion coefficients, see the figure below
 * (more precisely, the X-axis of the camera frame is pointing to the right, the Y-axis downward
 * and the Z-axis forward).
 *
 * ![](pnp.jpg)
 *
 * Points expressed in the world frame `$$ \bf{X}_w $$` are projected into the image plane `$$ \left[ u, v \right] $$`
 * using the perspective projection model `$$ \Pi $$` and the camera intrinsic parameters matrix `$$ \bf{A} $$`:
 *
 * `$$
 *   \begin{align*}
 *   \begin{bmatrix}
 *   u \\
 *   v \\
 *   1
 *   \end{bmatrix} &=
 *   \bf{A} \hspace{0.1em} \Pi \hspace{0.2em} ^{c}\bf{T}_w
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix} \\
 *   \begin{bmatrix}
 *   u \\
 *   v \\
 *   1
 *   \end{bmatrix} &=
 *   \begin{bmatrix}
 *   f_x & 0 & c_x \\
 *   0 & f_y & c_y \\
 *   0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   1 & 0 & 0 & 0 \\
 *   0 & 1 & 0 & 0 \\
 *   0 & 0 & 1 & 0
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   r_{11} & r_{12} & r_{13} & t_x \\
 *   r_{21} & r_{22} & r_{23} & t_y \\
 *   r_{31} & r_{32} & r_{33} & t_z \\
 *   0 & 0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix}
 *   \end{align*}
 * $$`
 *
 * The estimated pose is thus the rotation (`rvec`) and the translation (`tvec`) vectors that allow transforming
 * a 3D point expressed in the world frame into the camera frame:
 *
 * `$$
 *   \begin{align*}
 *   \begin{bmatrix}
 *   X_c \\
 *   Y_c \\
 *   Z_c \\
 *   1
 *   \end{bmatrix} &=
 *   \hspace{0.2em} ^{c}\bf{T}_w
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix} \\
 *   \begin{bmatrix}
 *   X_c \\
 *   Y_c \\
 *   Z_c \\
 *   1
 *   \end{bmatrix} &=
 *   \begin{bmatrix}
 *   r_{11} & r_{12} & r_{13} & t_x \\
 *   r_{21} & r_{22} & r_{23} & t_y \\
 *   r_{31} & r_{32} & r_{33} & t_z \\
 *   0 & 0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix}
 *   \end{align*}
 * $$`
 *
 * @note
 *    -   An example of how to use solvePnP for planar augmented reality can be found at
 *         opencv_source_code/samples/python/plane_ar.py
 *    -   If you are using Python:
 *         - Numpy array slices won't work as input because solvePnP requires contiguous
 *         arrays (enforced by the assertion using cv::Mat::checkVector() around line 55 of
 *         modules/calib3d/src/solvepnp.cpp version 2.4.9)
 *         - The P3P algorithm requires image points to be in an array of shape (N,1,2) due
 *         to its calling of cv::undistortPoints (around line 75 of modules/calib3d/src/solvepnp.cpp version 2.4.9)
 *         which requires 2-channel information.
 *         - Thus, given some data D = np.array(...) where D.shape = (N,M), in order to use a subset of
 *         it as, e.g., imagePoints, one must effectively copy it into a new array: imagePoints =
 *         np.ascontiguousarray(D[:,:2]).reshape((N,1,2))
 *    -   The methods **SOLVEPNP_DLS** and **SOLVEPNP_UPNP** cannot be used as the current implementations are
 *        unstable and sometimes give completely wrong results. If you pass one of these two
 *        flags, **SOLVEPNP_EPNP** method will be used instead.
 *    -   The minimum number of points is 4 in the general case. In the case of **SOLVEPNP_P3P** and **SOLVEPNP_AP3P**
 *        methods, it is required to use exactly 4 points (the first 3 points are used to estimate all the solutions
 *        of the P3P problem, the last one is used to retain the best solution that minimizes the reprojection error).
 *    -   With **SOLVEPNP_ITERATIVE** method and `useExtrinsicGuess=true`, the minimum number of points is 3 (3 points
 *        are sufficient to compute a pose but there are up to 4 solutions). The initial solution should be close to the
 *        global solution to converge.
 *    -   With **SOLVEPNP_IPPE** input points must be >= 4 and object points must be coplanar.
 *    -   With **SOLVEPNP_IPPE_SQUARE** this is a special case suitable for marker pose estimation.
 *        Number of input points must be 4. Object points must be defined in the following order:
 *          - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *          - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *          - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *          - point 3: [-squareLength / 2, -squareLength / 2, 0]
 */
+ (int)solvePnPGeneric:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs useExtrinsicGuess:(BOOL)useExtrinsicGuess flags:(SolvePnPMethod)flags rvec:(Mat*)rvec tvec:(Mat*)tvec reprojectionError:(Mat*)reprojectionError NS_SWIFT_NAME(solvePnPGeneric(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvecs:tvecs:useExtrinsicGuess:flags:rvec:tvec:reprojectionError:));

/**
 * Finds an object pose from 3D-2D point correspondences.
 * This function returns a list of all the possible solutions (a solution is a <rotation vector, translation vector>
 * couple), depending on the number of input points and the chosen method:
 * - P3P methods (REF: SOLVEPNP_P3P, REF: SOLVEPNP_AP3P): 3 or 4 input points. Number of returned solutions can be between 0 and 4 with 3 input points.
 * - REF: SOLVEPNP_IPPE Input points must be >= 4 and object points must be coplanar. Returns 2 solutions.
 * - REF: SOLVEPNP_IPPE_SQUARE Special case suitable for marker pose estimation.
 * Number of input points must be 4 and 2 solutions are returned. Object points must be defined in the following order:
 *   - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *   - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *   - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *   - point 3: [-squareLength / 2, -squareLength / 2, 0]
 * - for all the other flags, number of input points must be >= 4 and object points can be in any configuration.
 * Only 1 solution is returned.
 *
 * @param objectPoints Array of object points in the object coordinate space, Nx3 1-channel or
 * 1xN/Nx1 3-channel, where N is the number of points. vector\<Point3d\> can be also passed here.
 * @param imagePoints Array of corresponding image points, Nx2 1-channel or 1xN/Nx1 2-channel,
 * where N is the number of points. vector\<Point2d\> can be also passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvecs Vector of output rotation vectors (see REF: Rodrigues ) that, together with tvecs, brings points from
 * the model coordinate system to the camera coordinate system.
 * @param tvecs Vector of output translation vectors.
 * @param useExtrinsicGuess Parameter used for #SOLVEPNP_ITERATIVE. If true (1), the function uses
 * the provided rvec and tvec values as initial approximations of the rotation and translation
 * vectors, respectively, and further optimizes them.
 * @param flags Method for solving a PnP problem:
 * -   **SOLVEPNP_ITERATIVE** Iterative method is based on a Levenberg-Marquardt optimization. In
 * this case the function finds such a pose that minimizes reprojection error, that is the sum
 * of squared distances between the observed projections imagePoints and the projected (using
 * projectPoints ) objectPoints .
 * -   **SOLVEPNP_P3P** Method is based on the paper of X.S. Gao, X.-R. Hou, J. Tang, H.-F. Chang
 * "Complete Solution Classification for the Perspective-Three-Point Problem" (CITE: gao2003complete).
 * In this case the function requires exactly four object and image points.
 * -   **SOLVEPNP_AP3P** Method is based on the paper of T. Ke, S. Roumeliotis
 * "An Efficient Algebraic Solution to the Perspective-Three-Point Problem" (CITE: Ke17).
 * In this case the function requires exactly four object and image points.
 * -   **SOLVEPNP_EPNP** Method has been introduced by F.Moreno-Noguer, V.Lepetit and P.Fua in the
 * paper "EPnP: Efficient Perspective-n-Point Camera Pose Estimation" (CITE: lepetit2009epnp).
 * -   **SOLVEPNP_DLS** Method is based on the paper of Joel A. Hesch and Stergios I. Roumeliotis.
 * "A Direct Least-Squares (DLS) Method for PnP" (CITE: hesch2011direct).
 * -   **SOLVEPNP_UPNP** Method is based on the paper of A.Penate-Sanchez, J.Andrade-Cetto,
 * F.Moreno-Noguer. "Exhaustive Linearization for Robust Camera Pose and Focal Length
 * Estimation" (CITE: penate2013exhaustive). In this case the function also estimates the parameters `$$f_x$$` and `$$f_y$$`
 * assuming that both have the same value. Then the cameraMatrix is updated with the estimated
 * focal length.
 * -   **SOLVEPNP_IPPE** Method is based on the paper of T. Collins and A. Bartoli.
 * "Infinitesimal Plane-Based Pose Estimation" (CITE: Collins14). This method requires coplanar object points.
 * -   **SOLVEPNP_IPPE_SQUARE** Method is based on the paper of Toby Collins and Adrien Bartoli.
 * "Infinitesimal Plane-Based Pose Estimation" (CITE: Collins14). This method is suitable for marker pose estimation.
 * It requires 4 coplanar object points defined in the following order:
 *   - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *   - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *   - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *   - point 3: [-squareLength / 2, -squareLength / 2, 0]
 * @param rvec Rotation vector used to initialize an iterative PnP refinement algorithm, when flag is SOLVEPNP_ITERATIVE
 * and useExtrinsicGuess is set to true.
 * @param tvec Translation vector used to initialize an iterative PnP refinement algorithm, when flag is SOLVEPNP_ITERATIVE
 * and useExtrinsicGuess is set to true.
 * (`$$ \text{RMSE} = \sqrt{\frac{\sum_{i}^{N} \left ( \hat{y_i} - y_i \right )^2}{N}} $$`) between the input image points
 * and the 3D object points projected with the estimated pose.
 *
 * The function estimates the object pose given a set of object points, their corresponding image
 * projections, as well as the camera matrix and the distortion coefficients, see the figure below
 * (more precisely, the X-axis of the camera frame is pointing to the right, the Y-axis downward
 * and the Z-axis forward).
 *
 * ![](pnp.jpg)
 *
 * Points expressed in the world frame `$$ \bf{X}_w $$` are projected into the image plane `$$ \left[ u, v \right] $$`
 * using the perspective projection model `$$ \Pi $$` and the camera intrinsic parameters matrix `$$ \bf{A} $$`:
 *
 * `$$
 *   \begin{align*}
 *   \begin{bmatrix}
 *   u \\
 *   v \\
 *   1
 *   \end{bmatrix} &=
 *   \bf{A} \hspace{0.1em} \Pi \hspace{0.2em} ^{c}\bf{T}_w
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix} \\
 *   \begin{bmatrix}
 *   u \\
 *   v \\
 *   1
 *   \end{bmatrix} &=
 *   \begin{bmatrix}
 *   f_x & 0 & c_x \\
 *   0 & f_y & c_y \\
 *   0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   1 & 0 & 0 & 0 \\
 *   0 & 1 & 0 & 0 \\
 *   0 & 0 & 1 & 0
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   r_{11} & r_{12} & r_{13} & t_x \\
 *   r_{21} & r_{22} & r_{23} & t_y \\
 *   r_{31} & r_{32} & r_{33} & t_z \\
 *   0 & 0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix}
 *   \end{align*}
 * $$`
 *
 * The estimated pose is thus the rotation (`rvec`) and the translation (`tvec`) vectors that allow transforming
 * a 3D point expressed in the world frame into the camera frame:
 *
 * `$$
 *   \begin{align*}
 *   \begin{bmatrix}
 *   X_c \\
 *   Y_c \\
 *   Z_c \\
 *   1
 *   \end{bmatrix} &=
 *   \hspace{0.2em} ^{c}\bf{T}_w
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix} \\
 *   \begin{bmatrix}
 *   X_c \\
 *   Y_c \\
 *   Z_c \\
 *   1
 *   \end{bmatrix} &=
 *   \begin{bmatrix}
 *   r_{11} & r_{12} & r_{13} & t_x \\
 *   r_{21} & r_{22} & r_{23} & t_y \\
 *   r_{31} & r_{32} & r_{33} & t_z \\
 *   0 & 0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix}
 *   \end{align*}
 * $$`
 *
 * @note
 *    -   An example of how to use solvePnP for planar augmented reality can be found at
 *         opencv_source_code/samples/python/plane_ar.py
 *    -   If you are using Python:
 *         - Numpy array slices won't work as input because solvePnP requires contiguous
 *         arrays (enforced by the assertion using cv::Mat::checkVector() around line 55 of
 *         modules/calib3d/src/solvepnp.cpp version 2.4.9)
 *         - The P3P algorithm requires image points to be in an array of shape (N,1,2) due
 *         to its calling of cv::undistortPoints (around line 75 of modules/calib3d/src/solvepnp.cpp version 2.4.9)
 *         which requires 2-channel information.
 *         - Thus, given some data D = np.array(...) where D.shape = (N,M), in order to use a subset of
 *         it as, e.g., imagePoints, one must effectively copy it into a new array: imagePoints =
 *         np.ascontiguousarray(D[:,:2]).reshape((N,1,2))
 *    -   The methods **SOLVEPNP_DLS** and **SOLVEPNP_UPNP** cannot be used as the current implementations are
 *        unstable and sometimes give completely wrong results. If you pass one of these two
 *        flags, **SOLVEPNP_EPNP** method will be used instead.
 *    -   The minimum number of points is 4 in the general case. In the case of **SOLVEPNP_P3P** and **SOLVEPNP_AP3P**
 *        methods, it is required to use exactly 4 points (the first 3 points are used to estimate all the solutions
 *        of the P3P problem, the last one is used to retain the best solution that minimizes the reprojection error).
 *    -   With **SOLVEPNP_ITERATIVE** method and `useExtrinsicGuess=true`, the minimum number of points is 3 (3 points
 *        are sufficient to compute a pose but there are up to 4 solutions). The initial solution should be close to the
 *        global solution to converge.
 *    -   With **SOLVEPNP_IPPE** input points must be >= 4 and object points must be coplanar.
 *    -   With **SOLVEPNP_IPPE_SQUARE** this is a special case suitable for marker pose estimation.
 *        Number of input points must be 4. Object points must be defined in the following order:
 *          - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *          - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *          - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *          - point 3: [-squareLength / 2, -squareLength / 2, 0]
 */
+ (int)solvePnPGeneric:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs useExtrinsicGuess:(BOOL)useExtrinsicGuess flags:(SolvePnPMethod)flags rvec:(Mat*)rvec tvec:(Mat*)tvec NS_SWIFT_NAME(solvePnPGeneric(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvecs:tvecs:useExtrinsicGuess:flags:rvec:tvec:));

/**
 * Finds an object pose from 3D-2D point correspondences.
 * This function returns a list of all the possible solutions (a solution is a <rotation vector, translation vector>
 * couple), depending on the number of input points and the chosen method:
 * - P3P methods (REF: SOLVEPNP_P3P, REF: SOLVEPNP_AP3P): 3 or 4 input points. Number of returned solutions can be between 0 and 4 with 3 input points.
 * - REF: SOLVEPNP_IPPE Input points must be >= 4 and object points must be coplanar. Returns 2 solutions.
 * - REF: SOLVEPNP_IPPE_SQUARE Special case suitable for marker pose estimation.
 * Number of input points must be 4 and 2 solutions are returned. Object points must be defined in the following order:
 *   - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *   - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *   - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *   - point 3: [-squareLength / 2, -squareLength / 2, 0]
 * - for all the other flags, number of input points must be >= 4 and object points can be in any configuration.
 * Only 1 solution is returned.
 *
 * @param objectPoints Array of object points in the object coordinate space, Nx3 1-channel or
 * 1xN/Nx1 3-channel, where N is the number of points. vector\<Point3d\> can be also passed here.
 * @param imagePoints Array of corresponding image points, Nx2 1-channel or 1xN/Nx1 2-channel,
 * where N is the number of points. vector\<Point2d\> can be also passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvecs Vector of output rotation vectors (see REF: Rodrigues ) that, together with tvecs, brings points from
 * the model coordinate system to the camera coordinate system.
 * @param tvecs Vector of output translation vectors.
 * @param useExtrinsicGuess Parameter used for #SOLVEPNP_ITERATIVE. If true (1), the function uses
 * the provided rvec and tvec values as initial approximations of the rotation and translation
 * vectors, respectively, and further optimizes them.
 * @param flags Method for solving a PnP problem:
 * -   **SOLVEPNP_ITERATIVE** Iterative method is based on a Levenberg-Marquardt optimization. In
 * this case the function finds such a pose that minimizes reprojection error, that is the sum
 * of squared distances between the observed projections imagePoints and the projected (using
 * projectPoints ) objectPoints .
 * -   **SOLVEPNP_P3P** Method is based on the paper of X.S. Gao, X.-R. Hou, J. Tang, H.-F. Chang
 * "Complete Solution Classification for the Perspective-Three-Point Problem" (CITE: gao2003complete).
 * In this case the function requires exactly four object and image points.
 * -   **SOLVEPNP_AP3P** Method is based on the paper of T. Ke, S. Roumeliotis
 * "An Efficient Algebraic Solution to the Perspective-Three-Point Problem" (CITE: Ke17).
 * In this case the function requires exactly four object and image points.
 * -   **SOLVEPNP_EPNP** Method has been introduced by F.Moreno-Noguer, V.Lepetit and P.Fua in the
 * paper "EPnP: Efficient Perspective-n-Point Camera Pose Estimation" (CITE: lepetit2009epnp).
 * -   **SOLVEPNP_DLS** Method is based on the paper of Joel A. Hesch and Stergios I. Roumeliotis.
 * "A Direct Least-Squares (DLS) Method for PnP" (CITE: hesch2011direct).
 * -   **SOLVEPNP_UPNP** Method is based on the paper of A.Penate-Sanchez, J.Andrade-Cetto,
 * F.Moreno-Noguer. "Exhaustive Linearization for Robust Camera Pose and Focal Length
 * Estimation" (CITE: penate2013exhaustive). In this case the function also estimates the parameters `$$f_x$$` and `$$f_y$$`
 * assuming that both have the same value. Then the cameraMatrix is updated with the estimated
 * focal length.
 * -   **SOLVEPNP_IPPE** Method is based on the paper of T. Collins and A. Bartoli.
 * "Infinitesimal Plane-Based Pose Estimation" (CITE: Collins14). This method requires coplanar object points.
 * -   **SOLVEPNP_IPPE_SQUARE** Method is based on the paper of Toby Collins and Adrien Bartoli.
 * "Infinitesimal Plane-Based Pose Estimation" (CITE: Collins14). This method is suitable for marker pose estimation.
 * It requires 4 coplanar object points defined in the following order:
 *   - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *   - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *   - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *   - point 3: [-squareLength / 2, -squareLength / 2, 0]
 * @param rvec Rotation vector used to initialize an iterative PnP refinement algorithm, when flag is SOLVEPNP_ITERATIVE
 * and useExtrinsicGuess is set to true.
 * and useExtrinsicGuess is set to true.
 * (`$$ \text{RMSE} = \sqrt{\frac{\sum_{i}^{N} \left ( \hat{y_i} - y_i \right )^2}{N}} $$`) between the input image points
 * and the 3D object points projected with the estimated pose.
 *
 * The function estimates the object pose given a set of object points, their corresponding image
 * projections, as well as the camera matrix and the distortion coefficients, see the figure below
 * (more precisely, the X-axis of the camera frame is pointing to the right, the Y-axis downward
 * and the Z-axis forward).
 *
 * ![](pnp.jpg)
 *
 * Points expressed in the world frame `$$ \bf{X}_w $$` are projected into the image plane `$$ \left[ u, v \right] $$`
 * using the perspective projection model `$$ \Pi $$` and the camera intrinsic parameters matrix `$$ \bf{A} $$`:
 *
 * `$$
 *   \begin{align*}
 *   \begin{bmatrix}
 *   u \\
 *   v \\
 *   1
 *   \end{bmatrix} &=
 *   \bf{A} \hspace{0.1em} \Pi \hspace{0.2em} ^{c}\bf{T}_w
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix} \\
 *   \begin{bmatrix}
 *   u \\
 *   v \\
 *   1
 *   \end{bmatrix} &=
 *   \begin{bmatrix}
 *   f_x & 0 & c_x \\
 *   0 & f_y & c_y \\
 *   0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   1 & 0 & 0 & 0 \\
 *   0 & 1 & 0 & 0 \\
 *   0 & 0 & 1 & 0
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   r_{11} & r_{12} & r_{13} & t_x \\
 *   r_{21} & r_{22} & r_{23} & t_y \\
 *   r_{31} & r_{32} & r_{33} & t_z \\
 *   0 & 0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix}
 *   \end{align*}
 * $$`
 *
 * The estimated pose is thus the rotation (`rvec`) and the translation (`tvec`) vectors that allow transforming
 * a 3D point expressed in the world frame into the camera frame:
 *
 * `$$
 *   \begin{align*}
 *   \begin{bmatrix}
 *   X_c \\
 *   Y_c \\
 *   Z_c \\
 *   1
 *   \end{bmatrix} &=
 *   \hspace{0.2em} ^{c}\bf{T}_w
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix} \\
 *   \begin{bmatrix}
 *   X_c \\
 *   Y_c \\
 *   Z_c \\
 *   1
 *   \end{bmatrix} &=
 *   \begin{bmatrix}
 *   r_{11} & r_{12} & r_{13} & t_x \\
 *   r_{21} & r_{22} & r_{23} & t_y \\
 *   r_{31} & r_{32} & r_{33} & t_z \\
 *   0 & 0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix}
 *   \end{align*}
 * $$`
 *
 * @note
 *    -   An example of how to use solvePnP for planar augmented reality can be found at
 *         opencv_source_code/samples/python/plane_ar.py
 *    -   If you are using Python:
 *         - Numpy array slices won't work as input because solvePnP requires contiguous
 *         arrays (enforced by the assertion using cv::Mat::checkVector() around line 55 of
 *         modules/calib3d/src/solvepnp.cpp version 2.4.9)
 *         - The P3P algorithm requires image points to be in an array of shape (N,1,2) due
 *         to its calling of cv::undistortPoints (around line 75 of modules/calib3d/src/solvepnp.cpp version 2.4.9)
 *         which requires 2-channel information.
 *         - Thus, given some data D = np.array(...) where D.shape = (N,M), in order to use a subset of
 *         it as, e.g., imagePoints, one must effectively copy it into a new array: imagePoints =
 *         np.ascontiguousarray(D[:,:2]).reshape((N,1,2))
 *    -   The methods **SOLVEPNP_DLS** and **SOLVEPNP_UPNP** cannot be used as the current implementations are
 *        unstable and sometimes give completely wrong results. If you pass one of these two
 *        flags, **SOLVEPNP_EPNP** method will be used instead.
 *    -   The minimum number of points is 4 in the general case. In the case of **SOLVEPNP_P3P** and **SOLVEPNP_AP3P**
 *        methods, it is required to use exactly 4 points (the first 3 points are used to estimate all the solutions
 *        of the P3P problem, the last one is used to retain the best solution that minimizes the reprojection error).
 *    -   With **SOLVEPNP_ITERATIVE** method and `useExtrinsicGuess=true`, the minimum number of points is 3 (3 points
 *        are sufficient to compute a pose but there are up to 4 solutions). The initial solution should be close to the
 *        global solution to converge.
 *    -   With **SOLVEPNP_IPPE** input points must be >= 4 and object points must be coplanar.
 *    -   With **SOLVEPNP_IPPE_SQUARE** this is a special case suitable for marker pose estimation.
 *        Number of input points must be 4. Object points must be defined in the following order:
 *          - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *          - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *          - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *          - point 3: [-squareLength / 2, -squareLength / 2, 0]
 */
+ (int)solvePnPGeneric:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs useExtrinsicGuess:(BOOL)useExtrinsicGuess flags:(SolvePnPMethod)flags rvec:(Mat*)rvec NS_SWIFT_NAME(solvePnPGeneric(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvecs:tvecs:useExtrinsicGuess:flags:rvec:));

/**
 * Finds an object pose from 3D-2D point correspondences.
 * This function returns a list of all the possible solutions (a solution is a <rotation vector, translation vector>
 * couple), depending on the number of input points and the chosen method:
 * - P3P methods (REF: SOLVEPNP_P3P, REF: SOLVEPNP_AP3P): 3 or 4 input points. Number of returned solutions can be between 0 and 4 with 3 input points.
 * - REF: SOLVEPNP_IPPE Input points must be >= 4 and object points must be coplanar. Returns 2 solutions.
 * - REF: SOLVEPNP_IPPE_SQUARE Special case suitable for marker pose estimation.
 * Number of input points must be 4 and 2 solutions are returned. Object points must be defined in the following order:
 *   - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *   - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *   - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *   - point 3: [-squareLength / 2, -squareLength / 2, 0]
 * - for all the other flags, number of input points must be >= 4 and object points can be in any configuration.
 * Only 1 solution is returned.
 *
 * @param objectPoints Array of object points in the object coordinate space, Nx3 1-channel or
 * 1xN/Nx1 3-channel, where N is the number of points. vector\<Point3d\> can be also passed here.
 * @param imagePoints Array of corresponding image points, Nx2 1-channel or 1xN/Nx1 2-channel,
 * where N is the number of points. vector\<Point2d\> can be also passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvecs Vector of output rotation vectors (see REF: Rodrigues ) that, together with tvecs, brings points from
 * the model coordinate system to the camera coordinate system.
 * @param tvecs Vector of output translation vectors.
 * @param useExtrinsicGuess Parameter used for #SOLVEPNP_ITERATIVE. If true (1), the function uses
 * the provided rvec and tvec values as initial approximations of the rotation and translation
 * vectors, respectively, and further optimizes them.
 * @param flags Method for solving a PnP problem:
 * -   **SOLVEPNP_ITERATIVE** Iterative method is based on a Levenberg-Marquardt optimization. In
 * this case the function finds such a pose that minimizes reprojection error, that is the sum
 * of squared distances between the observed projections imagePoints and the projected (using
 * projectPoints ) objectPoints .
 * -   **SOLVEPNP_P3P** Method is based on the paper of X.S. Gao, X.-R. Hou, J. Tang, H.-F. Chang
 * "Complete Solution Classification for the Perspective-Three-Point Problem" (CITE: gao2003complete).
 * In this case the function requires exactly four object and image points.
 * -   **SOLVEPNP_AP3P** Method is based on the paper of T. Ke, S. Roumeliotis
 * "An Efficient Algebraic Solution to the Perspective-Three-Point Problem" (CITE: Ke17).
 * In this case the function requires exactly four object and image points.
 * -   **SOLVEPNP_EPNP** Method has been introduced by F.Moreno-Noguer, V.Lepetit and P.Fua in the
 * paper "EPnP: Efficient Perspective-n-Point Camera Pose Estimation" (CITE: lepetit2009epnp).
 * -   **SOLVEPNP_DLS** Method is based on the paper of Joel A. Hesch and Stergios I. Roumeliotis.
 * "A Direct Least-Squares (DLS) Method for PnP" (CITE: hesch2011direct).
 * -   **SOLVEPNP_UPNP** Method is based on the paper of A.Penate-Sanchez, J.Andrade-Cetto,
 * F.Moreno-Noguer. "Exhaustive Linearization for Robust Camera Pose and Focal Length
 * Estimation" (CITE: penate2013exhaustive). In this case the function also estimates the parameters `$$f_x$$` and `$$f_y$$`
 * assuming that both have the same value. Then the cameraMatrix is updated with the estimated
 * focal length.
 * -   **SOLVEPNP_IPPE** Method is based on the paper of T. Collins and A. Bartoli.
 * "Infinitesimal Plane-Based Pose Estimation" (CITE: Collins14). This method requires coplanar object points.
 * -   **SOLVEPNP_IPPE_SQUARE** Method is based on the paper of Toby Collins and Adrien Bartoli.
 * "Infinitesimal Plane-Based Pose Estimation" (CITE: Collins14). This method is suitable for marker pose estimation.
 * It requires 4 coplanar object points defined in the following order:
 *   - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *   - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *   - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *   - point 3: [-squareLength / 2, -squareLength / 2, 0]
 * and useExtrinsicGuess is set to true.
 * and useExtrinsicGuess is set to true.
 * (`$$ \text{RMSE} = \sqrt{\frac{\sum_{i}^{N} \left ( \hat{y_i} - y_i \right )^2}{N}} $$`) between the input image points
 * and the 3D object points projected with the estimated pose.
 *
 * The function estimates the object pose given a set of object points, their corresponding image
 * projections, as well as the camera matrix and the distortion coefficients, see the figure below
 * (more precisely, the X-axis of the camera frame is pointing to the right, the Y-axis downward
 * and the Z-axis forward).
 *
 * ![](pnp.jpg)
 *
 * Points expressed in the world frame `$$ \bf{X}_w $$` are projected into the image plane `$$ \left[ u, v \right] $$`
 * using the perspective projection model `$$ \Pi $$` and the camera intrinsic parameters matrix `$$ \bf{A} $$`:
 *
 * `$$
 *   \begin{align*}
 *   \begin{bmatrix}
 *   u \\
 *   v \\
 *   1
 *   \end{bmatrix} &=
 *   \bf{A} \hspace{0.1em} \Pi \hspace{0.2em} ^{c}\bf{T}_w
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix} \\
 *   \begin{bmatrix}
 *   u \\
 *   v \\
 *   1
 *   \end{bmatrix} &=
 *   \begin{bmatrix}
 *   f_x & 0 & c_x \\
 *   0 & f_y & c_y \\
 *   0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   1 & 0 & 0 & 0 \\
 *   0 & 1 & 0 & 0 \\
 *   0 & 0 & 1 & 0
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   r_{11} & r_{12} & r_{13} & t_x \\
 *   r_{21} & r_{22} & r_{23} & t_y \\
 *   r_{31} & r_{32} & r_{33} & t_z \\
 *   0 & 0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix}
 *   \end{align*}
 * $$`
 *
 * The estimated pose is thus the rotation (`rvec`) and the translation (`tvec`) vectors that allow transforming
 * a 3D point expressed in the world frame into the camera frame:
 *
 * `$$
 *   \begin{align*}
 *   \begin{bmatrix}
 *   X_c \\
 *   Y_c \\
 *   Z_c \\
 *   1
 *   \end{bmatrix} &=
 *   \hspace{0.2em} ^{c}\bf{T}_w
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix} \\
 *   \begin{bmatrix}
 *   X_c \\
 *   Y_c \\
 *   Z_c \\
 *   1
 *   \end{bmatrix} &=
 *   \begin{bmatrix}
 *   r_{11} & r_{12} & r_{13} & t_x \\
 *   r_{21} & r_{22} & r_{23} & t_y \\
 *   r_{31} & r_{32} & r_{33} & t_z \\
 *   0 & 0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix}
 *   \end{align*}
 * $$`
 *
 * @note
 *    -   An example of how to use solvePnP for planar augmented reality can be found at
 *         opencv_source_code/samples/python/plane_ar.py
 *    -   If you are using Python:
 *         - Numpy array slices won't work as input because solvePnP requires contiguous
 *         arrays (enforced by the assertion using cv::Mat::checkVector() around line 55 of
 *         modules/calib3d/src/solvepnp.cpp version 2.4.9)
 *         - The P3P algorithm requires image points to be in an array of shape (N,1,2) due
 *         to its calling of cv::undistortPoints (around line 75 of modules/calib3d/src/solvepnp.cpp version 2.4.9)
 *         which requires 2-channel information.
 *         - Thus, given some data D = np.array(...) where D.shape = (N,M), in order to use a subset of
 *         it as, e.g., imagePoints, one must effectively copy it into a new array: imagePoints =
 *         np.ascontiguousarray(D[:,:2]).reshape((N,1,2))
 *    -   The methods **SOLVEPNP_DLS** and **SOLVEPNP_UPNP** cannot be used as the current implementations are
 *        unstable and sometimes give completely wrong results. If you pass one of these two
 *        flags, **SOLVEPNP_EPNP** method will be used instead.
 *    -   The minimum number of points is 4 in the general case. In the case of **SOLVEPNP_P3P** and **SOLVEPNP_AP3P**
 *        methods, it is required to use exactly 4 points (the first 3 points are used to estimate all the solutions
 *        of the P3P problem, the last one is used to retain the best solution that minimizes the reprojection error).
 *    -   With **SOLVEPNP_ITERATIVE** method and `useExtrinsicGuess=true`, the minimum number of points is 3 (3 points
 *        are sufficient to compute a pose but there are up to 4 solutions). The initial solution should be close to the
 *        global solution to converge.
 *    -   With **SOLVEPNP_IPPE** input points must be >= 4 and object points must be coplanar.
 *    -   With **SOLVEPNP_IPPE_SQUARE** this is a special case suitable for marker pose estimation.
 *        Number of input points must be 4. Object points must be defined in the following order:
 *          - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *          - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *          - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *          - point 3: [-squareLength / 2, -squareLength / 2, 0]
 */
+ (int)solvePnPGeneric:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs useExtrinsicGuess:(BOOL)useExtrinsicGuess flags:(SolvePnPMethod)flags NS_SWIFT_NAME(solvePnPGeneric(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvecs:tvecs:useExtrinsicGuess:flags:));

/**
 * Finds an object pose from 3D-2D point correspondences.
 * This function returns a list of all the possible solutions (a solution is a <rotation vector, translation vector>
 * couple), depending on the number of input points and the chosen method:
 * - P3P methods (REF: SOLVEPNP_P3P, REF: SOLVEPNP_AP3P): 3 or 4 input points. Number of returned solutions can be between 0 and 4 with 3 input points.
 * - REF: SOLVEPNP_IPPE Input points must be >= 4 and object points must be coplanar. Returns 2 solutions.
 * - REF: SOLVEPNP_IPPE_SQUARE Special case suitable for marker pose estimation.
 * Number of input points must be 4 and 2 solutions are returned. Object points must be defined in the following order:
 *   - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *   - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *   - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *   - point 3: [-squareLength / 2, -squareLength / 2, 0]
 * - for all the other flags, number of input points must be >= 4 and object points can be in any configuration.
 * Only 1 solution is returned.
 *
 * @param objectPoints Array of object points in the object coordinate space, Nx3 1-channel or
 * 1xN/Nx1 3-channel, where N is the number of points. vector\<Point3d\> can be also passed here.
 * @param imagePoints Array of corresponding image points, Nx2 1-channel or 1xN/Nx1 2-channel,
 * where N is the number of points. vector\<Point2d\> can be also passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvecs Vector of output rotation vectors (see REF: Rodrigues ) that, together with tvecs, brings points from
 * the model coordinate system to the camera coordinate system.
 * @param tvecs Vector of output translation vectors.
 * @param useExtrinsicGuess Parameter used for #SOLVEPNP_ITERATIVE. If true (1), the function uses
 * the provided rvec and tvec values as initial approximations of the rotation and translation
 * vectors, respectively, and further optimizes them.
 * -   **SOLVEPNP_ITERATIVE** Iterative method is based on a Levenberg-Marquardt optimization. In
 * this case the function finds such a pose that minimizes reprojection error, that is the sum
 * of squared distances between the observed projections imagePoints and the projected (using
 * projectPoints ) objectPoints .
 * -   **SOLVEPNP_P3P** Method is based on the paper of X.S. Gao, X.-R. Hou, J. Tang, H.-F. Chang
 * "Complete Solution Classification for the Perspective-Three-Point Problem" (CITE: gao2003complete).
 * In this case the function requires exactly four object and image points.
 * -   **SOLVEPNP_AP3P** Method is based on the paper of T. Ke, S. Roumeliotis
 * "An Efficient Algebraic Solution to the Perspective-Three-Point Problem" (CITE: Ke17).
 * In this case the function requires exactly four object and image points.
 * -   **SOLVEPNP_EPNP** Method has been introduced by F.Moreno-Noguer, V.Lepetit and P.Fua in the
 * paper "EPnP: Efficient Perspective-n-Point Camera Pose Estimation" (CITE: lepetit2009epnp).
 * -   **SOLVEPNP_DLS** Method is based on the paper of Joel A. Hesch and Stergios I. Roumeliotis.
 * "A Direct Least-Squares (DLS) Method for PnP" (CITE: hesch2011direct).
 * -   **SOLVEPNP_UPNP** Method is based on the paper of A.Penate-Sanchez, J.Andrade-Cetto,
 * F.Moreno-Noguer. "Exhaustive Linearization for Robust Camera Pose and Focal Length
 * Estimation" (CITE: penate2013exhaustive). In this case the function also estimates the parameters `$$f_x$$` and `$$f_y$$`
 * assuming that both have the same value. Then the cameraMatrix is updated with the estimated
 * focal length.
 * -   **SOLVEPNP_IPPE** Method is based on the paper of T. Collins and A. Bartoli.
 * "Infinitesimal Plane-Based Pose Estimation" (CITE: Collins14). This method requires coplanar object points.
 * -   **SOLVEPNP_IPPE_SQUARE** Method is based on the paper of Toby Collins and Adrien Bartoli.
 * "Infinitesimal Plane-Based Pose Estimation" (CITE: Collins14). This method is suitable for marker pose estimation.
 * It requires 4 coplanar object points defined in the following order:
 *   - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *   - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *   - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *   - point 3: [-squareLength / 2, -squareLength / 2, 0]
 * and useExtrinsicGuess is set to true.
 * and useExtrinsicGuess is set to true.
 * (`$$ \text{RMSE} = \sqrt{\frac{\sum_{i}^{N} \left ( \hat{y_i} - y_i \right )^2}{N}} $$`) between the input image points
 * and the 3D object points projected with the estimated pose.
 *
 * The function estimates the object pose given a set of object points, their corresponding image
 * projections, as well as the camera matrix and the distortion coefficients, see the figure below
 * (more precisely, the X-axis of the camera frame is pointing to the right, the Y-axis downward
 * and the Z-axis forward).
 *
 * ![](pnp.jpg)
 *
 * Points expressed in the world frame `$$ \bf{X}_w $$` are projected into the image plane `$$ \left[ u, v \right] $$`
 * using the perspective projection model `$$ \Pi $$` and the camera intrinsic parameters matrix `$$ \bf{A} $$`:
 *
 * `$$
 *   \begin{align*}
 *   \begin{bmatrix}
 *   u \\
 *   v \\
 *   1
 *   \end{bmatrix} &=
 *   \bf{A} \hspace{0.1em} \Pi \hspace{0.2em} ^{c}\bf{T}_w
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix} \\
 *   \begin{bmatrix}
 *   u \\
 *   v \\
 *   1
 *   \end{bmatrix} &=
 *   \begin{bmatrix}
 *   f_x & 0 & c_x \\
 *   0 & f_y & c_y \\
 *   0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   1 & 0 & 0 & 0 \\
 *   0 & 1 & 0 & 0 \\
 *   0 & 0 & 1 & 0
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   r_{11} & r_{12} & r_{13} & t_x \\
 *   r_{21} & r_{22} & r_{23} & t_y \\
 *   r_{31} & r_{32} & r_{33} & t_z \\
 *   0 & 0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix}
 *   \end{align*}
 * $$`
 *
 * The estimated pose is thus the rotation (`rvec`) and the translation (`tvec`) vectors that allow transforming
 * a 3D point expressed in the world frame into the camera frame:
 *
 * `$$
 *   \begin{align*}
 *   \begin{bmatrix}
 *   X_c \\
 *   Y_c \\
 *   Z_c \\
 *   1
 *   \end{bmatrix} &=
 *   \hspace{0.2em} ^{c}\bf{T}_w
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix} \\
 *   \begin{bmatrix}
 *   X_c \\
 *   Y_c \\
 *   Z_c \\
 *   1
 *   \end{bmatrix} &=
 *   \begin{bmatrix}
 *   r_{11} & r_{12} & r_{13} & t_x \\
 *   r_{21} & r_{22} & r_{23} & t_y \\
 *   r_{31} & r_{32} & r_{33} & t_z \\
 *   0 & 0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix}
 *   \end{align*}
 * $$`
 *
 * @note
 *    -   An example of how to use solvePnP for planar augmented reality can be found at
 *         opencv_source_code/samples/python/plane_ar.py
 *    -   If you are using Python:
 *         - Numpy array slices won't work as input because solvePnP requires contiguous
 *         arrays (enforced by the assertion using cv::Mat::checkVector() around line 55 of
 *         modules/calib3d/src/solvepnp.cpp version 2.4.9)
 *         - The P3P algorithm requires image points to be in an array of shape (N,1,2) due
 *         to its calling of cv::undistortPoints (around line 75 of modules/calib3d/src/solvepnp.cpp version 2.4.9)
 *         which requires 2-channel information.
 *         - Thus, given some data D = np.array(...) where D.shape = (N,M), in order to use a subset of
 *         it as, e.g., imagePoints, one must effectively copy it into a new array: imagePoints =
 *         np.ascontiguousarray(D[:,:2]).reshape((N,1,2))
 *    -   The methods **SOLVEPNP_DLS** and **SOLVEPNP_UPNP** cannot be used as the current implementations are
 *        unstable and sometimes give completely wrong results. If you pass one of these two
 *        flags, **SOLVEPNP_EPNP** method will be used instead.
 *    -   The minimum number of points is 4 in the general case. In the case of **SOLVEPNP_P3P** and **SOLVEPNP_AP3P**
 *        methods, it is required to use exactly 4 points (the first 3 points are used to estimate all the solutions
 *        of the P3P problem, the last one is used to retain the best solution that minimizes the reprojection error).
 *    -   With **SOLVEPNP_ITERATIVE** method and `useExtrinsicGuess=true`, the minimum number of points is 3 (3 points
 *        are sufficient to compute a pose but there are up to 4 solutions). The initial solution should be close to the
 *        global solution to converge.
 *    -   With **SOLVEPNP_IPPE** input points must be >= 4 and object points must be coplanar.
 *    -   With **SOLVEPNP_IPPE_SQUARE** this is a special case suitable for marker pose estimation.
 *        Number of input points must be 4. Object points must be defined in the following order:
 *          - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *          - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *          - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *          - point 3: [-squareLength / 2, -squareLength / 2, 0]
 */
+ (int)solvePnPGeneric:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs useExtrinsicGuess:(BOOL)useExtrinsicGuess NS_SWIFT_NAME(solvePnPGeneric(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvecs:tvecs:useExtrinsicGuess:));

/**
 * Finds an object pose from 3D-2D point correspondences.
 * This function returns a list of all the possible solutions (a solution is a <rotation vector, translation vector>
 * couple), depending on the number of input points and the chosen method:
 * - P3P methods (REF: SOLVEPNP_P3P, REF: SOLVEPNP_AP3P): 3 or 4 input points. Number of returned solutions can be between 0 and 4 with 3 input points.
 * - REF: SOLVEPNP_IPPE Input points must be >= 4 and object points must be coplanar. Returns 2 solutions.
 * - REF: SOLVEPNP_IPPE_SQUARE Special case suitable for marker pose estimation.
 * Number of input points must be 4 and 2 solutions are returned. Object points must be defined in the following order:
 *   - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *   - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *   - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *   - point 3: [-squareLength / 2, -squareLength / 2, 0]
 * - for all the other flags, number of input points must be >= 4 and object points can be in any configuration.
 * Only 1 solution is returned.
 *
 * @param objectPoints Array of object points in the object coordinate space, Nx3 1-channel or
 * 1xN/Nx1 3-channel, where N is the number of points. vector\<Point3d\> can be also passed here.
 * @param imagePoints Array of corresponding image points, Nx2 1-channel or 1xN/Nx1 2-channel,
 * where N is the number of points. vector\<Point2d\> can be also passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvecs Vector of output rotation vectors (see REF: Rodrigues ) that, together with tvecs, brings points from
 * the model coordinate system to the camera coordinate system.
 * @param tvecs Vector of output translation vectors.
 * the provided rvec and tvec values as initial approximations of the rotation and translation
 * vectors, respectively, and further optimizes them.
 * -   **SOLVEPNP_ITERATIVE** Iterative method is based on a Levenberg-Marquardt optimization. In
 * this case the function finds such a pose that minimizes reprojection error, that is the sum
 * of squared distances between the observed projections imagePoints and the projected (using
 * projectPoints ) objectPoints .
 * -   **SOLVEPNP_P3P** Method is based on the paper of X.S. Gao, X.-R. Hou, J. Tang, H.-F. Chang
 * "Complete Solution Classification for the Perspective-Three-Point Problem" (CITE: gao2003complete).
 * In this case the function requires exactly four object and image points.
 * -   **SOLVEPNP_AP3P** Method is based on the paper of T. Ke, S. Roumeliotis
 * "An Efficient Algebraic Solution to the Perspective-Three-Point Problem" (CITE: Ke17).
 * In this case the function requires exactly four object and image points.
 * -   **SOLVEPNP_EPNP** Method has been introduced by F.Moreno-Noguer, V.Lepetit and P.Fua in the
 * paper "EPnP: Efficient Perspective-n-Point Camera Pose Estimation" (CITE: lepetit2009epnp).
 * -   **SOLVEPNP_DLS** Method is based on the paper of Joel A. Hesch and Stergios I. Roumeliotis.
 * "A Direct Least-Squares (DLS) Method for PnP" (CITE: hesch2011direct).
 * -   **SOLVEPNP_UPNP** Method is based on the paper of A.Penate-Sanchez, J.Andrade-Cetto,
 * F.Moreno-Noguer. "Exhaustive Linearization for Robust Camera Pose and Focal Length
 * Estimation" (CITE: penate2013exhaustive). In this case the function also estimates the parameters `$$f_x$$` and `$$f_y$$`
 * assuming that both have the same value. Then the cameraMatrix is updated with the estimated
 * focal length.
 * -   **SOLVEPNP_IPPE** Method is based on the paper of T. Collins and A. Bartoli.
 * "Infinitesimal Plane-Based Pose Estimation" (CITE: Collins14). This method requires coplanar object points.
 * -   **SOLVEPNP_IPPE_SQUARE** Method is based on the paper of Toby Collins and Adrien Bartoli.
 * "Infinitesimal Plane-Based Pose Estimation" (CITE: Collins14). This method is suitable for marker pose estimation.
 * It requires 4 coplanar object points defined in the following order:
 *   - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *   - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *   - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *   - point 3: [-squareLength / 2, -squareLength / 2, 0]
 * and useExtrinsicGuess is set to true.
 * and useExtrinsicGuess is set to true.
 * (`$$ \text{RMSE} = \sqrt{\frac{\sum_{i}^{N} \left ( \hat{y_i} - y_i \right )^2}{N}} $$`) between the input image points
 * and the 3D object points projected with the estimated pose.
 *
 * The function estimates the object pose given a set of object points, their corresponding image
 * projections, as well as the camera matrix and the distortion coefficients, see the figure below
 * (more precisely, the X-axis of the camera frame is pointing to the right, the Y-axis downward
 * and the Z-axis forward).
 *
 * ![](pnp.jpg)
 *
 * Points expressed in the world frame `$$ \bf{X}_w $$` are projected into the image plane `$$ \left[ u, v \right] $$`
 * using the perspective projection model `$$ \Pi $$` and the camera intrinsic parameters matrix `$$ \bf{A} $$`:
 *
 * `$$
 *   \begin{align*}
 *   \begin{bmatrix}
 *   u \\
 *   v \\
 *   1
 *   \end{bmatrix} &=
 *   \bf{A} \hspace{0.1em} \Pi \hspace{0.2em} ^{c}\bf{T}_w
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix} \\
 *   \begin{bmatrix}
 *   u \\
 *   v \\
 *   1
 *   \end{bmatrix} &=
 *   \begin{bmatrix}
 *   f_x & 0 & c_x \\
 *   0 & f_y & c_y \\
 *   0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   1 & 0 & 0 & 0 \\
 *   0 & 1 & 0 & 0 \\
 *   0 & 0 & 1 & 0
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   r_{11} & r_{12} & r_{13} & t_x \\
 *   r_{21} & r_{22} & r_{23} & t_y \\
 *   r_{31} & r_{32} & r_{33} & t_z \\
 *   0 & 0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix}
 *   \end{align*}
 * $$`
 *
 * The estimated pose is thus the rotation (`rvec`) and the translation (`tvec`) vectors that allow transforming
 * a 3D point expressed in the world frame into the camera frame:
 *
 * `$$
 *   \begin{align*}
 *   \begin{bmatrix}
 *   X_c \\
 *   Y_c \\
 *   Z_c \\
 *   1
 *   \end{bmatrix} &=
 *   \hspace{0.2em} ^{c}\bf{T}_w
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix} \\
 *   \begin{bmatrix}
 *   X_c \\
 *   Y_c \\
 *   Z_c \\
 *   1
 *   \end{bmatrix} &=
 *   \begin{bmatrix}
 *   r_{11} & r_{12} & r_{13} & t_x \\
 *   r_{21} & r_{22} & r_{23} & t_y \\
 *   r_{31} & r_{32} & r_{33} & t_z \\
 *   0 & 0 & 0 & 1
 *   \end{bmatrix}
 *   \begin{bmatrix}
 *   X_{w} \\
 *   Y_{w} \\
 *   Z_{w} \\
 *   1
 *   \end{bmatrix}
 *   \end{align*}
 * $$`
 *
 * @note
 *    -   An example of how to use solvePnP for planar augmented reality can be found at
 *         opencv_source_code/samples/python/plane_ar.py
 *    -   If you are using Python:
 *         - Numpy array slices won't work as input because solvePnP requires contiguous
 *         arrays (enforced by the assertion using cv::Mat::checkVector() around line 55 of
 *         modules/calib3d/src/solvepnp.cpp version 2.4.9)
 *         - The P3P algorithm requires image points to be in an array of shape (N,1,2) due
 *         to its calling of cv::undistortPoints (around line 75 of modules/calib3d/src/solvepnp.cpp version 2.4.9)
 *         which requires 2-channel information.
 *         - Thus, given some data D = np.array(...) where D.shape = (N,M), in order to use a subset of
 *         it as, e.g., imagePoints, one must effectively copy it into a new array: imagePoints =
 *         np.ascontiguousarray(D[:,:2]).reshape((N,1,2))
 *    -   The methods **SOLVEPNP_DLS** and **SOLVEPNP_UPNP** cannot be used as the current implementations are
 *        unstable and sometimes give completely wrong results. If you pass one of these two
 *        flags, **SOLVEPNP_EPNP** method will be used instead.
 *    -   The minimum number of points is 4 in the general case. In the case of **SOLVEPNP_P3P** and **SOLVEPNP_AP3P**
 *        methods, it is required to use exactly 4 points (the first 3 points are used to estimate all the solutions
 *        of the P3P problem, the last one is used to retain the best solution that minimizes the reprojection error).
 *    -   With **SOLVEPNP_ITERATIVE** method and `useExtrinsicGuess=true`, the minimum number of points is 3 (3 points
 *        are sufficient to compute a pose but there are up to 4 solutions). The initial solution should be close to the
 *        global solution to converge.
 *    -   With **SOLVEPNP_IPPE** input points must be >= 4 and object points must be coplanar.
 *    -   With **SOLVEPNP_IPPE_SQUARE** this is a special case suitable for marker pose estimation.
 *        Number of input points must be 4. Object points must be defined in the following order:
 *          - point 0: [-squareLength / 2,  squareLength / 2, 0]
 *          - point 1: [ squareLength / 2,  squareLength / 2, 0]
 *          - point 2: [ squareLength / 2, -squareLength / 2, 0]
 *          - point 3: [-squareLength / 2, -squareLength / 2, 0]
 */
+ (int)solvePnPGeneric:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvecs:(NSMutableArray<Mat*>*)rvecs tvecs:(NSMutableArray<Mat*>*)tvecs NS_SWIFT_NAME(solvePnPGeneric(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvecs:tvecs:));


//
//  void cv::Rodrigues(Mat src, Mat& dst, Mat& jacobian = Mat())
//
/**
 * Converts a rotation matrix to a rotation vector or vice versa.
 *
 * @param src Input rotation vector (3x1 or 1x3) or rotation matrix (3x3).
 * @param dst Output rotation matrix (3x3) or rotation vector (3x1 or 1x3), respectively.
 * @param jacobian Optional output Jacobian matrix, 3x9 or 9x3, which is a matrix of partial
 * derivatives of the output array components with respect to the input array components.
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \begin{array}{l} \theta \leftarrow norm(r) \\ r  \leftarrow r/ \theta \\ R =  \cos(\theta) I + (1- \cos{\theta} ) r r^T +  \sin(\theta) \vecthreethree{0}{-r_z}{r_y}{r_z}{0}{-r_x}{-r_y}{r_x}{0} \end{array}$$`
 *
 * Inverse transformation can be also done easily, since
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \sin ( \theta ) \vecthreethree{0}{-r_z}{r_y}{r_z}{0}{-r_x}{-r_y}{r_x}{0} = \frac{R - R^T}{2}$$`
 *
 * A rotation vector is a convenient and most compact representation of a rotation matrix (since any
 * rotation matrix has just 3 degrees of freedom). The representation is used in the global 3D geometry
 * optimization procedures like REF: calibrateCamera, REF: stereoCalibrate, or REF: solvePnP .
 *
 * @note More information about the computation of the derivative of a 3D rotation matrix with respect to its exponential coordinate
 * can be found in:
 *     - A Compact Formula for the Derivative of a 3-D Rotation in Exponential Coordinates, Guillermo Gallego, Anthony J. Yezzi CITE: Gallego2014ACF
 *
 * @note Useful information on SE(3) and Lie Groups can be found in:
 *     - A tutorial on SE(3) transformation parameterizations and on-manifold optimization, Jose-Luis Blanco CITE: blanco2010tutorial
 *     - Lie Groups for 2D and 3D Transformation, Ethan Eade CITE: Eade17
 *     - A micro Lie theory for state estimation in robotics, Joan Solà, Jérémie Deray, Dinesh Atchuthan CITE: Sol2018AML
 */
+ (void)Rodrigues:(Mat*)src dst:(Mat*)dst jacobian:(Mat*)jacobian NS_SWIFT_NAME(Rodrigues(src:dst:jacobian:));

/**
 * Converts a rotation matrix to a rotation vector or vice versa.
 *
 * @param src Input rotation vector (3x1 or 1x3) or rotation matrix (3x3).
 * @param dst Output rotation matrix (3x3) or rotation vector (3x1 or 1x3), respectively.
 * derivatives of the output array components with respect to the input array components.
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \begin{array}{l} \theta \leftarrow norm(r) \\ r  \leftarrow r/ \theta \\ R =  \cos(\theta) I + (1- \cos{\theta} ) r r^T +  \sin(\theta) \vecthreethree{0}{-r_z}{r_y}{r_z}{0}{-r_x}{-r_y}{r_x}{0} \end{array}$$`
 *
 * Inverse transformation can be also done easily, since
 *
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \sin ( \theta ) \vecthreethree{0}{-r_z}{r_y}{r_z}{0}{-r_x}{-r_y}{r_x}{0} = \frac{R - R^T}{2}$$`
 *
 * A rotation vector is a convenient and most compact representation of a rotation matrix (since any
 * rotation matrix has just 3 degrees of freedom). The representation is used in the global 3D geometry
 * optimization procedures like REF: calibrateCamera, REF: stereoCalibrate, or REF: solvePnP .
 *
 * @note More information about the computation of the derivative of a 3D rotation matrix with respect to its exponential coordinate
 * can be found in:
 *     - A Compact Formula for the Derivative of a 3-D Rotation in Exponential Coordinates, Guillermo Gallego, Anthony J. Yezzi CITE: Gallego2014ACF
 *
 * @note Useful information on SE(3) and Lie Groups can be found in:
 *     - A tutorial on SE(3) transformation parameterizations and on-manifold optimization, Jose-Luis Blanco CITE: blanco2010tutorial
 *     - Lie Groups for 2D and 3D Transformation, Ethan Eade CITE: Eade17
 *     - A micro Lie theory for state estimation in robotics, Joan Solà, Jérémie Deray, Dinesh Atchuthan CITE: Sol2018AML
 */
+ (void)Rodrigues:(Mat*)src dst:(Mat*)dst NS_SWIFT_NAME(Rodrigues(src:dst:));


//
//  void cv::calibrateHandEye(vector_Mat R_gripper2base, vector_Mat t_gripper2base, vector_Mat R_target2cam, vector_Mat t_target2cam, Mat& R_cam2gripper, Mat& t_cam2gripper, HandEyeCalibrationMethod method = CALIB_HAND_EYE_TSAI)
//
/**
 * Computes Hand-Eye calibration: `$$_{}^{g}\textrm{T}_c$$`
 *
 * @param R_gripper2base Rotation part extracted from the homogeneous matrix that transforms a point
 * expressed in the gripper frame to the robot base frame (`$$_{}^{b}\textrm{T}_g$$`).
 * This is a vector (`vector<Mat>`) that contains the rotation matrices for all the transformations
 * from gripper frame to robot base frame.
 * @param t_gripper2base Translation part extracted from the homogeneous matrix that transforms a point
 * expressed in the gripper frame to the robot base frame (`$$_{}^{b}\textrm{T}_g$$`).
 * This is a vector (`vector<Mat>`) that contains the translation vectors for all the transformations
 * from gripper frame to robot base frame.
 * @param R_target2cam Rotation part extracted from the homogeneous matrix that transforms a point
 * expressed in the target frame to the camera frame (`$$_{}^{c}\textrm{T}_t$$`).
 * This is a vector (`vector<Mat>`) that contains the rotation matrices for all the transformations
 * from calibration target frame to camera frame.
 * @param t_target2cam Rotation part extracted from the homogeneous matrix that transforms a point
 * expressed in the target frame to the camera frame (`$$_{}^{c}\textrm{T}_t$$`).
 * This is a vector (`vector<Mat>`) that contains the translation vectors for all the transformations
 * from calibration target frame to camera frame.
 * @param R_cam2gripper Estimated rotation part extracted from the homogeneous matrix that transforms a point
 * expressed in the camera frame to the gripper frame (`$$_{}^{g}\textrm{T}_c$$`).
 * @param t_cam2gripper Estimated translation part extracted from the homogeneous matrix that transforms a point
 * expressed in the camera frame to the gripper frame (`$$_{}^{g}\textrm{T}_c$$`).
 * @param method One of the implemented Hand-Eye calibration method, see cv::HandEyeCalibrationMethod
 *
 * The function performs the Hand-Eye calibration using various methods. One approach consists in estimating the
 * rotation then the translation (separable solutions) and the following methods are implemented:
 *   - R. Tsai, R. Lenz A New Technique for Fully Autonomous and Efficient 3D Robotics Hand/EyeCalibration \cite Tsai89
 *   - F. Park, B. Martin Robot Sensor Calibration: Solving AX = XB on the Euclidean Group \cite Park94
 *   - R. Horaud, F. Dornaika Hand-Eye Calibration \cite Horaud95
 *
 * Another approach consists in estimating simultaneously the rotation and the translation (simultaneous solutions),
 * with the following implemented method:
 *   - N. Andreff, R. Horaud, B. Espiau On-line Hand-Eye Calibration \cite Andreff99
 *   - K. Daniilidis Hand-Eye Calibration Using Dual Quaternions \cite Daniilidis98
 *
 * The following picture describes the Hand-Eye calibration problem where the transformation between a camera ("eye")
 * mounted on a robot gripper ("hand") has to be estimated.
 *
 * ![](pics/hand-eye_figure.png)
 *
 * The calibration procedure is the following:
 *   - a static calibration pattern is used to estimate the transformation between the target frame
 *   and the camera frame
 *   - the robot gripper is moved in order to acquire several poses
 *   - for each pose, the homogeneous transformation between the gripper frame and the robot base frame is recorded using for
 *   instance the robot kinematics
 * `$$
 *     \begin{bmatrix}
 *     X_b\\
 *     Y_b\\
 *     Z_b\\
 *     1
 *     \end{bmatrix}
 *     =
 *     \begin{bmatrix}
 *     _{}^{b}\textrm{R}_g & _{}^{b}\textrm{t}_g \\
 *     0_{1 \times 3} & 1
 *     \end{bmatrix}
 *     \begin{bmatrix}
 *     X_g\\
 *     Y_g\\
 *     Z_g\\
 *     1
 *     \end{bmatrix}
 * $$`
 *   - for each pose, the homogeneous transformation between the calibration target frame and the camera frame is recorded using
 *   for instance a pose estimation method (PnP) from 2D-3D point correspondences
 * `$$
 *     \begin{bmatrix}
 *     X_c\\
 *     Y_c\\
 *     Z_c\\
 *     1
 *     \end{bmatrix}
 *     =
 *     \begin{bmatrix}
 *     _{}^{c}\textrm{R}_t & _{}^{c}\textrm{t}_t \\
 *     0_{1 \times 3} & 1
 *     \end{bmatrix}
 *     \begin{bmatrix}
 *     X_t\\
 *     Y_t\\
 *     Z_t\\
 *     1
 *     \end{bmatrix}
 * $$`
 *
 * The Hand-Eye calibration procedure returns the following homogeneous transformation
 * `$$
 *     \begin{bmatrix}
 *     X_g\\
 *     Y_g\\
 *     Z_g\\
 *     1
 *     \end{bmatrix}
 *     =
 *     \begin{bmatrix}
 *     _{}^{g}\textrm{R}_c & _{}^{g}\textrm{t}_c \\
 *     0_{1 \times 3} & 1
 *     \end{bmatrix}
 *     \begin{bmatrix}
 *     X_c\\
 *     Y_c\\
 *     Z_c\\
 *     1
 *     \end{bmatrix}
 * $$`
 *
 * This problem is also known as solving the `$$\mathbf{A}\mathbf{X}=\mathbf{X}\mathbf{B}$$` equation:
 * `$$
 *     \begin{align*}
 *     ^{b}{\textrm{T}_g}^{(1)} \hspace{0.2em} ^{g}\textrm{T}_c \hspace{0.2em} ^{c}{\textrm{T}_t}^{(1)} &=
 *     \hspace{0.1em} ^{b}{\textrm{T}_g}^{(2)} \hspace{0.2em} ^{g}\textrm{T}_c \hspace{0.2em} ^{c}{\textrm{T}_t}^{(2)} \\
 *
 *     (^{b}{\textrm{T}_g}^{(2)})^{-1} \hspace{0.2em} ^{b}{\textrm{T}_g}^{(1)} \hspace{0.2em} ^{g}\textrm{T}_c &=
 *     \hspace{0.1em} ^{g}\textrm{T}_c \hspace{0.2em} ^{c}{\textrm{T}_t}^{(2)} (^{c}{\textrm{T}_t}^{(1)})^{-1} \\
 *
 *     \textrm{A}_i \textrm{X} &= \textrm{X} \textrm{B}_i \\
 *     \end{align*}
 * $$`
 *
 * \note
 * Additional information can be found on this [website](http://campar.in.tum.de/Chair/HandEyeCalibration).
 * \note
 * A minimum of 2 motions with non parallel rotation axes are necessary to determine the hand-eye transformation.
 * So at least 3 different poses are required, but it is strongly recommended to use many more poses.
 */
+ (void)calibrateHandEye:(NSArray<Mat*>*)R_gripper2base t_gripper2base:(NSArray<Mat*>*)t_gripper2base R_target2cam:(NSArray<Mat*>*)R_target2cam t_target2cam:(NSArray<Mat*>*)t_target2cam R_cam2gripper:(Mat*)R_cam2gripper t_cam2gripper:(Mat*)t_cam2gripper method:(HandEyeCalibrationMethod)method NS_SWIFT_NAME(calibrateHandEye(R_gripper2base:t_gripper2base:R_target2cam:t_target2cam:R_cam2gripper:t_cam2gripper:method:));

/**
 * Computes Hand-Eye calibration: `$$_{}^{g}\textrm{T}_c$$`
 *
 * @param R_gripper2base Rotation part extracted from the homogeneous matrix that transforms a point
 * expressed in the gripper frame to the robot base frame (`$$_{}^{b}\textrm{T}_g$$`).
 * This is a vector (`vector<Mat>`) that contains the rotation matrices for all the transformations
 * from gripper frame to robot base frame.
 * @param t_gripper2base Translation part extracted from the homogeneous matrix that transforms a point
 * expressed in the gripper frame to the robot base frame (`$$_{}^{b}\textrm{T}_g$$`).
 * This is a vector (`vector<Mat>`) that contains the translation vectors for all the transformations
 * from gripper frame to robot base frame.
 * @param R_target2cam Rotation part extracted from the homogeneous matrix that transforms a point
 * expressed in the target frame to the camera frame (`$$_{}^{c}\textrm{T}_t$$`).
 * This is a vector (`vector<Mat>`) that contains the rotation matrices for all the transformations
 * from calibration target frame to camera frame.
 * @param t_target2cam Rotation part extracted from the homogeneous matrix that transforms a point
 * expressed in the target frame to the camera frame (`$$_{}^{c}\textrm{T}_t$$`).
 * This is a vector (`vector<Mat>`) that contains the translation vectors for all the transformations
 * from calibration target frame to camera frame.
 * @param R_cam2gripper Estimated rotation part extracted from the homogeneous matrix that transforms a point
 * expressed in the camera frame to the gripper frame (`$$_{}^{g}\textrm{T}_c$$`).
 * @param t_cam2gripper Estimated translation part extracted from the homogeneous matrix that transforms a point
 * expressed in the camera frame to the gripper frame (`$$_{}^{g}\textrm{T}_c$$`).
 *
 * The function performs the Hand-Eye calibration using various methods. One approach consists in estimating the
 * rotation then the translation (separable solutions) and the following methods are implemented:
 *   - R. Tsai, R. Lenz A New Technique for Fully Autonomous and Efficient 3D Robotics Hand/EyeCalibration \cite Tsai89
 *   - F. Park, B. Martin Robot Sensor Calibration: Solving AX = XB on the Euclidean Group \cite Park94
 *   - R. Horaud, F. Dornaika Hand-Eye Calibration \cite Horaud95
 *
 * Another approach consists in estimating simultaneously the rotation and the translation (simultaneous solutions),
 * with the following implemented method:
 *   - N. Andreff, R. Horaud, B. Espiau On-line Hand-Eye Calibration \cite Andreff99
 *   - K. Daniilidis Hand-Eye Calibration Using Dual Quaternions \cite Daniilidis98
 *
 * The following picture describes the Hand-Eye calibration problem where the transformation between a camera ("eye")
 * mounted on a robot gripper ("hand") has to be estimated.
 *
 * ![](pics/hand-eye_figure.png)
 *
 * The calibration procedure is the following:
 *   - a static calibration pattern is used to estimate the transformation between the target frame
 *   and the camera frame
 *   - the robot gripper is moved in order to acquire several poses
 *   - for each pose, the homogeneous transformation between the gripper frame and the robot base frame is recorded using for
 *   instance the robot kinematics
 * `$$
 *     \begin{bmatrix}
 *     X_b\\
 *     Y_b\\
 *     Z_b\\
 *     1
 *     \end{bmatrix}
 *     =
 *     \begin{bmatrix}
 *     _{}^{b}\textrm{R}_g & _{}^{b}\textrm{t}_g \\
 *     0_{1 \times 3} & 1
 *     \end{bmatrix}
 *     \begin{bmatrix}
 *     X_g\\
 *     Y_g\\
 *     Z_g\\
 *     1
 *     \end{bmatrix}
 * $$`
 *   - for each pose, the homogeneous transformation between the calibration target frame and the camera frame is recorded using
 *   for instance a pose estimation method (PnP) from 2D-3D point correspondences
 * `$$
 *     \begin{bmatrix}
 *     X_c\\
 *     Y_c\\
 *     Z_c\\
 *     1
 *     \end{bmatrix}
 *     =
 *     \begin{bmatrix}
 *     _{}^{c}\textrm{R}_t & _{}^{c}\textrm{t}_t \\
 *     0_{1 \times 3} & 1
 *     \end{bmatrix}
 *     \begin{bmatrix}
 *     X_t\\
 *     Y_t\\
 *     Z_t\\
 *     1
 *     \end{bmatrix}
 * $$`
 *
 * The Hand-Eye calibration procedure returns the following homogeneous transformation
 * `$$
 *     \begin{bmatrix}
 *     X_g\\
 *     Y_g\\
 *     Z_g\\
 *     1
 *     \end{bmatrix}
 *     =
 *     \begin{bmatrix}
 *     _{}^{g}\textrm{R}_c & _{}^{g}\textrm{t}_c \\
 *     0_{1 \times 3} & 1
 *     \end{bmatrix}
 *     \begin{bmatrix}
 *     X_c\\
 *     Y_c\\
 *     Z_c\\
 *     1
 *     \end{bmatrix}
 * $$`
 *
 * This problem is also known as solving the `$$\mathbf{A}\mathbf{X}=\mathbf{X}\mathbf{B}$$` equation:
 * `$$
 *     \begin{align*}
 *     ^{b}{\textrm{T}_g}^{(1)} \hspace{0.2em} ^{g}\textrm{T}_c \hspace{0.2em} ^{c}{\textrm{T}_t}^{(1)} &=
 *     \hspace{0.1em} ^{b}{\textrm{T}_g}^{(2)} \hspace{0.2em} ^{g}\textrm{T}_c \hspace{0.2em} ^{c}{\textrm{T}_t}^{(2)} \\
 *
 *     (^{b}{\textrm{T}_g}^{(2)})^{-1} \hspace{0.2em} ^{b}{\textrm{T}_g}^{(1)} \hspace{0.2em} ^{g}\textrm{T}_c &=
 *     \hspace{0.1em} ^{g}\textrm{T}_c \hspace{0.2em} ^{c}{\textrm{T}_t}^{(2)} (^{c}{\textrm{T}_t}^{(1)})^{-1} \\
 *
 *     \textrm{A}_i \textrm{X} &= \textrm{X} \textrm{B}_i \\
 *     \end{align*}
 * $$`
 *
 * \note
 * Additional information can be found on this [website](http://campar.in.tum.de/Chair/HandEyeCalibration).
 * \note
 * A minimum of 2 motions with non parallel rotation axes are necessary to determine the hand-eye transformation.
 * So at least 3 different poses are required, but it is strongly recommended to use many more poses.
 */
+ (void)calibrateHandEye:(NSArray<Mat*>*)R_gripper2base t_gripper2base:(NSArray<Mat*>*)t_gripper2base R_target2cam:(NSArray<Mat*>*)R_target2cam t_target2cam:(NSArray<Mat*>*)t_target2cam R_cam2gripper:(Mat*)R_cam2gripper t_cam2gripper:(Mat*)t_cam2gripper NS_SWIFT_NAME(calibrateHandEye(R_gripper2base:t_gripper2base:R_target2cam:t_target2cam:R_cam2gripper:t_cam2gripper:));


//
//  void cv::calibrationMatrixValues(Mat cameraMatrix, Size imageSize, double apertureWidth, double apertureHeight, double& fovx, double& fovy, double& focalLength, Point2d& principalPoint, double& aspectRatio)
//
/**
 * Computes useful camera characteristics from the camera matrix.
 *
 * @param cameraMatrix Input camera matrix that can be estimated by calibrateCamera or
 * stereoCalibrate .
 * @param imageSize Input image size in pixels.
 * @param apertureWidth Physical width in mm of the sensor.
 * @param apertureHeight Physical height in mm of the sensor.
 * @param fovx Output field of view in degrees along the horizontal sensor axis.
 * @param fovy Output field of view in degrees along the vertical sensor axis.
 * @param focalLength Focal length of the lens in mm.
 * @param principalPoint Principal point in mm.
 * @param aspectRatio `$$f_y/f_x$$`
 *
 * The function computes various useful camera characteristics from the previously estimated camera
 * matrix.
 *
 * @note
 *    Do keep in mind that the unity measure 'mm' stands for whatever unit of measure one chooses for
 *     the chessboard pitch (it can thus be any value).
 */
+ (void)calibrationMatrixValues:(Mat*)cameraMatrix imageSize:(Size2i*)imageSize apertureWidth:(double)apertureWidth apertureHeight:(double)apertureHeight fovx:(double*)fovx fovy:(double*)fovy focalLength:(double*)focalLength principalPoint:(Point2d*)principalPoint aspectRatio:(double*)aspectRatio NS_SWIFT_NAME(calibrationMatrixValues(cameraMatrix:imageSize:apertureWidth:apertureHeight:fovx:fovy:focalLength:principalPoint:aspectRatio:));


//
//  void cv::composeRT(Mat rvec1, Mat tvec1, Mat rvec2, Mat tvec2, Mat& rvec3, Mat& tvec3, Mat& dr3dr1 = Mat(), Mat& dr3dt1 = Mat(), Mat& dr3dr2 = Mat(), Mat& dr3dt2 = Mat(), Mat& dt3dr1 = Mat(), Mat& dt3dt1 = Mat(), Mat& dt3dr2 = Mat(), Mat& dt3dt2 = Mat())
//
/**
 * Combines two rotation-and-shift transformations.
 *
 * @param rvec1 First rotation vector.
 * @param tvec1 First translation vector.
 * @param rvec2 Second rotation vector.
 * @param tvec2 Second translation vector.
 * @param rvec3 Output rotation vector of the superposition.
 * @param tvec3 Output translation vector of the superposition.
 * @param dr3dr1 Optional output derivative of rvec3 with regard to rvec1
 * @param dr3dt1 Optional output derivative of rvec3 with regard to tvec1
 * @param dr3dr2 Optional output derivative of rvec3 with regard to rvec2
 * @param dr3dt2 Optional output derivative of rvec3 with regard to tvec2
 * @param dt3dr1 Optional output derivative of tvec3 with regard to rvec1
 * @param dt3dt1 Optional output derivative of tvec3 with regard to tvec1
 * @param dt3dr2 Optional output derivative of tvec3 with regard to rvec2
 * @param dt3dt2 Optional output derivative of tvec3 with regard to tvec2
 *
 * The functions compute:
 *
 * `$$\begin{array}{l} \texttt{rvec3} =  \mathrm{rodrigues} ^{-1} \left ( \mathrm{rodrigues} ( \texttt{rvec2} )  \cdot \mathrm{rodrigues} ( \texttt{rvec1} ) \right )  \\ \texttt{tvec3} =  \mathrm{rodrigues} ( \texttt{rvec2} )  \cdot \texttt{tvec1} +  \texttt{tvec2} \end{array} ,$$`
 *
 * where `$$\mathrm{rodrigues}$$` denotes a rotation vector to a rotation matrix transformation, and
 * `$$\mathrm{rodrigues}^{-1}$$` denotes the inverse transformation. See Rodrigues for details.
 *
 * Also, the functions can compute the derivatives of the output vectors with regards to the input
 * vectors (see matMulDeriv ). The functions are used inside stereoCalibrate but can also be used in
 * your own code where Levenberg-Marquardt or another gradient-based solver is used to optimize a
 * function that contains a matrix multiplication.
 */
+ (void)composeRT:(Mat*)rvec1 tvec1:(Mat*)tvec1 rvec2:(Mat*)rvec2 tvec2:(Mat*)tvec2 rvec3:(Mat*)rvec3 tvec3:(Mat*)tvec3 dr3dr1:(Mat*)dr3dr1 dr3dt1:(Mat*)dr3dt1 dr3dr2:(Mat*)dr3dr2 dr3dt2:(Mat*)dr3dt2 dt3dr1:(Mat*)dt3dr1 dt3dt1:(Mat*)dt3dt1 dt3dr2:(Mat*)dt3dr2 dt3dt2:(Mat*)dt3dt2 NS_SWIFT_NAME(composeRT(rvec1:tvec1:rvec2:tvec2:rvec3:tvec3:dr3dr1:dr3dt1:dr3dr2:dr3dt2:dt3dr1:dt3dt1:dt3dr2:dt3dt2:));

/**
 * Combines two rotation-and-shift transformations.
 *
 * @param rvec1 First rotation vector.
 * @param tvec1 First translation vector.
 * @param rvec2 Second rotation vector.
 * @param tvec2 Second translation vector.
 * @param rvec3 Output rotation vector of the superposition.
 * @param tvec3 Output translation vector of the superposition.
 * @param dr3dr1 Optional output derivative of rvec3 with regard to rvec1
 * @param dr3dt1 Optional output derivative of rvec3 with regard to tvec1
 * @param dr3dr2 Optional output derivative of rvec3 with regard to rvec2
 * @param dr3dt2 Optional output derivative of rvec3 with regard to tvec2
 * @param dt3dr1 Optional output derivative of tvec3 with regard to rvec1
 * @param dt3dt1 Optional output derivative of tvec3 with regard to tvec1
 * @param dt3dr2 Optional output derivative of tvec3 with regard to rvec2
 *
 * The functions compute:
 *
 * `$$\begin{array}{l} \texttt{rvec3} =  \mathrm{rodrigues} ^{-1} \left ( \mathrm{rodrigues} ( \texttt{rvec2} )  \cdot \mathrm{rodrigues} ( \texttt{rvec1} ) \right )  \\ \texttt{tvec3} =  \mathrm{rodrigues} ( \texttt{rvec2} )  \cdot \texttt{tvec1} +  \texttt{tvec2} \end{array} ,$$`
 *
 * where `$$\mathrm{rodrigues}$$` denotes a rotation vector to a rotation matrix transformation, and
 * `$$\mathrm{rodrigues}^{-1}$$` denotes the inverse transformation. See Rodrigues for details.
 *
 * Also, the functions can compute the derivatives of the output vectors with regards to the input
 * vectors (see matMulDeriv ). The functions are used inside stereoCalibrate but can also be used in
 * your own code where Levenberg-Marquardt or another gradient-based solver is used to optimize a
 * function that contains a matrix multiplication.
 */
+ (void)composeRT:(Mat*)rvec1 tvec1:(Mat*)tvec1 rvec2:(Mat*)rvec2 tvec2:(Mat*)tvec2 rvec3:(Mat*)rvec3 tvec3:(Mat*)tvec3 dr3dr1:(Mat*)dr3dr1 dr3dt1:(Mat*)dr3dt1 dr3dr2:(Mat*)dr3dr2 dr3dt2:(Mat*)dr3dt2 dt3dr1:(Mat*)dt3dr1 dt3dt1:(Mat*)dt3dt1 dt3dr2:(Mat*)dt3dr2 NS_SWIFT_NAME(composeRT(rvec1:tvec1:rvec2:tvec2:rvec3:tvec3:dr3dr1:dr3dt1:dr3dr2:dr3dt2:dt3dr1:dt3dt1:dt3dr2:));

/**
 * Combines two rotation-and-shift transformations.
 *
 * @param rvec1 First rotation vector.
 * @param tvec1 First translation vector.
 * @param rvec2 Second rotation vector.
 * @param tvec2 Second translation vector.
 * @param rvec3 Output rotation vector of the superposition.
 * @param tvec3 Output translation vector of the superposition.
 * @param dr3dr1 Optional output derivative of rvec3 with regard to rvec1
 * @param dr3dt1 Optional output derivative of rvec3 with regard to tvec1
 * @param dr3dr2 Optional output derivative of rvec3 with regard to rvec2
 * @param dr3dt2 Optional output derivative of rvec3 with regard to tvec2
 * @param dt3dr1 Optional output derivative of tvec3 with regard to rvec1
 * @param dt3dt1 Optional output derivative of tvec3 with regard to tvec1
 *
 * The functions compute:
 *
 * `$$\begin{array}{l} \texttt{rvec3} =  \mathrm{rodrigues} ^{-1} \left ( \mathrm{rodrigues} ( \texttt{rvec2} )  \cdot \mathrm{rodrigues} ( \texttt{rvec1} ) \right )  \\ \texttt{tvec3} =  \mathrm{rodrigues} ( \texttt{rvec2} )  \cdot \texttt{tvec1} +  \texttt{tvec2} \end{array} ,$$`
 *
 * where `$$\mathrm{rodrigues}$$` denotes a rotation vector to a rotation matrix transformation, and
 * `$$\mathrm{rodrigues}^{-1}$$` denotes the inverse transformation. See Rodrigues for details.
 *
 * Also, the functions can compute the derivatives of the output vectors with regards to the input
 * vectors (see matMulDeriv ). The functions are used inside stereoCalibrate but can also be used in
 * your own code where Levenberg-Marquardt or another gradient-based solver is used to optimize a
 * function that contains a matrix multiplication.
 */
+ (void)composeRT:(Mat*)rvec1 tvec1:(Mat*)tvec1 rvec2:(Mat*)rvec2 tvec2:(Mat*)tvec2 rvec3:(Mat*)rvec3 tvec3:(Mat*)tvec3 dr3dr1:(Mat*)dr3dr1 dr3dt1:(Mat*)dr3dt1 dr3dr2:(Mat*)dr3dr2 dr3dt2:(Mat*)dr3dt2 dt3dr1:(Mat*)dt3dr1 dt3dt1:(Mat*)dt3dt1 NS_SWIFT_NAME(composeRT(rvec1:tvec1:rvec2:tvec2:rvec3:tvec3:dr3dr1:dr3dt1:dr3dr2:dr3dt2:dt3dr1:dt3dt1:));

/**
 * Combines two rotation-and-shift transformations.
 *
 * @param rvec1 First rotation vector.
 * @param tvec1 First translation vector.
 * @param rvec2 Second rotation vector.
 * @param tvec2 Second translation vector.
 * @param rvec3 Output rotation vector of the superposition.
 * @param tvec3 Output translation vector of the superposition.
 * @param dr3dr1 Optional output derivative of rvec3 with regard to rvec1
 * @param dr3dt1 Optional output derivative of rvec3 with regard to tvec1
 * @param dr3dr2 Optional output derivative of rvec3 with regard to rvec2
 * @param dr3dt2 Optional output derivative of rvec3 with regard to tvec2
 * @param dt3dr1 Optional output derivative of tvec3 with regard to rvec1
 *
 * The functions compute:
 *
 * `$$\begin{array}{l} \texttt{rvec3} =  \mathrm{rodrigues} ^{-1} \left ( \mathrm{rodrigues} ( \texttt{rvec2} )  \cdot \mathrm{rodrigues} ( \texttt{rvec1} ) \right )  \\ \texttt{tvec3} =  \mathrm{rodrigues} ( \texttt{rvec2} )  \cdot \texttt{tvec1} +  \texttt{tvec2} \end{array} ,$$`
 *
 * where `$$\mathrm{rodrigues}$$` denotes a rotation vector to a rotation matrix transformation, and
 * `$$\mathrm{rodrigues}^{-1}$$` denotes the inverse transformation. See Rodrigues for details.
 *
 * Also, the functions can compute the derivatives of the output vectors with regards to the input
 * vectors (see matMulDeriv ). The functions are used inside stereoCalibrate but can also be used in
 * your own code where Levenberg-Marquardt or another gradient-based solver is used to optimize a
 * function that contains a matrix multiplication.
 */
+ (void)composeRT:(Mat*)rvec1 tvec1:(Mat*)tvec1 rvec2:(Mat*)rvec2 tvec2:(Mat*)tvec2 rvec3:(Mat*)rvec3 tvec3:(Mat*)tvec3 dr3dr1:(Mat*)dr3dr1 dr3dt1:(Mat*)dr3dt1 dr3dr2:(Mat*)dr3dr2 dr3dt2:(Mat*)dr3dt2 dt3dr1:(Mat*)dt3dr1 NS_SWIFT_NAME(composeRT(rvec1:tvec1:rvec2:tvec2:rvec3:tvec3:dr3dr1:dr3dt1:dr3dr2:dr3dt2:dt3dr1:));

/**
 * Combines two rotation-and-shift transformations.
 *
 * @param rvec1 First rotation vector.
 * @param tvec1 First translation vector.
 * @param rvec2 Second rotation vector.
 * @param tvec2 Second translation vector.
 * @param rvec3 Output rotation vector of the superposition.
 * @param tvec3 Output translation vector of the superposition.
 * @param dr3dr1 Optional output derivative of rvec3 with regard to rvec1
 * @param dr3dt1 Optional output derivative of rvec3 with regard to tvec1
 * @param dr3dr2 Optional output derivative of rvec3 with regard to rvec2
 * @param dr3dt2 Optional output derivative of rvec3 with regard to tvec2
 *
 * The functions compute:
 *
 * `$$\begin{array}{l} \texttt{rvec3} =  \mathrm{rodrigues} ^{-1} \left ( \mathrm{rodrigues} ( \texttt{rvec2} )  \cdot \mathrm{rodrigues} ( \texttt{rvec1} ) \right )  \\ \texttt{tvec3} =  \mathrm{rodrigues} ( \texttt{rvec2} )  \cdot \texttt{tvec1} +  \texttt{tvec2} \end{array} ,$$`
 *
 * where `$$\mathrm{rodrigues}$$` denotes a rotation vector to a rotation matrix transformation, and
 * `$$\mathrm{rodrigues}^{-1}$$` denotes the inverse transformation. See Rodrigues for details.
 *
 * Also, the functions can compute the derivatives of the output vectors with regards to the input
 * vectors (see matMulDeriv ). The functions are used inside stereoCalibrate but can also be used in
 * your own code where Levenberg-Marquardt or another gradient-based solver is used to optimize a
 * function that contains a matrix multiplication.
 */
+ (void)composeRT:(Mat*)rvec1 tvec1:(Mat*)tvec1 rvec2:(Mat*)rvec2 tvec2:(Mat*)tvec2 rvec3:(Mat*)rvec3 tvec3:(Mat*)tvec3 dr3dr1:(Mat*)dr3dr1 dr3dt1:(Mat*)dr3dt1 dr3dr2:(Mat*)dr3dr2 dr3dt2:(Mat*)dr3dt2 NS_SWIFT_NAME(composeRT(rvec1:tvec1:rvec2:tvec2:rvec3:tvec3:dr3dr1:dr3dt1:dr3dr2:dr3dt2:));

/**
 * Combines two rotation-and-shift transformations.
 *
 * @param rvec1 First rotation vector.
 * @param tvec1 First translation vector.
 * @param rvec2 Second rotation vector.
 * @param tvec2 Second translation vector.
 * @param rvec3 Output rotation vector of the superposition.
 * @param tvec3 Output translation vector of the superposition.
 * @param dr3dr1 Optional output derivative of rvec3 with regard to rvec1
 * @param dr3dt1 Optional output derivative of rvec3 with regard to tvec1
 * @param dr3dr2 Optional output derivative of rvec3 with regard to rvec2
 *
 * The functions compute:
 *
 * `$$\begin{array}{l} \texttt{rvec3} =  \mathrm{rodrigues} ^{-1} \left ( \mathrm{rodrigues} ( \texttt{rvec2} )  \cdot \mathrm{rodrigues} ( \texttt{rvec1} ) \right )  \\ \texttt{tvec3} =  \mathrm{rodrigues} ( \texttt{rvec2} )  \cdot \texttt{tvec1} +  \texttt{tvec2} \end{array} ,$$`
 *
 * where `$$\mathrm{rodrigues}$$` denotes a rotation vector to a rotation matrix transformation, and
 * `$$\mathrm{rodrigues}^{-1}$$` denotes the inverse transformation. See Rodrigues for details.
 *
 * Also, the functions can compute the derivatives of the output vectors with regards to the input
 * vectors (see matMulDeriv ). The functions are used inside stereoCalibrate but can also be used in
 * your own code where Levenberg-Marquardt or another gradient-based solver is used to optimize a
 * function that contains a matrix multiplication.
 */
+ (void)composeRT:(Mat*)rvec1 tvec1:(Mat*)tvec1 rvec2:(Mat*)rvec2 tvec2:(Mat*)tvec2 rvec3:(Mat*)rvec3 tvec3:(Mat*)tvec3 dr3dr1:(Mat*)dr3dr1 dr3dt1:(Mat*)dr3dt1 dr3dr2:(Mat*)dr3dr2 NS_SWIFT_NAME(composeRT(rvec1:tvec1:rvec2:tvec2:rvec3:tvec3:dr3dr1:dr3dt1:dr3dr2:));

/**
 * Combines two rotation-and-shift transformations.
 *
 * @param rvec1 First rotation vector.
 * @param tvec1 First translation vector.
 * @param rvec2 Second rotation vector.
 * @param tvec2 Second translation vector.
 * @param rvec3 Output rotation vector of the superposition.
 * @param tvec3 Output translation vector of the superposition.
 * @param dr3dr1 Optional output derivative of rvec3 with regard to rvec1
 * @param dr3dt1 Optional output derivative of rvec3 with regard to tvec1
 *
 * The functions compute:
 *
 * `$$\begin{array}{l} \texttt{rvec3} =  \mathrm{rodrigues} ^{-1} \left ( \mathrm{rodrigues} ( \texttt{rvec2} )  \cdot \mathrm{rodrigues} ( \texttt{rvec1} ) \right )  \\ \texttt{tvec3} =  \mathrm{rodrigues} ( \texttt{rvec2} )  \cdot \texttt{tvec1} +  \texttt{tvec2} \end{array} ,$$`
 *
 * where `$$\mathrm{rodrigues}$$` denotes a rotation vector to a rotation matrix transformation, and
 * `$$\mathrm{rodrigues}^{-1}$$` denotes the inverse transformation. See Rodrigues for details.
 *
 * Also, the functions can compute the derivatives of the output vectors with regards to the input
 * vectors (see matMulDeriv ). The functions are used inside stereoCalibrate but can also be used in
 * your own code where Levenberg-Marquardt or another gradient-based solver is used to optimize a
 * function that contains a matrix multiplication.
 */
+ (void)composeRT:(Mat*)rvec1 tvec1:(Mat*)tvec1 rvec2:(Mat*)rvec2 tvec2:(Mat*)tvec2 rvec3:(Mat*)rvec3 tvec3:(Mat*)tvec3 dr3dr1:(Mat*)dr3dr1 dr3dt1:(Mat*)dr3dt1 NS_SWIFT_NAME(composeRT(rvec1:tvec1:rvec2:tvec2:rvec3:tvec3:dr3dr1:dr3dt1:));

/**
 * Combines two rotation-and-shift transformations.
 *
 * @param rvec1 First rotation vector.
 * @param tvec1 First translation vector.
 * @param rvec2 Second rotation vector.
 * @param tvec2 Second translation vector.
 * @param rvec3 Output rotation vector of the superposition.
 * @param tvec3 Output translation vector of the superposition.
 * @param dr3dr1 Optional output derivative of rvec3 with regard to rvec1
 *
 * The functions compute:
 *
 * `$$\begin{array}{l} \texttt{rvec3} =  \mathrm{rodrigues} ^{-1} \left ( \mathrm{rodrigues} ( \texttt{rvec2} )  \cdot \mathrm{rodrigues} ( \texttt{rvec1} ) \right )  \\ \texttt{tvec3} =  \mathrm{rodrigues} ( \texttt{rvec2} )  \cdot \texttt{tvec1} +  \texttt{tvec2} \end{array} ,$$`
 *
 * where `$$\mathrm{rodrigues}$$` denotes a rotation vector to a rotation matrix transformation, and
 * `$$\mathrm{rodrigues}^{-1}$$` denotes the inverse transformation. See Rodrigues for details.
 *
 * Also, the functions can compute the derivatives of the output vectors with regards to the input
 * vectors (see matMulDeriv ). The functions are used inside stereoCalibrate but can also be used in
 * your own code where Levenberg-Marquardt or another gradient-based solver is used to optimize a
 * function that contains a matrix multiplication.
 */
+ (void)composeRT:(Mat*)rvec1 tvec1:(Mat*)tvec1 rvec2:(Mat*)rvec2 tvec2:(Mat*)tvec2 rvec3:(Mat*)rvec3 tvec3:(Mat*)tvec3 dr3dr1:(Mat*)dr3dr1 NS_SWIFT_NAME(composeRT(rvec1:tvec1:rvec2:tvec2:rvec3:tvec3:dr3dr1:));

/**
 * Combines two rotation-and-shift transformations.
 *
 * @param rvec1 First rotation vector.
 * @param tvec1 First translation vector.
 * @param rvec2 Second rotation vector.
 * @param tvec2 Second translation vector.
 * @param rvec3 Output rotation vector of the superposition.
 * @param tvec3 Output translation vector of the superposition.
 *
 * The functions compute:
 *
 * `$$\begin{array}{l} \texttt{rvec3} =  \mathrm{rodrigues} ^{-1} \left ( \mathrm{rodrigues} ( \texttt{rvec2} )  \cdot \mathrm{rodrigues} ( \texttt{rvec1} ) \right )  \\ \texttt{tvec3} =  \mathrm{rodrigues} ( \texttt{rvec2} )  \cdot \texttt{tvec1} +  \texttt{tvec2} \end{array} ,$$`
 *
 * where `$$\mathrm{rodrigues}$$` denotes a rotation vector to a rotation matrix transformation, and
 * `$$\mathrm{rodrigues}^{-1}$$` denotes the inverse transformation. See Rodrigues for details.
 *
 * Also, the functions can compute the derivatives of the output vectors with regards to the input
 * vectors (see matMulDeriv ). The functions are used inside stereoCalibrate but can also be used in
 * your own code where Levenberg-Marquardt or another gradient-based solver is used to optimize a
 * function that contains a matrix multiplication.
 */
+ (void)composeRT:(Mat*)rvec1 tvec1:(Mat*)tvec1 rvec2:(Mat*)rvec2 tvec2:(Mat*)tvec2 rvec3:(Mat*)rvec3 tvec3:(Mat*)tvec3 NS_SWIFT_NAME(composeRT(rvec1:tvec1:rvec2:tvec2:rvec3:tvec3:));


//
//  void cv::computeCorrespondEpilines(Mat points, int whichImage, Mat F, Mat& lines)
//
/**
 * For points in an image of a stereo pair, computes the corresponding epilines in the other image.
 *
 * @param points Input points. `$$N \times 1$$` or `$$1 \times N$$` matrix of type CV_32FC2 or
 * vector\<Point2f\> .
 * @param whichImage Index of the image (1 or 2) that contains the points .
 * @param F Fundamental matrix that can be estimated using findFundamentalMat or stereoRectify .
 * @param lines Output vector of the epipolar lines corresponding to the points in the other image.
 * Each line `$$ax + by + c=0$$` is encoded by 3 numbers `$$(a, b, c)$$` .
 *
 * For every point in one of the two images of a stereo pair, the function finds the equation of the
 * corresponding epipolar line in the other image.
 *
 * From the fundamental matrix definition (see findFundamentalMat ), line `$$l^{(2)}_i$$` in the second
 * image for the point `$$p^{(1)}_i$$` in the first image (when whichImage=1 ) is computed as:
 *
 * `$$l^{(2)}_i = F p^{(1)}_i$$`
 *
 * And vice versa, when whichImage=2, `$$l^{(1)}_i$$` is computed from `$$p^{(2)}_i$$` as:
 *
 * `$$l^{(1)}_i = F^T p^{(2)}_i$$`
 *
 * Line coefficients are defined up to a scale. They are normalized so that `$$a_i^2+b_i^2=1$$` .
 */
+ (void)computeCorrespondEpilines:(Mat*)points whichImage:(int)whichImage F:(Mat*)F lines:(Mat*)lines NS_SWIFT_NAME(computeCorrespondEpilines(points:whichImage:F:lines:));


//
//  void cv::convertPointsFromHomogeneous(Mat src, Mat& dst)
//
/**
 * Converts points from homogeneous to Euclidean space.
 *
 * @param src Input vector of N-dimensional points.
 * @param dst Output vector of N-1-dimensional points.
 *
 * The function converts points homogeneous to Euclidean space using perspective projection. That is,
 * each point (x1, x2, ... x(n-1), xn) is converted to (x1/xn, x2/xn, ..., x(n-1)/xn). When xn=0, the
 * output point coordinates will be (0,0,0,...).
 */
+ (void)convertPointsFromHomogeneous:(Mat*)src dst:(Mat*)dst NS_SWIFT_NAME(convertPointsFromHomogeneous(src:dst:));


//
//  void cv::convertPointsToHomogeneous(Mat src, Mat& dst)
//
/**
 * Converts points from Euclidean to homogeneous space.
 *
 * @param src Input vector of N-dimensional points.
 * @param dst Output vector of N+1-dimensional points.
 *
 * The function converts points from Euclidean to homogeneous space by appending 1's to the tuple of
 * point coordinates. That is, each point (x1, x2, ..., xn) is converted to (x1, x2, ..., xn, 1).
 */
+ (void)convertPointsToHomogeneous:(Mat*)src dst:(Mat*)dst NS_SWIFT_NAME(convertPointsToHomogeneous(src:dst:));


//
//  void cv::correctMatches(Mat F, Mat points1, Mat points2, Mat& newPoints1, Mat& newPoints2)
//
/**
 * Refines coordinates of corresponding points.
 *
 * @param F 3x3 fundamental matrix.
 * @param points1 1xN array containing the first set of points.
 * @param points2 1xN array containing the second set of points.
 * @param newPoints1 The optimized points1.
 * @param newPoints2 The optimized points2.
 *
 * The function implements the Optimal Triangulation Method (see Multiple View Geometry for details).
 * For each given point correspondence points1[i] \<-\> points2[i], and a fundamental matrix F, it
 * computes the corrected correspondences newPoints1[i] \<-\> newPoints2[i] that minimize the geometric
 * error `$$d(points1[i], newPoints1[i])^2 + d(points2[i],newPoints2[i])^2$$` (where `$$d(a,b)$$` is the
 * geometric distance between points `$$a$$` and `$$b$$` ) subject to the epipolar constraint
 * `$$newPoints2^T * F * newPoints1 = 0$$` .
 */
+ (void)correctMatches:(Mat*)F points1:(Mat*)points1 points2:(Mat*)points2 newPoints1:(Mat*)newPoints1 newPoints2:(Mat*)newPoints2 NS_SWIFT_NAME(correctMatches(F:points1:points2:newPoints1:newPoints2:));


//
//  void cv::decomposeEssentialMat(Mat E, Mat& R1, Mat& R2, Mat& t)
//
/**
 * Decompose an essential matrix to possible rotations and translation.
 *
 * @param E The input essential matrix.
 * @param R1 One possible rotation matrix.
 * @param R2 Another possible rotation matrix.
 * @param t One possible translation.
 *
 * This function decomposes the essential matrix E using svd decomposition CITE: HartleyZ00. In
 * general, four possible poses exist for the decomposition of E. They are `$$[R_1, t]$$`,
 * `$$[R_1, -t]$$`, `$$[R_2, t]$$`, `$$[R_2, -t]$$`.
 *
 * If E gives the epipolar constraint `$$[p_2; 1]^T A^{-T} E A^{-1} [p_1; 1] = 0$$` between the image
 * points `$$p_1$$` in the first image and `$$p_2$$` in second image, then any of the tuples
 * `$$[R_1, t]$$`, `$$[R_1, -t]$$`, `$$[R_2, t]$$`, `$$[R_2, -t]$$` is a change of basis from the first
 * camera's coordinate system to the second camera's coordinate system. However, by decomposing E, one
 * can only get the direction of the translation. For this reason, the translation t is returned with
 * unit length.
 */
+ (void)decomposeEssentialMat:(Mat*)E R1:(Mat*)R1 R2:(Mat*)R2 t:(Mat*)t NS_SWIFT_NAME(decomposeEssentialMat(E:R1:R2:t:));


//
//  void cv::decomposeProjectionMatrix(Mat projMatrix, Mat& cameraMatrix, Mat& rotMatrix, Mat& transVect, Mat& rotMatrixX = Mat(), Mat& rotMatrixY = Mat(), Mat& rotMatrixZ = Mat(), Mat& eulerAngles = Mat())
//
/**
 * Decomposes a projection matrix into a rotation matrix and a camera matrix.
 *
 * @param projMatrix 3x4 input projection matrix P.
 * @param cameraMatrix Output 3x3 camera matrix K.
 * @param rotMatrix Output 3x3 external rotation matrix R.
 * @param transVect Output 4x1 translation vector T.
 * @param rotMatrixX Optional 3x3 rotation matrix around x-axis.
 * @param rotMatrixY Optional 3x3 rotation matrix around y-axis.
 * @param rotMatrixZ Optional 3x3 rotation matrix around z-axis.
 * @param eulerAngles Optional three-element vector containing three Euler angles of rotation in
 * degrees.
 *
 * The function computes a decomposition of a projection matrix into a calibration and a rotation
 * matrix and the position of a camera.
 *
 * It optionally returns three rotation matrices, one for each axis, and three Euler angles that could
 * be used in OpenGL. Note, there is always more than one sequence of rotations about the three
 * principal axes that results in the same orientation of an object, e.g. see CITE: Slabaugh . Returned
 * tree rotation matrices and corresponding three Euler angles are only one of the possible solutions.
 *
 * The function is based on RQDecomp3x3 .
 */
+ (void)decomposeProjectionMatrix:(Mat*)projMatrix cameraMatrix:(Mat*)cameraMatrix rotMatrix:(Mat*)rotMatrix transVect:(Mat*)transVect rotMatrixX:(Mat*)rotMatrixX rotMatrixY:(Mat*)rotMatrixY rotMatrixZ:(Mat*)rotMatrixZ eulerAngles:(Mat*)eulerAngles NS_SWIFT_NAME(decomposeProjectionMatrix(projMatrix:cameraMatrix:rotMatrix:transVect:rotMatrixX:rotMatrixY:rotMatrixZ:eulerAngles:));

/**
 * Decomposes a projection matrix into a rotation matrix and a camera matrix.
 *
 * @param projMatrix 3x4 input projection matrix P.
 * @param cameraMatrix Output 3x3 camera matrix K.
 * @param rotMatrix Output 3x3 external rotation matrix R.
 * @param transVect Output 4x1 translation vector T.
 * @param rotMatrixX Optional 3x3 rotation matrix around x-axis.
 * @param rotMatrixY Optional 3x3 rotation matrix around y-axis.
 * @param rotMatrixZ Optional 3x3 rotation matrix around z-axis.
 * degrees.
 *
 * The function computes a decomposition of a projection matrix into a calibration and a rotation
 * matrix and the position of a camera.
 *
 * It optionally returns three rotation matrices, one for each axis, and three Euler angles that could
 * be used in OpenGL. Note, there is always more than one sequence of rotations about the three
 * principal axes that results in the same orientation of an object, e.g. see CITE: Slabaugh . Returned
 * tree rotation matrices and corresponding three Euler angles are only one of the possible solutions.
 *
 * The function is based on RQDecomp3x3 .
 */
+ (void)decomposeProjectionMatrix:(Mat*)projMatrix cameraMatrix:(Mat*)cameraMatrix rotMatrix:(Mat*)rotMatrix transVect:(Mat*)transVect rotMatrixX:(Mat*)rotMatrixX rotMatrixY:(Mat*)rotMatrixY rotMatrixZ:(Mat*)rotMatrixZ NS_SWIFT_NAME(decomposeProjectionMatrix(projMatrix:cameraMatrix:rotMatrix:transVect:rotMatrixX:rotMatrixY:rotMatrixZ:));

/**
 * Decomposes a projection matrix into a rotation matrix and a camera matrix.
 *
 * @param projMatrix 3x4 input projection matrix P.
 * @param cameraMatrix Output 3x3 camera matrix K.
 * @param rotMatrix Output 3x3 external rotation matrix R.
 * @param transVect Output 4x1 translation vector T.
 * @param rotMatrixX Optional 3x3 rotation matrix around x-axis.
 * @param rotMatrixY Optional 3x3 rotation matrix around y-axis.
 * degrees.
 *
 * The function computes a decomposition of a projection matrix into a calibration and a rotation
 * matrix and the position of a camera.
 *
 * It optionally returns three rotation matrices, one for each axis, and three Euler angles that could
 * be used in OpenGL. Note, there is always more than one sequence of rotations about the three
 * principal axes that results in the same orientation of an object, e.g. see CITE: Slabaugh . Returned
 * tree rotation matrices and corresponding three Euler angles are only one of the possible solutions.
 *
 * The function is based on RQDecomp3x3 .
 */
+ (void)decomposeProjectionMatrix:(Mat*)projMatrix cameraMatrix:(Mat*)cameraMatrix rotMatrix:(Mat*)rotMatrix transVect:(Mat*)transVect rotMatrixX:(Mat*)rotMatrixX rotMatrixY:(Mat*)rotMatrixY NS_SWIFT_NAME(decomposeProjectionMatrix(projMatrix:cameraMatrix:rotMatrix:transVect:rotMatrixX:rotMatrixY:));

/**
 * Decomposes a projection matrix into a rotation matrix and a camera matrix.
 *
 * @param projMatrix 3x4 input projection matrix P.
 * @param cameraMatrix Output 3x3 camera matrix K.
 * @param rotMatrix Output 3x3 external rotation matrix R.
 * @param transVect Output 4x1 translation vector T.
 * @param rotMatrixX Optional 3x3 rotation matrix around x-axis.
 * degrees.
 *
 * The function computes a decomposition of a projection matrix into a calibration and a rotation
 * matrix and the position of a camera.
 *
 * It optionally returns three rotation matrices, one for each axis, and three Euler angles that could
 * be used in OpenGL. Note, there is always more than one sequence of rotations about the three
 * principal axes that results in the same orientation of an object, e.g. see CITE: Slabaugh . Returned
 * tree rotation matrices and corresponding three Euler angles are only one of the possible solutions.
 *
 * The function is based on RQDecomp3x3 .
 */
+ (void)decomposeProjectionMatrix:(Mat*)projMatrix cameraMatrix:(Mat*)cameraMatrix rotMatrix:(Mat*)rotMatrix transVect:(Mat*)transVect rotMatrixX:(Mat*)rotMatrixX NS_SWIFT_NAME(decomposeProjectionMatrix(projMatrix:cameraMatrix:rotMatrix:transVect:rotMatrixX:));

/**
 * Decomposes a projection matrix into a rotation matrix and a camera matrix.
 *
 * @param projMatrix 3x4 input projection matrix P.
 * @param cameraMatrix Output 3x3 camera matrix K.
 * @param rotMatrix Output 3x3 external rotation matrix R.
 * @param transVect Output 4x1 translation vector T.
 * degrees.
 *
 * The function computes a decomposition of a projection matrix into a calibration and a rotation
 * matrix and the position of a camera.
 *
 * It optionally returns three rotation matrices, one for each axis, and three Euler angles that could
 * be used in OpenGL. Note, there is always more than one sequence of rotations about the three
 * principal axes that results in the same orientation of an object, e.g. see CITE: Slabaugh . Returned
 * tree rotation matrices and corresponding three Euler angles are only one of the possible solutions.
 *
 * The function is based on RQDecomp3x3 .
 */
+ (void)decomposeProjectionMatrix:(Mat*)projMatrix cameraMatrix:(Mat*)cameraMatrix rotMatrix:(Mat*)rotMatrix transVect:(Mat*)transVect NS_SWIFT_NAME(decomposeProjectionMatrix(projMatrix:cameraMatrix:rotMatrix:transVect:));


//
//  void cv::drawChessboardCorners(Mat& image, Size patternSize, Mat corners, bool patternWasFound)
//
/**
 * Renders the detected chessboard corners.
 *
 * @param image Destination image. It must be an 8-bit color image.
 * @param patternSize Number of inner corners per a chessboard row and column
 * (patternSize = cv::Size(points_per_row,points_per_column)).
 * @param corners Array of detected corners, the output of findChessboardCorners.
 * @param patternWasFound Parameter indicating whether the complete board was found or not. The
 * return value of findChessboardCorners should be passed here.
 *
 * The function draws individual chessboard corners detected either as red circles if the board was not
 * found, or as colored corners connected with lines if the board was found.
 */
+ (void)drawChessboardCorners:(Mat*)image patternSize:(Size2i*)patternSize corners:(Mat*)corners patternWasFound:(BOOL)patternWasFound NS_SWIFT_NAME(drawChessboardCorners(image:patternSize:corners:patternWasFound:));


//
//  void cv::drawFrameAxes(Mat& image, Mat cameraMatrix, Mat distCoeffs, Mat rvec, Mat tvec, float length, int thickness = 3)
//
/**
 * Draw axes of the world/object coordinate system from pose estimation. @see `+solvePnP:imagePoints:cameraMatrix:distCoeffs:rvec:tvec:useExtrinsicGuess:flags:`
 *
 * @param image Input/output image. It must have 1 or 3 channels. The number of channels is not altered.
 * @param cameraMatrix Input 3x3 floating-point matrix of camera intrinsic parameters.
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$`
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is empty, the zero distortion coefficients are assumed.
 * @param rvec Rotation vector (see REF: Rodrigues ) that, together with tvec, brings points from
 * the model coordinate system to the camera coordinate system.
 * @param tvec Translation vector.
 * @param length Length of the painted axes in the same unit than tvec (usually in meters).
 * @param thickness Line thickness of the painted axes.
 *
 * This function draws the axes of the world/object coordinate system w.r.t. to the camera frame.
 * OX is drawn in red, OY in green and OZ in blue.
 */
+ (void)drawFrameAxes:(Mat*)image cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvec:(Mat*)rvec tvec:(Mat*)tvec length:(float)length thickness:(int)thickness NS_SWIFT_NAME(drawFrameAxes(image:cameraMatrix:distCoeffs:rvec:tvec:length:thickness:));

/**
 * Draw axes of the world/object coordinate system from pose estimation. @see `+solvePnP:imagePoints:cameraMatrix:distCoeffs:rvec:tvec:useExtrinsicGuess:flags:`
 *
 * @param image Input/output image. It must have 1 or 3 channels. The number of channels is not altered.
 * @param cameraMatrix Input 3x3 floating-point matrix of camera intrinsic parameters.
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$`
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is empty, the zero distortion coefficients are assumed.
 * @param rvec Rotation vector (see REF: Rodrigues ) that, together with tvec, brings points from
 * the model coordinate system to the camera coordinate system.
 * @param tvec Translation vector.
 * @param length Length of the painted axes in the same unit than tvec (usually in meters).
 *
 * This function draws the axes of the world/object coordinate system w.r.t. to the camera frame.
 * OX is drawn in red, OY in green and OZ in blue.
 */
+ (void)drawFrameAxes:(Mat*)image cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvec:(Mat*)rvec tvec:(Mat*)tvec length:(float)length NS_SWIFT_NAME(drawFrameAxes(image:cameraMatrix:distCoeffs:rvec:tvec:length:));


//
//  void cv::filterHomographyDecompByVisibleRefpoints(vector_Mat rotations, vector_Mat normals, Mat beforePoints, Mat afterPoints, Mat& possibleSolutions, Mat pointsMask = Mat())
//
/**
 * Filters homography decompositions based on additional information.
 *
 * @param rotations Vector of rotation matrices.
 * @param normals Vector of plane normal matrices.
 * @param beforePoints Vector of (rectified) visible reference points before the homography is applied
 * @param afterPoints Vector of (rectified) visible reference points after the homography is applied
 * @param possibleSolutions Vector of int indices representing the viable solution set after filtering
 * @param pointsMask optional Mat/Vector of 8u type representing the mask for the inliers as given by the findHomography function
 *
 * This function is intended to filter the output of the decomposeHomographyMat based on additional
 * information as described in CITE: Malis . The summary of the method: the decomposeHomographyMat function
 * returns 2 unique solutions and their "opposites" for a total of 4 solutions. If we have access to the
 * sets of points visible in the camera frame before and after the homography transformation is applied,
 * we can determine which are the true potential solutions and which are the opposites by verifying which
 * homographies are consistent with all visible reference points being in front of the camera. The inputs
 * are left unchanged; the filtered solution set is returned as indices into the existing one.
 */
+ (void)filterHomographyDecompByVisibleRefpoints:(NSArray<Mat*>*)rotations normals:(NSArray<Mat*>*)normals beforePoints:(Mat*)beforePoints afterPoints:(Mat*)afterPoints possibleSolutions:(Mat*)possibleSolutions pointsMask:(Mat*)pointsMask NS_SWIFT_NAME(filterHomographyDecompByVisibleRefpoints(rotations:normals:beforePoints:afterPoints:possibleSolutions:pointsMask:));

/**
 * Filters homography decompositions based on additional information.
 *
 * @param rotations Vector of rotation matrices.
 * @param normals Vector of plane normal matrices.
 * @param beforePoints Vector of (rectified) visible reference points before the homography is applied
 * @param afterPoints Vector of (rectified) visible reference points after the homography is applied
 * @param possibleSolutions Vector of int indices representing the viable solution set after filtering
 *
 * This function is intended to filter the output of the decomposeHomographyMat based on additional
 * information as described in CITE: Malis . The summary of the method: the decomposeHomographyMat function
 * returns 2 unique solutions and their "opposites" for a total of 4 solutions. If we have access to the
 * sets of points visible in the camera frame before and after the homography transformation is applied,
 * we can determine which are the true potential solutions and which are the opposites by verifying which
 * homographies are consistent with all visible reference points being in front of the camera. The inputs
 * are left unchanged; the filtered solution set is returned as indices into the existing one.
 */
+ (void)filterHomographyDecompByVisibleRefpoints:(NSArray<Mat*>*)rotations normals:(NSArray<Mat*>*)normals beforePoints:(Mat*)beforePoints afterPoints:(Mat*)afterPoints possibleSolutions:(Mat*)possibleSolutions NS_SWIFT_NAME(filterHomographyDecompByVisibleRefpoints(rotations:normals:beforePoints:afterPoints:possibleSolutions:));


//
//  void cv::filterSpeckles(Mat& img, double newVal, int maxSpeckleSize, double maxDiff, Mat& buf = Mat())
//
/**
 * Filters off small noise blobs (speckles) in the disparity map
 *
 * @param img The input 16-bit signed disparity image
 * @param newVal The disparity value used to paint-off the speckles
 * @param maxSpeckleSize The maximum speckle size to consider it a speckle. Larger blobs are not
 * affected by the algorithm
 * @param maxDiff Maximum difference between neighbor disparity pixels to put them into the same
 * blob. Note that since StereoBM, StereoSGBM and may be other algorithms return a fixed-point
 * disparity map, where disparity values are multiplied by 16, this scale factor should be taken into
 * account when specifying this parameter value.
 * @param buf The optional temporary buffer to avoid memory allocation within the function.
 */
+ (void)filterSpeckles:(Mat*)img newVal:(double)newVal maxSpeckleSize:(int)maxSpeckleSize maxDiff:(double)maxDiff buf:(Mat*)buf NS_SWIFT_NAME(filterSpeckles(img:newVal:maxSpeckleSize:maxDiff:buf:));

/**
 * Filters off small noise blobs (speckles) in the disparity map
 *
 * @param img The input 16-bit signed disparity image
 * @param newVal The disparity value used to paint-off the speckles
 * @param maxSpeckleSize The maximum speckle size to consider it a speckle. Larger blobs are not
 * affected by the algorithm
 * @param maxDiff Maximum difference between neighbor disparity pixels to put them into the same
 * blob. Note that since StereoBM, StereoSGBM and may be other algorithms return a fixed-point
 * disparity map, where disparity values are multiplied by 16, this scale factor should be taken into
 * account when specifying this parameter value.
 */
+ (void)filterSpeckles:(Mat*)img newVal:(double)newVal maxSpeckleSize:(int)maxSpeckleSize maxDiff:(double)maxDiff NS_SWIFT_NAME(filterSpeckles(img:newVal:maxSpeckleSize:maxDiff:));


//
//  void cv::initUndistortRectifyMap(Mat cameraMatrix, Mat distCoeffs, Mat R, Mat newCameraMatrix, Size size, int m1type, Mat& map1, Mat& map2)
//
/**
 * Computes the undistortion and rectification transformation map.
 *
 * The function computes the joint undistortion and rectification transformation and represents the
 * result in the form of maps for remap. The undistorted image looks like original, as if it is
 * captured with a camera using the camera matrix =newCameraMatrix and zero distortion. In case of a
 * monocular camera, newCameraMatrix is usually equal to cameraMatrix, or it can be computed by
 * #getOptimalNewCameraMatrix for a better control over scaling. In case of a stereo camera,
 * newCameraMatrix is normally set to P1 or P2 computed by #stereoRectify .
 *
 * Also, this new camera is oriented differently in the coordinate space, according to R. That, for
 * example, helps to align two heads of a stereo camera so that the epipolar lines on both images
 * become horizontal and have the same y- coordinate (in case of a horizontally aligned stereo camera).
 *
 * The function actually builds the maps for the inverse mapping algorithm that is used by remap. That
 * is, for each pixel `$$(u, v)$$` in the destination (corrected and rectified) image, the function
 * computes the corresponding coordinates in the source image (that is, in the original image from
 * camera). The following process is applied:
 * `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } 
 * \begin{array}{l}
 * x  \leftarrow (u - {c'}_x)/{f'}_x  \\
 * y  \leftarrow (v - {c'}_y)/{f'}_y  \\
 * {[X\,Y\,W]} ^T  \leftarrow R^{-1}*[x \, y \, 1]^T  \\
 * x'  \leftarrow X/W  \\
 * y'  \leftarrow Y/W  \\
 * r^2  \leftarrow x'^2 + y'^2 \\
 * x''  \leftarrow x' \frac{1 + k_1 r^2 + k_2 r^4 + k_3 r^6}{1 + k_4 r^2 + k_5 r^4 + k_6 r^6}
 * + 2p_1 x' y' + p_2(r^2 + 2 x'^2)  + s_1 r^2 + s_2 r^4\\
 * y''  \leftarrow y' \frac{1 + k_1 r^2 + k_2 r^4 + k_3 r^6}{1 + k_4 r^2 + k_5 r^4 + k_6 r^6}
 * + p_1 (r^2 + 2 y'^2) + 2 p_2 x' y' + s_3 r^2 + s_4 r^4 \\
 * s\vecthree{x'''}{y'''}{1} =
 * \vecthreethree{R_{33}(\tau_x, \tau_y)}{0}{-R_{13}((\tau_x, \tau_y)}
 * {0}{R_{33}(\tau_x, \tau_y)}{-R_{23}(\tau_x, \tau_y)}
 * {0}{0}{1} R(\tau_x, \tau_y) \vecthree{x''}{y''}{1}\\
 * map_x(u,v)  \leftarrow x''' f_x + c_x  \\
 * map_y(u,v)  \leftarrow y''' f_y + c_y
 * \end{array}
 * $$`
 * where `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6[, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$`
 * are the distortion coefficients.
 *
 * In case of a stereo camera, this function is called twice: once for each camera head, after
 * stereoRectify, which in its turn is called after #stereoCalibrate. But if the stereo camera
 * was not calibrated, it is still possible to compute the rectification transformations directly from
 * the fundamental matrix using #stereoRectifyUncalibrated. For each camera, the function computes
 * homography H as the rectification transformation in a pixel domain, not a rotation matrix R in 3D
 * space. R can be computed from H as
 * `$$\texttt{R} = \texttt{cameraMatrix} ^{-1} \cdot \texttt{H} \cdot \texttt{cameraMatrix}$$`
 * where cameraMatrix can be chosen arbitrarily.
 *
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A=\vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6[, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$`
 * of 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are assumed.
 * @param R Optional rectification transformation in the object space (3x3 matrix). R1 or R2 ,
 * computed by #stereoRectify can be passed here. If the matrix is empty, the identity transformation
 * is assumed. In cvInitUndistortMap R assumed to be an identity matrix.
 * @param newCameraMatrix New camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A'=\vecthreethree{f_x'}{0}{c_x'}{0}{f_y'}{c_y'}{0}{0}{1}$$`.
 * @param size Undistorted image size.
 * @param m1type Type of the first output map that can be CV_32FC1, CV_32FC2 or CV_16SC2, see #convertMaps
 * @param map1 The first output map.
 * @param map2 The second output map.
 */
+ (void)initUndistortRectifyMap:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs R:(Mat*)R newCameraMatrix:(Mat*)newCameraMatrix size:(Size2i*)size m1type:(int)m1type map1:(Mat*)map1 map2:(Mat*)map2 NS_SWIFT_NAME(initUndistortRectifyMap(cameraMatrix:distCoeffs:R:newCameraMatrix:size:m1type:map1:map2:));


//
//  void cv::matMulDeriv(Mat A, Mat B, Mat& dABdA, Mat& dABdB)
//
/**
 * Computes partial derivatives of the matrix product for each multiplied matrix.
 *
 * @param A First multiplied matrix.
 * @param B Second multiplied matrix.
 * @param dABdA First output derivative matrix d(A\*B)/dA of size
 * `$$\texttt{A.rows*B.cols} \times {A.rows*A.cols}$$` .
 * @param dABdB Second output derivative matrix d(A\*B)/dB of size
 * `$$\texttt{A.rows*B.cols} \times {B.rows*B.cols}$$` .
 *
 * The function computes partial derivatives of the elements of the matrix product `$$A*B$$` with regard to
 * the elements of each of the two input matrices. The function is used to compute the Jacobian
 * matrices in stereoCalibrate but can also be used in any other similar optimization function.
 */
+ (void)matMulDeriv:(Mat*)A B:(Mat*)B dABdA:(Mat*)dABdA dABdB:(Mat*)dABdB NS_SWIFT_NAME(matMulDeriv(A:B:dABdA:dABdB:));


//
//  void cv::projectPoints(Mat objectPoints, Mat rvec, Mat tvec, Mat cameraMatrix, Mat distCoeffs, Mat& imagePoints, Mat& jacobian = Mat(), double aspectRatio = 0)
//
/**
 * Projects 3D points to an image plane.
 *
 * @param objectPoints Array of object points expressed wrt. the world coordinate frame. A 3xN/Nx3
 * 1-channel or 1xN/Nx1 3-channel (or vector\<Point3f\> ), where N is the number of points in the view.
 * @param rvec The rotation vector (REF: Rodrigues) that, together with tvec, performs a change of
 * basis from world to camera coordinate system, see REF: calibrateCamera for details.
 * @param tvec The translation vector, see parameter description above.
 * @param cameraMatrix Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{_1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is empty, the zero distortion coefficients are assumed.
 * @param imagePoints Output array of image points, 1xN/Nx1 2-channel, or
 * vector\<Point2f\> .
 * @param jacobian Optional output 2Nx(10+\<numDistCoeffs\>) jacobian matrix of derivatives of image
 * points with respect to components of the rotation vector, translation vector, focal lengths,
 * coordinates of the principal point and the distortion coefficients. In the old interface different
 * components of the jacobian are returned via different output parameters.
 * @param aspectRatio Optional "fixed aspect ratio" parameter. If the parameter is not 0, the
 * function assumes that the aspect ratio (`$$f_x / f_y$$`) is fixed and correspondingly adjusts the
 * jacobian matrix.
 *
 * The function computes the 2D projections of 3D points to the image plane, given intrinsic and
 * extrinsic camera parameters. Optionally, the function computes Jacobians -matrices of partial
 * derivatives of image points coordinates (as functions of all the input parameters) with respect to
 * the particular parameters, intrinsic and/or extrinsic. The Jacobians are used during the global
 * optimization in REF: calibrateCamera, REF: solvePnP, and REF: stereoCalibrate. The function itself
 * can also be used to compute a re-projection error, given the current intrinsic and extrinsic
 * parameters.
 *
 * @note By setting rvec = tvec = `$$[0, 0, 0]$$`, or by setting cameraMatrix to a 3x3 identity matrix,
 * or by passing zero distortion coefficients, one can get various useful partial cases of the
 * function. This means, one can compute the distorted coordinates for a sparse set of points or apply
 * a perspective transformation (and also compute the derivatives) in the ideal zero-distortion setup.
 */
+ (void)projectPoints:(Mat*)objectPoints rvec:(Mat*)rvec tvec:(Mat*)tvec cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs imagePoints:(Mat*)imagePoints jacobian:(Mat*)jacobian aspectRatio:(double)aspectRatio NS_SWIFT_NAME(projectPoints(objectPoints:rvec:tvec:cameraMatrix:distCoeffs:imagePoints:jacobian:aspectRatio:));

/**
 * Projects 3D points to an image plane.
 *
 * @param objectPoints Array of object points expressed wrt. the world coordinate frame. A 3xN/Nx3
 * 1-channel or 1xN/Nx1 3-channel (or vector\<Point3f\> ), where N is the number of points in the view.
 * @param rvec The rotation vector (REF: Rodrigues) that, together with tvec, performs a change of
 * basis from world to camera coordinate system, see REF: calibrateCamera for details.
 * @param tvec The translation vector, see parameter description above.
 * @param cameraMatrix Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{_1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is empty, the zero distortion coefficients are assumed.
 * @param imagePoints Output array of image points, 1xN/Nx1 2-channel, or
 * vector\<Point2f\> .
 * @param jacobian Optional output 2Nx(10+\<numDistCoeffs\>) jacobian matrix of derivatives of image
 * points with respect to components of the rotation vector, translation vector, focal lengths,
 * coordinates of the principal point and the distortion coefficients. In the old interface different
 * components of the jacobian are returned via different output parameters.
 * function assumes that the aspect ratio (`$$f_x / f_y$$`) is fixed and correspondingly adjusts the
 * jacobian matrix.
 *
 * The function computes the 2D projections of 3D points to the image plane, given intrinsic and
 * extrinsic camera parameters. Optionally, the function computes Jacobians -matrices of partial
 * derivatives of image points coordinates (as functions of all the input parameters) with respect to
 * the particular parameters, intrinsic and/or extrinsic. The Jacobians are used during the global
 * optimization in REF: calibrateCamera, REF: solvePnP, and REF: stereoCalibrate. The function itself
 * can also be used to compute a re-projection error, given the current intrinsic and extrinsic
 * parameters.
 *
 * @note By setting rvec = tvec = `$$[0, 0, 0]$$`, or by setting cameraMatrix to a 3x3 identity matrix,
 * or by passing zero distortion coefficients, one can get various useful partial cases of the
 * function. This means, one can compute the distorted coordinates for a sparse set of points or apply
 * a perspective transformation (and also compute the derivatives) in the ideal zero-distortion setup.
 */
+ (void)projectPoints:(Mat*)objectPoints rvec:(Mat*)rvec tvec:(Mat*)tvec cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs imagePoints:(Mat*)imagePoints jacobian:(Mat*)jacobian NS_SWIFT_NAME(projectPoints(objectPoints:rvec:tvec:cameraMatrix:distCoeffs:imagePoints:jacobian:));

/**
 * Projects 3D points to an image plane.
 *
 * @param objectPoints Array of object points expressed wrt. the world coordinate frame. A 3xN/Nx3
 * 1-channel or 1xN/Nx1 3-channel (or vector\<Point3f\> ), where N is the number of points in the view.
 * @param rvec The rotation vector (REF: Rodrigues) that, together with tvec, performs a change of
 * basis from world to camera coordinate system, see REF: calibrateCamera for details.
 * @param tvec The translation vector, see parameter description above.
 * @param cameraMatrix Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{_1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is empty, the zero distortion coefficients are assumed.
 * @param imagePoints Output array of image points, 1xN/Nx1 2-channel, or
 * vector\<Point2f\> .
 * points with respect to components of the rotation vector, translation vector, focal lengths,
 * coordinates of the principal point and the distortion coefficients. In the old interface different
 * components of the jacobian are returned via different output parameters.
 * function assumes that the aspect ratio (`$$f_x / f_y$$`) is fixed and correspondingly adjusts the
 * jacobian matrix.
 *
 * The function computes the 2D projections of 3D points to the image plane, given intrinsic and
 * extrinsic camera parameters. Optionally, the function computes Jacobians -matrices of partial
 * derivatives of image points coordinates (as functions of all the input parameters) with respect to
 * the particular parameters, intrinsic and/or extrinsic. The Jacobians are used during the global
 * optimization in REF: calibrateCamera, REF: solvePnP, and REF: stereoCalibrate. The function itself
 * can also be used to compute a re-projection error, given the current intrinsic and extrinsic
 * parameters.
 *
 * @note By setting rvec = tvec = `$$[0, 0, 0]$$`, or by setting cameraMatrix to a 3x3 identity matrix,
 * or by passing zero distortion coefficients, one can get various useful partial cases of the
 * function. This means, one can compute the distorted coordinates for a sparse set of points or apply
 * a perspective transformation (and also compute the derivatives) in the ideal zero-distortion setup.
 */
+ (void)projectPoints:(Mat*)objectPoints rvec:(Mat*)rvec tvec:(Mat*)tvec cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs imagePoints:(Mat*)imagePoints NS_SWIFT_NAME(projectPoints(objectPoints:rvec:tvec:cameraMatrix:distCoeffs:imagePoints:));


//
//  void cv::reprojectImageTo3D(Mat disparity, Mat& _3dImage, Mat Q, bool handleMissingValues = false, int ddepth = -1)
//
/**
 * Reprojects a disparity image to 3D space.
 *
 * @param disparity Input single-channel 8-bit unsigned, 16-bit signed, 32-bit signed or 32-bit
 * floating-point disparity image. The values of 8-bit / 16-bit signed formats are assumed to have no
 * fractional bits. If the disparity is 16-bit signed format, as computed by REF: StereoBM or
 * REF: StereoSGBM and maybe other algorithms, it should be divided by 16 (and scaled to float) before
 * being used here.
 * @param _3dImage Output 3-channel floating-point image of the same size as disparity. Each element of
 * _3dImage(x,y) contains 3D coordinates of the point (x,y) computed from the disparity map. If one
 * uses Q obtained by REF: stereoRectify, then the returned points are represented in the first
 * camera's rectified coordinate system.
 * @param Q `$$4 \times 4$$` perspective transformation matrix that can be obtained with
 * REF: stereoRectify.
 * @param handleMissingValues Indicates, whether the function should handle missing values (i.e.
 * points where the disparity was not computed). If handleMissingValues=true, then pixels with the
 * minimal disparity that corresponds to the outliers (see StereoMatcher::compute ) are transformed
 * to 3D points with a very large Z value (currently set to 10000).
 * @param ddepth The optional output array depth. If it is -1, the output image will have CV_32F
 * depth. ddepth can also be set to CV_16S, CV_32S or CV_32F.
 *
 * The function transforms a single-channel disparity map to a 3-channel image representing a 3D
 * surface. That is, for each pixel (x,y) and the corresponding disparity d=disparity(x,y) , it
 * computes:
 *
 * `$$\begin{bmatrix}
 * X \\
 * Y \\
 * Z \\
 * W
 * \end{bmatrix} = Q \begin{bmatrix}
 * x \\
 * y \\
 * \texttt{disparity} (x,y) \\
 * z
 * \end{bmatrix}.$$`
 *
 * @sa
 *    To reproject a sparse set of points {(x,y,d),...} to 3D space, use perspectiveTransform.
 */
+ (void)reprojectImageTo3D:(Mat*)disparity _3dImage:(Mat*)_3dImage Q:(Mat*)Q handleMissingValues:(BOOL)handleMissingValues ddepth:(int)ddepth NS_SWIFT_NAME(reprojectImageTo3D(disparity:_3dImage:Q:handleMissingValues:ddepth:));

/**
 * Reprojects a disparity image to 3D space.
 *
 * @param disparity Input single-channel 8-bit unsigned, 16-bit signed, 32-bit signed or 32-bit
 * floating-point disparity image. The values of 8-bit / 16-bit signed formats are assumed to have no
 * fractional bits. If the disparity is 16-bit signed format, as computed by REF: StereoBM or
 * REF: StereoSGBM and maybe other algorithms, it should be divided by 16 (and scaled to float) before
 * being used here.
 * @param _3dImage Output 3-channel floating-point image of the same size as disparity. Each element of
 * _3dImage(x,y) contains 3D coordinates of the point (x,y) computed from the disparity map. If one
 * uses Q obtained by REF: stereoRectify, then the returned points are represented in the first
 * camera's rectified coordinate system.
 * @param Q `$$4 \times 4$$` perspective transformation matrix that can be obtained with
 * REF: stereoRectify.
 * @param handleMissingValues Indicates, whether the function should handle missing values (i.e.
 * points where the disparity was not computed). If handleMissingValues=true, then pixels with the
 * minimal disparity that corresponds to the outliers (see StereoMatcher::compute ) are transformed
 * to 3D points with a very large Z value (currently set to 10000).
 * depth. ddepth can also be set to CV_16S, CV_32S or CV_32F.
 *
 * The function transforms a single-channel disparity map to a 3-channel image representing a 3D
 * surface. That is, for each pixel (x,y) and the corresponding disparity d=disparity(x,y) , it
 * computes:
 *
 * `$$\begin{bmatrix}
 * X \\
 * Y \\
 * Z \\
 * W
 * \end{bmatrix} = Q \begin{bmatrix}
 * x \\
 * y \\
 * \texttt{disparity} (x,y) \\
 * z
 * \end{bmatrix}.$$`
 *
 * @sa
 *    To reproject a sparse set of points {(x,y,d),...} to 3D space, use perspectiveTransform.
 */
+ (void)reprojectImageTo3D:(Mat*)disparity _3dImage:(Mat*)_3dImage Q:(Mat*)Q handleMissingValues:(BOOL)handleMissingValues NS_SWIFT_NAME(reprojectImageTo3D(disparity:_3dImage:Q:handleMissingValues:));

/**
 * Reprojects a disparity image to 3D space.
 *
 * @param disparity Input single-channel 8-bit unsigned, 16-bit signed, 32-bit signed or 32-bit
 * floating-point disparity image. The values of 8-bit / 16-bit signed formats are assumed to have no
 * fractional bits. If the disparity is 16-bit signed format, as computed by REF: StereoBM or
 * REF: StereoSGBM and maybe other algorithms, it should be divided by 16 (and scaled to float) before
 * being used here.
 * @param _3dImage Output 3-channel floating-point image of the same size as disparity. Each element of
 * _3dImage(x,y) contains 3D coordinates of the point (x,y) computed from the disparity map. If one
 * uses Q obtained by REF: stereoRectify, then the returned points are represented in the first
 * camera's rectified coordinate system.
 * @param Q `$$4 \times 4$$` perspective transformation matrix that can be obtained with
 * REF: stereoRectify.
 * points where the disparity was not computed). If handleMissingValues=true, then pixels with the
 * minimal disparity that corresponds to the outliers (see StereoMatcher::compute ) are transformed
 * to 3D points with a very large Z value (currently set to 10000).
 * depth. ddepth can also be set to CV_16S, CV_32S or CV_32F.
 *
 * The function transforms a single-channel disparity map to a 3-channel image representing a 3D
 * surface. That is, for each pixel (x,y) and the corresponding disparity d=disparity(x,y) , it
 * computes:
 *
 * `$$\begin{bmatrix}
 * X \\
 * Y \\
 * Z \\
 * W
 * \end{bmatrix} = Q \begin{bmatrix}
 * x \\
 * y \\
 * \texttt{disparity} (x,y) \\
 * z
 * \end{bmatrix}.$$`
 *
 * @sa
 *    To reproject a sparse set of points {(x,y,d),...} to 3D space, use perspectiveTransform.
 */
+ (void)reprojectImageTo3D:(Mat*)disparity _3dImage:(Mat*)_3dImage Q:(Mat*)Q NS_SWIFT_NAME(reprojectImageTo3D(disparity:_3dImage:Q:));


//
//  void cv::solvePnPRefineLM(Mat objectPoints, Mat imagePoints, Mat cameraMatrix, Mat distCoeffs, Mat& rvec, Mat& tvec, TermCriteria criteria = TermCriteria(TermCriteria::EPS + TermCriteria::COUNT, 20, FLT_EPSILON))
//
/**
 * Refine a pose (the translation and the rotation that transform a 3D point expressed in the object coordinate frame
 * to the camera coordinate frame) from a 3D-2D point correspondences and starting from an initial solution.
 *
 * @param objectPoints Array of object points in the object coordinate space, Nx3 1-channel or 1xN/Nx1 3-channel,
 * where N is the number of points. vector\<Point3d\> can also be passed here.
 * @param imagePoints Array of corresponding image points, Nx2 1-channel or 1xN/Nx1 2-channel,
 * where N is the number of points. vector\<Point2d\> can also be passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvec Input/Output rotation vector (see REF: Rodrigues ) that, together with tvec, brings points from
 * the model coordinate system to the camera coordinate system. Input values are used as an initial solution.
 * @param tvec Input/Output translation vector. Input values are used as an initial solution.
 * @param criteria Criteria when to stop the Levenberg-Marquard iterative algorithm.
 *
 * The function refines the object pose given at least 3 object points, their corresponding image
 * projections, an initial solution for the rotation and translation vector,
 * as well as the camera matrix and the distortion coefficients.
 * The function minimizes the projection error with respect to the rotation and the translation vectors, according
 * to a Levenberg-Marquardt iterative minimization CITE: Madsen04 CITE: Eade13 process.
 */
+ (void)solvePnPRefineLM:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvec:(Mat*)rvec tvec:(Mat*)tvec criteria:(TermCriteria*)criteria NS_SWIFT_NAME(solvePnPRefineLM(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvec:tvec:criteria:));

/**
 * Refine a pose (the translation and the rotation that transform a 3D point expressed in the object coordinate frame
 * to the camera coordinate frame) from a 3D-2D point correspondences and starting from an initial solution.
 *
 * @param objectPoints Array of object points in the object coordinate space, Nx3 1-channel or 1xN/Nx1 3-channel,
 * where N is the number of points. vector\<Point3d\> can also be passed here.
 * @param imagePoints Array of corresponding image points, Nx2 1-channel or 1xN/Nx1 2-channel,
 * where N is the number of points. vector\<Point2d\> can also be passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvec Input/Output rotation vector (see REF: Rodrigues ) that, together with tvec, brings points from
 * the model coordinate system to the camera coordinate system. Input values are used as an initial solution.
 * @param tvec Input/Output translation vector. Input values are used as an initial solution.
 *
 * The function refines the object pose given at least 3 object points, their corresponding image
 * projections, an initial solution for the rotation and translation vector,
 * as well as the camera matrix and the distortion coefficients.
 * The function minimizes the projection error with respect to the rotation and the translation vectors, according
 * to a Levenberg-Marquardt iterative minimization CITE: Madsen04 CITE: Eade13 process.
 */
+ (void)solvePnPRefineLM:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvec:(Mat*)rvec tvec:(Mat*)tvec NS_SWIFT_NAME(solvePnPRefineLM(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvec:tvec:));


//
//  void cv::solvePnPRefineVVS(Mat objectPoints, Mat imagePoints, Mat cameraMatrix, Mat distCoeffs, Mat& rvec, Mat& tvec, TermCriteria criteria = TermCriteria(TermCriteria::EPS + TermCriteria::COUNT, 20, FLT_EPSILON), double VVSlambda = 1)
//
/**
 * Refine a pose (the translation and the rotation that transform a 3D point expressed in the object coordinate frame
 * to the camera coordinate frame) from a 3D-2D point correspondences and starting from an initial solution.
 *
 * @param objectPoints Array of object points in the object coordinate space, Nx3 1-channel or 1xN/Nx1 3-channel,
 * where N is the number of points. vector\<Point3d\> can also be passed here.
 * @param imagePoints Array of corresponding image points, Nx2 1-channel or 1xN/Nx1 2-channel,
 * where N is the number of points. vector\<Point2d\> can also be passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvec Input/Output rotation vector (see REF: Rodrigues ) that, together with tvec, brings points from
 * the model coordinate system to the camera coordinate system. Input values are used as an initial solution.
 * @param tvec Input/Output translation vector. Input values are used as an initial solution.
 * @param criteria Criteria when to stop the Levenberg-Marquard iterative algorithm.
 * @param VVSlambda Gain for the virtual visual servoing control law, equivalent to the `$$\alpha$$`
 * gain in the Damped Gauss-Newton formulation.
 *
 * The function refines the object pose given at least 3 object points, their corresponding image
 * projections, an initial solution for the rotation and translation vector,
 * as well as the camera matrix and the distortion coefficients.
 * The function minimizes the projection error with respect to the rotation and the translation vectors, using a
 * virtual visual servoing (VVS) CITE: Chaumette06 CITE: Marchand16 scheme.
 */
+ (void)solvePnPRefineVVS:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvec:(Mat*)rvec tvec:(Mat*)tvec criteria:(TermCriteria*)criteria VVSlambda:(double)VVSlambda NS_SWIFT_NAME(solvePnPRefineVVS(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvec:tvec:criteria:VVSlambda:));

/**
 * Refine a pose (the translation and the rotation that transform a 3D point expressed in the object coordinate frame
 * to the camera coordinate frame) from a 3D-2D point correspondences and starting from an initial solution.
 *
 * @param objectPoints Array of object points in the object coordinate space, Nx3 1-channel or 1xN/Nx1 3-channel,
 * where N is the number of points. vector\<Point3d\> can also be passed here.
 * @param imagePoints Array of corresponding image points, Nx2 1-channel or 1xN/Nx1 2-channel,
 * where N is the number of points. vector\<Point2d\> can also be passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvec Input/Output rotation vector (see REF: Rodrigues ) that, together with tvec, brings points from
 * the model coordinate system to the camera coordinate system. Input values are used as an initial solution.
 * @param tvec Input/Output translation vector. Input values are used as an initial solution.
 * @param criteria Criteria when to stop the Levenberg-Marquard iterative algorithm.
 * gain in the Damped Gauss-Newton formulation.
 *
 * The function refines the object pose given at least 3 object points, their corresponding image
 * projections, an initial solution for the rotation and translation vector,
 * as well as the camera matrix and the distortion coefficients.
 * The function minimizes the projection error with respect to the rotation and the translation vectors, using a
 * virtual visual servoing (VVS) CITE: Chaumette06 CITE: Marchand16 scheme.
 */
+ (void)solvePnPRefineVVS:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvec:(Mat*)rvec tvec:(Mat*)tvec criteria:(TermCriteria*)criteria NS_SWIFT_NAME(solvePnPRefineVVS(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvec:tvec:criteria:));

/**
 * Refine a pose (the translation and the rotation that transform a 3D point expressed in the object coordinate frame
 * to the camera coordinate frame) from a 3D-2D point correspondences and starting from an initial solution.
 *
 * @param objectPoints Array of object points in the object coordinate space, Nx3 1-channel or 1xN/Nx1 3-channel,
 * where N is the number of points. vector\<Point3d\> can also be passed here.
 * @param imagePoints Array of corresponding image points, Nx2 1-channel or 1xN/Nx1 2-channel,
 * where N is the number of points. vector\<Point2d\> can also be passed here.
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6 [, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$` of
 * 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are
 * assumed.
 * @param rvec Input/Output rotation vector (see REF: Rodrigues ) that, together with tvec, brings points from
 * the model coordinate system to the camera coordinate system. Input values are used as an initial solution.
 * @param tvec Input/Output translation vector. Input values are used as an initial solution.
 * gain in the Damped Gauss-Newton formulation.
 *
 * The function refines the object pose given at least 3 object points, their corresponding image
 * projections, an initial solution for the rotation and translation vector,
 * as well as the camera matrix and the distortion coefficients.
 * The function minimizes the projection error with respect to the rotation and the translation vectors, using a
 * virtual visual servoing (VVS) CITE: Chaumette06 CITE: Marchand16 scheme.
 */
+ (void)solvePnPRefineVVS:(Mat*)objectPoints imagePoints:(Mat*)imagePoints cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs rvec:(Mat*)rvec tvec:(Mat*)tvec NS_SWIFT_NAME(solvePnPRefineVVS(objectPoints:imagePoints:cameraMatrix:distCoeffs:rvec:tvec:));


//
//  void cv::stereoRectify(Mat cameraMatrix1, Mat distCoeffs1, Mat cameraMatrix2, Mat distCoeffs2, Size imageSize, Mat R, Mat T, Mat& R1, Mat& R2, Mat& P1, Mat& P2, Mat& Q, int flags = CALIB_ZERO_DISPARITY, double alpha = -1, Size newImageSize = Size(), Rect* validPixROI1 = 0, Rect* validPixROI2 = 0)
//
/**
 * Computes rectification transforms for each head of a calibrated stereo camera.
 *
 * @param cameraMatrix1 First camera matrix.
 * @param distCoeffs1 First camera distortion parameters.
 * @param cameraMatrix2 Second camera matrix.
 * @param distCoeffs2 Second camera distortion parameters.
 * @param imageSize Size of the image used for stereo calibration.
 * @param R Rotation matrix from the coordinate system of the first camera to the second camera,
 * see REF: stereoCalibrate.
 * @param T Translation vector from the coordinate system of the first camera to the second camera,
 * see REF: stereoCalibrate.
 * @param R1 Output 3x3 rectification transform (rotation matrix) for the first camera. This matrix
 * brings points given in the unrectified first camera's coordinate system to points in the rectified
 * first camera's coordinate system. In more technical terms, it performs a change of basis from the
 * unrectified first camera's coordinate system to the rectified first camera's coordinate system.
 * @param R2 Output 3x3 rectification transform (rotation matrix) for the second camera. This matrix
 * brings points given in the unrectified second camera's coordinate system to points in the rectified
 * second camera's coordinate system. In more technical terms, it performs a change of basis from the
 * unrectified second camera's coordinate system to the rectified second camera's coordinate system.
 * @param P1 Output 3x4 projection matrix in the new (rectified) coordinate systems for the first
 * camera, i.e. it projects points given in the rectified first camera coordinate system into the
 * rectified first camera's image.
 * @param P2 Output 3x4 projection matrix in the new (rectified) coordinate systems for the second
 * camera, i.e. it projects points given in the rectified first camera coordinate system into the
 * rectified second camera's image.
 * @param Q Output `$$4 \times 4$$` disparity-to-depth mapping matrix (see REF: reprojectImageTo3D).
 * @param flags Operation flags that may be zero or CALIB_ZERO_DISPARITY . If the flag is set,
 * the function makes the principal points of each camera have the same pixel coordinates in the
 * rectified views. And if the flag is not set, the function may still shift the images in the
 * horizontal or vertical direction (depending on the orientation of epipolar lines) to maximize the
 * useful image area.
 * @param alpha Free scaling parameter. If it is -1 or absent, the function performs the default
 * scaling. Otherwise, the parameter should be between 0 and 1. alpha=0 means that the rectified
 * images are zoomed and shifted so that only valid pixels are visible (no black areas after
 * rectification). alpha=1 means that the rectified image is decimated and shifted so that all the
 * pixels from the original images from the cameras are retained in the rectified images (no source
 * image pixels are lost). Any intermediate value yields an intermediate result between
 * those two extreme cases.
 * @param newImageSize New image resolution after rectification. The same size should be passed to
 * initUndistortRectifyMap (see the stereo_calib.cpp sample in OpenCV samples directory). When (0,0)
 * is passed (default), it is set to the original imageSize . Setting it to a larger value can help you
 * preserve details in the original image, especially when there is a big radial distortion.
 * @param validPixROI1 Optional output rectangles inside the rectified images where all the pixels
 * are valid. If alpha=0 , the ROIs cover the whole images. Otherwise, they are likely to be smaller
 * (see the picture below).
 * @param validPixROI2 Optional output rectangles inside the rectified images where all the pixels
 * are valid. If alpha=0 , the ROIs cover the whole images. Otherwise, they are likely to be smaller
 * (see the picture below).
 *
 * The function computes the rotation matrices for each camera that (virtually) make both camera image
 * planes the same plane. Consequently, this makes all the epipolar lines parallel and thus simplifies
 * the dense stereo correspondence problem. The function takes the matrices computed by stereoCalibrate
 * as input. As output, it provides two rotation matrices and also two projection matrices in the new
 * coordinates. The function distinguishes the following two cases:
 *
 * -   **Horizontal stereo**: the first and the second camera views are shifted relative to each other
 *     mainly along the x-axis (with possible small vertical shift). In the rectified images, the
 *     corresponding epipolar lines in the left and right cameras are horizontal and have the same
 *     y-coordinate. P1 and P2 look like:
 *
 *     `$$\texttt{P1} = \begin{bmatrix}
 *                         f & 0 & cx_1 & 0 \\
 *                         0 & f & cy & 0 \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix}$$`
 *
 *     `$$\texttt{P2} = \begin{bmatrix}
 *                         f & 0 & cx_2 & T_x*f \\
 *                         0 & f & cy & 0 \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix} ,$$`
 *
 *     where `$$T_x$$` is a horizontal shift between the cameras and `$$cx_1=cx_2$$` if
 *     CALIB_ZERO_DISPARITY is set.
 *
 * -   **Vertical stereo**: the first and the second camera views are shifted relative to each other
 *     mainly in the vertical direction (and probably a bit in the horizontal direction too). The epipolar
 *     lines in the rectified images are vertical and have the same x-coordinate. P1 and P2 look like:
 *
 *     `$$\texttt{P1} = \begin{bmatrix}
 *                         f & 0 & cx & 0 \\
 *                         0 & f & cy_1 & 0 \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix}$$`
 *
 *     `$$\texttt{P2} = \begin{bmatrix}
 *                         f & 0 & cx & 0 \\
 *                         0 & f & cy_2 & T_y*f \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix},$$`
 *
 *     where `$$T_y$$` is a vertical shift between the cameras and `$$cy_1=cy_2$$` if
 *     CALIB_ZERO_DISPARITY is set.
 *
 * As you can see, the first three columns of P1 and P2 will effectively be the new "rectified" camera
 * matrices. The matrices, together with R1 and R2 , can then be passed to initUndistortRectifyMap to
 * initialize the rectification map for each camera.
 *
 * See below the screenshot from the stereo_calib.cpp sample. Some red horizontal lines pass through
 * the corresponding image regions. This means that the images are well rectified, which is what most
 * stereo correspondence algorithms rely on. The green rectangles are roi1 and roi2 . You see that
 * their interiors are all valid pixels.
 *
 * ![image](pics/stereo_undistort.jpg)
 */
+ (void)stereoRectify:(Mat*)cameraMatrix1 distCoeffs1:(Mat*)distCoeffs1 cameraMatrix2:(Mat*)cameraMatrix2 distCoeffs2:(Mat*)distCoeffs2 imageSize:(Size2i*)imageSize R:(Mat*)R T:(Mat*)T R1:(Mat*)R1 R2:(Mat*)R2 P1:(Mat*)P1 P2:(Mat*)P2 Q:(Mat*)Q flags:(int)flags alpha:(double)alpha newImageSize:(Size2i*)newImageSize validPixROI1:(Rect2i*)validPixROI1 validPixROI2:(Rect2i*)validPixROI2 NS_SWIFT_NAME(stereoRectify(cameraMatrix1:distCoeffs1:cameraMatrix2:distCoeffs2:imageSize:R:T:R1:R2:P1:P2:Q:flags:alpha:newImageSize:validPixROI1:validPixROI2:));

/**
 * Computes rectification transforms for each head of a calibrated stereo camera.
 *
 * @param cameraMatrix1 First camera matrix.
 * @param distCoeffs1 First camera distortion parameters.
 * @param cameraMatrix2 Second camera matrix.
 * @param distCoeffs2 Second camera distortion parameters.
 * @param imageSize Size of the image used for stereo calibration.
 * @param R Rotation matrix from the coordinate system of the first camera to the second camera,
 * see REF: stereoCalibrate.
 * @param T Translation vector from the coordinate system of the first camera to the second camera,
 * see REF: stereoCalibrate.
 * @param R1 Output 3x3 rectification transform (rotation matrix) for the first camera. This matrix
 * brings points given in the unrectified first camera's coordinate system to points in the rectified
 * first camera's coordinate system. In more technical terms, it performs a change of basis from the
 * unrectified first camera's coordinate system to the rectified first camera's coordinate system.
 * @param R2 Output 3x3 rectification transform (rotation matrix) for the second camera. This matrix
 * brings points given in the unrectified second camera's coordinate system to points in the rectified
 * second camera's coordinate system. In more technical terms, it performs a change of basis from the
 * unrectified second camera's coordinate system to the rectified second camera's coordinate system.
 * @param P1 Output 3x4 projection matrix in the new (rectified) coordinate systems for the first
 * camera, i.e. it projects points given in the rectified first camera coordinate system into the
 * rectified first camera's image.
 * @param P2 Output 3x4 projection matrix in the new (rectified) coordinate systems for the second
 * camera, i.e. it projects points given in the rectified first camera coordinate system into the
 * rectified second camera's image.
 * @param Q Output `$$4 \times 4$$` disparity-to-depth mapping matrix (see REF: reprojectImageTo3D).
 * @param flags Operation flags that may be zero or CALIB_ZERO_DISPARITY . If the flag is set,
 * the function makes the principal points of each camera have the same pixel coordinates in the
 * rectified views. And if the flag is not set, the function may still shift the images in the
 * horizontal or vertical direction (depending on the orientation of epipolar lines) to maximize the
 * useful image area.
 * @param alpha Free scaling parameter. If it is -1 or absent, the function performs the default
 * scaling. Otherwise, the parameter should be between 0 and 1. alpha=0 means that the rectified
 * images are zoomed and shifted so that only valid pixels are visible (no black areas after
 * rectification). alpha=1 means that the rectified image is decimated and shifted so that all the
 * pixels from the original images from the cameras are retained in the rectified images (no source
 * image pixels are lost). Any intermediate value yields an intermediate result between
 * those two extreme cases.
 * @param newImageSize New image resolution after rectification. The same size should be passed to
 * initUndistortRectifyMap (see the stereo_calib.cpp sample in OpenCV samples directory). When (0,0)
 * is passed (default), it is set to the original imageSize . Setting it to a larger value can help you
 * preserve details in the original image, especially when there is a big radial distortion.
 * @param validPixROI1 Optional output rectangles inside the rectified images where all the pixels
 * are valid. If alpha=0 , the ROIs cover the whole images. Otherwise, they are likely to be smaller
 * (see the picture below).
 * are valid. If alpha=0 , the ROIs cover the whole images. Otherwise, they are likely to be smaller
 * (see the picture below).
 *
 * The function computes the rotation matrices for each camera that (virtually) make both camera image
 * planes the same plane. Consequently, this makes all the epipolar lines parallel and thus simplifies
 * the dense stereo correspondence problem. The function takes the matrices computed by stereoCalibrate
 * as input. As output, it provides two rotation matrices and also two projection matrices in the new
 * coordinates. The function distinguishes the following two cases:
 *
 * -   **Horizontal stereo**: the first and the second camera views are shifted relative to each other
 *     mainly along the x-axis (with possible small vertical shift). In the rectified images, the
 *     corresponding epipolar lines in the left and right cameras are horizontal and have the same
 *     y-coordinate. P1 and P2 look like:
 *
 *     `$$\texttt{P1} = \begin{bmatrix}
 *                         f & 0 & cx_1 & 0 \\
 *                         0 & f & cy & 0 \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix}$$`
 *
 *     `$$\texttt{P2} = \begin{bmatrix}
 *                         f & 0 & cx_2 & T_x*f \\
 *                         0 & f & cy & 0 \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix} ,$$`
 *
 *     where `$$T_x$$` is a horizontal shift between the cameras and `$$cx_1=cx_2$$` if
 *     CALIB_ZERO_DISPARITY is set.
 *
 * -   **Vertical stereo**: the first and the second camera views are shifted relative to each other
 *     mainly in the vertical direction (and probably a bit in the horizontal direction too). The epipolar
 *     lines in the rectified images are vertical and have the same x-coordinate. P1 and P2 look like:
 *
 *     `$$\texttt{P1} = \begin{bmatrix}
 *                         f & 0 & cx & 0 \\
 *                         0 & f & cy_1 & 0 \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix}$$`
 *
 *     `$$\texttt{P2} = \begin{bmatrix}
 *                         f & 0 & cx & 0 \\
 *                         0 & f & cy_2 & T_y*f \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix},$$`
 *
 *     where `$$T_y$$` is a vertical shift between the cameras and `$$cy_1=cy_2$$` if
 *     CALIB_ZERO_DISPARITY is set.
 *
 * As you can see, the first three columns of P1 and P2 will effectively be the new "rectified" camera
 * matrices. The matrices, together with R1 and R2 , can then be passed to initUndistortRectifyMap to
 * initialize the rectification map for each camera.
 *
 * See below the screenshot from the stereo_calib.cpp sample. Some red horizontal lines pass through
 * the corresponding image regions. This means that the images are well rectified, which is what most
 * stereo correspondence algorithms rely on. The green rectangles are roi1 and roi2 . You see that
 * their interiors are all valid pixels.
 *
 * ![image](pics/stereo_undistort.jpg)
 */
+ (void)stereoRectify:(Mat*)cameraMatrix1 distCoeffs1:(Mat*)distCoeffs1 cameraMatrix2:(Mat*)cameraMatrix2 distCoeffs2:(Mat*)distCoeffs2 imageSize:(Size2i*)imageSize R:(Mat*)R T:(Mat*)T R1:(Mat*)R1 R2:(Mat*)R2 P1:(Mat*)P1 P2:(Mat*)P2 Q:(Mat*)Q flags:(int)flags alpha:(double)alpha newImageSize:(Size2i*)newImageSize validPixROI1:(Rect2i*)validPixROI1 NS_SWIFT_NAME(stereoRectify(cameraMatrix1:distCoeffs1:cameraMatrix2:distCoeffs2:imageSize:R:T:R1:R2:P1:P2:Q:flags:alpha:newImageSize:validPixROI1:));

/**
 * Computes rectification transforms for each head of a calibrated stereo camera.
 *
 * @param cameraMatrix1 First camera matrix.
 * @param distCoeffs1 First camera distortion parameters.
 * @param cameraMatrix2 Second camera matrix.
 * @param distCoeffs2 Second camera distortion parameters.
 * @param imageSize Size of the image used for stereo calibration.
 * @param R Rotation matrix from the coordinate system of the first camera to the second camera,
 * see REF: stereoCalibrate.
 * @param T Translation vector from the coordinate system of the first camera to the second camera,
 * see REF: stereoCalibrate.
 * @param R1 Output 3x3 rectification transform (rotation matrix) for the first camera. This matrix
 * brings points given in the unrectified first camera's coordinate system to points in the rectified
 * first camera's coordinate system. In more technical terms, it performs a change of basis from the
 * unrectified first camera's coordinate system to the rectified first camera's coordinate system.
 * @param R2 Output 3x3 rectification transform (rotation matrix) for the second camera. This matrix
 * brings points given in the unrectified second camera's coordinate system to points in the rectified
 * second camera's coordinate system. In more technical terms, it performs a change of basis from the
 * unrectified second camera's coordinate system to the rectified second camera's coordinate system.
 * @param P1 Output 3x4 projection matrix in the new (rectified) coordinate systems for the first
 * camera, i.e. it projects points given in the rectified first camera coordinate system into the
 * rectified first camera's image.
 * @param P2 Output 3x4 projection matrix in the new (rectified) coordinate systems for the second
 * camera, i.e. it projects points given in the rectified first camera coordinate system into the
 * rectified second camera's image.
 * @param Q Output `$$4 \times 4$$` disparity-to-depth mapping matrix (see REF: reprojectImageTo3D).
 * @param flags Operation flags that may be zero or CALIB_ZERO_DISPARITY . If the flag is set,
 * the function makes the principal points of each camera have the same pixel coordinates in the
 * rectified views. And if the flag is not set, the function may still shift the images in the
 * horizontal or vertical direction (depending on the orientation of epipolar lines) to maximize the
 * useful image area.
 * @param alpha Free scaling parameter. If it is -1 or absent, the function performs the default
 * scaling. Otherwise, the parameter should be between 0 and 1. alpha=0 means that the rectified
 * images are zoomed and shifted so that only valid pixels are visible (no black areas after
 * rectification). alpha=1 means that the rectified image is decimated and shifted so that all the
 * pixels from the original images from the cameras are retained in the rectified images (no source
 * image pixels are lost). Any intermediate value yields an intermediate result between
 * those two extreme cases.
 * @param newImageSize New image resolution after rectification. The same size should be passed to
 * initUndistortRectifyMap (see the stereo_calib.cpp sample in OpenCV samples directory). When (0,0)
 * is passed (default), it is set to the original imageSize . Setting it to a larger value can help you
 * preserve details in the original image, especially when there is a big radial distortion.
 * are valid. If alpha=0 , the ROIs cover the whole images. Otherwise, they are likely to be smaller
 * (see the picture below).
 * are valid. If alpha=0 , the ROIs cover the whole images. Otherwise, they are likely to be smaller
 * (see the picture below).
 *
 * The function computes the rotation matrices for each camera that (virtually) make both camera image
 * planes the same plane. Consequently, this makes all the epipolar lines parallel and thus simplifies
 * the dense stereo correspondence problem. The function takes the matrices computed by stereoCalibrate
 * as input. As output, it provides two rotation matrices and also two projection matrices in the new
 * coordinates. The function distinguishes the following two cases:
 *
 * -   **Horizontal stereo**: the first and the second camera views are shifted relative to each other
 *     mainly along the x-axis (with possible small vertical shift). In the rectified images, the
 *     corresponding epipolar lines in the left and right cameras are horizontal and have the same
 *     y-coordinate. P1 and P2 look like:
 *
 *     `$$\texttt{P1} = \begin{bmatrix}
 *                         f & 0 & cx_1 & 0 \\
 *                         0 & f & cy & 0 \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix}$$`
 *
 *     `$$\texttt{P2} = \begin{bmatrix}
 *                         f & 0 & cx_2 & T_x*f \\
 *                         0 & f & cy & 0 \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix} ,$$`
 *
 *     where `$$T_x$$` is a horizontal shift between the cameras and `$$cx_1=cx_2$$` if
 *     CALIB_ZERO_DISPARITY is set.
 *
 * -   **Vertical stereo**: the first and the second camera views are shifted relative to each other
 *     mainly in the vertical direction (and probably a bit in the horizontal direction too). The epipolar
 *     lines in the rectified images are vertical and have the same x-coordinate. P1 and P2 look like:
 *
 *     `$$\texttt{P1} = \begin{bmatrix}
 *                         f & 0 & cx & 0 \\
 *                         0 & f & cy_1 & 0 \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix}$$`
 *
 *     `$$\texttt{P2} = \begin{bmatrix}
 *                         f & 0 & cx & 0 \\
 *                         0 & f & cy_2 & T_y*f \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix},$$`
 *
 *     where `$$T_y$$` is a vertical shift between the cameras and `$$cy_1=cy_2$$` if
 *     CALIB_ZERO_DISPARITY is set.
 *
 * As you can see, the first three columns of P1 and P2 will effectively be the new "rectified" camera
 * matrices. The matrices, together with R1 and R2 , can then be passed to initUndistortRectifyMap to
 * initialize the rectification map for each camera.
 *
 * See below the screenshot from the stereo_calib.cpp sample. Some red horizontal lines pass through
 * the corresponding image regions. This means that the images are well rectified, which is what most
 * stereo correspondence algorithms rely on. The green rectangles are roi1 and roi2 . You see that
 * their interiors are all valid pixels.
 *
 * ![image](pics/stereo_undistort.jpg)
 */
+ (void)stereoRectify:(Mat*)cameraMatrix1 distCoeffs1:(Mat*)distCoeffs1 cameraMatrix2:(Mat*)cameraMatrix2 distCoeffs2:(Mat*)distCoeffs2 imageSize:(Size2i*)imageSize R:(Mat*)R T:(Mat*)T R1:(Mat*)R1 R2:(Mat*)R2 P1:(Mat*)P1 P2:(Mat*)P2 Q:(Mat*)Q flags:(int)flags alpha:(double)alpha newImageSize:(Size2i*)newImageSize NS_SWIFT_NAME(stereoRectify(cameraMatrix1:distCoeffs1:cameraMatrix2:distCoeffs2:imageSize:R:T:R1:R2:P1:P2:Q:flags:alpha:newImageSize:));

/**
 * Computes rectification transforms for each head of a calibrated stereo camera.
 *
 * @param cameraMatrix1 First camera matrix.
 * @param distCoeffs1 First camera distortion parameters.
 * @param cameraMatrix2 Second camera matrix.
 * @param distCoeffs2 Second camera distortion parameters.
 * @param imageSize Size of the image used for stereo calibration.
 * @param R Rotation matrix from the coordinate system of the first camera to the second camera,
 * see REF: stereoCalibrate.
 * @param T Translation vector from the coordinate system of the first camera to the second camera,
 * see REF: stereoCalibrate.
 * @param R1 Output 3x3 rectification transform (rotation matrix) for the first camera. This matrix
 * brings points given in the unrectified first camera's coordinate system to points in the rectified
 * first camera's coordinate system. In more technical terms, it performs a change of basis from the
 * unrectified first camera's coordinate system to the rectified first camera's coordinate system.
 * @param R2 Output 3x3 rectification transform (rotation matrix) for the second camera. This matrix
 * brings points given in the unrectified second camera's coordinate system to points in the rectified
 * second camera's coordinate system. In more technical terms, it performs a change of basis from the
 * unrectified second camera's coordinate system to the rectified second camera's coordinate system.
 * @param P1 Output 3x4 projection matrix in the new (rectified) coordinate systems for the first
 * camera, i.e. it projects points given in the rectified first camera coordinate system into the
 * rectified first camera's image.
 * @param P2 Output 3x4 projection matrix in the new (rectified) coordinate systems for the second
 * camera, i.e. it projects points given in the rectified first camera coordinate system into the
 * rectified second camera's image.
 * @param Q Output `$$4 \times 4$$` disparity-to-depth mapping matrix (see REF: reprojectImageTo3D).
 * @param flags Operation flags that may be zero or CALIB_ZERO_DISPARITY . If the flag is set,
 * the function makes the principal points of each camera have the same pixel coordinates in the
 * rectified views. And if the flag is not set, the function may still shift the images in the
 * horizontal or vertical direction (depending on the orientation of epipolar lines) to maximize the
 * useful image area.
 * @param alpha Free scaling parameter. If it is -1 or absent, the function performs the default
 * scaling. Otherwise, the parameter should be between 0 and 1. alpha=0 means that the rectified
 * images are zoomed and shifted so that only valid pixels are visible (no black areas after
 * rectification). alpha=1 means that the rectified image is decimated and shifted so that all the
 * pixels from the original images from the cameras are retained in the rectified images (no source
 * image pixels are lost). Any intermediate value yields an intermediate result between
 * those two extreme cases.
 * initUndistortRectifyMap (see the stereo_calib.cpp sample in OpenCV samples directory). When (0,0)
 * is passed (default), it is set to the original imageSize . Setting it to a larger value can help you
 * preserve details in the original image, especially when there is a big radial distortion.
 * are valid. If alpha=0 , the ROIs cover the whole images. Otherwise, they are likely to be smaller
 * (see the picture below).
 * are valid. If alpha=0 , the ROIs cover the whole images. Otherwise, they are likely to be smaller
 * (see the picture below).
 *
 * The function computes the rotation matrices for each camera that (virtually) make both camera image
 * planes the same plane. Consequently, this makes all the epipolar lines parallel and thus simplifies
 * the dense stereo correspondence problem. The function takes the matrices computed by stereoCalibrate
 * as input. As output, it provides two rotation matrices and also two projection matrices in the new
 * coordinates. The function distinguishes the following two cases:
 *
 * -   **Horizontal stereo**: the first and the second camera views are shifted relative to each other
 *     mainly along the x-axis (with possible small vertical shift). In the rectified images, the
 *     corresponding epipolar lines in the left and right cameras are horizontal and have the same
 *     y-coordinate. P1 and P2 look like:
 *
 *     `$$\texttt{P1} = \begin{bmatrix}
 *                         f & 0 & cx_1 & 0 \\
 *                         0 & f & cy & 0 \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix}$$`
 *
 *     `$$\texttt{P2} = \begin{bmatrix}
 *                         f & 0 & cx_2 & T_x*f \\
 *                         0 & f & cy & 0 \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix} ,$$`
 *
 *     where `$$T_x$$` is a horizontal shift between the cameras and `$$cx_1=cx_2$$` if
 *     CALIB_ZERO_DISPARITY is set.
 *
 * -   **Vertical stereo**: the first and the second camera views are shifted relative to each other
 *     mainly in the vertical direction (and probably a bit in the horizontal direction too). The epipolar
 *     lines in the rectified images are vertical and have the same x-coordinate. P1 and P2 look like:
 *
 *     `$$\texttt{P1} = \begin{bmatrix}
 *                         f & 0 & cx & 0 \\
 *                         0 & f & cy_1 & 0 \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix}$$`
 *
 *     `$$\texttt{P2} = \begin{bmatrix}
 *                         f & 0 & cx & 0 \\
 *                         0 & f & cy_2 & T_y*f \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix},$$`
 *
 *     where `$$T_y$$` is a vertical shift between the cameras and `$$cy_1=cy_2$$` if
 *     CALIB_ZERO_DISPARITY is set.
 *
 * As you can see, the first three columns of P1 and P2 will effectively be the new "rectified" camera
 * matrices. The matrices, together with R1 and R2 , can then be passed to initUndistortRectifyMap to
 * initialize the rectification map for each camera.
 *
 * See below the screenshot from the stereo_calib.cpp sample. Some red horizontal lines pass through
 * the corresponding image regions. This means that the images are well rectified, which is what most
 * stereo correspondence algorithms rely on. The green rectangles are roi1 and roi2 . You see that
 * their interiors are all valid pixels.
 *
 * ![image](pics/stereo_undistort.jpg)
 */
+ (void)stereoRectify:(Mat*)cameraMatrix1 distCoeffs1:(Mat*)distCoeffs1 cameraMatrix2:(Mat*)cameraMatrix2 distCoeffs2:(Mat*)distCoeffs2 imageSize:(Size2i*)imageSize R:(Mat*)R T:(Mat*)T R1:(Mat*)R1 R2:(Mat*)R2 P1:(Mat*)P1 P2:(Mat*)P2 Q:(Mat*)Q flags:(int)flags alpha:(double)alpha NS_SWIFT_NAME(stereoRectify(cameraMatrix1:distCoeffs1:cameraMatrix2:distCoeffs2:imageSize:R:T:R1:R2:P1:P2:Q:flags:alpha:));

/**
 * Computes rectification transforms for each head of a calibrated stereo camera.
 *
 * @param cameraMatrix1 First camera matrix.
 * @param distCoeffs1 First camera distortion parameters.
 * @param cameraMatrix2 Second camera matrix.
 * @param distCoeffs2 Second camera distortion parameters.
 * @param imageSize Size of the image used for stereo calibration.
 * @param R Rotation matrix from the coordinate system of the first camera to the second camera,
 * see REF: stereoCalibrate.
 * @param T Translation vector from the coordinate system of the first camera to the second camera,
 * see REF: stereoCalibrate.
 * @param R1 Output 3x3 rectification transform (rotation matrix) for the first camera. This matrix
 * brings points given in the unrectified first camera's coordinate system to points in the rectified
 * first camera's coordinate system. In more technical terms, it performs a change of basis from the
 * unrectified first camera's coordinate system to the rectified first camera's coordinate system.
 * @param R2 Output 3x3 rectification transform (rotation matrix) for the second camera. This matrix
 * brings points given in the unrectified second camera's coordinate system to points in the rectified
 * second camera's coordinate system. In more technical terms, it performs a change of basis from the
 * unrectified second camera's coordinate system to the rectified second camera's coordinate system.
 * @param P1 Output 3x4 projection matrix in the new (rectified) coordinate systems for the first
 * camera, i.e. it projects points given in the rectified first camera coordinate system into the
 * rectified first camera's image.
 * @param P2 Output 3x4 projection matrix in the new (rectified) coordinate systems for the second
 * camera, i.e. it projects points given in the rectified first camera coordinate system into the
 * rectified second camera's image.
 * @param Q Output `$$4 \times 4$$` disparity-to-depth mapping matrix (see REF: reprojectImageTo3D).
 * @param flags Operation flags that may be zero or CALIB_ZERO_DISPARITY . If the flag is set,
 * the function makes the principal points of each camera have the same pixel coordinates in the
 * rectified views. And if the flag is not set, the function may still shift the images in the
 * horizontal or vertical direction (depending on the orientation of epipolar lines) to maximize the
 * useful image area.
 * scaling. Otherwise, the parameter should be between 0 and 1. alpha=0 means that the rectified
 * images are zoomed and shifted so that only valid pixels are visible (no black areas after
 * rectification). alpha=1 means that the rectified image is decimated and shifted so that all the
 * pixels from the original images from the cameras are retained in the rectified images (no source
 * image pixels are lost). Any intermediate value yields an intermediate result between
 * those two extreme cases.
 * initUndistortRectifyMap (see the stereo_calib.cpp sample in OpenCV samples directory). When (0,0)
 * is passed (default), it is set to the original imageSize . Setting it to a larger value can help you
 * preserve details in the original image, especially when there is a big radial distortion.
 * are valid. If alpha=0 , the ROIs cover the whole images. Otherwise, they are likely to be smaller
 * (see the picture below).
 * are valid. If alpha=0 , the ROIs cover the whole images. Otherwise, they are likely to be smaller
 * (see the picture below).
 *
 * The function computes the rotation matrices for each camera that (virtually) make both camera image
 * planes the same plane. Consequently, this makes all the epipolar lines parallel and thus simplifies
 * the dense stereo correspondence problem. The function takes the matrices computed by stereoCalibrate
 * as input. As output, it provides two rotation matrices and also two projection matrices in the new
 * coordinates. The function distinguishes the following two cases:
 *
 * -   **Horizontal stereo**: the first and the second camera views are shifted relative to each other
 *     mainly along the x-axis (with possible small vertical shift). In the rectified images, the
 *     corresponding epipolar lines in the left and right cameras are horizontal and have the same
 *     y-coordinate. P1 and P2 look like:
 *
 *     `$$\texttt{P1} = \begin{bmatrix}
 *                         f & 0 & cx_1 & 0 \\
 *                         0 & f & cy & 0 \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix}$$`
 *
 *     `$$\texttt{P2} = \begin{bmatrix}
 *                         f & 0 & cx_2 & T_x*f \\
 *                         0 & f & cy & 0 \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix} ,$$`
 *
 *     where `$$T_x$$` is a horizontal shift between the cameras and `$$cx_1=cx_2$$` if
 *     CALIB_ZERO_DISPARITY is set.
 *
 * -   **Vertical stereo**: the first and the second camera views are shifted relative to each other
 *     mainly in the vertical direction (and probably a bit in the horizontal direction too). The epipolar
 *     lines in the rectified images are vertical and have the same x-coordinate. P1 and P2 look like:
 *
 *     `$$\texttt{P1} = \begin{bmatrix}
 *                         f & 0 & cx & 0 \\
 *                         0 & f & cy_1 & 0 \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix}$$`
 *
 *     `$$\texttt{P2} = \begin{bmatrix}
 *                         f & 0 & cx & 0 \\
 *                         0 & f & cy_2 & T_y*f \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix},$$`
 *
 *     where `$$T_y$$` is a vertical shift between the cameras and `$$cy_1=cy_2$$` if
 *     CALIB_ZERO_DISPARITY is set.
 *
 * As you can see, the first three columns of P1 and P2 will effectively be the new "rectified" camera
 * matrices. The matrices, together with R1 and R2 , can then be passed to initUndistortRectifyMap to
 * initialize the rectification map for each camera.
 *
 * See below the screenshot from the stereo_calib.cpp sample. Some red horizontal lines pass through
 * the corresponding image regions. This means that the images are well rectified, which is what most
 * stereo correspondence algorithms rely on. The green rectangles are roi1 and roi2 . You see that
 * their interiors are all valid pixels.
 *
 * ![image](pics/stereo_undistort.jpg)
 */
+ (void)stereoRectify:(Mat*)cameraMatrix1 distCoeffs1:(Mat*)distCoeffs1 cameraMatrix2:(Mat*)cameraMatrix2 distCoeffs2:(Mat*)distCoeffs2 imageSize:(Size2i*)imageSize R:(Mat*)R T:(Mat*)T R1:(Mat*)R1 R2:(Mat*)R2 P1:(Mat*)P1 P2:(Mat*)P2 Q:(Mat*)Q flags:(int)flags NS_SWIFT_NAME(stereoRectify(cameraMatrix1:distCoeffs1:cameraMatrix2:distCoeffs2:imageSize:R:T:R1:R2:P1:P2:Q:flags:));

/**
 * Computes rectification transforms for each head of a calibrated stereo camera.
 *
 * @param cameraMatrix1 First camera matrix.
 * @param distCoeffs1 First camera distortion parameters.
 * @param cameraMatrix2 Second camera matrix.
 * @param distCoeffs2 Second camera distortion parameters.
 * @param imageSize Size of the image used for stereo calibration.
 * @param R Rotation matrix from the coordinate system of the first camera to the second camera,
 * see REF: stereoCalibrate.
 * @param T Translation vector from the coordinate system of the first camera to the second camera,
 * see REF: stereoCalibrate.
 * @param R1 Output 3x3 rectification transform (rotation matrix) for the first camera. This matrix
 * brings points given in the unrectified first camera's coordinate system to points in the rectified
 * first camera's coordinate system. In more technical terms, it performs a change of basis from the
 * unrectified first camera's coordinate system to the rectified first camera's coordinate system.
 * @param R2 Output 3x3 rectification transform (rotation matrix) for the second camera. This matrix
 * brings points given in the unrectified second camera's coordinate system to points in the rectified
 * second camera's coordinate system. In more technical terms, it performs a change of basis from the
 * unrectified second camera's coordinate system to the rectified second camera's coordinate system.
 * @param P1 Output 3x4 projection matrix in the new (rectified) coordinate systems for the first
 * camera, i.e. it projects points given in the rectified first camera coordinate system into the
 * rectified first camera's image.
 * @param P2 Output 3x4 projection matrix in the new (rectified) coordinate systems for the second
 * camera, i.e. it projects points given in the rectified first camera coordinate system into the
 * rectified second camera's image.
 * @param Q Output `$$4 \times 4$$` disparity-to-depth mapping matrix (see REF: reprojectImageTo3D).
 * the function makes the principal points of each camera have the same pixel coordinates in the
 * rectified views. And if the flag is not set, the function may still shift the images in the
 * horizontal or vertical direction (depending on the orientation of epipolar lines) to maximize the
 * useful image area.
 * scaling. Otherwise, the parameter should be between 0 and 1. alpha=0 means that the rectified
 * images are zoomed and shifted so that only valid pixels are visible (no black areas after
 * rectification). alpha=1 means that the rectified image is decimated and shifted so that all the
 * pixels from the original images from the cameras are retained in the rectified images (no source
 * image pixels are lost). Any intermediate value yields an intermediate result between
 * those two extreme cases.
 * initUndistortRectifyMap (see the stereo_calib.cpp sample in OpenCV samples directory). When (0,0)
 * is passed (default), it is set to the original imageSize . Setting it to a larger value can help you
 * preserve details in the original image, especially when there is a big radial distortion.
 * are valid. If alpha=0 , the ROIs cover the whole images. Otherwise, they are likely to be smaller
 * (see the picture below).
 * are valid. If alpha=0 , the ROIs cover the whole images. Otherwise, they are likely to be smaller
 * (see the picture below).
 *
 * The function computes the rotation matrices for each camera that (virtually) make both camera image
 * planes the same plane. Consequently, this makes all the epipolar lines parallel and thus simplifies
 * the dense stereo correspondence problem. The function takes the matrices computed by stereoCalibrate
 * as input. As output, it provides two rotation matrices and also two projection matrices in the new
 * coordinates. The function distinguishes the following two cases:
 *
 * -   **Horizontal stereo**: the first and the second camera views are shifted relative to each other
 *     mainly along the x-axis (with possible small vertical shift). In the rectified images, the
 *     corresponding epipolar lines in the left and right cameras are horizontal and have the same
 *     y-coordinate. P1 and P2 look like:
 *
 *     `$$\texttt{P1} = \begin{bmatrix}
 *                         f & 0 & cx_1 & 0 \\
 *                         0 & f & cy & 0 \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix}$$`
 *
 *     `$$\texttt{P2} = \begin{bmatrix}
 *                         f & 0 & cx_2 & T_x*f \\
 *                         0 & f & cy & 0 \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix} ,$$`
 *
 *     where `$$T_x$$` is a horizontal shift between the cameras and `$$cx_1=cx_2$$` if
 *     CALIB_ZERO_DISPARITY is set.
 *
 * -   **Vertical stereo**: the first and the second camera views are shifted relative to each other
 *     mainly in the vertical direction (and probably a bit in the horizontal direction too). The epipolar
 *     lines in the rectified images are vertical and have the same x-coordinate. P1 and P2 look like:
 *
 *     `$$\texttt{P1} = \begin{bmatrix}
 *                         f & 0 & cx & 0 \\
 *                         0 & f & cy_1 & 0 \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix}$$`
 *
 *     `$$\texttt{P2} = \begin{bmatrix}
 *                         f & 0 & cx & 0 \\
 *                         0 & f & cy_2 & T_y*f \\
 *                         0 & 0 & 1 & 0
 *                      \end{bmatrix},$$`
 *
 *     where `$$T_y$$` is a vertical shift between the cameras and `$$cy_1=cy_2$$` if
 *     CALIB_ZERO_DISPARITY is set.
 *
 * As you can see, the first three columns of P1 and P2 will effectively be the new "rectified" camera
 * matrices. The matrices, together with R1 and R2 , can then be passed to initUndistortRectifyMap to
 * initialize the rectification map for each camera.
 *
 * See below the screenshot from the stereo_calib.cpp sample. Some red horizontal lines pass through
 * the corresponding image regions. This means that the images are well rectified, which is what most
 * stereo correspondence algorithms rely on. The green rectangles are roi1 and roi2 . You see that
 * their interiors are all valid pixels.
 *
 * ![image](pics/stereo_undistort.jpg)
 */
+ (void)stereoRectify:(Mat*)cameraMatrix1 distCoeffs1:(Mat*)distCoeffs1 cameraMatrix2:(Mat*)cameraMatrix2 distCoeffs2:(Mat*)distCoeffs2 imageSize:(Size2i*)imageSize R:(Mat*)R T:(Mat*)T R1:(Mat*)R1 R2:(Mat*)R2 P1:(Mat*)P1 P2:(Mat*)P2 Q:(Mat*)Q NS_SWIFT_NAME(stereoRectify(cameraMatrix1:distCoeffs1:cameraMatrix2:distCoeffs2:imageSize:R:T:R1:R2:P1:P2:Q:));


//
//  void cv::triangulatePoints(Mat projMatr1, Mat projMatr2, Mat projPoints1, Mat projPoints2, Mat& points4D)
//
/**
 * This function reconstructs 3-dimensional points (in homogeneous coordinates) by using
 * their observations with a stereo camera.
 *
 * @param projMatr1 3x4 projection matrix of the first camera, i.e. this matrix projects 3D points
 * given in the world's coordinate system into the first image.
 * @param projMatr2 3x4 projection matrix of the second camera, i.e. this matrix projects 3D points
 * given in the world's coordinate system into the second image.
 * @param projPoints1 2xN array of feature points in the first image. In the case of the c++ version,
 * it can be also a vector of feature points or two-channel matrix of size 1xN or Nx1.
 * @param projPoints2 2xN array of corresponding points in the second image. In the case of the c++
 * version, it can be also a vector of feature points or two-channel matrix of size 1xN or Nx1.
 * @param points4D 4xN array of reconstructed points in homogeneous coordinates. These points are
 * returned in the world's coordinate system.
 *
 * @note
 *    Keep in mind that all input data should be of float type in order for this function to work.
 *
 * @note
 *    If the projection matrices from REF: stereoRectify are used, then the returned points are
 *    represented in the first camera's rectified coordinate system.
 *
 * @sa
 *    reprojectImageTo3D
 */
+ (void)triangulatePoints:(Mat*)projMatr1 projMatr2:(Mat*)projMatr2 projPoints1:(Mat*)projPoints1 projPoints2:(Mat*)projPoints2 points4D:(Mat*)points4D NS_SWIFT_NAME(triangulatePoints(projMatr1:projMatr2:projPoints1:projPoints2:points4D:));


//
//  void cv::undistort(Mat src, Mat& dst, Mat cameraMatrix, Mat distCoeffs, Mat newCameraMatrix = Mat())
//
/**
 * Transforms an image to compensate for lens distortion.
 *
 * The function transforms an image to compensate radial and tangential lens distortion.
 *
 * The function is simply a combination of #initUndistortRectifyMap (with unity R ) and #remap
 * (with bilinear interpolation). See the former function for details of the transformation being
 * performed.
 *
 * Those pixels in the destination image, for which there is no correspondent pixels in the source
 * image, are filled with zeros (black color).
 *
 * A particular subset of the source image that will be visible in the corrected image can be regulated
 * by newCameraMatrix. You can use #getOptimalNewCameraMatrix to compute the appropriate
 * newCameraMatrix depending on your requirements.
 *
 * The camera matrix and the distortion parameters can be determined using #calibrateCamera. If
 * the resolution of images is different from the resolution used at the calibration stage, `$$f_x,
 * f_y, c_x$$` and `$$c_y$$` need to be scaled accordingly, while the distortion coefficients remain
 * the same.
 *
 * @param src Input (distorted) image.
 * @param dst Output (corrected) image that has the same size and type as src .
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6[, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$`
 * of 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are assumed.
 * @param newCameraMatrix Camera matrix of the distorted image. By default, it is the same as
 * cameraMatrix but you may additionally scale and shift the result by using a different matrix.
 */
+ (void)undistort:(Mat*)src dst:(Mat*)dst cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs newCameraMatrix:(Mat*)newCameraMatrix NS_SWIFT_NAME(undistort(src:dst:cameraMatrix:distCoeffs:newCameraMatrix:));

/**
 * Transforms an image to compensate for lens distortion.
 *
 * The function transforms an image to compensate radial and tangential lens distortion.
 *
 * The function is simply a combination of #initUndistortRectifyMap (with unity R ) and #remap
 * (with bilinear interpolation). See the former function for details of the transformation being
 * performed.
 *
 * Those pixels in the destination image, for which there is no correspondent pixels in the source
 * image, are filled with zeros (black color).
 *
 * A particular subset of the source image that will be visible in the corrected image can be regulated
 * by newCameraMatrix. You can use #getOptimalNewCameraMatrix to compute the appropriate
 * newCameraMatrix depending on your requirements.
 *
 * The camera matrix and the distortion parameters can be determined using #calibrateCamera. If
 * the resolution of images is different from the resolution used at the calibration stage, `$$f_x,
 * f_y, c_x$$` and `$$c_y$$` need to be scaled accordingly, while the distortion coefficients remain
 * the same.
 *
 * @param src Input (distorted) image.
 * @param dst Output (corrected) image that has the same size and type as src .
 * @param cameraMatrix Input camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } A = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6[, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$`
 * of 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are assumed.
 * cameraMatrix but you may additionally scale and shift the result by using a different matrix.
 */
+ (void)undistort:(Mat*)src dst:(Mat*)dst cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs NS_SWIFT_NAME(undistort(src:dst:cameraMatrix:distCoeffs:));


//
//  void cv::undistortPoints(Mat src, Mat& dst, Mat cameraMatrix, Mat distCoeffs, Mat R, Mat P, TermCriteria criteria)
//
/**
 *
 *     @note Default version of #undistortPoints does 5 iterations to compute undistorted points.
 */
+ (void)undistortPointsIter:(Mat*)src dst:(Mat*)dst cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs R:(Mat*)R P:(Mat*)P criteria:(TermCriteria*)criteria NS_SWIFT_NAME(undistortPoints(src:dst:cameraMatrix:distCoeffs:R:P:criteria:));


//
//  void cv::undistortPoints(Mat src, Mat& dst, Mat cameraMatrix, Mat distCoeffs, Mat R = Mat(), Mat P = Mat())
//
/**
 * Computes the ideal point coordinates from the observed point coordinates.
 *
 * The function is similar to #undistort and #initUndistortRectifyMap but it operates on a
 * sparse set of points instead of a raster image. Also the function performs a reverse transformation
 * to projectPoints. In case of a 3D object, it does not reconstruct its 3D coordinates, but for a
 * planar object, it does, up to a translation vector, if the proper R is specified.
 *
 * For each observed point coordinate `$$(u, v)$$` the function computes:
 * `$$
 * \begin{array}{l}
 * x^{"}  \leftarrow (u - c_x)/f_x  \\
 * y^{"}  \leftarrow (v - c_y)/f_y  \\
 * (x',y') = undistort(x^{"},y^{"}, \texttt{distCoeffs}) \\
 * {[X\,Y\,W]} ^T  \leftarrow R*[x' \, y' \, 1]^T  \\
 * x  \leftarrow X/W  \\
 * y  \leftarrow Y/W  \\
 * \text{only performed if P is specified:} \\
 * u'  \leftarrow x {f'}_x + {c'}_x  \\
 * v'  \leftarrow y {f'}_y + {c'}_y
 * \end{array}
 * $$`
 *
 * where *undistort* is an approximate iterative algorithm that estimates the normalized original
 * point coordinates out of the normalized distorted point coordinates ("normalized" means that the
 * coordinates do not depend on the camera matrix).
 *
 * The function can be used for both a stereo camera head or a monocular camera (when R is empty).
 * @param src Observed point coordinates, 2xN/Nx2 1-channel or 1xN/Nx1 2-channel (CV_32FC2 or CV_64FC2) (or
 * vector\<Point2f\> ).
 * @param dst Output ideal point coordinates (1xN/Nx1 2-channel or vector\<Point2f\> ) after undistortion and reverse perspective
 * transformation. If matrix P is identity or omitted, dst will contain normalized point coordinates.
 * @param cameraMatrix Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6[, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$`
 * of 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are assumed.
 * @param R Rectification transformation in the object space (3x3 matrix). R1 or R2 computed by
 * #stereoRectify can be passed here. If the matrix is empty, the identity transformation is used.
 * @param P New camera matrix (3x3) or new projection matrix (3x4) `$$\begin{bmatrix} {f'}_x & 0 & {c'}_x & t_x \\ 0 & {f'}_y & {c'}_y & t_y \\ 0 & 0 & 1 & t_z \end{bmatrix}$$`. P1 or P2 computed by
 * #stereoRectify can be passed here. If the matrix is empty, the identity new camera matrix is used.
 */
+ (void)undistortPoints:(Mat*)src dst:(Mat*)dst cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs R:(Mat*)R P:(Mat*)P NS_SWIFT_NAME(undistortPoints(src:dst:cameraMatrix:distCoeffs:R:P:));

/**
 * Computes the ideal point coordinates from the observed point coordinates.
 *
 * The function is similar to #undistort and #initUndistortRectifyMap but it operates on a
 * sparse set of points instead of a raster image. Also the function performs a reverse transformation
 * to projectPoints. In case of a 3D object, it does not reconstruct its 3D coordinates, but for a
 * planar object, it does, up to a translation vector, if the proper R is specified.
 *
 * For each observed point coordinate `$$(u, v)$$` the function computes:
 * `$$
 * \begin{array}{l}
 * x^{"}  \leftarrow (u - c_x)/f_x  \\
 * y^{"}  \leftarrow (v - c_y)/f_y  \\
 * (x',y') = undistort(x^{"},y^{"}, \texttt{distCoeffs}) \\
 * {[X\,Y\,W]} ^T  \leftarrow R*[x' \, y' \, 1]^T  \\
 * x  \leftarrow X/W  \\
 * y  \leftarrow Y/W  \\
 * \text{only performed if P is specified:} \\
 * u'  \leftarrow x {f'}_x + {c'}_x  \\
 * v'  \leftarrow y {f'}_y + {c'}_y
 * \end{array}
 * $$`
 *
 * where *undistort* is an approximate iterative algorithm that estimates the normalized original
 * point coordinates out of the normalized distorted point coordinates ("normalized" means that the
 * coordinates do not depend on the camera matrix).
 *
 * The function can be used for both a stereo camera head or a monocular camera (when R is empty).
 * @param src Observed point coordinates, 2xN/Nx2 1-channel or 1xN/Nx1 2-channel (CV_32FC2 or CV_64FC2) (or
 * vector\<Point2f\> ).
 * @param dst Output ideal point coordinates (1xN/Nx1 2-channel or vector\<Point2f\> ) after undistortion and reverse perspective
 * transformation. If matrix P is identity or omitted, dst will contain normalized point coordinates.
 * @param cameraMatrix Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6[, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$`
 * of 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are assumed.
 * @param R Rectification transformation in the object space (3x3 matrix). R1 or R2 computed by
 * #stereoRectify can be passed here. If the matrix is empty, the identity transformation is used.
 * #stereoRectify can be passed here. If the matrix is empty, the identity new camera matrix is used.
 */
+ (void)undistortPoints:(Mat*)src dst:(Mat*)dst cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs R:(Mat*)R NS_SWIFT_NAME(undistortPoints(src:dst:cameraMatrix:distCoeffs:R:));

/**
 * Computes the ideal point coordinates from the observed point coordinates.
 *
 * The function is similar to #undistort and #initUndistortRectifyMap but it operates on a
 * sparse set of points instead of a raster image. Also the function performs a reverse transformation
 * to projectPoints. In case of a 3D object, it does not reconstruct its 3D coordinates, but for a
 * planar object, it does, up to a translation vector, if the proper R is specified.
 *
 * For each observed point coordinate `$$(u, v)$$` the function computes:
 * `$$
 * \begin{array}{l}
 * x^{"}  \leftarrow (u - c_x)/f_x  \\
 * y^{"}  \leftarrow (v - c_y)/f_y  \\
 * (x',y') = undistort(x^{"},y^{"}, \texttt{distCoeffs}) \\
 * {[X\,Y\,W]} ^T  \leftarrow R*[x' \, y' \, 1]^T  \\
 * x  \leftarrow X/W  \\
 * y  \leftarrow Y/W  \\
 * \text{only performed if P is specified:} \\
 * u'  \leftarrow x {f'}_x + {c'}_x  \\
 * v'  \leftarrow y {f'}_y + {c'}_y
 * \end{array}
 * $$`
 *
 * where *undistort* is an approximate iterative algorithm that estimates the normalized original
 * point coordinates out of the normalized distorted point coordinates ("normalized" means that the
 * coordinates do not depend on the camera matrix).
 *
 * The function can be used for both a stereo camera head or a monocular camera (when R is empty).
 * @param src Observed point coordinates, 2xN/Nx2 1-channel or 1xN/Nx1 2-channel (CV_32FC2 or CV_64FC2) (or
 * vector\<Point2f\> ).
 * @param dst Output ideal point coordinates (1xN/Nx1 2-channel or vector\<Point2f\> ) after undistortion and reverse perspective
 * transformation. If matrix P is identity or omitted, dst will contain normalized point coordinates.
 * @param cameraMatrix Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{1}$$` .
 * @param distCoeffs Input vector of distortion coefficients
 * `$$(k_1, k_2, p_1, p_2[, k_3[, k_4, k_5, k_6[, s_1, s_2, s_3, s_4[, \tau_x, \tau_y]]]])$$`
 * of 4, 5, 8, 12 or 14 elements. If the vector is NULL/empty, the zero distortion coefficients are assumed.
 * #stereoRectify can be passed here. If the matrix is empty, the identity transformation is used.
 * #stereoRectify can be passed here. If the matrix is empty, the identity new camera matrix is used.
 */
+ (void)undistortPoints:(Mat*)src dst:(Mat*)dst cameraMatrix:(Mat*)cameraMatrix distCoeffs:(Mat*)distCoeffs NS_SWIFT_NAME(undistortPoints(src:dst:cameraMatrix:distCoeffs:));


//
//  void cv::validateDisparity(Mat& disparity, Mat cost, int minDisparity, int numberOfDisparities, int disp12MaxDisp = 1)
//
+ (void)validateDisparity:(Mat*)disparity cost:(Mat*)cost minDisparity:(int)minDisparity numberOfDisparities:(int)numberOfDisparities disp12MaxDisp:(int)disp12MaxDisp NS_SWIFT_NAME(validateDisparity(disparity:cost:minDisparity:numberOfDisparities:disp12MaxDisp:));

+ (void)validateDisparity:(Mat*)disparity cost:(Mat*)cost minDisparity:(int)minDisparity numberOfDisparities:(int)numberOfDisparities NS_SWIFT_NAME(validateDisparity(disparity:cost:minDisparity:numberOfDisparities:));


//
//  void cv::fisheye::distortPoints(Mat undistorted, Mat& distorted, Mat K, Mat D, double alpha = 0)
//
/**
 * Distorts 2D points using fisheye model.
 *
 * @param undistorted Array of object points, 1xN/Nx1 2-channel (or vector\<Point2f\> ), where N is
 *     the number of points in the view.
 * @param K Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } K = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{_1}$$`.
 * @param D Input vector of distortion coefficients `$$(k_1, k_2, k_3, k_4)$$`.
 * @param alpha The skew coefficient.
 * @param distorted Output array of image points, 1xN/Nx1 2-channel, or vector\<Point2f\> .
 *
 *     Note that the function assumes the camera matrix of the undistorted points to be identity.
 *     This means if you want to transform back points undistorted with undistortPoints() you have to
 *     multiply them with `$$P^{-1}$$`.
 */
+ (void)distortPoints:(Mat*)undistorted distorted:(Mat*)distorted K:(Mat*)K D:(Mat*)D alpha:(double)alpha NS_SWIFT_NAME(distortPoints(undistorted:distorted:K:D:alpha:));

/**
 * Distorts 2D points using fisheye model.
 *
 * @param undistorted Array of object points, 1xN/Nx1 2-channel (or vector\<Point2f\> ), where N is
 *     the number of points in the view.
 * @param K Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } K = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{_1}$$`.
 * @param D Input vector of distortion coefficients `$$(k_1, k_2, k_3, k_4)$$`.
 * @param distorted Output array of image points, 1xN/Nx1 2-channel, or vector\<Point2f\> .
 *
 *     Note that the function assumes the camera matrix of the undistorted points to be identity.
 *     This means if you want to transform back points undistorted with undistortPoints() you have to
 *     multiply them with `$$P^{-1}$$`.
 */
+ (void)distortPoints:(Mat*)undistorted distorted:(Mat*)distorted K:(Mat*)K D:(Mat*)D NS_SWIFT_NAME(distortPoints(undistorted:distorted:K:D:));


//
//  void cv::fisheye::estimateNewCameraMatrixForUndistortRectify(Mat K, Mat D, Size image_size, Mat R, Mat& P, double balance = 0.0, Size new_size = Size(), double fov_scale = 1.0)
//
/**
 * Estimates new camera matrix for undistortion or rectification.
 *
 * @param K Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } K = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{_1}$$`.
 * @param image_size Size of the image
 * @param D Input vector of distortion coefficients `$$(k_1, k_2, k_3, k_4)$$`.
 * @param R Rectification transformation in the object space: 3x3 1-channel, or vector: 3x1/1x3
 *     1-channel or 1x1 3-channel
 * @param P New camera matrix (3x3) or new projection matrix (3x4)
 * @param balance Sets the new focal length in range between the min focal length and the max focal
 *     length. Balance is in range of [0, 1].
 * @param new_size the new size
 * @param fov_scale Divisor for new focal length.
 */
+ (void)estimateNewCameraMatrixForUndistortRectify:(Mat*)K D:(Mat*)D image_size:(Size2i*)image_size R:(Mat*)R P:(Mat*)P balance:(double)balance new_size:(Size2i*)new_size fov_scale:(double)fov_scale NS_SWIFT_NAME(estimateNewCameraMatrixForUndistortRectify(K:D:image_size:R:P:balance:new_size:fov_scale:));

/**
 * Estimates new camera matrix for undistortion or rectification.
 *
 * @param K Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } K = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{_1}$$`.
 * @param image_size Size of the image
 * @param D Input vector of distortion coefficients `$$(k_1, k_2, k_3, k_4)$$`.
 * @param R Rectification transformation in the object space: 3x3 1-channel, or vector: 3x1/1x3
 *     1-channel or 1x1 3-channel
 * @param P New camera matrix (3x3) or new projection matrix (3x4)
 * @param balance Sets the new focal length in range between the min focal length and the max focal
 *     length. Balance is in range of [0, 1].
 * @param new_size the new size
 */
+ (void)estimateNewCameraMatrixForUndistortRectify:(Mat*)K D:(Mat*)D image_size:(Size2i*)image_size R:(Mat*)R P:(Mat*)P balance:(double)balance new_size:(Size2i*)new_size NS_SWIFT_NAME(estimateNewCameraMatrixForUndistortRectify(K:D:image_size:R:P:balance:new_size:));

/**
 * Estimates new camera matrix for undistortion or rectification.
 *
 * @param K Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } K = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{_1}$$`.
 * @param image_size Size of the image
 * @param D Input vector of distortion coefficients `$$(k_1, k_2, k_3, k_4)$$`.
 * @param R Rectification transformation in the object space: 3x3 1-channel, or vector: 3x1/1x3
 *     1-channel or 1x1 3-channel
 * @param P New camera matrix (3x3) or new projection matrix (3x4)
 * @param balance Sets the new focal length in range between the min focal length and the max focal
 *     length. Balance is in range of [0, 1].
 */
+ (void)estimateNewCameraMatrixForUndistortRectify:(Mat*)K D:(Mat*)D image_size:(Size2i*)image_size R:(Mat*)R P:(Mat*)P balance:(double)balance NS_SWIFT_NAME(estimateNewCameraMatrixForUndistortRectify(K:D:image_size:R:P:balance:));

/**
 * Estimates new camera matrix for undistortion or rectification.
 *
 * @param K Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } K = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{_1}$$`.
 * @param image_size Size of the image
 * @param D Input vector of distortion coefficients `$$(k_1, k_2, k_3, k_4)$$`.
 * @param R Rectification transformation in the object space: 3x3 1-channel, or vector: 3x1/1x3
 *     1-channel or 1x1 3-channel
 * @param P New camera matrix (3x3) or new projection matrix (3x4)
 *     length. Balance is in range of [0, 1].
 */
+ (void)estimateNewCameraMatrixForUndistortRectify:(Mat*)K D:(Mat*)D image_size:(Size2i*)image_size R:(Mat*)R P:(Mat*)P NS_SWIFT_NAME(estimateNewCameraMatrixForUndistortRectify(K:D:image_size:R:P:));


//
//  void cv::fisheye::initUndistortRectifyMap(Mat K, Mat D, Mat R, Mat P, Size size, int m1type, Mat& map1, Mat& map2)
//
/**
 * Computes undistortion and rectification maps for image transform by cv::remap(). If D is empty zero
 *     distortion is used, if R or P is empty identity matrixes are used.
 *
 * @param K Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } K = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{_1}$$`.
 * @param D Input vector of distortion coefficients `$$(k_1, k_2, k_3, k_4)$$`.
 * @param R Rectification transformation in the object space: 3x3 1-channel, or vector: 3x1/1x3
 *     1-channel or 1x1 3-channel
 * @param P New camera matrix (3x3) or new projection matrix (3x4)
 * @param size Undistorted image size.
 * @param m1type Type of the first output map that can be CV_32FC1 or CV_16SC2 . See convertMaps()
 *     for details.
 * @param map1 The first output map.
 * @param map2 The second output map.
 */
+ (void)initUndistortRectifyMap:(Mat*)K D:(Mat*)D R:(Mat*)R P:(Mat*)P size:(Size2i*)size m1type:(int)m1type map1:(Mat*)map1 map2:(Mat*)map2 NS_SWIFT_NAME(initUndistortRectifyMap(K:D:R:P:size:m1type:map1:map2:));


//
//  void cv::fisheye::projectPoints(Mat objectPoints, Mat& imagePoints, Mat rvec, Mat tvec, Mat K, Mat D, double alpha = 0, Mat& jacobian = Mat())
//
+ (void)projectPoints:(Mat*)objectPoints imagePoints:(Mat*)imagePoints rvec:(Mat*)rvec tvec:(Mat*)tvec K:(Mat*)K D:(Mat*)D alpha:(double)alpha jacobian:(Mat*)jacobian NS_SWIFT_NAME(projectPoints(objectPoints:imagePoints:rvec:tvec:K:D:alpha:jacobian:));

+ (void)projectPoints:(Mat*)objectPoints imagePoints:(Mat*)imagePoints rvec:(Mat*)rvec tvec:(Mat*)tvec K:(Mat*)K D:(Mat*)D alpha:(double)alpha NS_SWIFT_NAME(projectPoints(objectPoints:imagePoints:rvec:tvec:K:D:alpha:));

+ (void)projectPoints:(Mat*)objectPoints imagePoints:(Mat*)imagePoints rvec:(Mat*)rvec tvec:(Mat*)tvec K:(Mat*)K D:(Mat*)D NS_SWIFT_NAME(projectPoints(objectPoints:imagePoints:rvec:tvec:K:D:));


//
//  void cv::fisheye::stereoRectify(Mat K1, Mat D1, Mat K2, Mat D2, Size imageSize, Mat R, Mat tvec, Mat& R1, Mat& R2, Mat& P1, Mat& P2, Mat& Q, int flags, Size newImageSize = Size(), double balance = 0.0, double fov_scale = 1.0)
//
/**
 * Stereo rectification for fisheye camera model
 *
 * @param K1 First camera matrix.
 * @param D1 First camera distortion parameters.
 * @param K2 Second camera matrix.
 * @param D2 Second camera distortion parameters.
 * @param imageSize Size of the image used for stereo calibration.
 * @param R Rotation matrix between the coordinate systems of the first and the second
 *     cameras.
 * @param tvec Translation vector between coordinate systems of the cameras.
 * @param R1 Output 3x3 rectification transform (rotation matrix) for the first camera.
 * @param R2 Output 3x3 rectification transform (rotation matrix) for the second camera.
 * @param P1 Output 3x4 projection matrix in the new (rectified) coordinate systems for the first
 *     camera.
 * @param P2 Output 3x4 projection matrix in the new (rectified) coordinate systems for the second
 *     camera.
 * @param Q Output `$$4 \times 4$$` disparity-to-depth mapping matrix (see reprojectImageTo3D ).
 * @param flags Operation flags that may be zero or CALIB_ZERO_DISPARITY . If the flag is set,
 *     the function makes the principal points of each camera have the same pixel coordinates in the
 *     rectified views. And if the flag is not set, the function may still shift the images in the
 *     horizontal or vertical direction (depending on the orientation of epipolar lines) to maximize the
 *     useful image area.
 * @param newImageSize New image resolution after rectification. The same size should be passed to
 *     initUndistortRectifyMap (see the stereo_calib.cpp sample in OpenCV samples directory). When (0,0)
 *     is passed (default), it is set to the original imageSize . Setting it to larger value can help you
 *     preserve details in the original image, especially when there is a big radial distortion.
 * @param balance Sets the new focal length in range between the min focal length and the max focal
 *     length. Balance is in range of [0, 1].
 * @param fov_scale Divisor for new focal length.
 */
+ (void)stereoRectify:(Mat*)K1 D1:(Mat*)D1 K2:(Mat*)K2 D2:(Mat*)D2 imageSize:(Size2i*)imageSize R:(Mat*)R tvec:(Mat*)tvec R1:(Mat*)R1 R2:(Mat*)R2 P1:(Mat*)P1 P2:(Mat*)P2 Q:(Mat*)Q flags:(int)flags newImageSize:(Size2i*)newImageSize balance:(double)balance fov_scale:(double)fov_scale NS_SWIFT_NAME(stereoRectify(K1:D1:K2:D2:imageSize:R:tvec:R1:R2:P1:P2:Q:flags:newImageSize:balance:fov_scale:));

/**
 * Stereo rectification for fisheye camera model
 *
 * @param K1 First camera matrix.
 * @param D1 First camera distortion parameters.
 * @param K2 Second camera matrix.
 * @param D2 Second camera distortion parameters.
 * @param imageSize Size of the image used for stereo calibration.
 * @param R Rotation matrix between the coordinate systems of the first and the second
 *     cameras.
 * @param tvec Translation vector between coordinate systems of the cameras.
 * @param R1 Output 3x3 rectification transform (rotation matrix) for the first camera.
 * @param R2 Output 3x3 rectification transform (rotation matrix) for the second camera.
 * @param P1 Output 3x4 projection matrix in the new (rectified) coordinate systems for the first
 *     camera.
 * @param P2 Output 3x4 projection matrix in the new (rectified) coordinate systems for the second
 *     camera.
 * @param Q Output `$$4 \times 4$$` disparity-to-depth mapping matrix (see reprojectImageTo3D ).
 * @param flags Operation flags that may be zero or CALIB_ZERO_DISPARITY . If the flag is set,
 *     the function makes the principal points of each camera have the same pixel coordinates in the
 *     rectified views. And if the flag is not set, the function may still shift the images in the
 *     horizontal or vertical direction (depending on the orientation of epipolar lines) to maximize the
 *     useful image area.
 * @param newImageSize New image resolution after rectification. The same size should be passed to
 *     initUndistortRectifyMap (see the stereo_calib.cpp sample in OpenCV samples directory). When (0,0)
 *     is passed (default), it is set to the original imageSize . Setting it to larger value can help you
 *     preserve details in the original image, especially when there is a big radial distortion.
 * @param balance Sets the new focal length in range between the min focal length and the max focal
 *     length. Balance is in range of [0, 1].
 */
+ (void)stereoRectify:(Mat*)K1 D1:(Mat*)D1 K2:(Mat*)K2 D2:(Mat*)D2 imageSize:(Size2i*)imageSize R:(Mat*)R tvec:(Mat*)tvec R1:(Mat*)R1 R2:(Mat*)R2 P1:(Mat*)P1 P2:(Mat*)P2 Q:(Mat*)Q flags:(int)flags newImageSize:(Size2i*)newImageSize balance:(double)balance NS_SWIFT_NAME(stereoRectify(K1:D1:K2:D2:imageSize:R:tvec:R1:R2:P1:P2:Q:flags:newImageSize:balance:));

/**
 * Stereo rectification for fisheye camera model
 *
 * @param K1 First camera matrix.
 * @param D1 First camera distortion parameters.
 * @param K2 Second camera matrix.
 * @param D2 Second camera distortion parameters.
 * @param imageSize Size of the image used for stereo calibration.
 * @param R Rotation matrix between the coordinate systems of the first and the second
 *     cameras.
 * @param tvec Translation vector between coordinate systems of the cameras.
 * @param R1 Output 3x3 rectification transform (rotation matrix) for the first camera.
 * @param R2 Output 3x3 rectification transform (rotation matrix) for the second camera.
 * @param P1 Output 3x4 projection matrix in the new (rectified) coordinate systems for the first
 *     camera.
 * @param P2 Output 3x4 projection matrix in the new (rectified) coordinate systems for the second
 *     camera.
 * @param Q Output `$$4 \times 4$$` disparity-to-depth mapping matrix (see reprojectImageTo3D ).
 * @param flags Operation flags that may be zero or CALIB_ZERO_DISPARITY . If the flag is set,
 *     the function makes the principal points of each camera have the same pixel coordinates in the
 *     rectified views. And if the flag is not set, the function may still shift the images in the
 *     horizontal or vertical direction (depending on the orientation of epipolar lines) to maximize the
 *     useful image area.
 * @param newImageSize New image resolution after rectification. The same size should be passed to
 *     initUndistortRectifyMap (see the stereo_calib.cpp sample in OpenCV samples directory). When (0,0)
 *     is passed (default), it is set to the original imageSize . Setting it to larger value can help you
 *     preserve details in the original image, especially when there is a big radial distortion.
 *     length. Balance is in range of [0, 1].
 */
+ (void)stereoRectify:(Mat*)K1 D1:(Mat*)D1 K2:(Mat*)K2 D2:(Mat*)D2 imageSize:(Size2i*)imageSize R:(Mat*)R tvec:(Mat*)tvec R1:(Mat*)R1 R2:(Mat*)R2 P1:(Mat*)P1 P2:(Mat*)P2 Q:(Mat*)Q flags:(int)flags newImageSize:(Size2i*)newImageSize NS_SWIFT_NAME(stereoRectify(K1:D1:K2:D2:imageSize:R:tvec:R1:R2:P1:P2:Q:flags:newImageSize:));

/**
 * Stereo rectification for fisheye camera model
 *
 * @param K1 First camera matrix.
 * @param D1 First camera distortion parameters.
 * @param K2 Second camera matrix.
 * @param D2 Second camera distortion parameters.
 * @param imageSize Size of the image used for stereo calibration.
 * @param R Rotation matrix between the coordinate systems of the first and the second
 *     cameras.
 * @param tvec Translation vector between coordinate systems of the cameras.
 * @param R1 Output 3x3 rectification transform (rotation matrix) for the first camera.
 * @param R2 Output 3x3 rectification transform (rotation matrix) for the second camera.
 * @param P1 Output 3x4 projection matrix in the new (rectified) coordinate systems for the first
 *     camera.
 * @param P2 Output 3x4 projection matrix in the new (rectified) coordinate systems for the second
 *     camera.
 * @param Q Output `$$4 \times 4$$` disparity-to-depth mapping matrix (see reprojectImageTo3D ).
 * @param flags Operation flags that may be zero or CALIB_ZERO_DISPARITY . If the flag is set,
 *     the function makes the principal points of each camera have the same pixel coordinates in the
 *     rectified views. And if the flag is not set, the function may still shift the images in the
 *     horizontal or vertical direction (depending on the orientation of epipolar lines) to maximize the
 *     useful image area.
 *     initUndistortRectifyMap (see the stereo_calib.cpp sample in OpenCV samples directory). When (0,0)
 *     is passed (default), it is set to the original imageSize . Setting it to larger value can help you
 *     preserve details in the original image, especially when there is a big radial distortion.
 *     length. Balance is in range of [0, 1].
 */
+ (void)stereoRectify:(Mat*)K1 D1:(Mat*)D1 K2:(Mat*)K2 D2:(Mat*)D2 imageSize:(Size2i*)imageSize R:(Mat*)R tvec:(Mat*)tvec R1:(Mat*)R1 R2:(Mat*)R2 P1:(Mat*)P1 P2:(Mat*)P2 Q:(Mat*)Q flags:(int)flags NS_SWIFT_NAME(stereoRectify(K1:D1:K2:D2:imageSize:R:tvec:R1:R2:P1:P2:Q:flags:));


//
//  void cv::fisheye::undistortImage(Mat distorted, Mat& undistorted, Mat K, Mat D, Mat Knew = cv::Mat(), Size new_size = Size())
//
/**
 * Transforms an image to compensate for fisheye lens distortion.
 *
 * @param distorted image with fisheye lens distortion.
 * @param undistorted Output image with compensated fisheye lens distortion.
 * @param K Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } K = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{_1}$$`.
 * @param D Input vector of distortion coefficients `$$(k_1, k_2, k_3, k_4)$$`.
 * @param Knew Camera matrix of the distorted image. By default, it is the identity matrix but you
 *     may additionally scale and shift the result by using a different matrix.
 * @param new_size the new size
 *
 *     The function transforms an image to compensate radial and tangential lens distortion.
 *
 *     The function is simply a combination of fisheye::initUndistortRectifyMap (with unity R ) and remap
 *     (with bilinear interpolation). See the former function for details of the transformation being
 *     performed.
 *
 *     See below the results of undistortImage.
 *        -   a\) result of undistort of perspective camera model (all possible coefficients (k_1, k_2, k_3,
 *             k_4, k_5, k_6) of distortion were optimized under calibration)
 *         -   b\) result of fisheye::undistortImage of fisheye camera model (all possible coefficients (k_1, k_2,
 *             k_3, k_4) of fisheye distortion were optimized under calibration)
 *         -   c\) original image was captured with fisheye lens
 *
 *     Pictures a) and b) almost the same. But if we consider points of image located far from the center
 *     of image, we can notice that on image a) these points are distorted.
 *
 *     ![image](pics/fisheye_undistorted.jpg)
 */
+ (void)undistortImage:(Mat*)distorted undistorted:(Mat*)undistorted K:(Mat*)K D:(Mat*)D Knew:(Mat*)Knew new_size:(Size2i*)new_size NS_SWIFT_NAME(undistortImage(distorted:undistorted:K:D:Knew:new_size:));

/**
 * Transforms an image to compensate for fisheye lens distortion.
 *
 * @param distorted image with fisheye lens distortion.
 * @param undistorted Output image with compensated fisheye lens distortion.
 * @param K Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } K = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{_1}$$`.
 * @param D Input vector of distortion coefficients `$$(k_1, k_2, k_3, k_4)$$`.
 * @param Knew Camera matrix of the distorted image. By default, it is the identity matrix but you
 *     may additionally scale and shift the result by using a different matrix.
 *
 *     The function transforms an image to compensate radial and tangential lens distortion.
 *
 *     The function is simply a combination of fisheye::initUndistortRectifyMap (with unity R ) and remap
 *     (with bilinear interpolation). See the former function for details of the transformation being
 *     performed.
 *
 *     See below the results of undistortImage.
 *        -   a\) result of undistort of perspective camera model (all possible coefficients (k_1, k_2, k_3,
 *             k_4, k_5, k_6) of distortion were optimized under calibration)
 *         -   b\) result of fisheye::undistortImage of fisheye camera model (all possible coefficients (k_1, k_2,
 *             k_3, k_4) of fisheye distortion were optimized under calibration)
 *         -   c\) original image was captured with fisheye lens
 *
 *     Pictures a) and b) almost the same. But if we consider points of image located far from the center
 *     of image, we can notice that on image a) these points are distorted.
 *
 *     ![image](pics/fisheye_undistorted.jpg)
 */
+ (void)undistortImage:(Mat*)distorted undistorted:(Mat*)undistorted K:(Mat*)K D:(Mat*)D Knew:(Mat*)Knew NS_SWIFT_NAME(undistortImage(distorted:undistorted:K:D:Knew:));

/**
 * Transforms an image to compensate for fisheye lens distortion.
 *
 * @param distorted image with fisheye lens distortion.
 * @param undistorted Output image with compensated fisheye lens distortion.
 * @param K Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } K = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{_1}$$`.
 * @param D Input vector of distortion coefficients `$$(k_1, k_2, k_3, k_4)$$`.
 *     may additionally scale and shift the result by using a different matrix.
 *
 *     The function transforms an image to compensate radial and tangential lens distortion.
 *
 *     The function is simply a combination of fisheye::initUndistortRectifyMap (with unity R ) and remap
 *     (with bilinear interpolation). See the former function for details of the transformation being
 *     performed.
 *
 *     See below the results of undistortImage.
 *        -   a\) result of undistort of perspective camera model (all possible coefficients (k_1, k_2, k_3,
 *             k_4, k_5, k_6) of distortion were optimized under calibration)
 *         -   b\) result of fisheye::undistortImage of fisheye camera model (all possible coefficients (k_1, k_2,
 *             k_3, k_4) of fisheye distortion were optimized under calibration)
 *         -   c\) original image was captured with fisheye lens
 *
 *     Pictures a) and b) almost the same. But if we consider points of image located far from the center
 *     of image, we can notice that on image a) these points are distorted.
 *
 *     ![image](pics/fisheye_undistorted.jpg)
 */
+ (void)undistortImage:(Mat*)distorted undistorted:(Mat*)undistorted K:(Mat*)K D:(Mat*)D NS_SWIFT_NAME(undistortImage(distorted:undistorted:K:D:));


//
//  void cv::fisheye::undistortPoints(Mat distorted, Mat& undistorted, Mat K, Mat D, Mat R = Mat(), Mat P = Mat())
//
/**
 * Undistorts 2D points using fisheye model
 *
 * @param distorted Array of object points, 1xN/Nx1 2-channel (or vector\<Point2f\> ), where N is the
 *     number of points in the view.
 * @param K Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } K = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{_1}$$`.
 * @param D Input vector of distortion coefficients `$$(k_1, k_2, k_3, k_4)$$`.
 * @param R Rectification transformation in the object space: 3x3 1-channel, or vector: 3x1/1x3
 *     1-channel or 1x1 3-channel
 * @param P New camera matrix (3x3) or new projection matrix (3x4)
 * @param undistorted Output array of image points, 1xN/Nx1 2-channel, or vector\<Point2f\> .
 */
+ (void)undistortPoints:(Mat*)distorted undistorted:(Mat*)undistorted K:(Mat*)K D:(Mat*)D R:(Mat*)R P:(Mat*)P NS_SWIFT_NAME(undistortPoints(distorted:undistorted:K:D:R:P:));

/**
 * Undistorts 2D points using fisheye model
 *
 * @param distorted Array of object points, 1xN/Nx1 2-channel (or vector\<Point2f\> ), where N is the
 *     number of points in the view.
 * @param K Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } K = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{_1}$$`.
 * @param D Input vector of distortion coefficients `$$(k_1, k_2, k_3, k_4)$$`.
 * @param R Rectification transformation in the object space: 3x3 1-channel, or vector: 3x1/1x3
 *     1-channel or 1x1 3-channel
 * @param undistorted Output array of image points, 1xN/Nx1 2-channel, or vector\<Point2f\> .
 */
+ (void)undistortPoints:(Mat*)distorted undistorted:(Mat*)undistorted K:(Mat*)K D:(Mat*)D R:(Mat*)R NS_SWIFT_NAME(undistortPoints(distorted:undistorted:K:D:R:));

/**
 * Undistorts 2D points using fisheye model
 *
 * @param distorted Array of object points, 1xN/Nx1 2-channel (or vector\<Point2f\> ), where N is the
 *     number of points in the view.
 * @param K Camera matrix `$$\newcommand{\vecthreethree}[9]{ \begin{bmatrix} #1 & #2 & #3\\\\ #4 & #5 & #6\\\\ #7 & #8 & #9 \end{bmatrix} } K = \vecthreethree{f_x}{0}{c_x}{0}{f_y}{c_y}{0}{0}{_1}$$`.
 * @param D Input vector of distortion coefficients `$$(k_1, k_2, k_3, k_4)$$`.
 *     1-channel or 1x1 3-channel
 * @param undistorted Output array of image points, 1xN/Nx1 2-channel, or vector\<Point2f\> .
 */
+ (void)undistortPoints:(Mat*)distorted undistorted:(Mat*)undistorted K:(Mat*)K D:(Mat*)D NS_SWIFT_NAME(undistortPoints(distorted:undistorted:K:D:));



@end

NS_ASSUME_NONNULL_END



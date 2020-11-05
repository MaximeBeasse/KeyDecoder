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
#import "StereoMatcher.h"





NS_ASSUME_NONNULL_BEGIN

// C++: class StereoSGBM
/**
 * The class implements the modified H. Hirschmuller algorithm CITE: HH08 that differs from the original
 * one as follows:
 *
 * -   By default, the algorithm is single-pass, which means that you consider only 5 directions
 * instead of 8. Set mode=StereoSGBM::MODE_HH in createStereoSGBM to run the full variant of the
 * algorithm but beware that it may consume a lot of memory.
 * -   The algorithm matches blocks, not individual pixels. Though, setting blockSize=1 reduces the
 * blocks to single pixels.
 * -   Mutual information cost function is not implemented. Instead, a simpler Birchfield-Tomasi
 * sub-pixel metric from CITE: BT98 is used. Though, the color images are supported as well.
 * -   Some pre- and post- processing steps from K. Konolige algorithm StereoBM are included, for
 * example: pre-filtering (StereoBM::PREFILTER_XSOBEL type) and post-filtering (uniqueness
 * check, quadratic interpolation and speckle filtering).
 *
 * @note
 *    -   (Python) An example illustrating the use of the StereoSGBM matching algorithm can be found
 *         at opencv_source_code/samples/python/stereo_match.py
 *
 * Member of `Calib3d`
 */
CV_EXPORTS @interface StereoSGBM : StereoMatcher


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::StereoSGBM> nativePtrStereoSGBM;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::StereoSGBM>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::StereoSGBM>)nativePtr;
#endif


#pragma mark - Class Constants


@property (class, readonly) int MODE_SGBM NS_SWIFT_NAME(MODE_SGBM);
@property (class, readonly) int MODE_HH NS_SWIFT_NAME(MODE_HH);
@property (class, readonly) int MODE_SGBM_3WAY NS_SWIFT_NAME(MODE_SGBM_3WAY);
@property (class, readonly) int MODE_HH4 NS_SWIFT_NAME(MODE_HH4);

#pragma mark - Methods


//
// static Ptr_StereoSGBM cv::StereoSGBM::create(int minDisparity = 0, int numDisparities = 16, int blockSize = 3, int P1 = 0, int P2 = 0, int disp12MaxDiff = 0, int preFilterCap = 0, int uniquenessRatio = 0, int speckleWindowSize = 0, int speckleRange = 0, int mode = StereoSGBM::MODE_SGBM)
//
/**
 * Creates StereoSGBM object
 *
 * @param minDisparity Minimum possible disparity value. Normally, it is zero but sometimes
 *     rectification algorithms can shift images, so this parameter needs to be adjusted accordingly.
 * @param numDisparities Maximum disparity minus minimum disparity. The value is always greater than
 *     zero. In the current implementation, this parameter must be divisible by 16.
 * @param blockSize Matched block size. It must be an odd number \>=1 . Normally, it should be
 *     somewhere in the 3..11 range.
 * @param P1 The first parameter controlling the disparity smoothness. See below.
 * @param P2 The second parameter controlling the disparity smoothness. The larger the values are,
 *     the smoother the disparity is. P1 is the penalty on the disparity change by plus or minus 1
 *     between neighbor pixels. P2 is the penalty on the disparity change by more than 1 between neighbor
 *     pixels. The algorithm requires P2 \> P1 . See stereo_match.cpp sample where some reasonably good
 *     P1 and P2 values are shown (like 8\*number_of_image_channels\*blockSize\*blockSize and
 *     32\*number_of_image_channels\*blockSize\*blockSize , respectively).
 * @param disp12MaxDiff Maximum allowed difference (in integer pixel units) in the left-right
 *     disparity check. Set it to a non-positive value to disable the check.
 * @param preFilterCap Truncation value for the prefiltered image pixels. The algorithm first
 *     computes x-derivative at each pixel and clips its value by [-preFilterCap, preFilterCap] interval.
 *     The result values are passed to the Birchfield-Tomasi pixel cost function.
 * @param uniquenessRatio Margin in percentage by which the best (minimum) computed cost function
 *     value should "win" the second best value to consider the found match correct. Normally, a value
 *     within the 5-15 range is good enough.
 * @param speckleWindowSize Maximum size of smooth disparity regions to consider their noise speckles
 *     and invalidate. Set it to 0 to disable speckle filtering. Otherwise, set it somewhere in the
 *     50-200 range.
 * @param speckleRange Maximum disparity variation within each connected component. If you do speckle
 *     filtering, set the parameter to a positive value, it will be implicitly multiplied by 16.
 *     Normally, 1 or 2 is good enough.
 * @param mode Set it to StereoSGBM::MODE_HH to run the full-scale two-pass dynamic programming
 *     algorithm. It will consume O(W\*H\*numDisparities) bytes, which is large for 640x480 stereo and
 *     huge for HD-size pictures. By default, it is set to false .
 *
 *     The first constructor initializes StereoSGBM with all the default parameters. So, you only have to
 *     set StereoSGBM::numDisparities at minimum. The second constructor enables you to set each parameter
 *     to a custom value.
 */
+ (StereoSGBM*)create:(int)minDisparity numDisparities:(int)numDisparities blockSize:(int)blockSize P1:(int)P1 P2:(int)P2 disp12MaxDiff:(int)disp12MaxDiff preFilterCap:(int)preFilterCap uniquenessRatio:(int)uniquenessRatio speckleWindowSize:(int)speckleWindowSize speckleRange:(int)speckleRange mode:(int)mode NS_SWIFT_NAME(create(minDisparity:numDisparities:blockSize:P1:P2:disp12MaxDiff:preFilterCap:uniquenessRatio:speckleWindowSize:speckleRange:mode:));

/**
 * Creates StereoSGBM object
 *
 * @param minDisparity Minimum possible disparity value. Normally, it is zero but sometimes
 *     rectification algorithms can shift images, so this parameter needs to be adjusted accordingly.
 * @param numDisparities Maximum disparity minus minimum disparity. The value is always greater than
 *     zero. In the current implementation, this parameter must be divisible by 16.
 * @param blockSize Matched block size. It must be an odd number \>=1 . Normally, it should be
 *     somewhere in the 3..11 range.
 * @param P1 The first parameter controlling the disparity smoothness. See below.
 * @param P2 The second parameter controlling the disparity smoothness. The larger the values are,
 *     the smoother the disparity is. P1 is the penalty on the disparity change by plus or minus 1
 *     between neighbor pixels. P2 is the penalty on the disparity change by more than 1 between neighbor
 *     pixels. The algorithm requires P2 \> P1 . See stereo_match.cpp sample where some reasonably good
 *     P1 and P2 values are shown (like 8\*number_of_image_channels\*blockSize\*blockSize and
 *     32\*number_of_image_channels\*blockSize\*blockSize , respectively).
 * @param disp12MaxDiff Maximum allowed difference (in integer pixel units) in the left-right
 *     disparity check. Set it to a non-positive value to disable the check.
 * @param preFilterCap Truncation value for the prefiltered image pixels. The algorithm first
 *     computes x-derivative at each pixel and clips its value by [-preFilterCap, preFilterCap] interval.
 *     The result values are passed to the Birchfield-Tomasi pixel cost function.
 * @param uniquenessRatio Margin in percentage by which the best (minimum) computed cost function
 *     value should "win" the second best value to consider the found match correct. Normally, a value
 *     within the 5-15 range is good enough.
 * @param speckleWindowSize Maximum size of smooth disparity regions to consider their noise speckles
 *     and invalidate. Set it to 0 to disable speckle filtering. Otherwise, set it somewhere in the
 *     50-200 range.
 * @param speckleRange Maximum disparity variation within each connected component. If you do speckle
 *     filtering, set the parameter to a positive value, it will be implicitly multiplied by 16.
 *     Normally, 1 or 2 is good enough.
 *     algorithm. It will consume O(W\*H\*numDisparities) bytes, which is large for 640x480 stereo and
 *     huge for HD-size pictures. By default, it is set to false .
 *
 *     The first constructor initializes StereoSGBM with all the default parameters. So, you only have to
 *     set StereoSGBM::numDisparities at minimum. The second constructor enables you to set each parameter
 *     to a custom value.
 */
+ (StereoSGBM*)create:(int)minDisparity numDisparities:(int)numDisparities blockSize:(int)blockSize P1:(int)P1 P2:(int)P2 disp12MaxDiff:(int)disp12MaxDiff preFilterCap:(int)preFilterCap uniquenessRatio:(int)uniquenessRatio speckleWindowSize:(int)speckleWindowSize speckleRange:(int)speckleRange NS_SWIFT_NAME(create(minDisparity:numDisparities:blockSize:P1:P2:disp12MaxDiff:preFilterCap:uniquenessRatio:speckleWindowSize:speckleRange:));

/**
 * Creates StereoSGBM object
 *
 * @param minDisparity Minimum possible disparity value. Normally, it is zero but sometimes
 *     rectification algorithms can shift images, so this parameter needs to be adjusted accordingly.
 * @param numDisparities Maximum disparity minus minimum disparity. The value is always greater than
 *     zero. In the current implementation, this parameter must be divisible by 16.
 * @param blockSize Matched block size. It must be an odd number \>=1 . Normally, it should be
 *     somewhere in the 3..11 range.
 * @param P1 The first parameter controlling the disparity smoothness. See below.
 * @param P2 The second parameter controlling the disparity smoothness. The larger the values are,
 *     the smoother the disparity is. P1 is the penalty on the disparity change by plus or minus 1
 *     between neighbor pixels. P2 is the penalty on the disparity change by more than 1 between neighbor
 *     pixels. The algorithm requires P2 \> P1 . See stereo_match.cpp sample where some reasonably good
 *     P1 and P2 values are shown (like 8\*number_of_image_channels\*blockSize\*blockSize and
 *     32\*number_of_image_channels\*blockSize\*blockSize , respectively).
 * @param disp12MaxDiff Maximum allowed difference (in integer pixel units) in the left-right
 *     disparity check. Set it to a non-positive value to disable the check.
 * @param preFilterCap Truncation value for the prefiltered image pixels. The algorithm first
 *     computes x-derivative at each pixel and clips its value by [-preFilterCap, preFilterCap] interval.
 *     The result values are passed to the Birchfield-Tomasi pixel cost function.
 * @param uniquenessRatio Margin in percentage by which the best (minimum) computed cost function
 *     value should "win" the second best value to consider the found match correct. Normally, a value
 *     within the 5-15 range is good enough.
 * @param speckleWindowSize Maximum size of smooth disparity regions to consider their noise speckles
 *     and invalidate. Set it to 0 to disable speckle filtering. Otherwise, set it somewhere in the
 *     50-200 range.
 *     filtering, set the parameter to a positive value, it will be implicitly multiplied by 16.
 *     Normally, 1 or 2 is good enough.
 *     algorithm. It will consume O(W\*H\*numDisparities) bytes, which is large for 640x480 stereo and
 *     huge for HD-size pictures. By default, it is set to false .
 *
 *     The first constructor initializes StereoSGBM with all the default parameters. So, you only have to
 *     set StereoSGBM::numDisparities at minimum. The second constructor enables you to set each parameter
 *     to a custom value.
 */
+ (StereoSGBM*)create:(int)minDisparity numDisparities:(int)numDisparities blockSize:(int)blockSize P1:(int)P1 P2:(int)P2 disp12MaxDiff:(int)disp12MaxDiff preFilterCap:(int)preFilterCap uniquenessRatio:(int)uniquenessRatio speckleWindowSize:(int)speckleWindowSize NS_SWIFT_NAME(create(minDisparity:numDisparities:blockSize:P1:P2:disp12MaxDiff:preFilterCap:uniquenessRatio:speckleWindowSize:));

/**
 * Creates StereoSGBM object
 *
 * @param minDisparity Minimum possible disparity value. Normally, it is zero but sometimes
 *     rectification algorithms can shift images, so this parameter needs to be adjusted accordingly.
 * @param numDisparities Maximum disparity minus minimum disparity. The value is always greater than
 *     zero. In the current implementation, this parameter must be divisible by 16.
 * @param blockSize Matched block size. It must be an odd number \>=1 . Normally, it should be
 *     somewhere in the 3..11 range.
 * @param P1 The first parameter controlling the disparity smoothness. See below.
 * @param P2 The second parameter controlling the disparity smoothness. The larger the values are,
 *     the smoother the disparity is. P1 is the penalty on the disparity change by plus or minus 1
 *     between neighbor pixels. P2 is the penalty on the disparity change by more than 1 between neighbor
 *     pixels. The algorithm requires P2 \> P1 . See stereo_match.cpp sample where some reasonably good
 *     P1 and P2 values are shown (like 8\*number_of_image_channels\*blockSize\*blockSize and
 *     32\*number_of_image_channels\*blockSize\*blockSize , respectively).
 * @param disp12MaxDiff Maximum allowed difference (in integer pixel units) in the left-right
 *     disparity check. Set it to a non-positive value to disable the check.
 * @param preFilterCap Truncation value for the prefiltered image pixels. The algorithm first
 *     computes x-derivative at each pixel and clips its value by [-preFilterCap, preFilterCap] interval.
 *     The result values are passed to the Birchfield-Tomasi pixel cost function.
 * @param uniquenessRatio Margin in percentage by which the best (minimum) computed cost function
 *     value should "win" the second best value to consider the found match correct. Normally, a value
 *     within the 5-15 range is good enough.
 *     and invalidate. Set it to 0 to disable speckle filtering. Otherwise, set it somewhere in the
 *     50-200 range.
 *     filtering, set the parameter to a positive value, it will be implicitly multiplied by 16.
 *     Normally, 1 or 2 is good enough.
 *     algorithm. It will consume O(W\*H\*numDisparities) bytes, which is large for 640x480 stereo and
 *     huge for HD-size pictures. By default, it is set to false .
 *
 *     The first constructor initializes StereoSGBM with all the default parameters. So, you only have to
 *     set StereoSGBM::numDisparities at minimum. The second constructor enables you to set each parameter
 *     to a custom value.
 */
+ (StereoSGBM*)create:(int)minDisparity numDisparities:(int)numDisparities blockSize:(int)blockSize P1:(int)P1 P2:(int)P2 disp12MaxDiff:(int)disp12MaxDiff preFilterCap:(int)preFilterCap uniquenessRatio:(int)uniquenessRatio NS_SWIFT_NAME(create(minDisparity:numDisparities:blockSize:P1:P2:disp12MaxDiff:preFilterCap:uniquenessRatio:));

/**
 * Creates StereoSGBM object
 *
 * @param minDisparity Minimum possible disparity value. Normally, it is zero but sometimes
 *     rectification algorithms can shift images, so this parameter needs to be adjusted accordingly.
 * @param numDisparities Maximum disparity minus minimum disparity. The value is always greater than
 *     zero. In the current implementation, this parameter must be divisible by 16.
 * @param blockSize Matched block size. It must be an odd number \>=1 . Normally, it should be
 *     somewhere in the 3..11 range.
 * @param P1 The first parameter controlling the disparity smoothness. See below.
 * @param P2 The second parameter controlling the disparity smoothness. The larger the values are,
 *     the smoother the disparity is. P1 is the penalty on the disparity change by plus or minus 1
 *     between neighbor pixels. P2 is the penalty on the disparity change by more than 1 between neighbor
 *     pixels. The algorithm requires P2 \> P1 . See stereo_match.cpp sample where some reasonably good
 *     P1 and P2 values are shown (like 8\*number_of_image_channels\*blockSize\*blockSize and
 *     32\*number_of_image_channels\*blockSize\*blockSize , respectively).
 * @param disp12MaxDiff Maximum allowed difference (in integer pixel units) in the left-right
 *     disparity check. Set it to a non-positive value to disable the check.
 * @param preFilterCap Truncation value for the prefiltered image pixels. The algorithm first
 *     computes x-derivative at each pixel and clips its value by [-preFilterCap, preFilterCap] interval.
 *     The result values are passed to the Birchfield-Tomasi pixel cost function.
 *     value should "win" the second best value to consider the found match correct. Normally, a value
 *     within the 5-15 range is good enough.
 *     and invalidate. Set it to 0 to disable speckle filtering. Otherwise, set it somewhere in the
 *     50-200 range.
 *     filtering, set the parameter to a positive value, it will be implicitly multiplied by 16.
 *     Normally, 1 or 2 is good enough.
 *     algorithm. It will consume O(W\*H\*numDisparities) bytes, which is large for 640x480 stereo and
 *     huge for HD-size pictures. By default, it is set to false .
 *
 *     The first constructor initializes StereoSGBM with all the default parameters. So, you only have to
 *     set StereoSGBM::numDisparities at minimum. The second constructor enables you to set each parameter
 *     to a custom value.
 */
+ (StereoSGBM*)create:(int)minDisparity numDisparities:(int)numDisparities blockSize:(int)blockSize P1:(int)P1 P2:(int)P2 disp12MaxDiff:(int)disp12MaxDiff preFilterCap:(int)preFilterCap NS_SWIFT_NAME(create(minDisparity:numDisparities:blockSize:P1:P2:disp12MaxDiff:preFilterCap:));

/**
 * Creates StereoSGBM object
 *
 * @param minDisparity Minimum possible disparity value. Normally, it is zero but sometimes
 *     rectification algorithms can shift images, so this parameter needs to be adjusted accordingly.
 * @param numDisparities Maximum disparity minus minimum disparity. The value is always greater than
 *     zero. In the current implementation, this parameter must be divisible by 16.
 * @param blockSize Matched block size. It must be an odd number \>=1 . Normally, it should be
 *     somewhere in the 3..11 range.
 * @param P1 The first parameter controlling the disparity smoothness. See below.
 * @param P2 The second parameter controlling the disparity smoothness. The larger the values are,
 *     the smoother the disparity is. P1 is the penalty on the disparity change by plus or minus 1
 *     between neighbor pixels. P2 is the penalty on the disparity change by more than 1 between neighbor
 *     pixels. The algorithm requires P2 \> P1 . See stereo_match.cpp sample where some reasonably good
 *     P1 and P2 values are shown (like 8\*number_of_image_channels\*blockSize\*blockSize and
 *     32\*number_of_image_channels\*blockSize\*blockSize , respectively).
 * @param disp12MaxDiff Maximum allowed difference (in integer pixel units) in the left-right
 *     disparity check. Set it to a non-positive value to disable the check.
 *     computes x-derivative at each pixel and clips its value by [-preFilterCap, preFilterCap] interval.
 *     The result values are passed to the Birchfield-Tomasi pixel cost function.
 *     value should "win" the second best value to consider the found match correct. Normally, a value
 *     within the 5-15 range is good enough.
 *     and invalidate. Set it to 0 to disable speckle filtering. Otherwise, set it somewhere in the
 *     50-200 range.
 *     filtering, set the parameter to a positive value, it will be implicitly multiplied by 16.
 *     Normally, 1 or 2 is good enough.
 *     algorithm. It will consume O(W\*H\*numDisparities) bytes, which is large for 640x480 stereo and
 *     huge for HD-size pictures. By default, it is set to false .
 *
 *     The first constructor initializes StereoSGBM with all the default parameters. So, you only have to
 *     set StereoSGBM::numDisparities at minimum. The second constructor enables you to set each parameter
 *     to a custom value.
 */
+ (StereoSGBM*)create:(int)minDisparity numDisparities:(int)numDisparities blockSize:(int)blockSize P1:(int)P1 P2:(int)P2 disp12MaxDiff:(int)disp12MaxDiff NS_SWIFT_NAME(create(minDisparity:numDisparities:blockSize:P1:P2:disp12MaxDiff:));

/**
 * Creates StereoSGBM object
 *
 * @param minDisparity Minimum possible disparity value. Normally, it is zero but sometimes
 *     rectification algorithms can shift images, so this parameter needs to be adjusted accordingly.
 * @param numDisparities Maximum disparity minus minimum disparity. The value is always greater than
 *     zero. In the current implementation, this parameter must be divisible by 16.
 * @param blockSize Matched block size. It must be an odd number \>=1 . Normally, it should be
 *     somewhere in the 3..11 range.
 * @param P1 The first parameter controlling the disparity smoothness. See below.
 * @param P2 The second parameter controlling the disparity smoothness. The larger the values are,
 *     the smoother the disparity is. P1 is the penalty on the disparity change by plus or minus 1
 *     between neighbor pixels. P2 is the penalty on the disparity change by more than 1 between neighbor
 *     pixels. The algorithm requires P2 \> P1 . See stereo_match.cpp sample where some reasonably good
 *     P1 and P2 values are shown (like 8\*number_of_image_channels\*blockSize\*blockSize and
 *     32\*number_of_image_channels\*blockSize\*blockSize , respectively).
 *     disparity check. Set it to a non-positive value to disable the check.
 *     computes x-derivative at each pixel and clips its value by [-preFilterCap, preFilterCap] interval.
 *     The result values are passed to the Birchfield-Tomasi pixel cost function.
 *     value should "win" the second best value to consider the found match correct. Normally, a value
 *     within the 5-15 range is good enough.
 *     and invalidate. Set it to 0 to disable speckle filtering. Otherwise, set it somewhere in the
 *     50-200 range.
 *     filtering, set the parameter to a positive value, it will be implicitly multiplied by 16.
 *     Normally, 1 or 2 is good enough.
 *     algorithm. It will consume O(W\*H\*numDisparities) bytes, which is large for 640x480 stereo and
 *     huge for HD-size pictures. By default, it is set to false .
 *
 *     The first constructor initializes StereoSGBM with all the default parameters. So, you only have to
 *     set StereoSGBM::numDisparities at minimum. The second constructor enables you to set each parameter
 *     to a custom value.
 */
+ (StereoSGBM*)create:(int)minDisparity numDisparities:(int)numDisparities blockSize:(int)blockSize P1:(int)P1 P2:(int)P2 NS_SWIFT_NAME(create(minDisparity:numDisparities:blockSize:P1:P2:));

/**
 * Creates StereoSGBM object
 *
 * @param minDisparity Minimum possible disparity value. Normally, it is zero but sometimes
 *     rectification algorithms can shift images, so this parameter needs to be adjusted accordingly.
 * @param numDisparities Maximum disparity minus minimum disparity. The value is always greater than
 *     zero. In the current implementation, this parameter must be divisible by 16.
 * @param blockSize Matched block size. It must be an odd number \>=1 . Normally, it should be
 *     somewhere in the 3..11 range.
 * @param P1 The first parameter controlling the disparity smoothness. See below.
 *     the smoother the disparity is. P1 is the penalty on the disparity change by plus or minus 1
 *     between neighbor pixels. P2 is the penalty on the disparity change by more than 1 between neighbor
 *     pixels. The algorithm requires P2 \> P1 . See stereo_match.cpp sample where some reasonably good
 *     P1 and P2 values are shown (like 8\*number_of_image_channels\*blockSize\*blockSize and
 *     32\*number_of_image_channels\*blockSize\*blockSize , respectively).
 *     disparity check. Set it to a non-positive value to disable the check.
 *     computes x-derivative at each pixel and clips its value by [-preFilterCap, preFilterCap] interval.
 *     The result values are passed to the Birchfield-Tomasi pixel cost function.
 *     value should "win" the second best value to consider the found match correct. Normally, a value
 *     within the 5-15 range is good enough.
 *     and invalidate. Set it to 0 to disable speckle filtering. Otherwise, set it somewhere in the
 *     50-200 range.
 *     filtering, set the parameter to a positive value, it will be implicitly multiplied by 16.
 *     Normally, 1 or 2 is good enough.
 *     algorithm. It will consume O(W\*H\*numDisparities) bytes, which is large for 640x480 stereo and
 *     huge for HD-size pictures. By default, it is set to false .
 *
 *     The first constructor initializes StereoSGBM with all the default parameters. So, you only have to
 *     set StereoSGBM::numDisparities at minimum. The second constructor enables you to set each parameter
 *     to a custom value.
 */
+ (StereoSGBM*)create:(int)minDisparity numDisparities:(int)numDisparities blockSize:(int)blockSize P1:(int)P1 NS_SWIFT_NAME(create(minDisparity:numDisparities:blockSize:P1:));

/**
 * Creates StereoSGBM object
 *
 * @param minDisparity Minimum possible disparity value. Normally, it is zero but sometimes
 *     rectification algorithms can shift images, so this parameter needs to be adjusted accordingly.
 * @param numDisparities Maximum disparity minus minimum disparity. The value is always greater than
 *     zero. In the current implementation, this parameter must be divisible by 16.
 * @param blockSize Matched block size. It must be an odd number \>=1 . Normally, it should be
 *     somewhere in the 3..11 range.
 *     the smoother the disparity is. P1 is the penalty on the disparity change by plus or minus 1
 *     between neighbor pixels. P2 is the penalty on the disparity change by more than 1 between neighbor
 *     pixels. The algorithm requires P2 \> P1 . See stereo_match.cpp sample where some reasonably good
 *     P1 and P2 values are shown (like 8\*number_of_image_channels\*blockSize\*blockSize and
 *     32\*number_of_image_channels\*blockSize\*blockSize , respectively).
 *     disparity check. Set it to a non-positive value to disable the check.
 *     computes x-derivative at each pixel and clips its value by [-preFilterCap, preFilterCap] interval.
 *     The result values are passed to the Birchfield-Tomasi pixel cost function.
 *     value should "win" the second best value to consider the found match correct. Normally, a value
 *     within the 5-15 range is good enough.
 *     and invalidate. Set it to 0 to disable speckle filtering. Otherwise, set it somewhere in the
 *     50-200 range.
 *     filtering, set the parameter to a positive value, it will be implicitly multiplied by 16.
 *     Normally, 1 or 2 is good enough.
 *     algorithm. It will consume O(W\*H\*numDisparities) bytes, which is large for 640x480 stereo and
 *     huge for HD-size pictures. By default, it is set to false .
 *
 *     The first constructor initializes StereoSGBM with all the default parameters. So, you only have to
 *     set StereoSGBM::numDisparities at minimum. The second constructor enables you to set each parameter
 *     to a custom value.
 */
+ (StereoSGBM*)create:(int)minDisparity numDisparities:(int)numDisparities blockSize:(int)blockSize NS_SWIFT_NAME(create(minDisparity:numDisparities:blockSize:));

/**
 * Creates StereoSGBM object
 *
 * @param minDisparity Minimum possible disparity value. Normally, it is zero but sometimes
 *     rectification algorithms can shift images, so this parameter needs to be adjusted accordingly.
 * @param numDisparities Maximum disparity minus minimum disparity. The value is always greater than
 *     zero. In the current implementation, this parameter must be divisible by 16.
 *     somewhere in the 3..11 range.
 *     the smoother the disparity is. P1 is the penalty on the disparity change by plus or minus 1
 *     between neighbor pixels. P2 is the penalty on the disparity change by more than 1 between neighbor
 *     pixels. The algorithm requires P2 \> P1 . See stereo_match.cpp sample where some reasonably good
 *     P1 and P2 values are shown (like 8\*number_of_image_channels\*blockSize\*blockSize and
 *     32\*number_of_image_channels\*blockSize\*blockSize , respectively).
 *     disparity check. Set it to a non-positive value to disable the check.
 *     computes x-derivative at each pixel and clips its value by [-preFilterCap, preFilterCap] interval.
 *     The result values are passed to the Birchfield-Tomasi pixel cost function.
 *     value should "win" the second best value to consider the found match correct. Normally, a value
 *     within the 5-15 range is good enough.
 *     and invalidate. Set it to 0 to disable speckle filtering. Otherwise, set it somewhere in the
 *     50-200 range.
 *     filtering, set the parameter to a positive value, it will be implicitly multiplied by 16.
 *     Normally, 1 or 2 is good enough.
 *     algorithm. It will consume O(W\*H\*numDisparities) bytes, which is large for 640x480 stereo and
 *     huge for HD-size pictures. By default, it is set to false .
 *
 *     The first constructor initializes StereoSGBM with all the default parameters. So, you only have to
 *     set StereoSGBM::numDisparities at minimum. The second constructor enables you to set each parameter
 *     to a custom value.
 */
+ (StereoSGBM*)create:(int)minDisparity numDisparities:(int)numDisparities NS_SWIFT_NAME(create(minDisparity:numDisparities:));

/**
 * Creates StereoSGBM object
 *
 * @param minDisparity Minimum possible disparity value. Normally, it is zero but sometimes
 *     rectification algorithms can shift images, so this parameter needs to be adjusted accordingly.
 *     zero. In the current implementation, this parameter must be divisible by 16.
 *     somewhere in the 3..11 range.
 *     the smoother the disparity is. P1 is the penalty on the disparity change by plus or minus 1
 *     between neighbor pixels. P2 is the penalty on the disparity change by more than 1 between neighbor
 *     pixels. The algorithm requires P2 \> P1 . See stereo_match.cpp sample where some reasonably good
 *     P1 and P2 values are shown (like 8\*number_of_image_channels\*blockSize\*blockSize and
 *     32\*number_of_image_channels\*blockSize\*blockSize , respectively).
 *     disparity check. Set it to a non-positive value to disable the check.
 *     computes x-derivative at each pixel and clips its value by [-preFilterCap, preFilterCap] interval.
 *     The result values are passed to the Birchfield-Tomasi pixel cost function.
 *     value should "win" the second best value to consider the found match correct. Normally, a value
 *     within the 5-15 range is good enough.
 *     and invalidate. Set it to 0 to disable speckle filtering. Otherwise, set it somewhere in the
 *     50-200 range.
 *     filtering, set the parameter to a positive value, it will be implicitly multiplied by 16.
 *     Normally, 1 or 2 is good enough.
 *     algorithm. It will consume O(W\*H\*numDisparities) bytes, which is large for 640x480 stereo and
 *     huge for HD-size pictures. By default, it is set to false .
 *
 *     The first constructor initializes StereoSGBM with all the default parameters. So, you only have to
 *     set StereoSGBM::numDisparities at minimum. The second constructor enables you to set each parameter
 *     to a custom value.
 */
+ (StereoSGBM*)create:(int)minDisparity NS_SWIFT_NAME(create(minDisparity:));

/**
 * Creates StereoSGBM object
 *
 *     rectification algorithms can shift images, so this parameter needs to be adjusted accordingly.
 *     zero. In the current implementation, this parameter must be divisible by 16.
 *     somewhere in the 3..11 range.
 *     the smoother the disparity is. P1 is the penalty on the disparity change by plus or minus 1
 *     between neighbor pixels. P2 is the penalty on the disparity change by more than 1 between neighbor
 *     pixels. The algorithm requires P2 \> P1 . See stereo_match.cpp sample where some reasonably good
 *     P1 and P2 values are shown (like 8\*number_of_image_channels\*blockSize\*blockSize and
 *     32\*number_of_image_channels\*blockSize\*blockSize , respectively).
 *     disparity check. Set it to a non-positive value to disable the check.
 *     computes x-derivative at each pixel and clips its value by [-preFilterCap, preFilterCap] interval.
 *     The result values are passed to the Birchfield-Tomasi pixel cost function.
 *     value should "win" the second best value to consider the found match correct. Normally, a value
 *     within the 5-15 range is good enough.
 *     and invalidate. Set it to 0 to disable speckle filtering. Otherwise, set it somewhere in the
 *     50-200 range.
 *     filtering, set the parameter to a positive value, it will be implicitly multiplied by 16.
 *     Normally, 1 or 2 is good enough.
 *     algorithm. It will consume O(W\*H\*numDisparities) bytes, which is large for 640x480 stereo and
 *     huge for HD-size pictures. By default, it is set to false .
 *
 *     The first constructor initializes StereoSGBM with all the default parameters. So, you only have to
 *     set StereoSGBM::numDisparities at minimum. The second constructor enables you to set each parameter
 *     to a custom value.
 */
+ (StereoSGBM*)create NS_SWIFT_NAME(create());


//
//  int cv::StereoSGBM::getMode()
//
- (int)getMode NS_SWIFT_NAME(getMode());


//
//  int cv::StereoSGBM::getP1()
//
- (int)getP1 NS_SWIFT_NAME(getP1());


//
//  int cv::StereoSGBM::getP2()
//
- (int)getP2 NS_SWIFT_NAME(getP2());


//
//  int cv::StereoSGBM::getPreFilterCap()
//
- (int)getPreFilterCap NS_SWIFT_NAME(getPreFilterCap());


//
//  int cv::StereoSGBM::getUniquenessRatio()
//
- (int)getUniquenessRatio NS_SWIFT_NAME(getUniquenessRatio());


//
//  void cv::StereoSGBM::setMode(int mode)
//
- (void)setMode:(int)mode NS_SWIFT_NAME(setMode(mode:));


//
//  void cv::StereoSGBM::setP1(int P1)
//
- (void)setP1:(int)P1 NS_SWIFT_NAME(setP1(P1:));


//
//  void cv::StereoSGBM::setP2(int P2)
//
- (void)setP2:(int)P2 NS_SWIFT_NAME(setP2(P2:));


//
//  void cv::StereoSGBM::setPreFilterCap(int preFilterCap)
//
- (void)setPreFilterCap:(int)preFilterCap NS_SWIFT_NAME(setPreFilterCap(preFilterCap:));


//
//  void cv::StereoSGBM::setUniquenessRatio(int uniquenessRatio)
//
- (void)setUniquenessRatio:(int)uniquenessRatio NS_SWIFT_NAME(setUniquenessRatio(uniquenessRatio:));



@end

NS_ASSUME_NONNULL_END



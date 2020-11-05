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

@class AlignMTB;
@class CalibrateDebevec;
@class CalibrateRobertson;
@class FloatVector;
@class Mat;
@class MergeDebevec;
@class MergeMertens;
@class MergeRobertson;
@class Point2i;
@class Tonemap;
@class TonemapDrago;
@class TonemapMantiuk;
@class TonemapReinhard;



NS_ASSUME_NONNULL_BEGIN

// C++: class Photo
/**
 * The Photo module
 *
 * Member classes: `Tonemap`, `TonemapDrago`, `TonemapReinhard`, `TonemapMantiuk`, `AlignExposures`, `AlignMTB`, `CalibrateCRF`, `CalibrateDebevec`, `CalibrateRobertson`, `MergeExposures`, `MergeDebevec`, `MergeMertens`, `MergeRobertson`
 *
 */
CV_EXPORTS @interface Photo : NSObject

#pragma mark - Class Constants


@property (class, readonly) int INPAINT_NS NS_SWIFT_NAME(INPAINT_NS);
@property (class, readonly) int INPAINT_TELEA NS_SWIFT_NAME(INPAINT_TELEA);
@property (class, readonly) int LDR_SIZE NS_SWIFT_NAME(LDR_SIZE);
@property (class, readonly) int NORMAL_CLONE NS_SWIFT_NAME(NORMAL_CLONE);
@property (class, readonly) int MIXED_CLONE NS_SWIFT_NAME(MIXED_CLONE);
@property (class, readonly) int MONOCHROME_TRANSFER NS_SWIFT_NAME(MONOCHROME_TRANSFER);
@property (class, readonly) int RECURS_FILTER NS_SWIFT_NAME(RECURS_FILTER);
@property (class, readonly) int NORMCONV_FILTER NS_SWIFT_NAME(NORMCONV_FILTER);

#pragma mark - Methods


//
//  Ptr_AlignMTB cv::createAlignMTB(int max_bits = 6, int exclude_range = 4, bool cut = true)
//
/**
 * Creates AlignMTB object
 *
 * @param max_bits logarithm to the base 2 of maximal shift in each dimension. Values of 5 and 6 are
 * usually good enough (31 and 63 pixels shift respectively).
 * @param exclude_range range for exclusion bitmap that is constructed to suppress noise around the
 * median value.
 * @param cut if true cuts images, otherwise fills the new regions with zeros.
 */
+ (AlignMTB*)createAlignMTB:(int)max_bits exclude_range:(int)exclude_range cut:(BOOL)cut NS_SWIFT_NAME(createAlignMTB(max_bits:exclude_range:cut:));

/**
 * Creates AlignMTB object
 *
 * @param max_bits logarithm to the base 2 of maximal shift in each dimension. Values of 5 and 6 are
 * usually good enough (31 and 63 pixels shift respectively).
 * @param exclude_range range for exclusion bitmap that is constructed to suppress noise around the
 * median value.
 */
+ (AlignMTB*)createAlignMTB:(int)max_bits exclude_range:(int)exclude_range NS_SWIFT_NAME(createAlignMTB(max_bits:exclude_range:));

/**
 * Creates AlignMTB object
 *
 * @param max_bits logarithm to the base 2 of maximal shift in each dimension. Values of 5 and 6 are
 * usually good enough (31 and 63 pixels shift respectively).
 * median value.
 */
+ (AlignMTB*)createAlignMTB:(int)max_bits NS_SWIFT_NAME(createAlignMTB(max_bits:));

/**
 * Creates AlignMTB object
 *
 * usually good enough (31 and 63 pixels shift respectively).
 * median value.
 */
+ (AlignMTB*)createAlignMTB NS_SWIFT_NAME(createAlignMTB());


//
//  Ptr_CalibrateDebevec cv::createCalibrateDebevec(int samples = 70, float lambda = 10.0f, bool random = false)
//
/**
 * Creates CalibrateDebevec object
 *
 * @param samples number of pixel locations to use
 * @param lambda smoothness term weight. Greater values produce smoother results, but can alter the
 * response.
 * @param random if true sample pixel locations are chosen at random, otherwise they form a
 * rectangular grid.
 */
+ (CalibrateDebevec*)createCalibrateDebevec:(int)samples lambda:(float)lambda random:(BOOL)random NS_SWIFT_NAME(createCalibrateDebevec(samples:lambda:random:));

/**
 * Creates CalibrateDebevec object
 *
 * @param samples number of pixel locations to use
 * @param lambda smoothness term weight. Greater values produce smoother results, but can alter the
 * response.
 * rectangular grid.
 */
+ (CalibrateDebevec*)createCalibrateDebevec:(int)samples lambda:(float)lambda NS_SWIFT_NAME(createCalibrateDebevec(samples:lambda:));

/**
 * Creates CalibrateDebevec object
 *
 * @param samples number of pixel locations to use
 * response.
 * rectangular grid.
 */
+ (CalibrateDebevec*)createCalibrateDebevec:(int)samples NS_SWIFT_NAME(createCalibrateDebevec(samples:));

/**
 * Creates CalibrateDebevec object
 *
 * response.
 * rectangular grid.
 */
+ (CalibrateDebevec*)createCalibrateDebevec NS_SWIFT_NAME(createCalibrateDebevec());


//
//  Ptr_CalibrateRobertson cv::createCalibrateRobertson(int max_iter = 30, float threshold = 0.01f)
//
/**
 * Creates CalibrateRobertson object
 *
 * @param max_iter maximal number of Gauss-Seidel solver iterations.
 * @param threshold target difference between results of two successive steps of the minimization.
 */
+ (CalibrateRobertson*)createCalibrateRobertson:(int)max_iter threshold:(float)threshold NS_SWIFT_NAME(createCalibrateRobertson(max_iter:threshold:));

/**
 * Creates CalibrateRobertson object
 *
 * @param max_iter maximal number of Gauss-Seidel solver iterations.
 */
+ (CalibrateRobertson*)createCalibrateRobertson:(int)max_iter NS_SWIFT_NAME(createCalibrateRobertson(max_iter:));

/**
 * Creates CalibrateRobertson object
 *
 */
+ (CalibrateRobertson*)createCalibrateRobertson NS_SWIFT_NAME(createCalibrateRobertson());


//
//  Ptr_MergeDebevec cv::createMergeDebevec()
//
/**
 * Creates MergeDebevec object
 */
+ (MergeDebevec*)createMergeDebevec NS_SWIFT_NAME(createMergeDebevec());


//
//  Ptr_MergeMertens cv::createMergeMertens(float contrast_weight = 1.0f, float saturation_weight = 1.0f, float exposure_weight = 0.0f)
//
/**
 * Creates MergeMertens object
 *
 * @param contrast_weight contrast measure weight. See MergeMertens.
 * @param saturation_weight saturation measure weight
 * @param exposure_weight well-exposedness measure weight
 */
+ (MergeMertens*)createMergeMertens:(float)contrast_weight saturation_weight:(float)saturation_weight exposure_weight:(float)exposure_weight NS_SWIFT_NAME(createMergeMertens(contrast_weight:saturation_weight:exposure_weight:));

/**
 * Creates MergeMertens object
 *
 * @param contrast_weight contrast measure weight. See MergeMertens.
 * @param saturation_weight saturation measure weight
 */
+ (MergeMertens*)createMergeMertens:(float)contrast_weight saturation_weight:(float)saturation_weight NS_SWIFT_NAME(createMergeMertens(contrast_weight:saturation_weight:));

/**
 * Creates MergeMertens object
 *
 * @param contrast_weight contrast measure weight. See MergeMertens.
 */
+ (MergeMertens*)createMergeMertens:(float)contrast_weight NS_SWIFT_NAME(createMergeMertens(contrast_weight:));

/**
 * Creates MergeMertens object
 *
 */
+ (MergeMertens*)createMergeMertens NS_SWIFT_NAME(createMergeMertens());


//
//  Ptr_MergeRobertson cv::createMergeRobertson()
//
/**
 * Creates MergeRobertson object
 */
+ (MergeRobertson*)createMergeRobertson NS_SWIFT_NAME(createMergeRobertson());


//
//  Ptr_Tonemap cv::createTonemap(float gamma = 1.0f)
//
/**
 * Creates simple linear mapper with gamma correction
 *
 * @param gamma positive value for gamma correction. Gamma value of 1.0 implies no correction, gamma
 * equal to 2.2f is suitable for most displays.
 * Generally gamma \> 1 brightens the image and gamma \< 1 darkens it.
 */
+ (Tonemap*)createTonemap:(float)gamma NS_SWIFT_NAME(createTonemap(gamma:));

/**
 * Creates simple linear mapper with gamma correction
 *
 * equal to 2.2f is suitable for most displays.
 * Generally gamma \> 1 brightens the image and gamma \< 1 darkens it.
 */
+ (Tonemap*)createTonemap NS_SWIFT_NAME(createTonemap());


//
//  Ptr_TonemapDrago cv::createTonemapDrago(float gamma = 1.0f, float saturation = 1.0f, float bias = 0.85f)
//
/**
 * Creates TonemapDrago object
 *
 * @param gamma gamma value for gamma correction. See createTonemap
 * @param saturation positive saturation enhancement value. 1.0 preserves saturation, values greater
 * than 1 increase saturation and values less than 1 decrease it.
 * @param bias value for bias function in [0, 1] range. Values from 0.7 to 0.9 usually give best
 * results, default value is 0.85.
 */
+ (TonemapDrago*)createTonemapDrago:(float)gamma saturation:(float)saturation bias:(float)bias NS_SWIFT_NAME(createTonemapDrago(gamma:saturation:bias:));

/**
 * Creates TonemapDrago object
 *
 * @param gamma gamma value for gamma correction. See createTonemap
 * @param saturation positive saturation enhancement value. 1.0 preserves saturation, values greater
 * than 1 increase saturation and values less than 1 decrease it.
 * results, default value is 0.85.
 */
+ (TonemapDrago*)createTonemapDrago:(float)gamma saturation:(float)saturation NS_SWIFT_NAME(createTonemapDrago(gamma:saturation:));

/**
 * Creates TonemapDrago object
 *
 * @param gamma gamma value for gamma correction. See createTonemap
 * than 1 increase saturation and values less than 1 decrease it.
 * results, default value is 0.85.
 */
+ (TonemapDrago*)createTonemapDrago:(float)gamma NS_SWIFT_NAME(createTonemapDrago(gamma:));

/**
 * Creates TonemapDrago object
 *
 * than 1 increase saturation and values less than 1 decrease it.
 * results, default value is 0.85.
 */
+ (TonemapDrago*)createTonemapDrago NS_SWIFT_NAME(createTonemapDrago());


//
//  Ptr_TonemapMantiuk cv::createTonemapMantiuk(float gamma = 1.0f, float scale = 0.7f, float saturation = 1.0f)
//
/**
 * Creates TonemapMantiuk object
 *
 * @param gamma gamma value for gamma correction. See createTonemap
 * @param scale contrast scale factor. HVS response is multiplied by this parameter, thus compressing
 * dynamic range. Values from 0.6 to 0.9 produce best results.
 * @param saturation saturation enhancement value. See createTonemapDrago
 */
+ (TonemapMantiuk*)createTonemapMantiuk:(float)gamma scale:(float)scale saturation:(float)saturation NS_SWIFT_NAME(createTonemapMantiuk(gamma:scale:saturation:));

/**
 * Creates TonemapMantiuk object
 *
 * @param gamma gamma value for gamma correction. See createTonemap
 * @param scale contrast scale factor. HVS response is multiplied by this parameter, thus compressing
 * dynamic range. Values from 0.6 to 0.9 produce best results.
 */
+ (TonemapMantiuk*)createTonemapMantiuk:(float)gamma scale:(float)scale NS_SWIFT_NAME(createTonemapMantiuk(gamma:scale:));

/**
 * Creates TonemapMantiuk object
 *
 * @param gamma gamma value for gamma correction. See createTonemap
 * dynamic range. Values from 0.6 to 0.9 produce best results.
 */
+ (TonemapMantiuk*)createTonemapMantiuk:(float)gamma NS_SWIFT_NAME(createTonemapMantiuk(gamma:));

/**
 * Creates TonemapMantiuk object
 *
 * dynamic range. Values from 0.6 to 0.9 produce best results.
 */
+ (TonemapMantiuk*)createTonemapMantiuk NS_SWIFT_NAME(createTonemapMantiuk());


//
//  Ptr_TonemapReinhard cv::createTonemapReinhard(float gamma = 1.0f, float intensity = 0.0f, float light_adapt = 1.0f, float color_adapt = 0.0f)
//
/**
 * Creates TonemapReinhard object
 *
 * @param gamma gamma value for gamma correction. See createTonemap
 * @param intensity result intensity in [-8, 8] range. Greater intensity produces brighter results.
 * @param light_adapt light adaptation in [0, 1] range. If 1 adaptation is based only on pixel
 * value, if 0 it's global, otherwise it's a weighted mean of this two cases.
 * @param color_adapt chromatic adaptation in [0, 1] range. If 1 channels are treated independently,
 * if 0 adaptation level is the same for each channel.
 */
+ (TonemapReinhard*)createTonemapReinhard:(float)gamma intensity:(float)intensity light_adapt:(float)light_adapt color_adapt:(float)color_adapt NS_SWIFT_NAME(createTonemapReinhard(gamma:intensity:light_adapt:color_adapt:));

/**
 * Creates TonemapReinhard object
 *
 * @param gamma gamma value for gamma correction. See createTonemap
 * @param intensity result intensity in [-8, 8] range. Greater intensity produces brighter results.
 * @param light_adapt light adaptation in [0, 1] range. If 1 adaptation is based only on pixel
 * value, if 0 it's global, otherwise it's a weighted mean of this two cases.
 * if 0 adaptation level is the same for each channel.
 */
+ (TonemapReinhard*)createTonemapReinhard:(float)gamma intensity:(float)intensity light_adapt:(float)light_adapt NS_SWIFT_NAME(createTonemapReinhard(gamma:intensity:light_adapt:));

/**
 * Creates TonemapReinhard object
 *
 * @param gamma gamma value for gamma correction. See createTonemap
 * @param intensity result intensity in [-8, 8] range. Greater intensity produces brighter results.
 * value, if 0 it's global, otherwise it's a weighted mean of this two cases.
 * if 0 adaptation level is the same for each channel.
 */
+ (TonemapReinhard*)createTonemapReinhard:(float)gamma intensity:(float)intensity NS_SWIFT_NAME(createTonemapReinhard(gamma:intensity:));

/**
 * Creates TonemapReinhard object
 *
 * @param gamma gamma value for gamma correction. See createTonemap
 * value, if 0 it's global, otherwise it's a weighted mean of this two cases.
 * if 0 adaptation level is the same for each channel.
 */
+ (TonemapReinhard*)createTonemapReinhard:(float)gamma NS_SWIFT_NAME(createTonemapReinhard(gamma:));

/**
 * Creates TonemapReinhard object
 *
 * value, if 0 it's global, otherwise it's a weighted mean of this two cases.
 * if 0 adaptation level is the same for each channel.
 */
+ (TonemapReinhard*)createTonemapReinhard NS_SWIFT_NAME(createTonemapReinhard());


//
//  void cv::colorChange(Mat src, Mat mask, Mat& dst, float red_mul = 1.0f, float green_mul = 1.0f, float blue_mul = 1.0f)
//
/**
 * Given an original color image, two differently colored versions of this image can be mixed
 * seamlessly.
 *
 * @param src Input 8-bit 3-channel image.
 * @param mask Input 8-bit 1 or 3-channel image.
 * @param dst Output image with the same size and type as src .
 * @param red_mul R-channel multiply factor.
 * @param green_mul G-channel multiply factor.
 * @param blue_mul B-channel multiply factor.
 *
 * Multiplication factor is between .5 to 2.5.
 */
+ (void)colorChange:(Mat*)src mask:(Mat*)mask dst:(Mat*)dst red_mul:(float)red_mul green_mul:(float)green_mul blue_mul:(float)blue_mul NS_SWIFT_NAME(colorChange(src:mask:dst:red_mul:green_mul:blue_mul:));

/**
 * Given an original color image, two differently colored versions of this image can be mixed
 * seamlessly.
 *
 * @param src Input 8-bit 3-channel image.
 * @param mask Input 8-bit 1 or 3-channel image.
 * @param dst Output image with the same size and type as src .
 * @param red_mul R-channel multiply factor.
 * @param green_mul G-channel multiply factor.
 *
 * Multiplication factor is between .5 to 2.5.
 */
+ (void)colorChange:(Mat*)src mask:(Mat*)mask dst:(Mat*)dst red_mul:(float)red_mul green_mul:(float)green_mul NS_SWIFT_NAME(colorChange(src:mask:dst:red_mul:green_mul:));

/**
 * Given an original color image, two differently colored versions of this image can be mixed
 * seamlessly.
 *
 * @param src Input 8-bit 3-channel image.
 * @param mask Input 8-bit 1 or 3-channel image.
 * @param dst Output image with the same size and type as src .
 * @param red_mul R-channel multiply factor.
 *
 * Multiplication factor is between .5 to 2.5.
 */
+ (void)colorChange:(Mat*)src mask:(Mat*)mask dst:(Mat*)dst red_mul:(float)red_mul NS_SWIFT_NAME(colorChange(src:mask:dst:red_mul:));

/**
 * Given an original color image, two differently colored versions of this image can be mixed
 * seamlessly.
 *
 * @param src Input 8-bit 3-channel image.
 * @param mask Input 8-bit 1 or 3-channel image.
 * @param dst Output image with the same size and type as src .
 *
 * Multiplication factor is between .5 to 2.5.
 */
+ (void)colorChange:(Mat*)src mask:(Mat*)mask dst:(Mat*)dst NS_SWIFT_NAME(colorChange(src:mask:dst:));


//
//  void cv::decolor(Mat src, Mat& grayscale, Mat& color_boost)
//
/**
 * Transforms a color image to a grayscale image. It is a basic tool in digital printing, stylized
 * black-and-white photograph rendering, and in many single channel image processing applications
 * CITE: CL12 .
 *
 * @param src Input 8-bit 3-channel image.
 * @param grayscale Output 8-bit 1-channel image.
 * @param color_boost Output 8-bit 3-channel image.
 *
 * This function is to be applied on color images.
 */
+ (void)decolor:(Mat*)src grayscale:(Mat*)grayscale color_boost:(Mat*)color_boost NS_SWIFT_NAME(decolor(src:grayscale:color_boost:));


//
//  void cv::denoise_TVL1(vector_Mat observations, Mat result, double lambda = 1.0, int niters = 30)
//
/**
 * Primal-dual algorithm is an algorithm for solving special types of variational problems (that is,
 * finding a function to minimize some functional). As the image denoising, in particular, may be seen
 * as the variational problem, primal-dual algorithm then can be used to perform denoising and this is
 * exactly what is implemented.
 *
 * It should be noted, that this implementation was taken from the July 2013 blog entry
 * CITE: MA13 , which also contained (slightly more general) ready-to-use source code on Python.
 * Subsequently, that code was rewritten on C++ with the usage of openCV by Vadim Pisarevsky at the end
 * of July 2013 and finally it was slightly adapted by later authors.
 *
 * Although the thorough discussion and justification of the algorithm involved may be found in
 * CITE: ChambolleEtAl, it might make sense to skim over it here, following CITE: MA13 . To begin
 * with, we consider the 1-byte gray-level images as the functions from the rectangular domain of
 * pixels (it may be seen as set
 * `$$\left\{(x,y)\in\mathbb{N}\times\mathbb{N}\mid 1\leq x\leq n,\;1\leq y\leq m\right\}$$` for some
 * `$$m,\;n\in\mathbb{N}$$`) into `$$\{0,1,\dots,255\}$$`. We shall denote the noised images as `$$f_i$$` and with
 * this view, given some image `$$x$$` of the same size, we may measure how bad it is by the formula
 *
 * `$$\left\|\left\|\nabla x\right\|\right\| + \lambda\sum_i\left\|\left\|x-f_i\right\|\right\|$$`
 *
 * `$$\|\|\cdot\|\|$$` here denotes `$$L_2$$`-norm and as you see, the first addend states that we want our
 * image to be smooth (ideally, having zero gradient, thus being constant) and the second states that
 * we want our result to be close to the observations we've got. If we treat `$$x$$` as a function, this is
 * exactly the functional what we seek to minimize and here the Primal-Dual algorithm comes into play.
 *
 * @param observations This array should contain one or more noised versions of the image that is to
 * be restored.
 * @param result Here the denoised image will be stored. There is no need to do pre-allocation of
 * storage space, as it will be automatically allocated, if necessary.
 * @param lambda Corresponds to `$$\lambda$$` in the formulas above. As it is enlarged, the smooth
 * (blurred) images are treated more favorably than detailed (but maybe more noised) ones. Roughly
 * speaking, as it becomes smaller, the result will be more blur but more sever outliers will be
 * removed.
 * @param niters Number of iterations that the algorithm will run. Of course, as more iterations as
 * better, but it is hard to quantitatively refine this statement, so just use the default and
 * increase it if the results are poor.
 */
+ (void)denoise_TVL1:(NSArray<Mat*>*)observations result:(Mat*)result lambda:(double)lambda niters:(int)niters NS_SWIFT_NAME(denoise_TVL1(observations:result:lambda:niters:));

/**
 * Primal-dual algorithm is an algorithm for solving special types of variational problems (that is,
 * finding a function to minimize some functional). As the image denoising, in particular, may be seen
 * as the variational problem, primal-dual algorithm then can be used to perform denoising and this is
 * exactly what is implemented.
 *
 * It should be noted, that this implementation was taken from the July 2013 blog entry
 * CITE: MA13 , which also contained (slightly more general) ready-to-use source code on Python.
 * Subsequently, that code was rewritten on C++ with the usage of openCV by Vadim Pisarevsky at the end
 * of July 2013 and finally it was slightly adapted by later authors.
 *
 * Although the thorough discussion and justification of the algorithm involved may be found in
 * CITE: ChambolleEtAl, it might make sense to skim over it here, following CITE: MA13 . To begin
 * with, we consider the 1-byte gray-level images as the functions from the rectangular domain of
 * pixels (it may be seen as set
 * `$$\left\{(x,y)\in\mathbb{N}\times\mathbb{N}\mid 1\leq x\leq n,\;1\leq y\leq m\right\}$$` for some
 * `$$m,\;n\in\mathbb{N}$$`) into `$$\{0,1,\dots,255\}$$`. We shall denote the noised images as `$$f_i$$` and with
 * this view, given some image `$$x$$` of the same size, we may measure how bad it is by the formula
 *
 * `$$\left\|\left\|\nabla x\right\|\right\| + \lambda\sum_i\left\|\left\|x-f_i\right\|\right\|$$`
 *
 * `$$\|\|\cdot\|\|$$` here denotes `$$L_2$$`-norm and as you see, the first addend states that we want our
 * image to be smooth (ideally, having zero gradient, thus being constant) and the second states that
 * we want our result to be close to the observations we've got. If we treat `$$x$$` as a function, this is
 * exactly the functional what we seek to minimize and here the Primal-Dual algorithm comes into play.
 *
 * @param observations This array should contain one or more noised versions of the image that is to
 * be restored.
 * @param result Here the denoised image will be stored. There is no need to do pre-allocation of
 * storage space, as it will be automatically allocated, if necessary.
 * @param lambda Corresponds to `$$\lambda$$` in the formulas above. As it is enlarged, the smooth
 * (blurred) images are treated more favorably than detailed (but maybe more noised) ones. Roughly
 * speaking, as it becomes smaller, the result will be more blur but more sever outliers will be
 * removed.
 * better, but it is hard to quantitatively refine this statement, so just use the default and
 * increase it if the results are poor.
 */
+ (void)denoise_TVL1:(NSArray<Mat*>*)observations result:(Mat*)result lambda:(double)lambda NS_SWIFT_NAME(denoise_TVL1(observations:result:lambda:));

/**
 * Primal-dual algorithm is an algorithm for solving special types of variational problems (that is,
 * finding a function to minimize some functional). As the image denoising, in particular, may be seen
 * as the variational problem, primal-dual algorithm then can be used to perform denoising and this is
 * exactly what is implemented.
 *
 * It should be noted, that this implementation was taken from the July 2013 blog entry
 * CITE: MA13 , which also contained (slightly more general) ready-to-use source code on Python.
 * Subsequently, that code was rewritten on C++ with the usage of openCV by Vadim Pisarevsky at the end
 * of July 2013 and finally it was slightly adapted by later authors.
 *
 * Although the thorough discussion and justification of the algorithm involved may be found in
 * CITE: ChambolleEtAl, it might make sense to skim over it here, following CITE: MA13 . To begin
 * with, we consider the 1-byte gray-level images as the functions from the rectangular domain of
 * pixels (it may be seen as set
 * `$$\left\{(x,y)\in\mathbb{N}\times\mathbb{N}\mid 1\leq x\leq n,\;1\leq y\leq m\right\}$$` for some
 * `$$m,\;n\in\mathbb{N}$$`) into `$$\{0,1,\dots,255\}$$`. We shall denote the noised images as `$$f_i$$` and with
 * this view, given some image `$$x$$` of the same size, we may measure how bad it is by the formula
 *
 * `$$\left\|\left\|\nabla x\right\|\right\| + \lambda\sum_i\left\|\left\|x-f_i\right\|\right\|$$`
 *
 * `$$\|\|\cdot\|\|$$` here denotes `$$L_2$$`-norm and as you see, the first addend states that we want our
 * image to be smooth (ideally, having zero gradient, thus being constant) and the second states that
 * we want our result to be close to the observations we've got. If we treat `$$x$$` as a function, this is
 * exactly the functional what we seek to minimize and here the Primal-Dual algorithm comes into play.
 *
 * @param observations This array should contain one or more noised versions of the image that is to
 * be restored.
 * @param result Here the denoised image will be stored. There is no need to do pre-allocation of
 * storage space, as it will be automatically allocated, if necessary.
 * (blurred) images are treated more favorably than detailed (but maybe more noised) ones. Roughly
 * speaking, as it becomes smaller, the result will be more blur but more sever outliers will be
 * removed.
 * better, but it is hard to quantitatively refine this statement, so just use the default and
 * increase it if the results are poor.
 */
+ (void)denoise_TVL1:(NSArray<Mat*>*)observations result:(Mat*)result NS_SWIFT_NAME(denoise_TVL1(observations:result:));


//
//  void cv::detailEnhance(Mat src, Mat& dst, float sigma_s = 10, float sigma_r = 0.15f)
//
/**
 * This filter enhances the details of a particular image.
 *
 * @param src Input 8-bit 3-channel image.
 * @param dst Output image with the same size and type as src.
 * @param sigma_s %Range between 0 to 200.
 * @param sigma_r %Range between 0 to 1.
 */
+ (void)detailEnhance:(Mat*)src dst:(Mat*)dst sigma_s:(float)sigma_s sigma_r:(float)sigma_r NS_SWIFT_NAME(detailEnhance(src:dst:sigma_s:sigma_r:));

/**
 * This filter enhances the details of a particular image.
 *
 * @param src Input 8-bit 3-channel image.
 * @param dst Output image with the same size and type as src.
 * @param sigma_s %Range between 0 to 200.
 */
+ (void)detailEnhance:(Mat*)src dst:(Mat*)dst sigma_s:(float)sigma_s NS_SWIFT_NAME(detailEnhance(src:dst:sigma_s:));

/**
 * This filter enhances the details of a particular image.
 *
 * @param src Input 8-bit 3-channel image.
 * @param dst Output image with the same size and type as src.
 */
+ (void)detailEnhance:(Mat*)src dst:(Mat*)dst NS_SWIFT_NAME(detailEnhance(src:dst:));


//
//  void cv::edgePreservingFilter(Mat src, Mat& dst, int flags = 1, float sigma_s = 60, float sigma_r = 0.4f)
//
/**
 * Filtering is the fundamental operation in image and video processing. Edge-preserving smoothing
 * filters are used in many different applications CITE: EM11 .
 *
 * @param src Input 8-bit 3-channel image.
 * @param dst Output 8-bit 3-channel image.
 * @param flags Edge preserving filters: cv::RECURS_FILTER or cv::NORMCONV_FILTER
 * @param sigma_s %Range between 0 to 200.
 * @param sigma_r %Range between 0 to 1.
 */
+ (void)edgePreservingFilter:(Mat*)src dst:(Mat*)dst flags:(int)flags sigma_s:(float)sigma_s sigma_r:(float)sigma_r NS_SWIFT_NAME(edgePreservingFilter(src:dst:flags:sigma_s:sigma_r:));

/**
 * Filtering is the fundamental operation in image and video processing. Edge-preserving smoothing
 * filters are used in many different applications CITE: EM11 .
 *
 * @param src Input 8-bit 3-channel image.
 * @param dst Output 8-bit 3-channel image.
 * @param flags Edge preserving filters: cv::RECURS_FILTER or cv::NORMCONV_FILTER
 * @param sigma_s %Range between 0 to 200.
 */
+ (void)edgePreservingFilter:(Mat*)src dst:(Mat*)dst flags:(int)flags sigma_s:(float)sigma_s NS_SWIFT_NAME(edgePreservingFilter(src:dst:flags:sigma_s:));

/**
 * Filtering is the fundamental operation in image and video processing. Edge-preserving smoothing
 * filters are used in many different applications CITE: EM11 .
 *
 * @param src Input 8-bit 3-channel image.
 * @param dst Output 8-bit 3-channel image.
 * @param flags Edge preserving filters: cv::RECURS_FILTER or cv::NORMCONV_FILTER
 */
+ (void)edgePreservingFilter:(Mat*)src dst:(Mat*)dst flags:(int)flags NS_SWIFT_NAME(edgePreservingFilter(src:dst:flags:));

/**
 * Filtering is the fundamental operation in image and video processing. Edge-preserving smoothing
 * filters are used in many different applications CITE: EM11 .
 *
 * @param src Input 8-bit 3-channel image.
 * @param dst Output 8-bit 3-channel image.
 */
+ (void)edgePreservingFilter:(Mat*)src dst:(Mat*)dst NS_SWIFT_NAME(edgePreservingFilter(src:dst:));


//
//  void cv::fastNlMeansDenoising(Mat src, Mat& dst, float h = 3, int templateWindowSize = 7, int searchWindowSize = 21)
//
/**
 * Perform image denoising using Non-local Means Denoising algorithm
 * <http://www.ipol.im/pub/algo/bcm_non_local_means_denoising/> with several computational
 * optimizations. Noise expected to be a gaussian white noise
 *
 * @param src Input 8-bit 1-channel, 2-channel, 3-channel or 4-channel image.
 * @param dst Output image with the same size and type as src .
 * @param templateWindowSize Size in pixels of the template patch that is used to compute weights.
 * Should be odd. Recommended value 7 pixels
 * @param searchWindowSize Size in pixels of the window that is used to compute weighted average for
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * @param h Parameter regulating filter strength. Big h value perfectly removes noise but also
 * removes image details, smaller h value preserves details but also preserves some noise
 *
 * This function expected to be applied to grayscale images. For colored images look at
 * fastNlMeansDenoisingColored. Advanced usage of this functions can be manual denoising of colored
 * image in different colorspaces. Such approach is used in fastNlMeansDenoisingColored by converting
 * image to CIELAB colorspace and then separately denoise L and AB components with different h
 * parameter.
 */
+ (void)fastNlMeansDenoising:(Mat*)src dst:(Mat*)dst h:(float)h templateWindowSize:(int)templateWindowSize searchWindowSize:(int)searchWindowSize NS_SWIFT_NAME(fastNlMeansDenoising(src:dst:h:templateWindowSize:searchWindowSize:));

/**
 * Perform image denoising using Non-local Means Denoising algorithm
 * <http://www.ipol.im/pub/algo/bcm_non_local_means_denoising/> with several computational
 * optimizations. Noise expected to be a gaussian white noise
 *
 * @param src Input 8-bit 1-channel, 2-channel, 3-channel or 4-channel image.
 * @param dst Output image with the same size and type as src .
 * @param templateWindowSize Size in pixels of the template patch that is used to compute weights.
 * Should be odd. Recommended value 7 pixels
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * @param h Parameter regulating filter strength. Big h value perfectly removes noise but also
 * removes image details, smaller h value preserves details but also preserves some noise
 *
 * This function expected to be applied to grayscale images. For colored images look at
 * fastNlMeansDenoisingColored. Advanced usage of this functions can be manual denoising of colored
 * image in different colorspaces. Such approach is used in fastNlMeansDenoisingColored by converting
 * image to CIELAB colorspace and then separately denoise L and AB components with different h
 * parameter.
 */
+ (void)fastNlMeansDenoising:(Mat*)src dst:(Mat*)dst h:(float)h templateWindowSize:(int)templateWindowSize NS_SWIFT_NAME(fastNlMeansDenoising(src:dst:h:templateWindowSize:));

/**
 * Perform image denoising using Non-local Means Denoising algorithm
 * <http://www.ipol.im/pub/algo/bcm_non_local_means_denoising/> with several computational
 * optimizations. Noise expected to be a gaussian white noise
 *
 * @param src Input 8-bit 1-channel, 2-channel, 3-channel or 4-channel image.
 * @param dst Output image with the same size and type as src .
 * Should be odd. Recommended value 7 pixels
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * @param h Parameter regulating filter strength. Big h value perfectly removes noise but also
 * removes image details, smaller h value preserves details but also preserves some noise
 *
 * This function expected to be applied to grayscale images. For colored images look at
 * fastNlMeansDenoisingColored. Advanced usage of this functions can be manual denoising of colored
 * image in different colorspaces. Such approach is used in fastNlMeansDenoisingColored by converting
 * image to CIELAB colorspace and then separately denoise L and AB components with different h
 * parameter.
 */
+ (void)fastNlMeansDenoising:(Mat*)src dst:(Mat*)dst h:(float)h NS_SWIFT_NAME(fastNlMeansDenoising(src:dst:h:));

/**
 * Perform image denoising using Non-local Means Denoising algorithm
 * <http://www.ipol.im/pub/algo/bcm_non_local_means_denoising/> with several computational
 * optimizations. Noise expected to be a gaussian white noise
 *
 * @param src Input 8-bit 1-channel, 2-channel, 3-channel or 4-channel image.
 * @param dst Output image with the same size and type as src .
 * Should be odd. Recommended value 7 pixels
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * removes image details, smaller h value preserves details but also preserves some noise
 *
 * This function expected to be applied to grayscale images. For colored images look at
 * fastNlMeansDenoisingColored. Advanced usage of this functions can be manual denoising of colored
 * image in different colorspaces. Such approach is used in fastNlMeansDenoisingColored by converting
 * image to CIELAB colorspace and then separately denoise L and AB components with different h
 * parameter.
 */
+ (void)fastNlMeansDenoising:(Mat*)src dst:(Mat*)dst NS_SWIFT_NAME(fastNlMeansDenoising(src:dst:));


//
//  void cv::fastNlMeansDenoising(Mat src, Mat& dst, vector_float hVector, int templateWindowSize = 7, int searchWindowSize = 21, int normType = NORM_L2)
//
/**
 * Perform image denoising using Non-local Means Denoising algorithm
 * <http://www.ipol.im/pub/algo/bcm_non_local_means_denoising/> with several computational
 * optimizations. Noise expected to be a gaussian white noise
 *
 * @param src Input 8-bit or 16-bit (only with NORM_L1) 1-channel,
 * 2-channel, 3-channel or 4-channel image.
 * @param dst Output image with the same size and type as src .
 * @param templateWindowSize Size in pixels of the template patch that is used to compute weights.
 * Should be odd. Recommended value 7 pixels
 * @param searchWindowSize Size in pixels of the window that is used to compute weighted average for
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * parameter applied to all channels or one per channel in dst. Big h value
 * perfectly removes noise but also removes image details, smaller h
 * value preserves details but also preserves some noise
 * @param normType Type of norm used for weight calculation. Can be either NORM_L2 or NORM_L1
 *
 * This function expected to be applied to grayscale images. For colored images look at
 * fastNlMeansDenoisingColored. Advanced usage of this functions can be manual denoising of colored
 * image in different colorspaces. Such approach is used in fastNlMeansDenoisingColored by converting
 * image to CIELAB colorspace and then separately denoise L and AB components with different h
 * parameter.
 */
+ (void)fastNlMeansDenoising:(Mat*)src dst:(Mat*)dst hVector:(FloatVector*)hVector templateWindowSize:(int)templateWindowSize searchWindowSize:(int)searchWindowSize normType:(int)normType NS_SWIFT_NAME(fastNlMeansDenoising(src:dst:hVector:templateWindowSize:searchWindowSize:normType:));

/**
 * Perform image denoising using Non-local Means Denoising algorithm
 * <http://www.ipol.im/pub/algo/bcm_non_local_means_denoising/> with several computational
 * optimizations. Noise expected to be a gaussian white noise
 *
 * @param src Input 8-bit or 16-bit (only with NORM_L1) 1-channel,
 * 2-channel, 3-channel or 4-channel image.
 * @param dst Output image with the same size and type as src .
 * @param templateWindowSize Size in pixels of the template patch that is used to compute weights.
 * Should be odd. Recommended value 7 pixels
 * @param searchWindowSize Size in pixels of the window that is used to compute weighted average for
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * parameter applied to all channels or one per channel in dst. Big h value
 * perfectly removes noise but also removes image details, smaller h
 * value preserves details but also preserves some noise
 *
 * This function expected to be applied to grayscale images. For colored images look at
 * fastNlMeansDenoisingColored. Advanced usage of this functions can be manual denoising of colored
 * image in different colorspaces. Such approach is used in fastNlMeansDenoisingColored by converting
 * image to CIELAB colorspace and then separately denoise L and AB components with different h
 * parameter.
 */
+ (void)fastNlMeansDenoising:(Mat*)src dst:(Mat*)dst hVector:(FloatVector*)hVector templateWindowSize:(int)templateWindowSize searchWindowSize:(int)searchWindowSize NS_SWIFT_NAME(fastNlMeansDenoising(src:dst:hVector:templateWindowSize:searchWindowSize:));

/**
 * Perform image denoising using Non-local Means Denoising algorithm
 * <http://www.ipol.im/pub/algo/bcm_non_local_means_denoising/> with several computational
 * optimizations. Noise expected to be a gaussian white noise
 *
 * @param src Input 8-bit or 16-bit (only with NORM_L1) 1-channel,
 * 2-channel, 3-channel or 4-channel image.
 * @param dst Output image with the same size and type as src .
 * @param templateWindowSize Size in pixels of the template patch that is used to compute weights.
 * Should be odd. Recommended value 7 pixels
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * parameter applied to all channels or one per channel in dst. Big h value
 * perfectly removes noise but also removes image details, smaller h
 * value preserves details but also preserves some noise
 *
 * This function expected to be applied to grayscale images. For colored images look at
 * fastNlMeansDenoisingColored. Advanced usage of this functions can be manual denoising of colored
 * image in different colorspaces. Such approach is used in fastNlMeansDenoisingColored by converting
 * image to CIELAB colorspace and then separately denoise L and AB components with different h
 * parameter.
 */
+ (void)fastNlMeansDenoising:(Mat*)src dst:(Mat*)dst hVector:(FloatVector*)hVector templateWindowSize:(int)templateWindowSize NS_SWIFT_NAME(fastNlMeansDenoising(src:dst:hVector:templateWindowSize:));

/**
 * Perform image denoising using Non-local Means Denoising algorithm
 * <http://www.ipol.im/pub/algo/bcm_non_local_means_denoising/> with several computational
 * optimizations. Noise expected to be a gaussian white noise
 *
 * @param src Input 8-bit or 16-bit (only with NORM_L1) 1-channel,
 * 2-channel, 3-channel or 4-channel image.
 * @param dst Output image with the same size and type as src .
 * Should be odd. Recommended value 7 pixels
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * parameter applied to all channels or one per channel in dst. Big h value
 * perfectly removes noise but also removes image details, smaller h
 * value preserves details but also preserves some noise
 *
 * This function expected to be applied to grayscale images. For colored images look at
 * fastNlMeansDenoisingColored. Advanced usage of this functions can be manual denoising of colored
 * image in different colorspaces. Such approach is used in fastNlMeansDenoisingColored by converting
 * image to CIELAB colorspace and then separately denoise L and AB components with different h
 * parameter.
 */
+ (void)fastNlMeansDenoising:(Mat*)src dst:(Mat*)dst hVector:(FloatVector*)hVector NS_SWIFT_NAME(fastNlMeansDenoising(src:dst:hVector:));


//
//  void cv::fastNlMeansDenoisingColored(Mat src, Mat& dst, float h = 3, float hColor = 3, int templateWindowSize = 7, int searchWindowSize = 21)
//
/**
 * Modification of fastNlMeansDenoising function for colored images
 *
 * @param src Input 8-bit 3-channel image.
 * @param dst Output image with the same size and type as src .
 * @param templateWindowSize Size in pixels of the template patch that is used to compute weights.
 * Should be odd. Recommended value 7 pixels
 * @param searchWindowSize Size in pixels of the window that is used to compute weighted average for
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * @param h Parameter regulating filter strength for luminance component. Bigger h value perfectly
 * removes noise but also removes image details, smaller h value preserves details but also preserves
 * some noise
 * @param hColor The same as h but for color components. For most images value equals 10
 * will be enough to remove colored noise and do not distort colors
 *
 * The function converts image to CIELAB colorspace and then separately denoise L and AB components
 * with given h parameters using fastNlMeansDenoising function.
 */
+ (void)fastNlMeansDenoisingColored:(Mat*)src dst:(Mat*)dst h:(float)h hColor:(float)hColor templateWindowSize:(int)templateWindowSize searchWindowSize:(int)searchWindowSize NS_SWIFT_NAME(fastNlMeansDenoisingColored(src:dst:h:hColor:templateWindowSize:searchWindowSize:));

/**
 * Modification of fastNlMeansDenoising function for colored images
 *
 * @param src Input 8-bit 3-channel image.
 * @param dst Output image with the same size and type as src .
 * @param templateWindowSize Size in pixels of the template patch that is used to compute weights.
 * Should be odd. Recommended value 7 pixels
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * @param h Parameter regulating filter strength for luminance component. Bigger h value perfectly
 * removes noise but also removes image details, smaller h value preserves details but also preserves
 * some noise
 * @param hColor The same as h but for color components. For most images value equals 10
 * will be enough to remove colored noise and do not distort colors
 *
 * The function converts image to CIELAB colorspace and then separately denoise L and AB components
 * with given h parameters using fastNlMeansDenoising function.
 */
+ (void)fastNlMeansDenoisingColored:(Mat*)src dst:(Mat*)dst h:(float)h hColor:(float)hColor templateWindowSize:(int)templateWindowSize NS_SWIFT_NAME(fastNlMeansDenoisingColored(src:dst:h:hColor:templateWindowSize:));

/**
 * Modification of fastNlMeansDenoising function for colored images
 *
 * @param src Input 8-bit 3-channel image.
 * @param dst Output image with the same size and type as src .
 * Should be odd. Recommended value 7 pixels
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * @param h Parameter regulating filter strength for luminance component. Bigger h value perfectly
 * removes noise but also removes image details, smaller h value preserves details but also preserves
 * some noise
 * @param hColor The same as h but for color components. For most images value equals 10
 * will be enough to remove colored noise and do not distort colors
 *
 * The function converts image to CIELAB colorspace and then separately denoise L and AB components
 * with given h parameters using fastNlMeansDenoising function.
 */
+ (void)fastNlMeansDenoisingColored:(Mat*)src dst:(Mat*)dst h:(float)h hColor:(float)hColor NS_SWIFT_NAME(fastNlMeansDenoisingColored(src:dst:h:hColor:));

/**
 * Modification of fastNlMeansDenoising function for colored images
 *
 * @param src Input 8-bit 3-channel image.
 * @param dst Output image with the same size and type as src .
 * Should be odd. Recommended value 7 pixels
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * @param h Parameter regulating filter strength for luminance component. Bigger h value perfectly
 * removes noise but also removes image details, smaller h value preserves details but also preserves
 * some noise
 * will be enough to remove colored noise and do not distort colors
 *
 * The function converts image to CIELAB colorspace and then separately denoise L and AB components
 * with given h parameters using fastNlMeansDenoising function.
 */
+ (void)fastNlMeansDenoisingColored:(Mat*)src dst:(Mat*)dst h:(float)h NS_SWIFT_NAME(fastNlMeansDenoisingColored(src:dst:h:));

/**
 * Modification of fastNlMeansDenoising function for colored images
 *
 * @param src Input 8-bit 3-channel image.
 * @param dst Output image with the same size and type as src .
 * Should be odd. Recommended value 7 pixels
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * removes noise but also removes image details, smaller h value preserves details but also preserves
 * some noise
 * will be enough to remove colored noise and do not distort colors
 *
 * The function converts image to CIELAB colorspace and then separately denoise L and AB components
 * with given h parameters using fastNlMeansDenoising function.
 */
+ (void)fastNlMeansDenoisingColored:(Mat*)src dst:(Mat*)dst NS_SWIFT_NAME(fastNlMeansDenoisingColored(src:dst:));


//
//  void cv::fastNlMeansDenoisingColoredMulti(vector_Mat srcImgs, Mat& dst, int imgToDenoiseIndex, int temporalWindowSize, float h = 3, float hColor = 3, int templateWindowSize = 7, int searchWindowSize = 21)
//
/**
 * Modification of fastNlMeansDenoisingMulti function for colored images sequences
 *
 * @param srcImgs Input 8-bit 3-channel images sequence. All images should have the same type and
 * size.
 * @param imgToDenoiseIndex Target image to denoise index in srcImgs sequence
 * @param temporalWindowSize Number of surrounding images to use for target image denoising. Should
 * be odd. Images from imgToDenoiseIndex - temporalWindowSize / 2 to
 * imgToDenoiseIndex - temporalWindowSize / 2 from srcImgs will be used to denoise
 * srcImgs[imgToDenoiseIndex] image.
 * @param dst Output image with the same size and type as srcImgs images.
 * @param templateWindowSize Size in pixels of the template patch that is used to compute weights.
 * Should be odd. Recommended value 7 pixels
 * @param searchWindowSize Size in pixels of the window that is used to compute weighted average for
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * @param h Parameter regulating filter strength for luminance component. Bigger h value perfectly
 * removes noise but also removes image details, smaller h value preserves details but also preserves
 * some noise.
 * @param hColor The same as h but for color components.
 *
 * The function converts images to CIELAB colorspace and then separately denoise L and AB components
 * with given h parameters using fastNlMeansDenoisingMulti function.
 */
+ (void)fastNlMeansDenoisingColoredMulti:(NSArray<Mat*>*)srcImgs dst:(Mat*)dst imgToDenoiseIndex:(int)imgToDenoiseIndex temporalWindowSize:(int)temporalWindowSize h:(float)h hColor:(float)hColor templateWindowSize:(int)templateWindowSize searchWindowSize:(int)searchWindowSize NS_SWIFT_NAME(fastNlMeansDenoisingColoredMulti(srcImgs:dst:imgToDenoiseIndex:temporalWindowSize:h:hColor:templateWindowSize:searchWindowSize:));

/**
 * Modification of fastNlMeansDenoisingMulti function for colored images sequences
 *
 * @param srcImgs Input 8-bit 3-channel images sequence. All images should have the same type and
 * size.
 * @param imgToDenoiseIndex Target image to denoise index in srcImgs sequence
 * @param temporalWindowSize Number of surrounding images to use for target image denoising. Should
 * be odd. Images from imgToDenoiseIndex - temporalWindowSize / 2 to
 * imgToDenoiseIndex - temporalWindowSize / 2 from srcImgs will be used to denoise
 * srcImgs[imgToDenoiseIndex] image.
 * @param dst Output image with the same size and type as srcImgs images.
 * @param templateWindowSize Size in pixels of the template patch that is used to compute weights.
 * Should be odd. Recommended value 7 pixels
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * @param h Parameter regulating filter strength for luminance component. Bigger h value perfectly
 * removes noise but also removes image details, smaller h value preserves details but also preserves
 * some noise.
 * @param hColor The same as h but for color components.
 *
 * The function converts images to CIELAB colorspace and then separately denoise L and AB components
 * with given h parameters using fastNlMeansDenoisingMulti function.
 */
+ (void)fastNlMeansDenoisingColoredMulti:(NSArray<Mat*>*)srcImgs dst:(Mat*)dst imgToDenoiseIndex:(int)imgToDenoiseIndex temporalWindowSize:(int)temporalWindowSize h:(float)h hColor:(float)hColor templateWindowSize:(int)templateWindowSize NS_SWIFT_NAME(fastNlMeansDenoisingColoredMulti(srcImgs:dst:imgToDenoiseIndex:temporalWindowSize:h:hColor:templateWindowSize:));

/**
 * Modification of fastNlMeansDenoisingMulti function for colored images sequences
 *
 * @param srcImgs Input 8-bit 3-channel images sequence. All images should have the same type and
 * size.
 * @param imgToDenoiseIndex Target image to denoise index in srcImgs sequence
 * @param temporalWindowSize Number of surrounding images to use for target image denoising. Should
 * be odd. Images from imgToDenoiseIndex - temporalWindowSize / 2 to
 * imgToDenoiseIndex - temporalWindowSize / 2 from srcImgs will be used to denoise
 * srcImgs[imgToDenoiseIndex] image.
 * @param dst Output image with the same size and type as srcImgs images.
 * Should be odd. Recommended value 7 pixels
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * @param h Parameter regulating filter strength for luminance component. Bigger h value perfectly
 * removes noise but also removes image details, smaller h value preserves details but also preserves
 * some noise.
 * @param hColor The same as h but for color components.
 *
 * The function converts images to CIELAB colorspace and then separately denoise L and AB components
 * with given h parameters using fastNlMeansDenoisingMulti function.
 */
+ (void)fastNlMeansDenoisingColoredMulti:(NSArray<Mat*>*)srcImgs dst:(Mat*)dst imgToDenoiseIndex:(int)imgToDenoiseIndex temporalWindowSize:(int)temporalWindowSize h:(float)h hColor:(float)hColor NS_SWIFT_NAME(fastNlMeansDenoisingColoredMulti(srcImgs:dst:imgToDenoiseIndex:temporalWindowSize:h:hColor:));

/**
 * Modification of fastNlMeansDenoisingMulti function for colored images sequences
 *
 * @param srcImgs Input 8-bit 3-channel images sequence. All images should have the same type and
 * size.
 * @param imgToDenoiseIndex Target image to denoise index in srcImgs sequence
 * @param temporalWindowSize Number of surrounding images to use for target image denoising. Should
 * be odd. Images from imgToDenoiseIndex - temporalWindowSize / 2 to
 * imgToDenoiseIndex - temporalWindowSize / 2 from srcImgs will be used to denoise
 * srcImgs[imgToDenoiseIndex] image.
 * @param dst Output image with the same size and type as srcImgs images.
 * Should be odd. Recommended value 7 pixels
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * @param h Parameter regulating filter strength for luminance component. Bigger h value perfectly
 * removes noise but also removes image details, smaller h value preserves details but also preserves
 * some noise.
 *
 * The function converts images to CIELAB colorspace and then separately denoise L and AB components
 * with given h parameters using fastNlMeansDenoisingMulti function.
 */
+ (void)fastNlMeansDenoisingColoredMulti:(NSArray<Mat*>*)srcImgs dst:(Mat*)dst imgToDenoiseIndex:(int)imgToDenoiseIndex temporalWindowSize:(int)temporalWindowSize h:(float)h NS_SWIFT_NAME(fastNlMeansDenoisingColoredMulti(srcImgs:dst:imgToDenoiseIndex:temporalWindowSize:h:));

/**
 * Modification of fastNlMeansDenoisingMulti function for colored images sequences
 *
 * @param srcImgs Input 8-bit 3-channel images sequence. All images should have the same type and
 * size.
 * @param imgToDenoiseIndex Target image to denoise index in srcImgs sequence
 * @param temporalWindowSize Number of surrounding images to use for target image denoising. Should
 * be odd. Images from imgToDenoiseIndex - temporalWindowSize / 2 to
 * imgToDenoiseIndex - temporalWindowSize / 2 from srcImgs will be used to denoise
 * srcImgs[imgToDenoiseIndex] image.
 * @param dst Output image with the same size and type as srcImgs images.
 * Should be odd. Recommended value 7 pixels
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * removes noise but also removes image details, smaller h value preserves details but also preserves
 * some noise.
 *
 * The function converts images to CIELAB colorspace and then separately denoise L and AB components
 * with given h parameters using fastNlMeansDenoisingMulti function.
 */
+ (void)fastNlMeansDenoisingColoredMulti:(NSArray<Mat*>*)srcImgs dst:(Mat*)dst imgToDenoiseIndex:(int)imgToDenoiseIndex temporalWindowSize:(int)temporalWindowSize NS_SWIFT_NAME(fastNlMeansDenoisingColoredMulti(srcImgs:dst:imgToDenoiseIndex:temporalWindowSize:));


//
//  void cv::fastNlMeansDenoisingMulti(vector_Mat srcImgs, Mat& dst, int imgToDenoiseIndex, int temporalWindowSize, float h = 3, int templateWindowSize = 7, int searchWindowSize = 21)
//
/**
 * Modification of fastNlMeansDenoising function for images sequence where consecutive images have been
 * captured in small period of time. For example video. This version of the function is for grayscale
 * images or for manual manipulation with colorspaces. For more details see
 * <http://citeseerx.ist.psu.edu/viewdoc/summary?doi=10.1.1.131.6394>
 *
 * @param srcImgs Input 8-bit 1-channel, 2-channel, 3-channel or
 * 4-channel images sequence. All images should have the same type and
 * size.
 * @param imgToDenoiseIndex Target image to denoise index in srcImgs sequence
 * @param temporalWindowSize Number of surrounding images to use for target image denoising. Should
 * be odd. Images from imgToDenoiseIndex - temporalWindowSize / 2 to
 * imgToDenoiseIndex - temporalWindowSize / 2 from srcImgs will be used to denoise
 * srcImgs[imgToDenoiseIndex] image.
 * @param dst Output image with the same size and type as srcImgs images.
 * @param templateWindowSize Size in pixels of the template patch that is used to compute weights.
 * Should be odd. Recommended value 7 pixels
 * @param searchWindowSize Size in pixels of the window that is used to compute weighted average for
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * @param h Parameter regulating filter strength. Bigger h value
 * perfectly removes noise but also removes image details, smaller h
 * value preserves details but also preserves some noise
 */
+ (void)fastNlMeansDenoisingMulti:(NSArray<Mat*>*)srcImgs dst:(Mat*)dst imgToDenoiseIndex:(int)imgToDenoiseIndex temporalWindowSize:(int)temporalWindowSize h:(float)h templateWindowSize:(int)templateWindowSize searchWindowSize:(int)searchWindowSize NS_SWIFT_NAME(fastNlMeansDenoisingMulti(srcImgs:dst:imgToDenoiseIndex:temporalWindowSize:h:templateWindowSize:searchWindowSize:));

/**
 * Modification of fastNlMeansDenoising function for images sequence where consecutive images have been
 * captured in small period of time. For example video. This version of the function is for grayscale
 * images or for manual manipulation with colorspaces. For more details see
 * <http://citeseerx.ist.psu.edu/viewdoc/summary?doi=10.1.1.131.6394>
 *
 * @param srcImgs Input 8-bit 1-channel, 2-channel, 3-channel or
 * 4-channel images sequence. All images should have the same type and
 * size.
 * @param imgToDenoiseIndex Target image to denoise index in srcImgs sequence
 * @param temporalWindowSize Number of surrounding images to use for target image denoising. Should
 * be odd. Images from imgToDenoiseIndex - temporalWindowSize / 2 to
 * imgToDenoiseIndex - temporalWindowSize / 2 from srcImgs will be used to denoise
 * srcImgs[imgToDenoiseIndex] image.
 * @param dst Output image with the same size and type as srcImgs images.
 * @param templateWindowSize Size in pixels of the template patch that is used to compute weights.
 * Should be odd. Recommended value 7 pixels
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * @param h Parameter regulating filter strength. Bigger h value
 * perfectly removes noise but also removes image details, smaller h
 * value preserves details but also preserves some noise
 */
+ (void)fastNlMeansDenoisingMulti:(NSArray<Mat*>*)srcImgs dst:(Mat*)dst imgToDenoiseIndex:(int)imgToDenoiseIndex temporalWindowSize:(int)temporalWindowSize h:(float)h templateWindowSize:(int)templateWindowSize NS_SWIFT_NAME(fastNlMeansDenoisingMulti(srcImgs:dst:imgToDenoiseIndex:temporalWindowSize:h:templateWindowSize:));

/**
 * Modification of fastNlMeansDenoising function for images sequence where consecutive images have been
 * captured in small period of time. For example video. This version of the function is for grayscale
 * images or for manual manipulation with colorspaces. For more details see
 * <http://citeseerx.ist.psu.edu/viewdoc/summary?doi=10.1.1.131.6394>
 *
 * @param srcImgs Input 8-bit 1-channel, 2-channel, 3-channel or
 * 4-channel images sequence. All images should have the same type and
 * size.
 * @param imgToDenoiseIndex Target image to denoise index in srcImgs sequence
 * @param temporalWindowSize Number of surrounding images to use for target image denoising. Should
 * be odd. Images from imgToDenoiseIndex - temporalWindowSize / 2 to
 * imgToDenoiseIndex - temporalWindowSize / 2 from srcImgs will be used to denoise
 * srcImgs[imgToDenoiseIndex] image.
 * @param dst Output image with the same size and type as srcImgs images.
 * Should be odd. Recommended value 7 pixels
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * @param h Parameter regulating filter strength. Bigger h value
 * perfectly removes noise but also removes image details, smaller h
 * value preserves details but also preserves some noise
 */
+ (void)fastNlMeansDenoisingMulti:(NSArray<Mat*>*)srcImgs dst:(Mat*)dst imgToDenoiseIndex:(int)imgToDenoiseIndex temporalWindowSize:(int)temporalWindowSize h:(float)h NS_SWIFT_NAME(fastNlMeansDenoisingMulti(srcImgs:dst:imgToDenoiseIndex:temporalWindowSize:h:));

/**
 * Modification of fastNlMeansDenoising function for images sequence where consecutive images have been
 * captured in small period of time. For example video. This version of the function is for grayscale
 * images or for manual manipulation with colorspaces. For more details see
 * <http://citeseerx.ist.psu.edu/viewdoc/summary?doi=10.1.1.131.6394>
 *
 * @param srcImgs Input 8-bit 1-channel, 2-channel, 3-channel or
 * 4-channel images sequence. All images should have the same type and
 * size.
 * @param imgToDenoiseIndex Target image to denoise index in srcImgs sequence
 * @param temporalWindowSize Number of surrounding images to use for target image denoising. Should
 * be odd. Images from imgToDenoiseIndex - temporalWindowSize / 2 to
 * imgToDenoiseIndex - temporalWindowSize / 2 from srcImgs will be used to denoise
 * srcImgs[imgToDenoiseIndex] image.
 * @param dst Output image with the same size and type as srcImgs images.
 * Should be odd. Recommended value 7 pixels
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * perfectly removes noise but also removes image details, smaller h
 * value preserves details but also preserves some noise
 */
+ (void)fastNlMeansDenoisingMulti:(NSArray<Mat*>*)srcImgs dst:(Mat*)dst imgToDenoiseIndex:(int)imgToDenoiseIndex temporalWindowSize:(int)temporalWindowSize NS_SWIFT_NAME(fastNlMeansDenoisingMulti(srcImgs:dst:imgToDenoiseIndex:temporalWindowSize:));


//
//  void cv::fastNlMeansDenoisingMulti(vector_Mat srcImgs, Mat& dst, int imgToDenoiseIndex, int temporalWindowSize, vector_float hVector, int templateWindowSize = 7, int searchWindowSize = 21, int normType = NORM_L2)
//
/**
 * Modification of fastNlMeansDenoising function for images sequence where consecutive images have been
 * captured in small period of time. For example video. This version of the function is for grayscale
 * images or for manual manipulation with colorspaces. For more details see
 * <http://citeseerx.ist.psu.edu/viewdoc/summary?doi=10.1.1.131.6394>
 *
 * @param srcImgs Input 8-bit or 16-bit (only with NORM_L1) 1-channel,
 * 2-channel, 3-channel or 4-channel images sequence. All images should
 * have the same type and size.
 * @param imgToDenoiseIndex Target image to denoise index in srcImgs sequence
 * @param temporalWindowSize Number of surrounding images to use for target image denoising. Should
 * be odd. Images from imgToDenoiseIndex - temporalWindowSize / 2 to
 * imgToDenoiseIndex - temporalWindowSize / 2 from srcImgs will be used to denoise
 * srcImgs[imgToDenoiseIndex] image.
 * @param dst Output image with the same size and type as srcImgs images.
 * @param templateWindowSize Size in pixels of the template patch that is used to compute weights.
 * Should be odd. Recommended value 7 pixels
 * @param searchWindowSize Size in pixels of the window that is used to compute weighted average for
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * parameter applied to all channels or one per channel in dst. Big h value
 * perfectly removes noise but also removes image details, smaller h
 * value preserves details but also preserves some noise
 * @param normType Type of norm used for weight calculation. Can be either NORM_L2 or NORM_L1
 */
+ (void)fastNlMeansDenoisingMulti:(NSArray<Mat*>*)srcImgs dst:(Mat*)dst imgToDenoiseIndex:(int)imgToDenoiseIndex temporalWindowSize:(int)temporalWindowSize hVector:(FloatVector*)hVector templateWindowSize:(int)templateWindowSize searchWindowSize:(int)searchWindowSize normType:(int)normType NS_SWIFT_NAME(fastNlMeansDenoisingMulti(srcImgs:dst:imgToDenoiseIndex:temporalWindowSize:hVector:templateWindowSize:searchWindowSize:normType:));

/**
 * Modification of fastNlMeansDenoising function for images sequence where consecutive images have been
 * captured in small period of time. For example video. This version of the function is for grayscale
 * images or for manual manipulation with colorspaces. For more details see
 * <http://citeseerx.ist.psu.edu/viewdoc/summary?doi=10.1.1.131.6394>
 *
 * @param srcImgs Input 8-bit or 16-bit (only with NORM_L1) 1-channel,
 * 2-channel, 3-channel or 4-channel images sequence. All images should
 * have the same type and size.
 * @param imgToDenoiseIndex Target image to denoise index in srcImgs sequence
 * @param temporalWindowSize Number of surrounding images to use for target image denoising. Should
 * be odd. Images from imgToDenoiseIndex - temporalWindowSize / 2 to
 * imgToDenoiseIndex - temporalWindowSize / 2 from srcImgs will be used to denoise
 * srcImgs[imgToDenoiseIndex] image.
 * @param dst Output image with the same size and type as srcImgs images.
 * @param templateWindowSize Size in pixels of the template patch that is used to compute weights.
 * Should be odd. Recommended value 7 pixels
 * @param searchWindowSize Size in pixels of the window that is used to compute weighted average for
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * parameter applied to all channels or one per channel in dst. Big h value
 * perfectly removes noise but also removes image details, smaller h
 * value preserves details but also preserves some noise
 */
+ (void)fastNlMeansDenoisingMulti:(NSArray<Mat*>*)srcImgs dst:(Mat*)dst imgToDenoiseIndex:(int)imgToDenoiseIndex temporalWindowSize:(int)temporalWindowSize hVector:(FloatVector*)hVector templateWindowSize:(int)templateWindowSize searchWindowSize:(int)searchWindowSize NS_SWIFT_NAME(fastNlMeansDenoisingMulti(srcImgs:dst:imgToDenoiseIndex:temporalWindowSize:hVector:templateWindowSize:searchWindowSize:));

/**
 * Modification of fastNlMeansDenoising function for images sequence where consecutive images have been
 * captured in small period of time. For example video. This version of the function is for grayscale
 * images or for manual manipulation with colorspaces. For more details see
 * <http://citeseerx.ist.psu.edu/viewdoc/summary?doi=10.1.1.131.6394>
 *
 * @param srcImgs Input 8-bit or 16-bit (only with NORM_L1) 1-channel,
 * 2-channel, 3-channel or 4-channel images sequence. All images should
 * have the same type and size.
 * @param imgToDenoiseIndex Target image to denoise index in srcImgs sequence
 * @param temporalWindowSize Number of surrounding images to use for target image denoising. Should
 * be odd. Images from imgToDenoiseIndex - temporalWindowSize / 2 to
 * imgToDenoiseIndex - temporalWindowSize / 2 from srcImgs will be used to denoise
 * srcImgs[imgToDenoiseIndex] image.
 * @param dst Output image with the same size and type as srcImgs images.
 * @param templateWindowSize Size in pixels of the template patch that is used to compute weights.
 * Should be odd. Recommended value 7 pixels
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * parameter applied to all channels or one per channel in dst. Big h value
 * perfectly removes noise but also removes image details, smaller h
 * value preserves details but also preserves some noise
 */
+ (void)fastNlMeansDenoisingMulti:(NSArray<Mat*>*)srcImgs dst:(Mat*)dst imgToDenoiseIndex:(int)imgToDenoiseIndex temporalWindowSize:(int)temporalWindowSize hVector:(FloatVector*)hVector templateWindowSize:(int)templateWindowSize NS_SWIFT_NAME(fastNlMeansDenoisingMulti(srcImgs:dst:imgToDenoiseIndex:temporalWindowSize:hVector:templateWindowSize:));

/**
 * Modification of fastNlMeansDenoising function for images sequence where consecutive images have been
 * captured in small period of time. For example video. This version of the function is for grayscale
 * images or for manual manipulation with colorspaces. For more details see
 * <http://citeseerx.ist.psu.edu/viewdoc/summary?doi=10.1.1.131.6394>
 *
 * @param srcImgs Input 8-bit or 16-bit (only with NORM_L1) 1-channel,
 * 2-channel, 3-channel or 4-channel images sequence. All images should
 * have the same type and size.
 * @param imgToDenoiseIndex Target image to denoise index in srcImgs sequence
 * @param temporalWindowSize Number of surrounding images to use for target image denoising. Should
 * be odd. Images from imgToDenoiseIndex - temporalWindowSize / 2 to
 * imgToDenoiseIndex - temporalWindowSize / 2 from srcImgs will be used to denoise
 * srcImgs[imgToDenoiseIndex] image.
 * @param dst Output image with the same size and type as srcImgs images.
 * Should be odd. Recommended value 7 pixels
 * given pixel. Should be odd. Affect performance linearly: greater searchWindowsSize - greater
 * denoising time. Recommended value 21 pixels
 * parameter applied to all channels or one per channel in dst. Big h value
 * perfectly removes noise but also removes image details, smaller h
 * value preserves details but also preserves some noise
 */
+ (void)fastNlMeansDenoisingMulti:(NSArray<Mat*>*)srcImgs dst:(Mat*)dst imgToDenoiseIndex:(int)imgToDenoiseIndex temporalWindowSize:(int)temporalWindowSize hVector:(FloatVector*)hVector NS_SWIFT_NAME(fastNlMeansDenoisingMulti(srcImgs:dst:imgToDenoiseIndex:temporalWindowSize:hVector:));


//
//  void cv::illuminationChange(Mat src, Mat mask, Mat& dst, float alpha = 0.2f, float beta = 0.4f)
//
/**
 * Applying an appropriate non-linear transformation to the gradient field inside the selection and
 * then integrating back with a Poisson solver, modifies locally the apparent illumination of an image.
 *
 * @param src Input 8-bit 3-channel image.
 * @param mask Input 8-bit 1 or 3-channel image.
 * @param dst Output image with the same size and type as src.
 * @param alpha Value ranges between 0-2.
 * @param beta Value ranges between 0-2.
 *
 * This is useful to highlight under-exposed foreground objects or to reduce specular reflections.
 */
+ (void)illuminationChange:(Mat*)src mask:(Mat*)mask dst:(Mat*)dst alpha:(float)alpha beta:(float)beta NS_SWIFT_NAME(illuminationChange(src:mask:dst:alpha:beta:));

/**
 * Applying an appropriate non-linear transformation to the gradient field inside the selection and
 * then integrating back with a Poisson solver, modifies locally the apparent illumination of an image.
 *
 * @param src Input 8-bit 3-channel image.
 * @param mask Input 8-bit 1 or 3-channel image.
 * @param dst Output image with the same size and type as src.
 * @param alpha Value ranges between 0-2.
 *
 * This is useful to highlight under-exposed foreground objects or to reduce specular reflections.
 */
+ (void)illuminationChange:(Mat*)src mask:(Mat*)mask dst:(Mat*)dst alpha:(float)alpha NS_SWIFT_NAME(illuminationChange(src:mask:dst:alpha:));

/**
 * Applying an appropriate non-linear transformation to the gradient field inside the selection and
 * then integrating back with a Poisson solver, modifies locally the apparent illumination of an image.
 *
 * @param src Input 8-bit 3-channel image.
 * @param mask Input 8-bit 1 or 3-channel image.
 * @param dst Output image with the same size and type as src.
 *
 * This is useful to highlight under-exposed foreground objects or to reduce specular reflections.
 */
+ (void)illuminationChange:(Mat*)src mask:(Mat*)mask dst:(Mat*)dst NS_SWIFT_NAME(illuminationChange(src:mask:dst:));


//
//  void cv::inpaint(Mat src, Mat inpaintMask, Mat& dst, double inpaintRadius, int flags)
//
/**
 * Restores the selected region in an image using the region neighborhood.
 *
 * @param src Input 8-bit, 16-bit unsigned or 32-bit float 1-channel or 8-bit 3-channel image.
 * @param inpaintMask Inpainting mask, 8-bit 1-channel image. Non-zero pixels indicate the area that
 * needs to be inpainted.
 * @param dst Output image with the same size and type as src .
 * @param inpaintRadius Radius of a circular neighborhood of each point inpainted that is considered
 * by the algorithm.
 * @param flags Inpainting method that could be cv::INPAINT_NS or cv::INPAINT_TELEA
 *
 * The function reconstructs the selected image area from the pixel near the area boundary. The
 * function may be used to remove dust and scratches from a scanned photo, or to remove undesirable
 * objects from still images or video. See <http://en.wikipedia.org/wiki/Inpainting> for more details.
 *
 * @note
 *    -   An example using the inpainting technique can be found at
 *         opencv_source_code/samples/cpp/inpaint.cpp
 *    -   (Python) An example using the inpainting technique can be found at
 *         opencv_source_code/samples/python/inpaint.py
 */
+ (void)inpaint:(Mat*)src inpaintMask:(Mat*)inpaintMask dst:(Mat*)dst inpaintRadius:(double)inpaintRadius flags:(int)flags NS_SWIFT_NAME(inpaint(src:inpaintMask:dst:inpaintRadius:flags:));


//
//  void cv::pencilSketch(Mat src, Mat& dst1, Mat& dst2, float sigma_s = 60, float sigma_r = 0.07f, float shade_factor = 0.02f)
//
/**
 * Pencil-like non-photorealistic line drawing
 *
 * @param src Input 8-bit 3-channel image.
 * @param dst1 Output 8-bit 1-channel image.
 * @param dst2 Output image with the same size and type as src.
 * @param sigma_s %Range between 0 to 200.
 * @param sigma_r %Range between 0 to 1.
 * @param shade_factor %Range between 0 to 0.1.
 */
+ (void)pencilSketch:(Mat*)src dst1:(Mat*)dst1 dst2:(Mat*)dst2 sigma_s:(float)sigma_s sigma_r:(float)sigma_r shade_factor:(float)shade_factor NS_SWIFT_NAME(pencilSketch(src:dst1:dst2:sigma_s:sigma_r:shade_factor:));

/**
 * Pencil-like non-photorealistic line drawing
 *
 * @param src Input 8-bit 3-channel image.
 * @param dst1 Output 8-bit 1-channel image.
 * @param dst2 Output image with the same size and type as src.
 * @param sigma_s %Range between 0 to 200.
 * @param sigma_r %Range between 0 to 1.
 */
+ (void)pencilSketch:(Mat*)src dst1:(Mat*)dst1 dst2:(Mat*)dst2 sigma_s:(float)sigma_s sigma_r:(float)sigma_r NS_SWIFT_NAME(pencilSketch(src:dst1:dst2:sigma_s:sigma_r:));

/**
 * Pencil-like non-photorealistic line drawing
 *
 * @param src Input 8-bit 3-channel image.
 * @param dst1 Output 8-bit 1-channel image.
 * @param dst2 Output image with the same size and type as src.
 * @param sigma_s %Range between 0 to 200.
 */
+ (void)pencilSketch:(Mat*)src dst1:(Mat*)dst1 dst2:(Mat*)dst2 sigma_s:(float)sigma_s NS_SWIFT_NAME(pencilSketch(src:dst1:dst2:sigma_s:));

/**
 * Pencil-like non-photorealistic line drawing
 *
 * @param src Input 8-bit 3-channel image.
 * @param dst1 Output 8-bit 1-channel image.
 * @param dst2 Output image with the same size and type as src.
 */
+ (void)pencilSketch:(Mat*)src dst1:(Mat*)dst1 dst2:(Mat*)dst2 NS_SWIFT_NAME(pencilSketch(src:dst1:dst2:));


//
//  void cv::seamlessClone(Mat src, Mat dst, Mat mask, Point p, Mat& blend, int flags)
//
/**
 * Image editing tasks concern either global changes (color/intensity corrections, filters,
 * deformations) or local changes concerned to a selection. Here we are interested in achieving local
 * changes, ones that are restricted to a region manually selected (ROI), in a seamless and effortless
 * manner. The extent of the changes ranges from slight distortions to complete replacement by novel
 * content CITE: PM03 .
 *
 * @param src Input 8-bit 3-channel image.
 * @param dst Input 8-bit 3-channel image.
 * @param mask Input 8-bit 1 or 3-channel image.
 * @param p Point in dst image where object is placed.
 * @param blend Output image with the same size and type as dst.
 * @param flags Cloning method that could be cv::NORMAL_CLONE, cv::MIXED_CLONE or cv::MONOCHROME_TRANSFER
 */
+ (void)seamlessClone:(Mat*)src dst:(Mat*)dst mask:(Mat*)mask p:(Point2i*)p blend:(Mat*)blend flags:(int)flags NS_SWIFT_NAME(seamlessClone(src:dst:mask:p:blend:flags:));


//
//  void cv::stylization(Mat src, Mat& dst, float sigma_s = 60, float sigma_r = 0.45f)
//
/**
 * Stylization aims to produce digital imagery with a wide variety of effects not focused on
 * photorealism. Edge-aware filters are ideal for stylization, as they can abstract regions of low
 * contrast while preserving, or enhancing, high-contrast features.
 *
 * @param src Input 8-bit 3-channel image.
 * @param dst Output image with the same size and type as src.
 * @param sigma_s %Range between 0 to 200.
 * @param sigma_r %Range between 0 to 1.
 */
+ (void)stylization:(Mat*)src dst:(Mat*)dst sigma_s:(float)sigma_s sigma_r:(float)sigma_r NS_SWIFT_NAME(stylization(src:dst:sigma_s:sigma_r:));

/**
 * Stylization aims to produce digital imagery with a wide variety of effects not focused on
 * photorealism. Edge-aware filters are ideal for stylization, as they can abstract regions of low
 * contrast while preserving, or enhancing, high-contrast features.
 *
 * @param src Input 8-bit 3-channel image.
 * @param dst Output image with the same size and type as src.
 * @param sigma_s %Range between 0 to 200.
 */
+ (void)stylization:(Mat*)src dst:(Mat*)dst sigma_s:(float)sigma_s NS_SWIFT_NAME(stylization(src:dst:sigma_s:));

/**
 * Stylization aims to produce digital imagery with a wide variety of effects not focused on
 * photorealism. Edge-aware filters are ideal for stylization, as they can abstract regions of low
 * contrast while preserving, or enhancing, high-contrast features.
 *
 * @param src Input 8-bit 3-channel image.
 * @param dst Output image with the same size and type as src.
 */
+ (void)stylization:(Mat*)src dst:(Mat*)dst NS_SWIFT_NAME(stylization(src:dst:));


//
//  void cv::textureFlattening(Mat src, Mat mask, Mat& dst, float low_threshold = 30, float high_threshold = 45, int kernel_size = 3)
//
/**
 * By retaining only the gradients at edge locations, before integrating with the Poisson solver, one
 * washes out the texture of the selected region, giving its contents a flat aspect. Here Canny Edge %Detector is used.
 *
 * @param src Input 8-bit 3-channel image.
 * @param mask Input 8-bit 1 or 3-channel image.
 * @param dst Output image with the same size and type as src.
 * @param low_threshold %Range from 0 to 100.
 * @param high_threshold Value \> 100.
 * @param kernel_size The size of the Sobel kernel to be used.
 *
 * @note
 * The algorithm assumes that the color of the source image is close to that of the destination. This
 * assumption means that when the colors don't match, the source image color gets tinted toward the
 * color of the destination image.
 */
+ (void)textureFlattening:(Mat*)src mask:(Mat*)mask dst:(Mat*)dst low_threshold:(float)low_threshold high_threshold:(float)high_threshold kernel_size:(int)kernel_size NS_SWIFT_NAME(textureFlattening(src:mask:dst:low_threshold:high_threshold:kernel_size:));

/**
 * By retaining only the gradients at edge locations, before integrating with the Poisson solver, one
 * washes out the texture of the selected region, giving its contents a flat aspect. Here Canny Edge %Detector is used.
 *
 * @param src Input 8-bit 3-channel image.
 * @param mask Input 8-bit 1 or 3-channel image.
 * @param dst Output image with the same size and type as src.
 * @param low_threshold %Range from 0 to 100.
 * @param high_threshold Value \> 100.
 *
 * @note
 * The algorithm assumes that the color of the source image is close to that of the destination. This
 * assumption means that when the colors don't match, the source image color gets tinted toward the
 * color of the destination image.
 */
+ (void)textureFlattening:(Mat*)src mask:(Mat*)mask dst:(Mat*)dst low_threshold:(float)low_threshold high_threshold:(float)high_threshold NS_SWIFT_NAME(textureFlattening(src:mask:dst:low_threshold:high_threshold:));

/**
 * By retaining only the gradients at edge locations, before integrating with the Poisson solver, one
 * washes out the texture of the selected region, giving its contents a flat aspect. Here Canny Edge %Detector is used.
 *
 * @param src Input 8-bit 3-channel image.
 * @param mask Input 8-bit 1 or 3-channel image.
 * @param dst Output image with the same size and type as src.
 * @param low_threshold %Range from 0 to 100.
 *
 * @note
 * The algorithm assumes that the color of the source image is close to that of the destination. This
 * assumption means that when the colors don't match, the source image color gets tinted toward the
 * color of the destination image.
 */
+ (void)textureFlattening:(Mat*)src mask:(Mat*)mask dst:(Mat*)dst low_threshold:(float)low_threshold NS_SWIFT_NAME(textureFlattening(src:mask:dst:low_threshold:));

/**
 * By retaining only the gradients at edge locations, before integrating with the Poisson solver, one
 * washes out the texture of the selected region, giving its contents a flat aspect. Here Canny Edge %Detector is used.
 *
 * @param src Input 8-bit 3-channel image.
 * @param mask Input 8-bit 1 or 3-channel image.
 * @param dst Output image with the same size and type as src.
 *
 * @note
 * The algorithm assumes that the color of the source image is close to that of the destination. This
 * assumption means that when the colors don't match, the source image color gets tinted toward the
 * color of the destination image.
 */
+ (void)textureFlattening:(Mat*)src mask:(Mat*)mask dst:(Mat*)dst NS_SWIFT_NAME(textureFlattening(src:mask:dst:));



@end

NS_ASSUME_NONNULL_END



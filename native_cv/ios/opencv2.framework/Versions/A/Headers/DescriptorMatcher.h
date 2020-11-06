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

@class DMatch;
@class Mat;


// C++: enum MatcherType
typedef NS_ENUM(int, MatcherType) {
    FLANNBASED = 1,
    BRUTEFORCE = 2,
    BRUTEFORCE_L1 = 3,
    BRUTEFORCE_HAMMING = 4,
    BRUTEFORCE_HAMMINGLUT = 5,
    BRUTEFORCE_SL2 = 6
};



NS_ASSUME_NONNULL_BEGIN

// C++: class DescriptorMatcher
/**
 * Abstract base class for matching keypoint descriptors.
 *
 * It has two groups of match methods: for matching descriptors of an image with another image or with
 * an image set.
 *
 * Member of `Features2d`
 */
CV_EXPORTS @interface DescriptorMatcher : Algorithm


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::DescriptorMatcher> nativePtrDescriptorMatcher;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::DescriptorMatcher>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::DescriptorMatcher>)nativePtr;
#endif


#pragma mark - Methods


//
//  Ptr_DescriptorMatcher cv::DescriptorMatcher::clone(bool emptyTrainData = false)
//
/**
 * Clones the matcher.
 *
 * @param emptyTrainData If emptyTrainData is false, the method creates a deep copy of the object,
 *     that is, copies both parameters and train data. If emptyTrainData is true, the method creates an
 *     object copy with the current parameters but with empty train data.
 */
- (DescriptorMatcher*)clone:(BOOL)emptyTrainData NS_SWIFT_NAME(clone(emptyTrainData:));

/**
 * Clones the matcher.
 *
 *     that is, copies both parameters and train data. If emptyTrainData is true, the method creates an
 *     object copy with the current parameters but with empty train data.
 */
- (DescriptorMatcher*)clone NS_SWIFT_NAME(clone());


//
// static Ptr_DescriptorMatcher cv::DescriptorMatcher::create(DescriptorMatcher_MatcherType matcherType)
//
+ (DescriptorMatcher*)create:(MatcherType)matcherType NS_SWIFT_NAME(create(matcherType:));


//
// static Ptr_DescriptorMatcher cv::DescriptorMatcher::create(String descriptorMatcherType)
//
/**
 * Creates a descriptor matcher of a given type with the default parameters (using default
 *     constructor).
 *
 * @param descriptorMatcherType Descriptor matcher type. Now the following matcher types are
 *     supported:
 *     -   `BruteForce` (it uses L2 )
 *     -   `BruteForce-L1`
 *     -   `BruteForce-Hamming`
 *     -   `BruteForce-Hamming(2)`
 *     -   `FlannBased`
 */
+ (DescriptorMatcher*)create2:(NSString*)descriptorMatcherType NS_SWIFT_NAME(create(descriptorMatcherType:));


//
//  bool cv::DescriptorMatcher::empty()
//
/**
 * Returns true if there are no train descriptors in the both collections.
 */
- (BOOL)empty NS_SWIFT_NAME(empty());


//
//  bool cv::DescriptorMatcher::isMaskSupported()
//
/**
 * Returns true if the descriptor matcher supports masking permissible matches.
 */
- (BOOL)isMaskSupported NS_SWIFT_NAME(isMaskSupported());


//
//  vector_Mat cv::DescriptorMatcher::getTrainDescriptors()
//
/**
 * Returns a constant link to the train descriptor collection trainDescCollection .
 */
- (NSArray<Mat*>*)getTrainDescriptors NS_SWIFT_NAME(getTrainDescriptors());


//
//  void cv::DescriptorMatcher::add(vector_Mat descriptors)
//
/**
 * Adds descriptors to train a CPU(trainDescCollectionis) or GPU(utrainDescCollectionis) descriptor
 *     collection.
 *
 *     If the collection is not empty, the new descriptors are added to existing train descriptors.
 *
 * @param descriptors Descriptors to add. Each descriptors[i] is a set of descriptors from the same
 *     train image.
 */
- (void)add:(NSArray<Mat*>*)descriptors NS_SWIFT_NAME(add(descriptors:));


//
//  void cv::DescriptorMatcher::clear()
//
/**
 * Clears the train descriptor collections.
 */
- (void)clear NS_SWIFT_NAME(clear());


//
//  void cv::DescriptorMatcher::knnMatch(Mat queryDescriptors, Mat trainDescriptors, vector_vector_DMatch& matches, int k, Mat mask = Mat(), bool compactResult = false)
//
/**
 * Finds the k best matches for each descriptor from a query set.
 *
 * @param queryDescriptors Query set of descriptors.
 * @param trainDescriptors Train set of descriptors. This set is not added to the train descriptors
 *     collection stored in the class object.
 * @param mask Mask specifying permissible matches between an input query and train matrices of
 *     descriptors.
 * @param matches Matches. Each matches[i] is k or less matches for the same query descriptor.
 * @param k Count of best matches found per each query descriptor or less if a query descriptor has
 *     less than k possible matches in total.
 * @param compactResult Parameter used when the mask (or masks) is not empty. If compactResult is
 *     false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,
 *     the matches vector does not contain matches for fully masked-out query descriptors.
 *
 *     These extended variants of DescriptorMatcher::match methods find several best matches for each query
 *     descriptor. The matches are returned in the distance increasing order. See DescriptorMatcher::match
 *     for the details about query and train descriptors.
 */
- (void)knnMatch:(Mat*)queryDescriptors trainDescriptors:(Mat*)trainDescriptors matches:(NSMutableArray<NSMutableArray<DMatch*>*>*)matches k:(int)k mask:(Mat*)mask compactResult:(BOOL)compactResult NS_SWIFT_NAME(knnMatch(queryDescriptors:trainDescriptors:matches:k:mask:compactResult:));

/**
 * Finds the k best matches for each descriptor from a query set.
 *
 * @param queryDescriptors Query set of descriptors.
 * @param trainDescriptors Train set of descriptors. This set is not added to the train descriptors
 *     collection stored in the class object.
 * @param mask Mask specifying permissible matches between an input query and train matrices of
 *     descriptors.
 * @param matches Matches. Each matches[i] is k or less matches for the same query descriptor.
 * @param k Count of best matches found per each query descriptor or less if a query descriptor has
 *     less than k possible matches in total.
 *     false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,
 *     the matches vector does not contain matches for fully masked-out query descriptors.
 *
 *     These extended variants of DescriptorMatcher::match methods find several best matches for each query
 *     descriptor. The matches are returned in the distance increasing order. See DescriptorMatcher::match
 *     for the details about query and train descriptors.
 */
- (void)knnMatch:(Mat*)queryDescriptors trainDescriptors:(Mat*)trainDescriptors matches:(NSMutableArray<NSMutableArray<DMatch*>*>*)matches k:(int)k mask:(Mat*)mask NS_SWIFT_NAME(knnMatch(queryDescriptors:trainDescriptors:matches:k:mask:));

/**
 * Finds the k best matches for each descriptor from a query set.
 *
 * @param queryDescriptors Query set of descriptors.
 * @param trainDescriptors Train set of descriptors. This set is not added to the train descriptors
 *     collection stored in the class object.
 *     descriptors.
 * @param matches Matches. Each matches[i] is k or less matches for the same query descriptor.
 * @param k Count of best matches found per each query descriptor or less if a query descriptor has
 *     less than k possible matches in total.
 *     false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,
 *     the matches vector does not contain matches for fully masked-out query descriptors.
 *
 *     These extended variants of DescriptorMatcher::match methods find several best matches for each query
 *     descriptor. The matches are returned in the distance increasing order. See DescriptorMatcher::match
 *     for the details about query and train descriptors.
 */
- (void)knnMatch:(Mat*)queryDescriptors trainDescriptors:(Mat*)trainDescriptors matches:(NSMutableArray<NSMutableArray<DMatch*>*>*)matches k:(int)k NS_SWIFT_NAME(knnMatch(queryDescriptors:trainDescriptors:matches:k:));


//
//  void cv::DescriptorMatcher::knnMatch(Mat queryDescriptors, vector_vector_DMatch& matches, int k, vector_Mat masks = vector_Mat(), bool compactResult = false)
//
/**
 *
 * @param queryDescriptors Query set of descriptors.
 * @param matches Matches. Each matches[i] is k or less matches for the same query descriptor.
 * @param k Count of best matches found per each query descriptor or less if a query descriptor has
 *     less than k possible matches in total.
 * @param masks Set of masks. Each masks[i] specifies permissible matches between the input query
 *     descriptors and stored train descriptors from the i-th image trainDescCollection[i].
 * @param compactResult Parameter used when the mask (or masks) is not empty. If compactResult is
 *     false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,
 *     the matches vector does not contain matches for fully masked-out query descriptors.
 */
- (void)knnMatch:(Mat*)queryDescriptors matches:(NSMutableArray<NSMutableArray<DMatch*>*>*)matches k:(int)k masks:(NSArray<Mat*>*)masks compactResult:(BOOL)compactResult NS_SWIFT_NAME(knnMatch(queryDescriptors:matches:k:masks:compactResult:));

/**
 *
 * @param queryDescriptors Query set of descriptors.
 * @param matches Matches. Each matches[i] is k or less matches for the same query descriptor.
 * @param k Count of best matches found per each query descriptor or less if a query descriptor has
 *     less than k possible matches in total.
 * @param masks Set of masks. Each masks[i] specifies permissible matches between the input query
 *     descriptors and stored train descriptors from the i-th image trainDescCollection[i].
 *     false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,
 *     the matches vector does not contain matches for fully masked-out query descriptors.
 */
- (void)knnMatch:(Mat*)queryDescriptors matches:(NSMutableArray<NSMutableArray<DMatch*>*>*)matches k:(int)k masks:(NSArray<Mat*>*)masks NS_SWIFT_NAME(knnMatch(queryDescriptors:matches:k:masks:));

/**
 *
 * @param queryDescriptors Query set of descriptors.
 * @param matches Matches. Each matches[i] is k or less matches for the same query descriptor.
 * @param k Count of best matches found per each query descriptor or less if a query descriptor has
 *     less than k possible matches in total.
 *     descriptors and stored train descriptors from the i-th image trainDescCollection[i].
 *     false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,
 *     the matches vector does not contain matches for fully masked-out query descriptors.
 */
- (void)knnMatch:(Mat*)queryDescriptors matches:(NSMutableArray<NSMutableArray<DMatch*>*>*)matches k:(int)k NS_SWIFT_NAME(knnMatch(queryDescriptors:matches:k:));


//
//  void cv::DescriptorMatcher::match(Mat queryDescriptors, Mat trainDescriptors, vector_DMatch& matches, Mat mask = Mat())
//
/**
 * Finds the best match for each descriptor from a query set.
 *
 * @param queryDescriptors Query set of descriptors.
 * @param trainDescriptors Train set of descriptors. This set is not added to the train descriptors
 *     collection stored in the class object.
 * @param matches Matches. If a query descriptor is masked out in mask , no match is added for this
 *     descriptor. So, matches size may be smaller than the query descriptors count.
 * @param mask Mask specifying permissible matches between an input query and train matrices of
 *     descriptors.
 *
 *     In the first variant of this method, the train descriptors are passed as an input argument. In the
 *     second variant of the method, train descriptors collection that was set by DescriptorMatcher::add is
 *     used. Optional mask (or masks) can be passed to specify which query and training descriptors can be
 *     matched. Namely, queryDescriptors[i] can be matched with trainDescriptors[j] only if
 *     mask.at\<uchar\>(i,j) is non-zero.
 */
- (void)match:(Mat*)queryDescriptors trainDescriptors:(Mat*)trainDescriptors matches:(NSMutableArray<DMatch*>*)matches mask:(Mat*)mask NS_SWIFT_NAME(match(queryDescriptors:trainDescriptors:matches:mask:));

/**
 * Finds the best match for each descriptor from a query set.
 *
 * @param queryDescriptors Query set of descriptors.
 * @param trainDescriptors Train set of descriptors. This set is not added to the train descriptors
 *     collection stored in the class object.
 * @param matches Matches. If a query descriptor is masked out in mask , no match is added for this
 *     descriptor. So, matches size may be smaller than the query descriptors count.
 *     descriptors.
 *
 *     In the first variant of this method, the train descriptors are passed as an input argument. In the
 *     second variant of the method, train descriptors collection that was set by DescriptorMatcher::add is
 *     used. Optional mask (or masks) can be passed to specify which query and training descriptors can be
 *     matched. Namely, queryDescriptors[i] can be matched with trainDescriptors[j] only if
 *     mask.at\<uchar\>(i,j) is non-zero.
 */
- (void)match:(Mat*)queryDescriptors trainDescriptors:(Mat*)trainDescriptors matches:(NSMutableArray<DMatch*>*)matches NS_SWIFT_NAME(match(queryDescriptors:trainDescriptors:matches:));


//
//  void cv::DescriptorMatcher::match(Mat queryDescriptors, vector_DMatch& matches, vector_Mat masks = vector_Mat())
//
/**
 *
 * @param queryDescriptors Query set of descriptors.
 * @param matches Matches. If a query descriptor is masked out in mask , no match is added for this
 *     descriptor. So, matches size may be smaller than the query descriptors count.
 * @param masks Set of masks. Each masks[i] specifies permissible matches between the input query
 *     descriptors and stored train descriptors from the i-th image trainDescCollection[i].
 */
- (void)match:(Mat*)queryDescriptors matches:(NSMutableArray<DMatch*>*)matches masks:(NSArray<Mat*>*)masks NS_SWIFT_NAME(match(queryDescriptors:matches:masks:));

/**
 *
 * @param queryDescriptors Query set of descriptors.
 * @param matches Matches. If a query descriptor is masked out in mask , no match is added for this
 *     descriptor. So, matches size may be smaller than the query descriptors count.
 *     descriptors and stored train descriptors from the i-th image trainDescCollection[i].
 */
- (void)match:(Mat*)queryDescriptors matches:(NSMutableArray<DMatch*>*)matches NS_SWIFT_NAME(match(queryDescriptors:matches:));


//
//  void cv::DescriptorMatcher::radiusMatch(Mat queryDescriptors, Mat trainDescriptors, vector_vector_DMatch& matches, float maxDistance, Mat mask = Mat(), bool compactResult = false)
//
/**
 * For each query descriptor, finds the training descriptors not farther than the specified distance.
 *
 * @param queryDescriptors Query set of descriptors.
 * @param trainDescriptors Train set of descriptors. This set is not added to the train descriptors
 *     collection stored in the class object.
 * @param matches Found matches.
 * @param compactResult Parameter used when the mask (or masks) is not empty. If compactResult is
 *     false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,
 *     the matches vector does not contain matches for fully masked-out query descriptors.
 * @param maxDistance Threshold for the distance between matched descriptors. Distance means here
 *     metric distance (e.g. Hamming distance), not the distance between coordinates (which is measured
 *     in Pixels)!
 * @param mask Mask specifying permissible matches between an input query and train matrices of
 *     descriptors.
 *
 *     For each query descriptor, the methods find such training descriptors that the distance between the
 *     query descriptor and the training descriptor is equal or smaller than maxDistance. Found matches are
 *     returned in the distance increasing order.
 */
- (void)radiusMatch:(Mat*)queryDescriptors trainDescriptors:(Mat*)trainDescriptors matches:(NSMutableArray<NSMutableArray<DMatch*>*>*)matches maxDistance:(float)maxDistance mask:(Mat*)mask compactResult:(BOOL)compactResult NS_SWIFT_NAME(radiusMatch(queryDescriptors:trainDescriptors:matches:maxDistance:mask:compactResult:));

/**
 * For each query descriptor, finds the training descriptors not farther than the specified distance.
 *
 * @param queryDescriptors Query set of descriptors.
 * @param trainDescriptors Train set of descriptors. This set is not added to the train descriptors
 *     collection stored in the class object.
 * @param matches Found matches.
 *     false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,
 *     the matches vector does not contain matches for fully masked-out query descriptors.
 * @param maxDistance Threshold for the distance between matched descriptors. Distance means here
 *     metric distance (e.g. Hamming distance), not the distance between coordinates (which is measured
 *     in Pixels)!
 * @param mask Mask specifying permissible matches between an input query and train matrices of
 *     descriptors.
 *
 *     For each query descriptor, the methods find such training descriptors that the distance between the
 *     query descriptor and the training descriptor is equal or smaller than maxDistance. Found matches are
 *     returned in the distance increasing order.
 */
- (void)radiusMatch:(Mat*)queryDescriptors trainDescriptors:(Mat*)trainDescriptors matches:(NSMutableArray<NSMutableArray<DMatch*>*>*)matches maxDistance:(float)maxDistance mask:(Mat*)mask NS_SWIFT_NAME(radiusMatch(queryDescriptors:trainDescriptors:matches:maxDistance:mask:));

/**
 * For each query descriptor, finds the training descriptors not farther than the specified distance.
 *
 * @param queryDescriptors Query set of descriptors.
 * @param trainDescriptors Train set of descriptors. This set is not added to the train descriptors
 *     collection stored in the class object.
 * @param matches Found matches.
 *     false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,
 *     the matches vector does not contain matches for fully masked-out query descriptors.
 * @param maxDistance Threshold for the distance between matched descriptors. Distance means here
 *     metric distance (e.g. Hamming distance), not the distance between coordinates (which is measured
 *     in Pixels)!
 *     descriptors.
 *
 *     For each query descriptor, the methods find such training descriptors that the distance between the
 *     query descriptor and the training descriptor is equal or smaller than maxDistance. Found matches are
 *     returned in the distance increasing order.
 */
- (void)radiusMatch:(Mat*)queryDescriptors trainDescriptors:(Mat*)trainDescriptors matches:(NSMutableArray<NSMutableArray<DMatch*>*>*)matches maxDistance:(float)maxDistance NS_SWIFT_NAME(radiusMatch(queryDescriptors:trainDescriptors:matches:maxDistance:));


//
//  void cv::DescriptorMatcher::radiusMatch(Mat queryDescriptors, vector_vector_DMatch& matches, float maxDistance, vector_Mat masks = vector_Mat(), bool compactResult = false)
//
/**
 *
 * @param queryDescriptors Query set of descriptors.
 * @param matches Found matches.
 * @param maxDistance Threshold for the distance between matched descriptors. Distance means here
 *     metric distance (e.g. Hamming distance), not the distance between coordinates (which is measured
 *     in Pixels)!
 * @param masks Set of masks. Each masks[i] specifies permissible matches between the input query
 *     descriptors and stored train descriptors from the i-th image trainDescCollection[i].
 * @param compactResult Parameter used when the mask (or masks) is not empty. If compactResult is
 *     false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,
 *     the matches vector does not contain matches for fully masked-out query descriptors.
 */
- (void)radiusMatch:(Mat*)queryDescriptors matches:(NSMutableArray<NSMutableArray<DMatch*>*>*)matches maxDistance:(float)maxDistance masks:(NSArray<Mat*>*)masks compactResult:(BOOL)compactResult NS_SWIFT_NAME(radiusMatch(queryDescriptors:matches:maxDistance:masks:compactResult:));

/**
 *
 * @param queryDescriptors Query set of descriptors.
 * @param matches Found matches.
 * @param maxDistance Threshold for the distance between matched descriptors. Distance means here
 *     metric distance (e.g. Hamming distance), not the distance between coordinates (which is measured
 *     in Pixels)!
 * @param masks Set of masks. Each masks[i] specifies permissible matches between the input query
 *     descriptors and stored train descriptors from the i-th image trainDescCollection[i].
 *     false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,
 *     the matches vector does not contain matches for fully masked-out query descriptors.
 */
- (void)radiusMatch:(Mat*)queryDescriptors matches:(NSMutableArray<NSMutableArray<DMatch*>*>*)matches maxDistance:(float)maxDistance masks:(NSArray<Mat*>*)masks NS_SWIFT_NAME(radiusMatch(queryDescriptors:matches:maxDistance:masks:));

/**
 *
 * @param queryDescriptors Query set of descriptors.
 * @param matches Found matches.
 * @param maxDistance Threshold for the distance between matched descriptors. Distance means here
 *     metric distance (e.g. Hamming distance), not the distance between coordinates (which is measured
 *     in Pixels)!
 *     descriptors and stored train descriptors from the i-th image trainDescCollection[i].
 *     false, the matches vector has the same size as queryDescriptors rows. If compactResult is true,
 *     the matches vector does not contain matches for fully masked-out query descriptors.
 */
- (void)radiusMatch:(Mat*)queryDescriptors matches:(NSMutableArray<NSMutableArray<DMatch*>*>*)matches maxDistance:(float)maxDistance NS_SWIFT_NAME(radiusMatch(queryDescriptors:matches:maxDistance:));


//
//  void cv::DescriptorMatcher::read(FileNode arg1)
//
// Unknown type 'FileNode' (I), skipping the function


//
//  void cv::DescriptorMatcher::read(String fileName)
//
- (void)read:(NSString*)fileName NS_SWIFT_NAME(read(fileName:));


//
//  void cv::DescriptorMatcher::train()
//
/**
 * Trains a descriptor matcher
 *
 *     Trains a descriptor matcher (for example, the flann index). In all methods to match, the method
 *     train() is run every time before matching. Some descriptor matchers (for example, BruteForceMatcher)
 *     have an empty implementation of this method. Other matchers really train their inner structures (for
 *     example, FlannBasedMatcher trains flann::Index ).
 */
- (void)train NS_SWIFT_NAME(train());


//
//  void cv::DescriptorMatcher::write(Ptr_FileStorage fs, String name = String())
//
// Unknown type 'Ptr_FileStorage' (I), skipping the function


//
//  void cv::DescriptorMatcher::write(String fileName)
//
- (void)write:(NSString*)fileName NS_SWIFT_NAME(write(fileName:));



@end

NS_ASSUME_NONNULL_END



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






NS_ASSUME_NONNULL_BEGIN

// C++: class Algorithm
/**
 * This is a base class for all more or less complex algorithms in OpenCV
 *
 * especially for classes of algorithms, for which there can be multiple implementations. The examples
 * are stereo correspondence (for which there are algorithms like block matching, semi-global block
 * matching, graph-cut etc.), background subtraction (which can be done using mixture-of-gaussians
 * models, codebook-based algorithm etc.), optical flow (block matching, Lucas-Kanade, Horn-Schunck
 * etc.).
 *
 * Here is example of SimpleBlobDetector use in your application via Algorithm interface:
 * SNIPPET: snippets/core_various.cpp Algorithm
 *
 * Member of `Core`
 */
CV_EXPORTS @interface Algorithm : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::Algorithm> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::Algorithm>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::Algorithm>)nativePtr;
#endif


#pragma mark - Methods


//
//  String cv::Algorithm::getDefaultName()
//
/**
 * Returns the algorithm string identifier.
 * This string is used as top level xml/yml node tag when the object is saved to a file or string.
 */
- (NSString*)getDefaultName NS_SWIFT_NAME(getDefaultName());


//
//  bool cv::Algorithm::empty()
//
/**
 * Returns true if the Algorithm is empty (e.g. in the very beginning or after unsuccessful read
 */
- (BOOL)empty NS_SWIFT_NAME(empty());


//
//  void cv::Algorithm::clear()
//
/**
 * Clears the algorithm state
 */
- (void)clear NS_SWIFT_NAME(clear());


//
//  void cv::Algorithm::read(FileNode fn)
//
// Unknown type 'FileNode' (I), skipping the function


//
//  void cv::Algorithm::save(String filename)
//
/**
 * Saves the algorithm to a file.
 * In order to make this method work, the derived class must implement Algorithm::write(FileStorage& fs).
 */
- (void)save:(NSString*)filename NS_SWIFT_NAME(save(filename:));


//
//  void cv::Algorithm::write(Ptr_FileStorage fs, String name = String())
//
// Unknown type 'Ptr_FileStorage' (I), skipping the function



@end

NS_ASSUME_NONNULL_END



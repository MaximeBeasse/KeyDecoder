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


@class IntVector;
@class Mat;
@class Size2i;



NS_ASSUME_NONNULL_BEGIN

// C++: class VideoWriter
/**
 * Video writer class.
 *
 * The class provides C++ API for writing video files or image sequences.
 *
 * Member of `Videoio`
 */
CV_EXPORTS @interface VideoWriter : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::VideoWriter> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::VideoWriter>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::VideoWriter>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::VideoWriter::VideoWriter(String filename, int apiPreference, int fourcc, double fps, Size frameSize, bool isColor = true)
//
/**
 *
 *     The `apiPreference` parameter allows to specify API backends to use. Can be used to enforce a specific reader implementation
 *     if multiple are available: e.g. cv::CAP_FFMPEG or cv::CAP_GSTREAMER.
 */
- (instancetype)initWithFilename:(NSString*)filename apiPreference:(int)apiPreference fourcc:(int)fourcc fps:(double)fps frameSize:(Size2i*)frameSize isColor:(BOOL)isColor;

/**
 *
 *     The `apiPreference` parameter allows to specify API backends to use. Can be used to enforce a specific reader implementation
 *     if multiple are available: e.g. cv::CAP_FFMPEG or cv::CAP_GSTREAMER.
 */
- (instancetype)initWithFilename:(NSString*)filename apiPreference:(int)apiPreference fourcc:(int)fourcc fps:(double)fps frameSize:(Size2i*)frameSize;


//
//   cv::VideoWriter::VideoWriter(String filename, int apiPreference, int fourcc, double fps, Size frameSize, vector_int params)
//
- (instancetype)initWithFilename:(NSString*)filename apiPreference:(int)apiPreference fourcc:(int)fourcc fps:(double)fps frameSize:(Size2i*)frameSize params:(IntVector*)params;


//
//   cv::VideoWriter::VideoWriter(String filename, int fourcc, double fps, Size frameSize, bool isColor = true)
//
/**
 *
 * @param filename Name of the output video file.
 * @param fourcc 4-character code of codec used to compress the frames. For example,
 *     VideoWriter::fourcc('P','I','M','1') is a MPEG-1 codec, VideoWriter::fourcc('M','J','P','G') is a
 *     motion-jpeg codec etc. List of codes can be obtained at [Video Codecs by
 *     FOURCC](http://www.fourcc.org/codecs.php) page. FFMPEG backend with MP4 container natively uses
 *     other values as fourcc code: see [ObjectType](http://mp4ra.org/#/codecs),
 *     so you may receive a warning message from OpenCV about fourcc code conversion.
 * @param fps Framerate of the created video stream.
 * @param frameSize Size of the video frames.
 * @param isColor If it is not zero, the encoder will expect and encode color frames, otherwise it
 *     will work with grayscale frames.
 *
 *     @b Tips:
 *     - With some backends `fourcc=-1` pops up the codec selection dialog from the system.
 *     - To save image sequence use a proper filename (eg. `img_%02d.jpg`) and `fourcc=0`
 *       OR `fps=0`. Use uncompressed image format (eg. `img_%02d.BMP`) to save raw frames.
 *     - Most codecs are lossy. If you want lossless video file you need to use a lossless codecs
 *       (eg. FFMPEG FFV1, Huffman HFYU, Lagarith LAGS, etc...)
 *     - If FFMPEG is enabled, using `codec=0; fps=0;` you can create an uncompressed (raw) video file.
 */
- (instancetype)initWithFilename:(NSString*)filename fourcc:(int)fourcc fps:(double)fps frameSize:(Size2i*)frameSize isColor:(BOOL)isColor;

/**
 *
 * @param filename Name of the output video file.
 * @param fourcc 4-character code of codec used to compress the frames. For example,
 *     VideoWriter::fourcc('P','I','M','1') is a MPEG-1 codec, VideoWriter::fourcc('M','J','P','G') is a
 *     motion-jpeg codec etc. List of codes can be obtained at [Video Codecs by
 *     FOURCC](http://www.fourcc.org/codecs.php) page. FFMPEG backend with MP4 container natively uses
 *     other values as fourcc code: see [ObjectType](http://mp4ra.org/#/codecs),
 *     so you may receive a warning message from OpenCV about fourcc code conversion.
 * @param fps Framerate of the created video stream.
 * @param frameSize Size of the video frames.
 *     will work with grayscale frames.
 *
 *     @b Tips:
 *     - With some backends `fourcc=-1` pops up the codec selection dialog from the system.
 *     - To save image sequence use a proper filename (eg. `img_%02d.jpg`) and `fourcc=0`
 *       OR `fps=0`. Use uncompressed image format (eg. `img_%02d.BMP`) to save raw frames.
 *     - Most codecs are lossy. If you want lossless video file you need to use a lossless codecs
 *       (eg. FFMPEG FFV1, Huffman HFYU, Lagarith LAGS, etc...)
 *     - If FFMPEG is enabled, using `codec=0; fps=0;` you can create an uncompressed (raw) video file.
 */
- (instancetype)initWithFilename:(NSString*)filename fourcc:(int)fourcc fps:(double)fps frameSize:(Size2i*)frameSize;


//
//   cv::VideoWriter::VideoWriter(String filename, int fourcc, double fps, Size frameSize, vector_int params)
//
/**
 *
 * The `params` parameter allows to specify extra encoder parameters encoded as pairs (paramId_1, paramValue_1, paramId_2, paramValue_2, ... .)
 * see cv::VideoWriterProperties
 */
- (instancetype)initWithFilename:(NSString*)filename fourcc:(int)fourcc fps:(double)fps frameSize:(Size2i*)frameSize params:(IntVector*)params;


//
//   cv::VideoWriter::VideoWriter()
//
/**
 * Default constructors
 *
 *     The constructors/functions initialize video writers.
 *     -   On Linux FFMPEG is used to write videos;
 *     -   On Windows FFMPEG or MSWF or DSHOW is used;
 *     -   On MacOSX AVFoundation is used.
 */
- (instancetype)init;


//
//  String cv::VideoWriter::getBackendName()
//
/**
 * Returns used backend API name
 *
 *      @note Stream should be opened.
 */
- (NSString*)getBackendName NS_SWIFT_NAME(getBackendName());


//
//  bool cv::VideoWriter::isOpened()
//
/**
 * Returns true if video writer has been successfully initialized.
 */
- (BOOL)isOpened NS_SWIFT_NAME(isOpened());


//
//  bool cv::VideoWriter::open(String filename, int apiPreference, int fourcc, double fps, Size frameSize, bool isColor = true)
//
- (BOOL)open:(NSString*)filename apiPreference:(int)apiPreference fourcc:(int)fourcc fps:(double)fps frameSize:(Size2i*)frameSize isColor:(BOOL)isColor NS_SWIFT_NAME(open(filename:apiPreference:fourcc:fps:frameSize:isColor:));

- (BOOL)open:(NSString*)filename apiPreference:(int)apiPreference fourcc:(int)fourcc fps:(double)fps frameSize:(Size2i*)frameSize NS_SWIFT_NAME(open(filename:apiPreference:fourcc:fps:frameSize:));


//
//  bool cv::VideoWriter::open(String filename, int apiPreference, int fourcc, double fps, Size frameSize, vector_int params)
//
- (BOOL)open:(NSString*)filename apiPreference:(int)apiPreference fourcc:(int)fourcc fps:(double)fps frameSize:(Size2i*)frameSize params:(IntVector*)params NS_SWIFT_NAME(open(filename:apiPreference:fourcc:fps:frameSize:params:));


//
//  bool cv::VideoWriter::open(String filename, int fourcc, double fps, Size frameSize, bool isColor = true)
//
/**
 * Initializes or reinitializes video writer.
 *
 *     The method opens video writer. Parameters are the same as in the constructor
 *     VideoWriter::VideoWriter.
 *     @return `true` if video writer has been successfully initialized
 *
 *     The method first calls VideoWriter::release to close the already opened file.
 */
- (BOOL)open:(NSString*)filename fourcc:(int)fourcc fps:(double)fps frameSize:(Size2i*)frameSize isColor:(BOOL)isColor NS_SWIFT_NAME(open(filename:fourcc:fps:frameSize:isColor:));

/**
 * Initializes or reinitializes video writer.
 *
 *     The method opens video writer. Parameters are the same as in the constructor
 *     VideoWriter::VideoWriter.
 *     @return `true` if video writer has been successfully initialized
 *
 *     The method first calls VideoWriter::release to close the already opened file.
 */
- (BOOL)open:(NSString*)filename fourcc:(int)fourcc fps:(double)fps frameSize:(Size2i*)frameSize NS_SWIFT_NAME(open(filename:fourcc:fps:frameSize:));


//
//  bool cv::VideoWriter::open(String filename, int fourcc, double fps, Size frameSize, vector_int params)
//
- (BOOL)open:(NSString*)filename fourcc:(int)fourcc fps:(double)fps frameSize:(Size2i*)frameSize params:(IntVector*)params NS_SWIFT_NAME(open(filename:fourcc:fps:frameSize:params:));


//
//  bool cv::VideoWriter::set(int propId, double value)
//
/**
 * Sets a property in the VideoWriter.
 *
 * @param propId Property identifier from cv::VideoWriterProperties (eg. cv::VIDEOWRITER_PROP_QUALITY)
 *      or one of REF: videoio_flags_others
 *
 * @param value Value of the property.
 *      @return  `true` if the property is supported by the backend used by the VideoWriter instance.
 */
- (BOOL)set:(int)propId value:(double)value NS_SWIFT_NAME(set(propId:value:));


//
//  double cv::VideoWriter::get(int propId)
//
/**
 * Returns the specified VideoWriter property
 *
 * @param propId Property identifier from cv::VideoWriterProperties (eg. cv::VIDEOWRITER_PROP_QUALITY)
 *      or one of REF: videoio_flags_others
 *
 *      @return Value for the specified property. Value 0 is returned when querying a property that is
 *      not supported by the backend used by the VideoWriter instance.
 */
- (double)get:(int)propId NS_SWIFT_NAME(get(propId:));


//
// static int cv::VideoWriter::fourcc(char c1, char c2, char c3, char c4)
//
/**
 * Concatenates 4 chars to a fourcc code
 *
 *     @return a fourcc code
 *
 *     This static method constructs the fourcc code of the codec to be used in the constructor
 *     VideoWriter::VideoWriter or VideoWriter::open.
 */
+ (int)fourcc:(char)c1 c2:(char)c2 c3:(char)c3 c4:(char)c4 NS_SWIFT_NAME(fourcc(c1:c2:c3:c4:));


//
//  void cv::VideoWriter::write(Mat image)
//
/**
 * Writes the next video frame
 *
 * @param image The written frame. In general, color images are expected in BGR format.
 *
 *     The function/method writes the specified image to video file. It must have the same size as has
 *     been specified when opening the video writer.
 */
- (void)write:(Mat*)image NS_SWIFT_NAME(write(image:));



@end

NS_ASSUME_NONNULL_END



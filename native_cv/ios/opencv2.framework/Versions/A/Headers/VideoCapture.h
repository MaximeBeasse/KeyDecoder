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

// C++: class VideoCapture
/**
 * Class for video capturing from video files, image sequences or cameras.
 *
 * The class provides C++ API for capturing video from cameras or for reading video files and image sequences.
 *
 * Here is how the class can be used:
 * INCLUDE: samples/cpp/videocapture_basic.cpp
 *
 * @note In REF: videoio_c "C API" the black-box structure `CvCapture` is used instead of %VideoCapture.
 * @note
 * -   (C++) A basic sample on using the %VideoCapture interface can be found at
 *     `OPENCV_SOURCE_CODE/samples/cpp/videocapture_starter.cpp`
 * -   (Python) A basic sample on using the %VideoCapture interface can be found at
 *     `OPENCV_SOURCE_CODE/samples/python/video.py`
 * -   (Python) A multi threaded video processing sample can be found at
 *     `OPENCV_SOURCE_CODE/samples/python/video_threaded.py`
 * -   (Python) %VideoCapture sample showcasing some features of the Video4Linux2 backend
 *     `OPENCV_SOURCE_CODE/samples/python/video_v4l2.py`
 *
 * Member of `Videoio`
 */
CV_EXPORTS @interface VideoCapture : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::VideoCapture> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::VideoCapture>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::VideoCapture>)nativePtr;
#endif


#pragma mark - Methods


//
//   cv::VideoCapture::VideoCapture(String filename, int apiPreference = CAP_ANY)
//
/**
 *
 *      Opens a video file or a capturing device or an IP video stream for video capturing with API Preference
 *
 * @param filename it can be:
 *     - name of video file (eg. `video.avi`)
 *     - or image sequence (eg. `img_%02d.jpg`, which will read samples like `img_00.jpg, img_01.jpg, img_02.jpg, ...`)
 *     - or URL of video stream (eg. `protocol://host:port/script_name?script_params|auth`)
 *     - or GStreamer pipeline string in gst-launch tool format in case if GStreamer is used as backend
 *       Note that each video stream or IP camera feed has its own URL scheme. Please refer to the
 *       documentation of source stream to know the right URL.
 * @param apiPreference preferred Capture API backends to use. Can be used to enforce a specific reader
 *     implementation if multiple are available: e.g. cv::CAP_FFMPEG or cv::CAP_IMAGES or cv::CAP_DSHOW.
 *
 *     @see `cv::VideoCaptureAPIs`
 */
- (instancetype)initWithFilename:(NSString*)filename apiPreference:(int)apiPreference;

/**
 *
 *      Opens a video file or a capturing device or an IP video stream for video capturing with API Preference
 *
 * @param filename it can be:
 *     - name of video file (eg. `video.avi`)
 *     - or image sequence (eg. `img_%02d.jpg`, which will read samples like `img_00.jpg, img_01.jpg, img_02.jpg, ...`)
 *     - or URL of video stream (eg. `protocol://host:port/script_name?script_params|auth`)
 *     - or GStreamer pipeline string in gst-launch tool format in case if GStreamer is used as backend
 *       Note that each video stream or IP camera feed has its own URL scheme. Please refer to the
 *       documentation of source stream to know the right URL.
 *     implementation if multiple are available: e.g. cv::CAP_FFMPEG or cv::CAP_IMAGES or cv::CAP_DSHOW.
 *
 *     @see `cv::VideoCaptureAPIs`
 */
- (instancetype)initWithFilename:(NSString*)filename;


//
//   cv::VideoCapture::VideoCapture(int index, int apiPreference = CAP_ANY)
//
/**
 *
 *      Opens a camera for video capturing
 *
 * @param index id of the video capturing device to open. To open default camera using default backend just pass 0.
 *     (to backward compatibility usage of camera_id + domain_offset (CAP_*) is valid when apiPreference is CAP_ANY)
 * @param apiPreference preferred Capture API backends to use. Can be used to enforce a specific reader
 *     implementation if multiple are available: e.g. cv::CAP_DSHOW or cv::CAP_MSMF or cv::CAP_V4L.
 *
 *     @see `cv::VideoCaptureAPIs`
 */
- (instancetype)initWithIndex:(int)index apiPreference:(int)apiPreference;

/**
 *
 *      Opens a camera for video capturing
 *
 * @param index id of the video capturing device to open. To open default camera using default backend just pass 0.
 *     (to backward compatibility usage of camera_id + domain_offset (CAP_*) is valid when apiPreference is CAP_ANY)
 *     implementation if multiple are available: e.g. cv::CAP_DSHOW or cv::CAP_MSMF or cv::CAP_V4L.
 *
 *     @see `cv::VideoCaptureAPIs`
 */
- (instancetype)initWithIndex:(int)index;


//
//   cv::VideoCapture::VideoCapture()
//
/**
 * Default constructor
 *     @note In REF: videoio_c "C API", when you finished working with video, release CvCapture structure with
 *     cvReleaseCapture(), or use Ptr\<CvCapture\> that calls cvReleaseCapture() automatically in the
 *     destructor.
 */
- (instancetype)init;


//
//  String cv::VideoCapture::getBackendName()
//
/**
 * Returns used backend API name
 *
 *      @note Stream should be opened.
 */
- (NSString*)getBackendName NS_SWIFT_NAME(getBackendName());


//
//  bool cv::VideoCapture::getExceptionMode()
//
- (BOOL)getExceptionMode NS_SWIFT_NAME(getExceptionMode());


//
//  bool cv::VideoCapture::grab()
//
/**
 * Grabs the next frame from video file or capturing device.
 *
 *     @return `true` (non-zero) in the case of success.
 *
 *     The method/function grabs the next frame from video file or camera and returns true (non-zero) in
 *     the case of success.
 *
 *     The primary use of the function is in multi-camera environments, especially when the cameras do not
 *     have hardware synchronization. That is, you call VideoCapture::grab() for each camera and after that
 *     call the slower method VideoCapture::retrieve() to decode and get frame from each camera. This way
 *     the overhead on demosaicing or motion jpeg decompression etc. is eliminated and the retrieved frames
 *     from different cameras will be closer in time.
 *
 *     Also, when a connected camera is multi-head (for example, a stereo camera or a Kinect device), the
 *     correct way of retrieving data from it is to call VideoCapture::grab() first and then call
 *     VideoCapture::retrieve() one or more times with different values of the channel parameter.
 *
 *     REF: tutorial_kinect_openni
 */
- (BOOL)grab NS_SWIFT_NAME(grab());


//
//  bool cv::VideoCapture::isOpened()
//
/**
 * Returns true if video capturing has been initialized already.
 *
 *     If the previous call to VideoCapture constructor or VideoCapture::open() succeeded, the method returns
 *     true.
 */
- (BOOL)isOpened NS_SWIFT_NAME(isOpened());


//
//  bool cv::VideoCapture::open(String filename, int apiPreference = CAP_ANY)
//
/**
 *  Opens a video file or a capturing device or an IP video stream for video capturing.
 *
 *     
 *
 *     Parameters are same as the constructor VideoCapture(const String& filename, int apiPreference = CAP_ANY)
 *     @return `true` if the file has been successfully opened
 *
 *     The method first calls VideoCapture::release to close the already opened file or camera.
 */
- (BOOL)open:(NSString*)filename apiPreference:(int)apiPreference NS_SWIFT_NAME(open(filename:apiPreference:));

/**
 *  Opens a video file or a capturing device or an IP video stream for video capturing.
 *
 *     
 *
 *     Parameters are same as the constructor VideoCapture(const String& filename, int apiPreference = CAP_ANY)
 *     @return `true` if the file has been successfully opened
 *
 *     The method first calls VideoCapture::release to close the already opened file or camera.
 */
- (BOOL)open:(NSString*)filename NS_SWIFT_NAME(open(filename:));


//
//  bool cv::VideoCapture::open(int index, int apiPreference = CAP_ANY)
//
/**
 *  Opens a camera for video capturing
 *
 *     
 *
 *     Parameters are same as the constructor VideoCapture(int index, int apiPreference = CAP_ANY)
 *     @return `true` if the camera has been successfully opened.
 *
 *     The method first calls VideoCapture::release to close the already opened file or camera.
 */
- (BOOL)openWithIndex:(int)index apiPreference:(int)apiPreference NS_SWIFT_NAME(open(index:apiPreference:));

/**
 *  Opens a camera for video capturing
 *
 *     
 *
 *     Parameters are same as the constructor VideoCapture(int index, int apiPreference = CAP_ANY)
 *     @return `true` if the camera has been successfully opened.
 *
 *     The method first calls VideoCapture::release to close the already opened file or camera.
 */
- (BOOL)openWithIndex:(int)index NS_SWIFT_NAME(open(index:));


//
//  bool cv::VideoCapture::read(Mat& image)
//
/**
 * Grabs, decodes and returns the next video frame.
 *
 *     @return `false` if no frames has been grabbed
 *
 *     The method/function combines VideoCapture::grab() and VideoCapture::retrieve() in one call. This is the
 *     most convenient method for reading video files or capturing data from decode and returns the just
 *     grabbed frame. If no frames has been grabbed (camera has been disconnected, or there are no more
 *     frames in video file), the method returns false and the function returns empty image (with %cv::Mat, test it with Mat::empty()).
 *
 *     @note In REF: videoio_c "C API", functions cvRetrieveFrame() and cv.RetrieveFrame() return image stored inside the video
 *     capturing structure. It is not allowed to modify or release the image! You can copy the frame using
 *     cvCloneImage and then do whatever you want with the copy.
 */
- (BOOL)read:(Mat*)image NS_SWIFT_NAME(read(image:));


//
//  bool cv::VideoCapture::retrieve(Mat& image, int flag = 0)
//
/**
 * Decodes and returns the grabbed video frame.
 *
 * @param flag it could be a frame index or a driver specific flag
 *     @return `false` if no frames has been grabbed
 *
 *     The method decodes and returns the just grabbed frame. If no frames has been grabbed
 *     (camera has been disconnected, or there are no more frames in video file), the method returns false
 *     and the function returns an empty image (with %cv::Mat, test it with Mat::empty()).
 *
 *     @see `read()`
 *
 *     @note In REF: videoio_c "C API", functions cvRetrieveFrame() and cv.RetrieveFrame() return image stored inside the video
 *     capturing structure. It is not allowed to modify or release the image! You can copy the frame using
 *     cvCloneImage and then do whatever you want with the copy.
 */
- (BOOL)retrieve:(Mat*)image flag:(int)flag NS_SWIFT_NAME(retrieve(image:flag:));

/**
 * Decodes and returns the grabbed video frame.
 *
 *     @return `false` if no frames has been grabbed
 *
 *     The method decodes and returns the just grabbed frame. If no frames has been grabbed
 *     (camera has been disconnected, or there are no more frames in video file), the method returns false
 *     and the function returns an empty image (with %cv::Mat, test it with Mat::empty()).
 *
 *     @see `read()`
 *
 *     @note In REF: videoio_c "C API", functions cvRetrieveFrame() and cv.RetrieveFrame() return image stored inside the video
 *     capturing structure. It is not allowed to modify or release the image! You can copy the frame using
 *     cvCloneImage and then do whatever you want with the copy.
 */
- (BOOL)retrieve:(Mat*)image NS_SWIFT_NAME(retrieve(image:));


//
//  bool cv::VideoCapture::set(int propId, double value)
//
/**
 * Sets a property in the VideoCapture.
 *
 * @param propId Property identifier from cv::VideoCaptureProperties (eg. cv::CAP_PROP_POS_MSEC, cv::CAP_PROP_POS_FRAMES, ...)
 *     or one from REF: videoio_flags_others
 * @param value Value of the property.
 *     @return `true` if the property is supported by backend used by the VideoCapture instance.
 *     @note Even if it returns `true` this doesn't ensure that the property
 *     value has been accepted by the capture device. See note in VideoCapture::get()
 */
- (BOOL)set:(int)propId value:(double)value NS_SWIFT_NAME(set(propId:value:));


//
//  double cv::VideoCapture::get(int propId)
//
/**
 * Returns the specified VideoCapture property
 *
 * @param propId Property identifier from cv::VideoCaptureProperties (eg. cv::CAP_PROP_POS_MSEC, cv::CAP_PROP_POS_FRAMES, ...)
 *     or one from REF: videoio_flags_others
 *     @return Value for the specified property. Value 0 is returned when querying a property that is
 *     not supported by the backend used by the VideoCapture instance.
 *
 *     @note Reading / writing properties involves many layers. Some unexpected result might happens
 *     along this chain.
 *     
 *     VideoCapture -> API Backend -> Operating System -> Device Driver -> Device Hardware
 *     
 *     The returned value might be different from what really used by the device or it could be encoded
 *     using device dependent rules (eg. steps or percentage). Effective behaviour depends from device
 *     driver and API Backend
 */
- (double)get:(int)propId NS_SWIFT_NAME(get(propId:));


//
//  void cv::VideoCapture::setExceptionMode(bool enable)
//
/**
 * Switches exceptions mode
 *
 * methods raise exceptions if not successful instead of returning an error code
 */
- (void)setExceptionMode:(BOOL)enable NS_SWIFT_NAME(setExceptionMode(enable:));



@end

NS_ASSUME_NONNULL_END



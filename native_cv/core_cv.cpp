#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>
#include <opencv2/calib3d/calib3d.hpp>

typedef struct sCoordinate
{
    double x;
    double y;
} Coordinate;

typedef struct sNativeIntersection
{
    Coordinate* topLeft;
    Coordinate* topRight;
    Coordinate* bottomLeft;
    Coordinate* bottomRight;
} NativeIntersection;

extern "C"
int homography_warp(NativeIntersection* points, char *src, char *dst);

#define ISOwidth 85.60f
#define ISOheight 53.98f
#define isoWidthDest (ISOwidth * 40.0f)
#define isoHeightDest (isoWidthDest / ISOwidth * ISOheight)

cv::Point2f cvPointFromCoordinate(Coordinate* c) {
	return cv::Point2f((float)(c->x), (float)(c->y));
}

std::vector<cv::Point2f> nativeInter2Vect(NativeIntersection* points) {
	return std::vector<cv::Point2f>({
		cvPointFromCoordinate(points->topLeft),
		cvPointFromCoordinate(points->topRight),
		cvPointFromCoordinate(points->bottomRight),
		cvPointFromCoordinate(points->bottomLeft)
	});
}

extern "C" __attribute__((visibility("default"))) __attribute__((used))
int homography_warp(NativeIntersection* points, char *src, char *dst) {

	// Get Mat of original picture
	cv::Mat src_mat = cv::imread(src);
	if(src_mat.empty())
		return -1;

	cv::Mat dst_mat = cv::Mat();

	/*
	{ 	\
		0.0f, 	isoWidthDest,	isoWidthDest,	0.0f,			\
		0.0f, 	0.0f,			isoHeightDest,	isoHeightDest	\
	}
	*/
	std::vector<cv::Point2f> dst_points = std::vector<cv::Point2f>({
		cv::Point2f(0.0f, 0.0f),
		cv::Point2f(isoWidthDest, 0.0f),
		cv::Point2f(isoWidthDest, isoHeightDest),
		cv::Point2f(0.0f, isoHeightDest)
	});

	std::vector<cv::Point2f> src_points = nativeInter2Vect(points);

	/*
		// points in clockwise order
		new Point(0f, 0f),
		new Point(isoWidthDest, 0f),
		new Point(isoWidthDest, isoHeightDest),
		new Point(0f, isoHeightDest)
	*/
	try {
		cv::Mat homographyTransform = cv::findHomography(src_points, dst_points);

		cv::warpPerspective(src_mat, dst_mat, homographyTransform, cv::Size(cvFloor(isoWidthDest), cvFloor(isoHeightDest)));

		if(dst_mat.empty())
			return -1;

		cv::imwrite(dst, dst_mat);
	} catch(std::exception& e) {
		std::cerr << e.what();
		return -1;
	}

	return 1;
}
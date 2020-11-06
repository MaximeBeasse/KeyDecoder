struct Coordinate
{
    double x;
    double y;
};
struct NativeIntersection
{
    Coordinate* topLeft;
    Coordinate* topRight;
    Coordinate* bottomLeft;
    Coordinate* bottomRight;
};
extern "C"
int homography_warp(NativeIntersection* points, char *src, char *dst);
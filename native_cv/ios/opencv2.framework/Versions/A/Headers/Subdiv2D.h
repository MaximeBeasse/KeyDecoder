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


@class Float4;
@class Float6;
@class IntVector;
@class Point2f;
@class Rect2i;



NS_ASSUME_NONNULL_BEGIN

// C++: class Subdiv2D
/**
 * The Subdiv2D module
 *
 * Member of `Imgproc`
 */
CV_EXPORTS @interface Subdiv2D : NSObject


#ifdef __cplusplus
@property(readonly)cv::Ptr<cv::Subdiv2D> nativePtr;
#endif

#ifdef __cplusplus
- (instancetype)initWithNativePtr:(cv::Ptr<cv::Subdiv2D>)nativePtr;
+ (instancetype)fromNative:(cv::Ptr<cv::Subdiv2D>)nativePtr;
#endif


#pragma mark - Class Constants


@property (class, readonly) int PTLOC_ERROR NS_SWIFT_NAME(PTLOC_ERROR);
@property (class, readonly) int PTLOC_OUTSIDE_RECT NS_SWIFT_NAME(PTLOC_OUTSIDE_RECT);
@property (class, readonly) int PTLOC_INSIDE NS_SWIFT_NAME(PTLOC_INSIDE);
@property (class, readonly) int PTLOC_VERTEX NS_SWIFT_NAME(PTLOC_VERTEX);
@property (class, readonly) int PTLOC_ON_EDGE NS_SWIFT_NAME(PTLOC_ON_EDGE);
@property (class, readonly) int NEXT_AROUND_ORG NS_SWIFT_NAME(NEXT_AROUND_ORG);
@property (class, readonly) int NEXT_AROUND_DST NS_SWIFT_NAME(NEXT_AROUND_DST);
@property (class, readonly) int PREV_AROUND_ORG NS_SWIFT_NAME(PREV_AROUND_ORG);
@property (class, readonly) int PREV_AROUND_DST NS_SWIFT_NAME(PREV_AROUND_DST);
@property (class, readonly) int NEXT_AROUND_LEFT NS_SWIFT_NAME(NEXT_AROUND_LEFT);
@property (class, readonly) int NEXT_AROUND_RIGHT NS_SWIFT_NAME(NEXT_AROUND_RIGHT);
@property (class, readonly) int PREV_AROUND_LEFT NS_SWIFT_NAME(PREV_AROUND_LEFT);
@property (class, readonly) int PREV_AROUND_RIGHT NS_SWIFT_NAME(PREV_AROUND_RIGHT);

#pragma mark - Methods


//
//   cv::Subdiv2D::Subdiv2D(Rect rect)
//
/**
 *
 *
 * @param rect Rectangle that includes all of the 2D points that are to be added to the subdivision.
 *
 *     The function creates an empty Delaunay subdivision where 2D points can be added using the function
 *     insert() . All of the points to be added must be within the specified rectangle, otherwise a runtime
 *     error is raised.
 */
- (instancetype)initWithRect:(Rect2i*)rect;


//
//   cv::Subdiv2D::Subdiv2D()
//
/**
 * creates an empty Subdiv2D object.
 *     To create a new empty Delaunay subdivision you need to use the #initDelaunay function.
 */
- (instancetype)init;


//
//  Point2f cv::Subdiv2D::getVertex(int vertex, int* firstEdge = 0)
//
/**
 * Returns vertex location from vertex ID.
 *
 * @param vertex vertex ID.
 * @param firstEdge Optional. The first edge ID which is connected to the vertex.
 *     @return vertex (x,y)
 */
- (Point2f*)getVertex:(int)vertex firstEdge:(int*)firstEdge NS_SWIFT_NAME(getVertex(vertex:firstEdge:));

/**
 * Returns vertex location from vertex ID.
 *
 * @param vertex vertex ID.
 *     @return vertex (x,y)
 */
- (Point2f*)getVertex:(int)vertex NS_SWIFT_NAME(getVertex(vertex:));


//
//  int cv::Subdiv2D::edgeDst(int edge, Point2f* dstpt = 0)
//
/**
 * Returns the edge destination.
 *
 * @param edge Subdivision edge ID.
 * @param dstpt Output vertex location.
 *
 *     @return vertex ID.
 */
- (int)edgeDst:(int)edge dstpt:(Point2f*)dstpt NS_SWIFT_NAME(edgeDst(edge:dstpt:));

/**
 * Returns the edge destination.
 *
 * @param edge Subdivision edge ID.
 *
 *     @return vertex ID.
 */
- (int)edgeDst:(int)edge NS_SWIFT_NAME(edgeDst(edge:));


//
//  int cv::Subdiv2D::edgeOrg(int edge, Point2f* orgpt = 0)
//
/**
 * Returns the edge origin.
 *
 * @param edge Subdivision edge ID.
 * @param orgpt Output vertex location.
 *
 *     @return vertex ID.
 */
- (int)edgeOrg:(int)edge orgpt:(Point2f*)orgpt NS_SWIFT_NAME(edgeOrg(edge:orgpt:));

/**
 * Returns the edge origin.
 *
 * @param edge Subdivision edge ID.
 *
 *     @return vertex ID.
 */
- (int)edgeOrg:(int)edge NS_SWIFT_NAME(edgeOrg(edge:));


//
//  int cv::Subdiv2D::findNearest(Point2f pt, Point2f* nearestPt = 0)
//
/**
 * Finds the subdivision vertex closest to the given point.
 *
 * @param pt Input point.
 * @param nearestPt Output subdivision vertex point.
 *
 *     The function is another function that locates the input point within the subdivision. It finds the
 *     subdivision vertex that is the closest to the input point. It is not necessarily one of vertices
 *     of the facet containing the input point, though the facet (located using locate() ) is used as a
 *     starting point.
 *
 *     @return vertex ID.
 */
- (int)findNearest:(Point2f*)pt nearestPt:(Point2f*)nearestPt NS_SWIFT_NAME(findNearest(pt:nearestPt:));

/**
 * Finds the subdivision vertex closest to the given point.
 *
 * @param pt Input point.
 *
 *     The function is another function that locates the input point within the subdivision. It finds the
 *     subdivision vertex that is the closest to the input point. It is not necessarily one of vertices
 *     of the facet containing the input point, though the facet (located using locate() ) is used as a
 *     starting point.
 *
 *     @return vertex ID.
 */
- (int)findNearest:(Point2f*)pt NS_SWIFT_NAME(findNearest(pt:));


//
//  int cv::Subdiv2D::getEdge(int edge, int nextEdgeType)
//
/**
 * Returns one of the edges related to the given edge.
 *
 * @param edge Subdivision edge ID.
 * @param nextEdgeType Parameter specifying which of the related edges to return.
 *     The following values are possible:
 *     -   NEXT_AROUND_ORG next around the edge origin ( eOnext on the picture below if e is the input edge)
 *     -   NEXT_AROUND_DST next around the edge vertex ( eDnext )
 *     -   PREV_AROUND_ORG previous around the edge origin (reversed eRnext )
 *     -   PREV_AROUND_DST previous around the edge destination (reversed eLnext )
 *     -   NEXT_AROUND_LEFT next around the left facet ( eLnext )
 *     -   NEXT_AROUND_RIGHT next around the right facet ( eRnext )
 *     -   PREV_AROUND_LEFT previous around the left facet (reversed eOnext )
 *     -   PREV_AROUND_RIGHT previous around the right facet (reversed eDnext )
 *
 *     ![sample output](pics/quadedge.png)
 *
 *     @return edge ID related to the input edge.
 */
- (int)getEdge:(int)edge nextEdgeType:(int)nextEdgeType NS_SWIFT_NAME(getEdge(edge:nextEdgeType:));


//
//  int cv::Subdiv2D::insert(Point2f pt)
//
/**
 * Insert a single point into a Delaunay triangulation.
 *
 * @param pt Point to insert.
 *
 *     The function inserts a single point into a subdivision and modifies the subdivision topology
 *     appropriately. If a point with the same coordinates exists already, no new point is added.
 *     @return the ID of the point.
 *
 *     @note If the point is outside of the triangulation specified rect a runtime error is raised.
 */
- (int)insert:(Point2f*)pt NS_SWIFT_NAME(insert(pt:));


//
//  int cv::Subdiv2D::locate(Point2f pt, int& edge, int& vertex)
//
/**
 * Returns the location of a point within a Delaunay triangulation.
 *
 * @param pt Point to locate.
 * @param edge Output edge that the point belongs to or is located to the right of it.
 * @param vertex Optional output vertex the input point coincides with.
 *
 *     The function locates the input point within the subdivision and gives one of the triangle edges
 *     or vertices.
 *
 *     @return an integer which specify one of the following five cases for point location:
 *     -  The point falls into some facet. The function returns #PTLOC_INSIDE and edge will contain one of
 *        edges of the facet.
 *     -  The point falls onto the edge. The function returns #PTLOC_ON_EDGE and edge will contain this edge.
 *     -  The point coincides with one of the subdivision vertices. The function returns #PTLOC_VERTEX and
 *        vertex will contain a pointer to the vertex.
 *     -  The point is outside the subdivision reference rectangle. The function returns #PTLOC_OUTSIDE_RECT
 *        and no pointers are filled.
 *     -  One of input arguments is invalid. A runtime error is raised or, if silent or "parent" error
 *        processing mode is selected, #PTLOC_ERROR is returned.
 */
- (int)locate:(Point2f*)pt edge:(int*)edge vertex:(int*)vertex NS_SWIFT_NAME(locate(pt:edge:vertex:));


//
//  int cv::Subdiv2D::nextEdge(int edge)
//
/**
 * Returns next edge around the edge origin.
 *
 * @param edge Subdivision edge ID.
 *
 *     @return an integer which is next edge ID around the edge origin: eOnext on the
 *     picture above if e is the input edge).
 */
- (int)nextEdge:(int)edge NS_SWIFT_NAME(nextEdge(edge:));


//
//  int cv::Subdiv2D::rotateEdge(int edge, int rotate)
//
/**
 * Returns another edge of the same quad-edge.
 *
 * @param edge Subdivision edge ID.
 * @param rotate Parameter specifying which of the edges of the same quad-edge as the input
 *     one to return. The following values are possible:
 *     -   0 - the input edge ( e on the picture below if e is the input edge)
 *     -   1 - the rotated edge ( eRot )
 *     -   2 - the reversed edge (reversed e (in green))
 *     -   3 - the reversed rotated edge (reversed eRot (in green))
 *
 *     @return one of the edges ID of the same quad-edge as the input edge.
 */
- (int)rotateEdge:(int)edge rotate:(int)rotate NS_SWIFT_NAME(rotateEdge(edge:rotate:));


//
//  int cv::Subdiv2D::symEdge(int edge)
//
- (int)symEdge:(int)edge NS_SWIFT_NAME(symEdge(edge:));


//
//  void cv::Subdiv2D::getEdgeList(vector_Vec4f& edgeList)
//
/**
 * Returns a list of all edges.
 *
 * @param edgeList Output vector.
 *
 *     The function gives each edge as a 4 numbers vector, where each two are one of the edge
 *     vertices. i.e. org_x = v[0], org_y = v[1], dst_x = v[2], dst_y = v[3].
 */
- (void)getEdgeList:(NSMutableArray<Float4*>*)edgeList NS_SWIFT_NAME(getEdgeList(edgeList:));


//
//  void cv::Subdiv2D::getLeadingEdgeList(vector_int& leadingEdgeList)
//
/**
 * Returns a list of the leading edge ID connected to each triangle.
 *
 * @param leadingEdgeList Output vector.
 *
 *     The function gives one edge ID for each triangle.
 */
- (void)getLeadingEdgeList:(IntVector*)leadingEdgeList NS_SWIFT_NAME(getLeadingEdgeList(leadingEdgeList:));


//
//  void cv::Subdiv2D::getTriangleList(vector_Vec6f& triangleList)
//
/**
 * Returns a list of all triangles.
 *
 * @param triangleList Output vector.
 *
 *     The function gives each triangle as a 6 numbers vector, where each two are one of the triangle
 *     vertices. i.e. p1_x = v[0], p1_y = v[1], p2_x = v[2], p2_y = v[3], p3_x = v[4], p3_y = v[5].
 */
- (void)getTriangleList:(NSMutableArray<Float6*>*)triangleList NS_SWIFT_NAME(getTriangleList(triangleList:));


//
//  void cv::Subdiv2D::getVoronoiFacetList(vector_int idx, vector_vector_Point2f& facetList, vector_Point2f& facetCenters)
//
/**
 * Returns a list of all Voronoi facets.
 *
 * @param idx Vector of vertices IDs to consider. For all vertices you can pass empty vector.
 * @param facetList Output vector of the Voronoi facets.
 * @param facetCenters Output vector of the Voronoi facets center points.
 */
- (void)getVoronoiFacetList:(IntVector*)idx facetList:(NSMutableArray<NSMutableArray<Point2f*>*>*)facetList facetCenters:(NSMutableArray<Point2f*>*)facetCenters NS_SWIFT_NAME(getVoronoiFacetList(idx:facetList:facetCenters:));


//
//  void cv::Subdiv2D::initDelaunay(Rect rect)
//
/**
 * Creates a new empty Delaunay subdivision
 *
 * @param rect Rectangle that includes all of the 2D points that are to be added to the subdivision.
 */
- (void)initDelaunay:(Rect2i*)rect NS_SWIFT_NAME(initDelaunay(rect:));


//
//  void cv::Subdiv2D::insert(vector_Point2f ptvec)
//
/**
 * Insert multiple points into a Delaunay triangulation.
 *
 * @param ptvec Points to insert.
 *
 *     The function inserts a vector of points into a subdivision and modifies the subdivision topology
 *     appropriately.
 */
- (void)insertVector:(NSArray<Point2f*>*)ptvec NS_SWIFT_NAME(insert(ptvec:));



@end

NS_ASSUME_NONNULL_END



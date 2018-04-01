#ifndef JE_POLYGON_H
#define JE_POLYGON_H

#include "../Shape.h"

typedef struct PolygonEdge{
    Vector3* startPoint;
    Vector3* endPoint;
} PolygonEdge;

//It's important that the polygon is a convex.
typedef struct Polygon{
    ShapeType type;

    PolygonEdge* edges;
};

#endif

#ifndef JE_SHAPE_H
#define JE_SHAPE_H

#include "util/Vector3.h"

typedef enum ShapeType{
    RECTANGLE,
    CIRCLE,
    POLYGON,
    COMBINED
} ShapeType;

//TODO: Fill CollisionDetectionResult struct
typedef struct CollisionDetectionResult{
    Vector3 contactNormal;
    Vector3 contactPoint;
} CollisionDetectionResult;

typedef struct Shape{
    ShapeType type;
} Shape;

#endif

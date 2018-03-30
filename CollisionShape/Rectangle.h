#ifndef JE_RECTANGLE_H
#define JE_RECTANGLE_H

#include "../Shape.h"

//This struct is an extension of the struct Shape
typedef struct Rectangle{
    ShapeType type;

    float width;
    float height;
} Rectangle;

#endif

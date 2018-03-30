#ifndef JE_COMBINEDSHAPE_H
#define JE_COMBINEDSHAPE_H

#include "../Shape.h"

typedef struct CombinedShape{
    ShapeType type;

    Shape* shapes;
};

#endif

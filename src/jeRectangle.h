#ifndef JE_RECTANGLE_H
#define JE_RECTANGLE_H

#include "jeAABB.h"
#include "util/jeTransform.h"

//This struct is an extension of the struct Shape
class jeRectangle{
private:
    float m_width;
    float m_height;

public:
    jeRectangle(float width,float height);

    void getAABB(jeTransform transform, jeAABB &out);
};

#endif

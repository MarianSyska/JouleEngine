//
// Created by Marian Syska on 26.04.18.
//

#ifndef JOULEENGINE_JEAABB_H
#define JOULEENGINE_JEAABB_H


#include <string>
#include "util/jeVector2.h"

class jeAABB {

private:
    Vector2 m_rightUpperCorner;
    Vector2 m_leftBottomCorner;

public:

    jeAABB(Vector2 center, Vector2 halfSize);

    inline static bool isTouching(Vector2 leftBottomCorner1, Vector2 rightUpperCorner1, Vector2 leftBottomCorner2, Vector2 rightUpperCorner2){
        return rightUpperCorner1.x >= leftBottomCorner2.x &&
               leftBottomCorner1.x <= rightUpperCorner2.x &&
               rightUpperCorner1.y >= leftBottomCorner2.y &&
               leftBottomCorner1.y <= rightUpperCorner2.y;
    }

    inline bool isTouching(jeAABB &other) {
        isTouching(m_leftBottomCorner, m_rightUpperCorner, other.m_leftBottomCorner, other.m_rightUpperCorner);
    }

    inline void operator+=(Vector2 moveVector){
        m_rightUpperCorner += moveVector;
        m_leftBottomCorner += moveVector;
    }

    std::string getString();
};


#endif //JOULEENGINE_JEAABB_H

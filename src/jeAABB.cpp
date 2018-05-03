//
// Created by Marian Syska on 26.04.18.
//

#include <cmath>
#include <sstream>
#include "jeAABB.h"

using namespace std;

jeAABB::jeAABB(Vector2 center, Vector2 halfSize) {
    halfSize.x = std::abs(halfSize.x);
    halfSize.y = std::abs(halfSize.y);

    m_leftBottomCorner = center - halfSize;
    m_rightUpperCorner = center + halfSize;
}

std::string jeAABB::getString() {
    std::stringstream ss = std::stringstream();

    ss << "Min X:" << m_leftBottomCorner.x
       << "\nMax X:" << m_rightUpperCorner.x
       << "\nMin Y:" << m_leftBottomCorner.y
       << "\nMax Y:" << m_rightUpperCorner.y
       << std::endl;

    return ss.str();
}
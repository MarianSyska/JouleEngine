#ifndef JE_VECTOR3_H
#define JE_VECTOR3_H

#include <math.h>

struct Vector2{
    float x;
    float y;


    inline Vector2 operator+(const Vector2 other) const{
        return {x + other.x,
                y + other.y};
    }

    inline void operator+=(const Vector2 other) {
        x += other.x;
        y += other.y;
    }

    inline Vector2 operator-(const Vector2 other) const {
        return {x - other.x,
                y - other.y};
    }

    inline void operator-=(const Vector2 other) {
        x -= other.x;
        y -= other.y;
    }

    inline float operator*(Vector2 other) const {
        return x * other.x + y * other.y;
    }

    inline Vector2 operator*(const float scalar) const {
        return {x * scalar,
                y * scalar};
    }

    inline float magnitudeSqrt(Vector2 vector) {
        return vector * vector;
    }

    inline float magnitude(Vector2 vector) {
        return sqrtf(vector * vector);
    }
};

#endif

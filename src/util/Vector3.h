#ifndef JE_VECTOR3_H
#define JE_VECTOR3_H

typedef struct Vector3{
    float x;
    float y;
    float z;
} Vector3;

Vector3 AddVector3ToVector3(Vector3 vector1, const Vector3 vector2);
float CalculateDotProduct(Vector3 vector1, Vector3 vector2);
float CalculateVectorMagnitude(Vector3 vector);
Vector3 MultiplyVector3WithScalar(Vector3 vector, const float scalar);

void PrintVector(Vector3 value);

#endif

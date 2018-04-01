#include <stdio.h>
#include <math.h>
#include "Vector3.h"

Vector3 AddVector3ToVector3(Vector3 vector1, const Vector3 vector2){
    vector1.x += vector2.x;
    vector1.y += vector2.y;
    vector1.z += vector2.z;
    return vector1;
}

float CalculateDotProduct(Vector3 vector1, Vector3 vector2){
    return vector1.x * vector2.x + vector1.y * vector2.y + vector1.z * vector2.z;
}

float CalculateVectorMagnitude(Vector3 vector){
    return sqrtf(CalculateDotProduct(vector, vector));
}

Vector3 MultiplyVector3WithScalar(Vector3 vector, const float scalar){
    vector.x = vector.x * scalar;
    vector.y = vector.y * scalar;
    vector.z = vector.z * scalar;
    return vector;
}

void PrintVector(Vector3 value){
    printf("%f,%f,%f\n", value.x, value.y, value.z);
}

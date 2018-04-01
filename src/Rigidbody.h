#ifndef JE_RIGIDBODY_H
#define JE_RIGIDBODY_H

#include "util/Vector3.h"
#include "Shape.h"

typedef struct Rigidbody{
    Vector3 postion;
    float roation;

    Vector3 velocity;
    float angularVelocity;

    float mass;

    Shape* shape;
} Rigidbody;

void AddForce(Rigidbody* rb, Vector3 force, float deltaTime);
void AddTorque(Rigidbody* rb, float torque, float deltaTime);
void AddImpulse(Rigidbody* rb, Vector3 impulse);
void AddAngularImpulse(Rigidbody* rb, float angularImpulse);

#endif

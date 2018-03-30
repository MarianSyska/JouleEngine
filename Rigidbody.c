#include "Rigidbody.h"

void AddForce(Rigidbody* rb, Vector3 force, float deltaTime){
    if(rb == 0) return;
    force = MultiplyVector3WithScalar(force, deltaTime);
    rb->velocity = AddVector3ToVector3(force, rb->velocity);
}

void AddImpule(Rigidbody* rb, Vector3 impulse){
    if(rb == 0) return;
    rb->velocity = AddVector3ToVector3(impulse, rb->velocity);
}

void AddTorgue(Rigidbody* rb, float torque, float deltatime){
    if(rb == 0) return;
    rb->angularVelocity += torque * deltatime;
};

void AddAngularImpulse(Rigidbody* rb, float angualarImpulse){
    if(rb == 0) return;
    rb->angularVelocity += angualarImpulse;
}
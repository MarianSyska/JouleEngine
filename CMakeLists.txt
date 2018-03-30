cmake_minimum_required(VERSION 3.9)
project(JouleEngine C)

set(CMAKE_C_STANDARD 99)

add_executable(JouleEngine main.c util/Vector3.c util/Vector3.h Rigidbody.h Shape.h CollisionShape/Rectangle.h CollisionShape/Circle.h CollisionShape/Polygon.h CollisionShape/CombinedShape.h Rigidbody.c util/ArrayList.h util/ArrayList.c)
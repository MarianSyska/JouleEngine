cmake_minimum_required(VERSION 3.9)
project(JouleEngine C)

set(CMAKE_C_STANDARD 99)

add_subdirectory(src ${CMAKE_BINARY_DIR}/src)
add_subdirectory(tests ${CMAKE_BINARY_DIR}/tests)
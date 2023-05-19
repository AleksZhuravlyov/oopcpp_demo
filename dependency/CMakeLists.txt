cmake_minimum_required(VERSION 3.25)
project(dependency)

set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME} main.cpp A.cpp B.cpp)

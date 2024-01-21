cmake_minimum_required(VERSION 3.0)

project(03_CmakeVariables)

add_library(mathLib STATIC math.cpp)

add_executable(myExec main.cpp)
add_executable(myExec2 main2.cpp)

target_link_libraries(myExec PUBLIC mathLib)
target_link_libraries(myExec2 PUBLIC mathLib)


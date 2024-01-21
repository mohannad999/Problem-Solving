cmake_minimum_required(VERSION 3.5)

message("--project name " ${PROJECT_NAME}) ## this variable  should be use after project(projectname)
project(First_Test)

message("--project name " ${PROJECT_NAME})

add_executable(app main.cpp)

target_sources(app PRIVATE main.cpp)


# cmake ..
# make 
# ./mainExec


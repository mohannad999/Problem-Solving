cmake_minimum_required(VERSION 3.0)

project(01_ProjectSructure)

add_library(my_sort_lib sort/sort.cpp)
add_library(my_print_lib print/print.cpp)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} 
  PRIVATE 
    my_sort_lib 
    my_print_lib)


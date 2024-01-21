cmake_minimum_required(VERSION 3.0)

project(04_Sub_Folder)

add_subdirectory(src)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} 
  PRIVATE 
    my_sort_lib 
    my_print_lib)


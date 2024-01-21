cmake_minimum_required(VERSION 3.0)

project(03_Sub_Folder)

add_subdirectory(sort)
add_subdirectory(print)


#add_library(my_sort_lib sort.cpp)
#add_library(my_print_lib print.cpp)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} 
  PRIVATE 
    my_sort_lib 
    my_print_lib)


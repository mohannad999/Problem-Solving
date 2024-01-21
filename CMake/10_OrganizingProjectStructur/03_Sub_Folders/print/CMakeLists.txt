cmake_minimum_required(VERSION 3.0)

project(print)

message("print subfolder passed")
add_library(my_print_lib print.cpp)


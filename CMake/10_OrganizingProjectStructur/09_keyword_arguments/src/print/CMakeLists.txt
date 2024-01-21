project(print)
add_library(my_print_lib print.cpp)
set_compiler_options(my_print_lib)
target_include_directories(my_print_lib PUBLIC ${CMAKE_SOURCE_DIR}/include/print)


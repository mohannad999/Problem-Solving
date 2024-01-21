project(sort)

add_library(my_sort_lib sort.cpp)
set_compiler_options(my_sort_lib)

target_include_directories(my_sort_lib PUBLIC ${CMAKE_SOURCE_DIR}/include/sort)

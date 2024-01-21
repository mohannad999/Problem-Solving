cmake_minimum_required(VERSION 3.0)

project(06_functions_warnings)

function(set_compiler_options libname) #libname : arguments its optional to put arguments
message("${CMAKE_CURRENT_FUNCTION} called with ${libname}")
 if(MSVC)
  target_compile_options(${libname} PRIVATE /Wall /WX)
 else()
  target_compile_options(${libname} PRIVATE -Wall -Werror)
  #wall   : this enaple all warnings
  #Werroe : makes comparative recordings and zeros 
 endif()
endfunction()
add_subdirectory(src)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} 
  PRIVATE 
    my_sort_lib 
    my_print_lib)


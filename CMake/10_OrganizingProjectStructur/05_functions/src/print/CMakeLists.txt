project(print)

add_library(my_print_lib print.cpp)
if(MSVC)
  target_compile_options(my_print_lib PRIVATE /Wall /WX)
else()
  target_compile_options(my_print_lib PRIVATE -Wall -Werror)
  #wall   : this enaple all warnings
  #Werroe : makes comparative recordings and zeros 
endif()
message("CMAKE_SOURCE_DIR= ${CMAKE_SOURCE_DIR}")
target_include_directories(my_print_lib PUBLIC ${CMAKE_SOURCE_DIR}/include/print)

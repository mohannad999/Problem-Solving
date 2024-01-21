cmake_minimum_required(VERSION 3.0)

#semantic versioning 
#SPLIT: do you want to split this into major, minor, patch?
#DEBUG_INFO: print extra info
#OUTPUT_VARIABLE_NAME: "VERSION" if not specified
#FILE_NAME: "Version" if not specified
function(read_semver)
set(PREFIX "ARG")
set(NO_VALUE_ARGS "SPLIT" "DEBUG_INFO")
set(SINGLE_VALUE_ARGS "OUTPUT_VARIABLE_NAME" "FILE_NAME")
set(MULTI_VALUE_ARGS "MV")
cmake_parse_arguments(${PREFIX} 
	"${NO_VALUE_ARGS}"
	"${SINGLE_VALUE_ARGS}"
	"${MULTI_VALUE_ARGS}"
	${ARGV})
if(${PREFIX}_DEBUG_INFO)
  message("${PREFIX}_DEBUG_INFO=${${PREFIX}_DEBUG_INFO}")
  message("${PREFIX}_SPLIT=${${PREFIX}_SPLIT}")
  message("${PREFIX}_OUTPUT_VARIABLE_NAME=${${PREFIX}_OUTPUT_VARIABLE_NAME}")
  message("${PREFIX}_FILE_NAME=${${PREFIX}_FILE_NAME}")
  message("${PREFIX}_MV=${${PREFIX}_MV}")
endif()

FILE(READ "${${PREFIX}_FILE_NAME}" FILE_CONTENT)
string(STRIP "${FILE_CONTENT}" FILE_CONTENT)
if(NOT ${PREFIX}_OUTPUT_VARIABLE_NAME)
  set(${PREFIX}_OUTPUT_VARIABLE_NAME "VERSION")
endif()

if(NOT ${PREFIX}_FILE_NAME)
  set(${PREFIX}_FILE_NAME "Version")
endif()
if(${PREFIX}_SPLIT)
  string(REPLACE "." ";" SEMVER_COMPONENTS "${FILE_CONTENT}")
  message("SEMVER_COMPONENTS=${SEMVER_COMPONENTS}")
  list(GET SEMVER_COMPONENTS 0 MAJOR)
  list(GET SEMVER_COMPONENTS 1 MINOR)
  list(GET SEMVER_COMPONENTS 2 PATCH)
  set(${${PREFIX}_OUTPUT_VARIABLE_NAME}_MAJOR ${MAJOR} PARENT_SCOPE) 
  set(${${PREFIX}_OUTPUT_VARIABLE_NAME}_MINOR ${MINOR} PARENT_SCOPE) 
  set(${${PREFIX}_OUTPUT_VARIABLE_NAME}_PATCH ${PATCH} PARENT_SCOPE)
else()
  set(${${PREFIX}_OUTPUT_VARIABLE_NAME} ${FILE_CONTENT} PARENT_SCOPE) 
endif()
endfunction()

read_semver(DEBUG_INFO FILE_NAME "Version" MV a b c d e)
message("VERSION_MAJOR=${VERSION_MAJOR}, VERSION_MINOR=${VERSION_MINOR}, VERSION_PATCH=${VERSION_PATCH}")
message("VERSION=${VERSION}")

project(sortdemo
   VERSION "${VERSION}")

function(set_compiler_options lib_name)
 message("${CMAKE_CURRENT_FUNCTION} called with ${lib_name}")
 if(MSVC)
  target_compile_options(${lib_name} PRIVATE /Wall /WX)
 else()
  target_compile_options(${lib_name} PRIVATE -Wall -Werror)
 endif()
endfunction()

add_subdirectory(src)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} 
  PRIVATE 
    my_sort_lib 
    my_print_lib
    )


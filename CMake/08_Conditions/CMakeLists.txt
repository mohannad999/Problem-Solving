cmake_minimum_required(VERSION 3.0)

PROJECT(08_Conditions)

set(USE_DEBUG_CODE FALSE)

if(USE_DEBUG_CODE)
message("Using debug code")
else()
message("using release code")
endif()

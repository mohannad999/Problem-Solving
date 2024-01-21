cmake_minimum_required(VERSION 3.0)

project(04_cache_example)

message("NON_CACHE_VAR = ${NON_CACHE_VAR}")
set(NON_CACHE_VAR "Initail value")

message("NON_CACHE_VAR = ${NON_CACHE_VAR}")


message("CACHE_VAR = ${CACHE_VAR}")
set(CACHE_VAR "Intial value" CACHE STRING "Help me with this cahce var")

message("CACHE_VAR = ${CACHE_VAR}")


cmake_minimum_required(VERSION 3.0)


PROJECT(05_CmakeString)	

string(FIND "abcdefghijkl" "def" FIND_RESULT)
string(REPLACE "abc" "ABC" REPLACE_RESULT "abcdefghijkabc")

message("Find_RESULT = ${FIND_RESULT}")
message("REPLACE_RESULT = ${REPLACE_RESULT}")

set(APPEND_INPUT "Append Something to me")
string(APPEND APPEND_INPUT "abcdef")
message("APPEND_INPUT = ${APPEND_INPUT}")

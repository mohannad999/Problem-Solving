cmake_minimum_required(VERSION 3.0)

PROJECT(06_CMakeList)

set(MY_LIST a b c d eee fff g)
#set(MY_LIST "a b c d eee fff g") #one eliment
message("MY_LIST = ${MY_LIST}")

list(LENGTH MY_LIST MY_LIST_LENGTH)
message("My list lenght = ${MY_LIST_LENGTH}")

list(GET MY_LIST 2 MY_LIST_GET_RESULT)
message("MY_LIST_GET_RESULT = ${MY_LIST_GET_RESULT}")

list(JOIN MY_LIST "-" MY_LIST_OUT)
message("MY_LIST_OUT = ${MY_LIST_OUT}")

list(APPEND MY_LIST abcd def)
message("MY_LIST = ${MY_LIST}")


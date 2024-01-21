cmake_minimum_required(VERSION 3.0.0)

PROJECT(07_math)

set(x "1     ")
set(y 2)
set(z "3 Whatever")

# (x+y)*z

math(EXPR result "(${x} +${y})*${z}")
message("result : ${result}")

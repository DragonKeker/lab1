cmake_minimum_required (VERSION 2.6)
project (Lab1)
add_executable(oop_exercise_01
main.cpp
logika.cpp)

set(CMAKE_CXX_FLAGS
	"${CMAKE_CXX_FLAGS} -Wall -Wextra")

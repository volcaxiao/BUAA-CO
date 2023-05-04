cmake_minimum_required(VERSION 3.22)
project(p2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_C_STANDARD 99)

add_executable(matrix 1_matrix/matrix.cpp)
add_executable(judge 2_judge/judge.cpp)
add_executable(conv 3_conv/conv.cpp)
add_executable(maze 5_maze/maze.cpp)
add_executable(maze_gf 5_maze/maze_gf.cpp)
add_executable(factorial 6_factorial/factorial.cpp)
cmake_minimum_required(VERSION 3.0)
project(CALC)
set(src_list add.c div.c main.c mult.c sub.c)
add_executable(app ${src_list} head.h)


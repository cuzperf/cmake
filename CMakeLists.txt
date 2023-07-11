cmake_minimum_required(VERSION 3.0)
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)

project(CALC)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
include_directories(${PROJECT_SOURCE_DIR}/include)
file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c)
add_executable(app ${SRC_LIST})

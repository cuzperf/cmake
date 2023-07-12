cmake_minimum_required(VERSION 3.0)
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)

message(STATUS "build project CALC")
project(CALC)

message(STATUS "source path: ${PROJECT_SOURCE_DIR}")

include_directories(${PROJECT_SOURCE_DIR}/include)
file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c)

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
# add_library(calc_static STATIC ${SRC_LIST})
# add_library(calc_shared SHARED ${SRC_LIST})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# link_libraries(calc_static)
# add_executable(app_static main.c)

link_directories(${PROJECT_SOURCE_DIR}/lib) # must befor add_executable
add_executable(app_shared main.c)
target_link_libraries(app_shared calc_shared)

message(WARNING "cmkae finish")

set(TEMP "${PROJECT_SOURCE_DIR}/main.c")
file(GLOB SRC ${PROJECT_SOURCE_DIR}/src/*.c)
set(SRC ${SRC} ${TEMP})
message(STATUS "message: ${SRC}")
list(REMOVE_ITEM SRC ${PROJECT_SOURCE_DIR}/main.c)
message(STATUS "message(after remove): ${SRC}")

project(TEST)
add_executable(test ${PROJECT_SOURCE_DIR}/test/macro.c)
add_definitions(-DNDEBUG)

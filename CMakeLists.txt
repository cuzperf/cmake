cmake_minimum_required(VERSION 3.0)
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)

project(CALC)

include_directories(${PROJECT_SOURCE_DIR}/include)
file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c)

# set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
# add_library(calc_static STATIC ${SRC_LIST})
# add_library(calc_shared SHARED ${SRC_LIST})

# set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# link_libraries(calc_static)
# add_executable(app_static main.c)

link_directories(${PROJECT_SOURCE_DIR}/lib) # must befor add_executable
add_executable(app_shared main.c)
target_link_libraries(app_shared calc_shared)

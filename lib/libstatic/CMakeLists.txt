cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

project(
    "LibreriaEstatica"
    LANGUAGES C
    VERSION 1.0.0
    DESCRIPTION "CMake C Project Template for Operating Systems II"
)

set(CMAKE_C_STANDARD 17)

include_directories(include)

file(GLOB_RECURSE SOURCES "src/*.c")

add_library(${PROJECT_NAME} STATIC ${SOURCES})

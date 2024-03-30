cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

project(
    "Lab0ProyectInCMake"
    LANGUAGES C
    VERSION 1.1.0
    DESCRIPTION "CMake C Project Template for Operating Systems II"
)

set(CMAKE_C_STANDARD 17)

include_directories(include)

file(GLOB_RECURSE SOURCES "src/*.c")

add_executable(${PROJECT_NAME} ${SOURCES})

#incluímos librerias estáticas y dinámicas
add_subdirectory(lib/libdynamic)
add_subdirectory(lib/libstatic)

target_include_directories(${PROJECT_NAME} PUBLIC lib/libdynamic/include)
target_include_directories(${PROJECT_NAME} PUBLIC lib/libstatic/include)

target_link_libraries(${PROJECT_NAME} LibreriaEstatica LibreriaDinamica)

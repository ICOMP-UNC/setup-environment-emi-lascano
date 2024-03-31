cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

project(
    "Lab0ProyectInCMake"
    LANGUAGES C
    VERSION 1.2.0
    DESCRIPTION "CMake C Project Template for Operating Systems II"
)

#habilitamos los tests
include(CTest)

set(CMAKE_C_STANDARD 17)

include_directories(include)

include(FetchContent)

set(UNITY_GIT_URL "https://github.com/ThrowTheSwitch/Unity.git")

set(FetchContent_QUIET OFF)

FetchContent_Declare(
    Unity
    GIT_REPOSITORY ${UNITY_GIT_URL}
    SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/external/Unity
    UPDATE_COMMAND ""
)

#se ejecuta una vez que los proyectos declarados esten listos para ser usados
FetchContent_MakeAvailable(Unity)

file(GLOB_RECURSE SOURCES "src/*.c")

add_executable(${PROJECT_NAME} ${SOURCES})

#incluímos librerias estáticas y dinámicas
add_subdirectory(lib/libdynamic)
add_subdirectory(lib/libstatic)

target_include_directories(${PROJECT_NAME} PUBLIC lib/libdynamic/include)
target_include_directories(${PROJECT_NAME} PUBLIC lib/libstatic/include)

target_link_libraries(${PROJECT_NAME} LibreriaEstatica LibreriaDinamica)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} --coverage")

if(RUN_TEST EQUAL 1 OR RUN_COVERAGE EQUAL 1)
    add_subdirectory(tests)
endif()
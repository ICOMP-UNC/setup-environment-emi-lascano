cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

#incluye headers de la carpeta principal
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include())

#incluye testsfiles de la carpeta unit
file(GLOB TESTS_FILES ${CMAKE_CURRENT_SOURCE_DIR}/unit/*.c)
file(GLOB SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/../src/logic.c)

target_link_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/external/Unity/src)

#test executable
add_executable(test_${PROJECT_NAME} ${TESTS_FILES} ${SRC_FILES})

#Link with Unity
target_link_libraries(test_${PROJECT_NAME} unity)

add_test(NAME test_${PROJECT_NAME} COMMAND test_${PROJECT_NAME})
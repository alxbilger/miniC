cmake_minimum_required(VERSION 3.10)
project(miniC)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)
set(BUILD_SHARED_LIBS_OLD ${BUILD_SHARED_LIBS})

add_subdirectory(miniClib)
add_subdirectory(miniCapp)

include(CTest)
set(BUILD_SHARED_LIBS OFF)
add_subdirectory(miniCtest)
set(BUILD_SHARED_LIBS ${BUILD_SHARED_LIBS_OLD})

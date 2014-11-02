# CMake minimun version required to compile
cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
enable_testing()

# Prevents cmake from following symbolic links using GLOB
cmake_policy(SET CMP0009 NEW)


# =================================================================
# Project variables
# =================================================================
# Setup these variables and the rest of the CMakeLists.txt won't need more changes.
set(PROJECT_NAME "Blindstore")
set(PROJECT_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")
set(PROJECT_LIB_DIR "${CMAKE_SOURCE_DIR}/lib")

set(DAEMON_EXECUTABLE_NAME "blindstore")
set(DAEMON_SOURCE_DIR "${CMAKE_SOURCE_DIR}/daemon")
set(DAEMON_MAIN_FILE "${DAEMON_SOURCE_DIR}/main.cpp")


# =================================================================
# Project properties
# =================================================================
project("${PROJECT_NAME}")

# Include project paths
include_directories(${CMAKE_SOURCE_DIR})

# Specify build output directories
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Define executable to be created
add_executable(${DAEMON_EXECUTABLE_NAME} ${DAEMON_MAIN_FILE})


# =================================================================
# Subprojects
# =================================================================
add_subdirectory(client)

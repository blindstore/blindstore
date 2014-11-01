# CMake minimun version required to compile
cmake_minimum_required(VERSION 2.6)


# =================================================================
# Project variables
# =================================================================
# Setup these variables and the rest of the CMakeLists.txt won't need more changes.
set(PROJECT_NAME "Blindstore")
set(DAEMON_EXECUTABLE_NAME "blindstore")
set(DAEMON_SOURCE_DIR "${CMAKE_SOURCE_DIR}/daemon")
set(DAEMON_MAIN_FILE "${DAEMON_SOURCE_DIR}/main.cpp")


# =================================================================
# Project properties
# =================================================================
project("${PROJECT_NAME}")

# Specify build output directories
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Define executable to be created
add_executable(${DAEMON_EXECUTABLE_NAME} ${DAEMON_MAIN_FILE})

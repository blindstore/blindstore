set(LIBRARY_NAME "blindstore_client")
set(LIBRARY_HEADER_DIR "${PROJECT_INCLUDE_DIR}/client")

file(
    GLOB_RECURSE
    LIBRARY_SOURCE_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

add_library(
    ${LIBRARY_NAME}
    ${LIBRARY_SOURCE_FILES})

target_include_directories(
    ${LIBRARY_NAME} PUBLIC
    ${LIBRARY_HEADER_DIR})

include_directories(
    "${PROJECT_LIB_DIR}/libshe/include"
    "${PROJECT_LIB_DIR}/libshe/lib/BitArray")

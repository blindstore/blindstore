file(
    GLOB_RECURSE
    LIBRARY_SOURCE_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

add_library(
    bsclient
    ${LIBRARY_SOURCE_FILES})

include_directories(
    "${PROJECT_LIB_DIR}/libshe/include"
    "${PROJECT_LIB_DIR}/libshe/lib/BitArray")

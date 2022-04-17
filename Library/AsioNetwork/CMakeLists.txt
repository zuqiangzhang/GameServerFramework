cmake_minimum_required(VERSION 3.23.1)
project(AsioNetwork)

set(ASIO_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../ThirdLibrary/)
include_directories(${ASIO_DIR})

file(GLOB SOURCES "*.h" "*.cpp")
#add_library(AsioNetwork STATIC ${SOURCES})

add_executable(AsioNetwork ${SOURCES})

#target_include_directories(AsioNetwork PUBLIC ${CMAKE_CURRENT_LIST_DIR})

#target_link_libraries(AsioNetwork)
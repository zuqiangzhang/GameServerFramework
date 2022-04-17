cmake_minimum_required(VERSION 3.23.1)
project(DB)

set(DB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../ThirdLibrary/)
include_directories(${DB_DIR})

file(GLOB SOURCES "*.h" "*.cpp")
#add_library(DB STATIC ${SOURCES})

add_executable(DB ${SOURCES})

TARGET_LINK_LIBRARIES(DB ${CMAKE_CURRENT_SOURCE_DIR}/../../ThirdLibrary/mysql/lib/libmysql.lib)

#target_include_directories(DB PUBLIC ${CMAKE_CURRENT_LIST_DIR})

#target_link_libraries(DB)
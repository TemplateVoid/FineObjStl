cmake_minimum_required(VERSION 3.15)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

include(Settings)

project(FineObjStl)

set_global_variables()

add_subdirectory(lib)

add_executable(exe main.cpp)
target_link_libraries(exe PRIVATE lib)

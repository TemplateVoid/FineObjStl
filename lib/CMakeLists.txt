project(lib)

find_package(FineObjects)
if(NOT FineObj_FOUND)
	message(FATAL_ERROR "FineObjects is not found!")
endif()

add_library(lib SHARED foo.cpp)

target_include_directories(lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(lib PRIVATE FineObjects)

fine_unexport_symbols(lib)

cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 17)

project(Plasmid)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_library(Plasmid SHARED
        dll_main.cpp
        include/api.h
        include/forward_declarations.h
        include/data_types.h
        include/data_exports.h
        include/function_exports.h)

add_subdirectory(external/minhook)

target_link_libraries(Plasmid PRIVATE minhook)
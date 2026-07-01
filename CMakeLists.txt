cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 17)

project(Plasmid)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_subdirectory(external/minhook)


add_library(Plasmid SHARED
        dll_main.cpp
        include/api.h)

target_link_libraries(Plasmid PRIVATE minhook)
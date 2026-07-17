cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 20)

project(Plasmid)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_library(Plasmid SHARED
        dll_main.cpp)

add_subdirectory(external/minhook)

target_link_libraries(Plasmid PRIVATE minhook)

add_custom_command(
        TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE_DIR:${PROJECT_NAME}>/Plasmid.dll
        "C:/Program Files (x86)/Steam/steamapps/common/Primordialis/mods"
        COMMENT "Copying Plasmid.dll to Primordialis mods"
)
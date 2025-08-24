cmake_minimum_required(VERSION 3.26 FATAL_ERROR)

project(pathfinding C)

set(C_STANDARD 23)
set(C_STANDARD_REQUIRED 23)

set(MAIN_FILE ./src/main.c)

add_executable(main ${MAIN_FILE})

find_package(SDL3 CONFIG REQUIRED)

target_link_libraries(main PRIVATE SDL3::SDL3)
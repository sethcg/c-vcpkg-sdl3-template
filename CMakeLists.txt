cmake_minimum_required(VERSION 3.26 FATAL_ERROR)

project(pathfinding CXX)

include(FetchContent)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# FETCH SDL3 FILES FROM GITHUB
message(STATUS "Fetching SDL3...")
FetchContent_Declare(
   SDL3
   GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
   GIT_TAG release-3.2.20
)
FetchContent_MakeAvailable(SDL3)


set(MAIN_FILE ./main.cpp)

add_executable(main ${MAIN_FILE})

# INCLUDE SDL3 LIBRARY
target_link_libraries(main PRIVATE SDL3::SDL3)

# COPY SDL DLL TO DEBUG/RELEASE FOLDER
add_custom_command(TARGET main POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_RUNTIME_DLLS:main> 
        $<TARGET_FILE_DIR:main>
    COMMAND_EXPAND_LISTS
)
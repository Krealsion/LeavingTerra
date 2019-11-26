cmake_minimum_required(VERSION 3.15)
project(LeavingTerra)

set(CMAKE_CXX_STANDARD 14)

include_directories("include")

add_subdirectory(GameEngine)

add_executable(LeavingTerra main.cpp src/MainMenuState.cpp)

target_include_directories(LeavingTerra PUBLIC GameEngine)
target_link_libraries(LeavingTerra GameEngine)
cmake_minimum_required(VERSION 4.2.3)

project(
	OpenGL-Window
	VERSION 1.0
	DESCRIPTION "Create a window"
	LANGUAGES CXX C
)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenGL REQUIRED)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
add_subdirectory(glfw)

add_executable(window main.cpp)

include_directories(include)
target_link_libraries(window glfw OpenGL::GL)

cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)

project(learn)

file(GLOB_RECURSE SRC_FILE src/*.cpp)

add_executable(${PROJECT_NAME} ${SRC_FILE})

target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -g)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

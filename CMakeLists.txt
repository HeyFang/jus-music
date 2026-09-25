cmake_minimum_required(VERSION 3.20)

project(jus-music)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(jusmusic
  src/main.cpp
)

target_compile_options(jusmusic PRIVATE -Wall -Wextra)

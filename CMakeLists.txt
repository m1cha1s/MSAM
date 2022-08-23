cmake_minimum_required(VERSION 3.16)

project(MSAM LANGUAGES C)

add_executable(MSAM 
  src/main.c
)

target_include_directories(MSAM PUBLIC
  src/
)
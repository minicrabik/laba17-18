cmake_minimum_required(VERSION 3.26)
project(laba17 C)

set(CMAKE_C_STANDARD 11)

add_executable(laba17 main.c)

add_executable(str string/string_.c str string/string_.h
        string/task)

target_link_libraries(laba17 str)
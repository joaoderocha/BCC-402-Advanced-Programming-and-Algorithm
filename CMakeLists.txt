cmake_minimum_required(VERSION 3.20)
project(greeter)

set(CMAKE_CXX_STANDARD 17)

add_library(times_two
        times_two.h
        times_two.cpp
        )

add_executable(greeter
        main.cpp
        )
target_link_libraries(greeter PRIVATE times_two)

add_executable(greeter2
        main_2.cpp
        )
target_link_libraries(greeter2 PRIVATE times_two)
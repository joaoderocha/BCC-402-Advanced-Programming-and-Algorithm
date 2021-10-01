cmake_minimum_required(VERSION 3.20)
project(greeter)
set(CMAKE_CXX_STANDARD 17)

option(GREETER_BUILD_TESTS "Build tests" ON)
option(GREETER_BUILD_UNIT_TESTS "Build unit tests" ON)
option(GREETER_BUILD_BENCHMARKS "Build benchmarks" ON)
option(GREETER_BUILD_STANDALONE "Build standalone" ON)

add_subdirectory(sources)

if (GREETER_BUILD_TESTS)
    add_subdirectory(tests)
endif()

if (GREETER_BUILD_STANDALONE)
    add_subdirectory(standalone)
endif()

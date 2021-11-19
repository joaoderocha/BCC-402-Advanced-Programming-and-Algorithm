cmake_minimum_required(VERSION 3.20)
project(metaheuristicbib)
set(CMAKE_CXX_STANDARD 17)

option(METAHEURISTICBIB_BUILD_TESTS "Build tests" OFF)
option(METAHEURISTICBIB_BUILD_UNIT_TESTS "Build unit tests" OFF)
option(METAHEURISTICBIB_BUILD_BENCHMARKS "Build benchmarks" OFF)
option(METAHEURISTICBIB_BUILD_STANDALONE "Build standalone" ON)

add_subdirectory(sources)

#if (METAHEURISTICBIB_BUILD_TESTS)
#    add_subdirectory(tests)
#endif()

if (METAHEURISTICBIB_BUILD_STANDALONE)
    add_subdirectory(standalone)
endif()

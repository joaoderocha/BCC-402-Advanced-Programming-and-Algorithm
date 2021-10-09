find_package(nanobench QUIET)
if (NOT nanobench_FOUND)
    include(FetchContent)
    FetchContent_Declare(
            nanobench
            GIT_REPOSITORY https://github.com/martinus/nanobench
            GIT_TAG v4.3.6
    )
    FetchContent_GetProperties(nanobench)
    if (NOT nanobench_POPULATED)
        FetchContent_Populate(nanobench)
        add_subdirectory(${nanobench_SOURCE_DIR} ${nanobench_BINARY_DIR})
    endif()
endif()

find_package(benchmark QUIET)
if (NOT benchmark_FOUND)
    include(FetchContent)
    FetchContent_Declare(
            benchmark
            GIT_REPOSITORY https://github.com/google/benchmark
            GIT_TAG v1.6.0
    )
    FetchContent_GetProperties(benchmark)
    if (NOT benchmark_POPULATED)
        FetchContent_Populate(benchmark)
        set(BENCHMARK_DOWNLOAD_DEPENDENCIES OFF CACHE BOOL "" FORCE)
        set(BENCHMARK_ENABLE_TESTING OFF CACHE BOOL "" FORCE)
        set(BENCHMARK_ENABLE_INSTALL OFF CACHE BOOL "" FORCE)
        set(BENCHMARK_ENABLE_GTEST_TESTS OFF CACHE BOOL "" FORCE)
        add_subdirectory(${benchmark_SOURCE_DIR} ${benchmark_BINARY_DIR})
    endif()
endif()

find_package(matplotplusplus QUIET)
if (NOT matplotplusplus_FOUND)
    include(FetchContent)
    FetchContent_Declare(
            matplotplusplus
            GIT_REPOSITORY https://github.com/alandefreitas/matplotplusplus
            GIT_TAG v1.1.0
    )
    FetchContent_GetProperties(matplotplusplus)
    if (NOT matplotplusplus_POPULATED)
        FetchContent_Populate(matplotplusplus)
        add_subdirectory(${matplotplusplus_SOURCE_DIR} ${matplotplusplus_BINARY_DIR})
    endif()
endif()

add_executable(bench_greet bench_greet.cpp)
target_link_libraries(bench_greet PRIVATE greeter)
target_link_libraries(bench_greet PRIVATE nanobench)

add_executable(bench_greet2 bench_greet2.cpp)
target_link_libraries(bench_greet2 PRIVATE greeter)
target_link_libraries(bench_greet2 PRIVATE benchmark)

add_executable(plot_greet plot_greet.cpp)
target_link_libraries(plot_greet PRIVATE greeter)
target_link_libraries(plot_greet PRIVATE matplot)

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

add_executable(bench_greet bench_greet.cpp)
target_link_libraries(bench_greet PRIVATE greeter)
target_link_libraries(bench_greet PRIVATE nanobench)

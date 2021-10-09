if (GREETER_BUILD_UNIT_TESTS)
    add_subdirectory(unit_tests)
endif()

string(TOLOWER ${CMAKE_BUILD_TYPE} lc_build_type)
if (lc_build_type STREQUAL "release" AND GREETER_BUILD_BENCHMARKS)
    add_subdirectory(benchmark)
endif()

add_subdirectory(scratch)
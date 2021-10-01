if (GREETER_BUILD_UNIT_TESTS)
    add_subdirectory(unit_tests)
endif()

if (GREETER_BUILD_BENCHMARKS)
    add_subdirectory(benchmark)
endif()
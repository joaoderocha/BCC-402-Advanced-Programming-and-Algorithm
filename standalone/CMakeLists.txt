add_executable(greeter_main
        main.cpp
        ../tests/unit_tests/ut_greet.cpp)
target_link_libraries(greeter_main PRIVATE greeter)

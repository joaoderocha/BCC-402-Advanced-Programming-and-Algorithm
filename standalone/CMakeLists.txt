add_executable(greeter
        main.cpp
        )
target_link_libraries(greeter PRIVATE times_two)

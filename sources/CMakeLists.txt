add_library(times_two
        greeter/times_two.h
        greeter/times_two.cpp
        )
target_include_directories(times_two PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

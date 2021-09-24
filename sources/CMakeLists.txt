add_library(greeter
        greeter/greeter.h
        greeter/greeter.cpp
        )
target_include_directories(greeter PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

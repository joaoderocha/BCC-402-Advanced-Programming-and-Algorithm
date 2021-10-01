find_package(Catch2 QUIET)
if (NOT Catch2_FOUND)
    include(FetchContent)
    FetchContent_Declare(
            Catch2
            GIT_REPOSITORY https://github.com/catchorg/Catch2
            GIT_TAG v2.13.7
    )
    FetchContent_GetProperties(Catch2)
    if (NOT catch2_POPULATED)
        message("catch2_SOURCE_DIR=${catch2_SOURCE_DIR}")
        message("catch2_BINARY_DIR=${catch2_BINARY_DIR}")
        FetchContent_Populate(catch2)
        message("catch2_SOURCE_DIR=${catch2_SOURCE_DIR}")
        message("catch2_BINARY_DIR=${catch2_BINARY_DIR}")
        add_subdirectory(${catch2_SOURCE_DIR} ${catch2_BINARY_DIR})
    endif()
endif()

add_executable(ut_greet ut_greet.cpp)
target_link_libraries(ut_greet PRIVATE greeter Catch2)
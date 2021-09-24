find_package(Catch2 QUIET)
if (NOT Catch2_FOUND)
    include(FetchContent)
    FetchContent_Declare(
            Catch2
            GIT_REPOSITORY https://github.com/catchorg/Catch2
            GIT_TAG v2.13.7
    )
    FetchContent_GetProperties(Catch2)
    if (NOT Catch2_POPULATED)
        FetchContent_Populate(Catch2)
        add_subdirectory(${Catch2_SOURCE_DIR} ${Catch2_BINARY_DIR})
    endif()
endif()

add_executable(ut_greet ut_greet.cpp)
target_link_libraries(ut_greet PRIVATE greeter Catch2)
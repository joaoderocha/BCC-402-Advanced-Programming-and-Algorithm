//#include <greeter/greeter.h>
#include <cassert>
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

TEST_CASE( "Greeting random people" ) {
//    using namespace greeter;
    SECTION("No parameters") {
//        REQUIRE(greet() == "Hello");
    }

    SECTION("Name parameter") {
//        REQUIRE(greet("John") == "Hello, John");
//        REQUIRE(greet("Maria") == "Hello, Maria");
    }
}
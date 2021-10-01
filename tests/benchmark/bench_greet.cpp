#include <chrono>
#include <greeter/greeter.h>
#include <iostream>
#define ANKERL_NANOBENCH_IMPLEMENT
#include <nanobench.h>

int main() {
    ankerl::nanobench::Bench().run("greet", [&] {
        ankerl::nanobench::doNotOptimizeAway(greeter::greet());
    });
    ankerl::nanobench::Bench().run("greet John", [&] {
        ankerl::nanobench::doNotOptimizeAway(greeter::greet("John"));
    });
    return 0;
}
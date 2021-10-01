#include <greeter/greeter.h>
#include <benchmark/benchmark.h>

static void greet(benchmark::State& state) {
    for (auto _ : state) {
        benchmark::DoNotOptimize(greeter::greet());
    }
}

BENCHMARK(greet);

static void greet_person(benchmark::State& state) {
    std::string s;
    for (auto _ : state) {
        state.PauseTiming();
        s.resize(state.range(0));
        state.ResumeTiming();
        benchmark::DoNotOptimize(greeter::greet(s));
    }
}

BENCHMARK(greet_person)->Range(4, 512);

BENCHMARK_MAIN();
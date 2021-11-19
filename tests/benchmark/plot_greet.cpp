#include <cmath>
#include <chrono>

#include <matplot/matplot.h>
//#include <greeter/greeter.h>

int main() {
    using namespace matplot;
    std::vector<size_t> x;
    std::vector<long long> y;
    for (size_t n = 1; n < 11000; n *= 2) {
        long long sum = 0;
        for (size_t i = 0; i < 10000; ++i) {
            std::string str(n, 'x');
            auto start = std::chrono::steady_clock::now();
//            std::string str2 = greeter::greet(str);
            auto end = std::chrono::steady_clock::now();
//            std::cout << "n: " << n << " - " << str2 << std::endl;
            auto d = end - start;
            sum += d.count();
        }
        sum /= 30;
        x.emplace_back(n);
        y.emplace_back(sum);
    }

    plot(x, y, "-o");
    show();

    return 0;
}
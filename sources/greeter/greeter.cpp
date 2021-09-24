#include "greeter.h"

namespace greeter {
    std::string greet() {
        return "Hello";
    }

    std::string greet(const std::string& name) {
        return "Hello, " + name;
    }
}

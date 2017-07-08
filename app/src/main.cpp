#include <iostream>
#include "spdlog/spdlog.h"
#include "test_header.hpp"

int main() {
    auto foo = Foo();
    foo.getFoo();

    return 0;
}

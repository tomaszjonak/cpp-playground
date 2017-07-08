#include "test_header.hpp"
#include <catch.hpp>

namespace Test {

TEST_CASE("42 should be returned", "[test]") {
    auto foo = Foo();
    REQUIRE(foo.getFoo() == 42);
}

}

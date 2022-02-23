#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "1.2/DigitalCounter.cpp"
#include "1.2/DigitalCounter.hpp"

TEST_CASE( "Arguments initialized") {
    DigitalCounter testing1;
    REQUIRE( testing1.Init(0, 2) == true);
    REQUIRE( testing1.Init(100, 10000) == true);
}

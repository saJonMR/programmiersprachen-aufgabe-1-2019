#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

unsigned int gcd(unsigned int a, unsigned int b)
{
    if (b = 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
    return 1;
}

TEST_CASE("describe_gcd", "[gcd]")
{
    REQUIRE(gcd (2 ,4) == 2);
    REQUIRE(gcd (9 ,6) == 3);
    REQUIRE(gcd (3 ,7) == 1);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}

#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int factorial(int a)
{
    int prod = 0;
    while (a >= 0)
    {
        prod += a;
        a = a - 1;
    }
    return prod;
}

TEST_CASE("describe_factorial", "[factorial]")
{
    REQUIRE(factorial (5) == 15);
}


int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}

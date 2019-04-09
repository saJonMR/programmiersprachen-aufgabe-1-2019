#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

float fract(float a)
{
    int vor = a;
    float rest = a - vor;
    return rest;
}

TEST_CASE("describe_fract", "[fract]")
{
    REQUIRE(fract (5.678) == Approx(0.678));
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}

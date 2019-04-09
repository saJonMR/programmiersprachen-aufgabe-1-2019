#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

float fract(float a)
{
    float nachKomma = a;
    int vor = a;
    float ergebnis = nachKomma - vor;
    return ergebnis;
}

TEST_CASE("describe_fract", "[fract]")
{
    REQUIRE(fract (5.678) == 0.678);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}

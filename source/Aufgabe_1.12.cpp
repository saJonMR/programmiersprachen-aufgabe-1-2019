#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

float surface(float r, float h)
{
  float sur = 2 * M_PI * (r + h);
  return sur;
}

float volume(float r, float h)
{
  float vol = M_PI * (r * r) * h;
  return vol;
}

TEST_CASE("describe_volume", "[volume]")
{
    REQUIRE(volume (2, 4) == Approx(50.2655));
}
TEST_CASE("describe_surface", "[surface]")
{
    REQUIRE(surface (2, 2) == Approx(25.1327));
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}

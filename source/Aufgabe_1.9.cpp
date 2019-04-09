#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int checksum(int a)
{
    int sum = 0;
    while (a != 0) {
        sum = sum + a % 10;
        a = a / 10;
    }
    return sum;
}

TEST_CASE("describe_checksum", "[checksum]")
{
    REQUIRE(checksum (119989) == 267333);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}

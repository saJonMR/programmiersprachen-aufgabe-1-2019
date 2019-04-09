#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int sum_multiples()
{
    int sum = 0;

    for (int i = 1; i <= 1000; ++i) {
        if (i % 3 == 0) sum += i;
        else if (i % 5 == 0) sum += i;
    }
    return sum;
}

TEST_CASE("describe_sum_multiples", "[sum_multiples]")
{
    REQUIRE(sum_multiples () == 234168);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}

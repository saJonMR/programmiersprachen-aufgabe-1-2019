#define CATCH_CONFIG_RUNNER
#include <catch.hpp>

int is_prime(int a)
{
    bool prime = true;
    
    for (int i = 2; i <= a / 2; ++i)
    {
        if (a % i == 0)
        {
            prime = false;
            break;
        }
    }
    return prime;
}

TEST_CASE("describe_is_prime", "[is_prime]")
{
    REQUIRE(is_prime (7) == true);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}

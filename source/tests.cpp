#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

unsigned int gcd(unsigned int a, unsigned int b)
{
    if (b == 0) {
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
    REQUIRE(checksum (119989) == 37);
}

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

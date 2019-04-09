#include <iostream>
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

int main()
{
    std::cout << factorial(5) << "\n";
}
#include <iostream>
#include <cmath>

int factorial(int a)
{
    int prod = 0;
    for (int i = 0; i <= a; i++)
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
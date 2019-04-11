#include <iostream>

/* double mile_to_kilometer(double)
{
    std::cout << "Enter miles to convert to kilometers: " << "\n";
    std::cin >> double miles;

    double kilometers = miles / 0.62137;

    std::cout << miles << " miles are equivalent to: " << kilometers << "\n";
} */

int main()
{
    double miles;
    std::cout << "Enter miles to convert to kilometers: " << "\n";
    std::cin >> miles;
    double kilometers = miles / 0.62137;
    std::cout << miles << " miles are equivalent to " << kilometers << " kilometers." << "\n";
}
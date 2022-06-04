// Write a program to find the Greatest Common Divisor (GCD) of 2 numbers

#include <iostream>

int gcd(int a, int b)
{
    // Base Case
    if (a % b == 0)
    {
        return b;
    }
    // General Case
    return gcd(b, a % b);
}

int main()
{
    int num, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num >> num2;
    std::cout << gcd(num, num2);
}
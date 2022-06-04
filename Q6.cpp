// Write a program to convert a decimal number to binary

#include <iostream>
#include <math.h>

int binary(int num, int power = 0)
{
    // Base Case
    if (num == 0)
        return 0;
    // General Case
    return num % 2 * std::pow(10, power) + binary(num / 2, power + 1);
}

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << binary(num);
}
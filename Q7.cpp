// Write a program to find the Least Common Multiple (LCM) of 2 numbers

#include <iostream>
#include <math.h>

int lcm(int a, int b, int firstMulti = 1, int secondMulti = 1)
{
    // Base Case
    if (a * firstMulti == b * secondMulti)
    {
        return b * secondMulti;
    }
    // General Case
    if (a * firstMulti < b * secondMulti)
        return lcm(a, b, firstMulti + 1, secondMulti);
    else
        return lcm(a, b, firstMulti, secondMulti + 1);
}

int main()
{
    int num, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num >> num2;
    std::cout << lcm(num, num2);
}
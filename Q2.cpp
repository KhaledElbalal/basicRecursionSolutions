// Write a program to calculate the sum of numbers from 1 up to N.

#include <iostream>

int sum(int number)
{
    // Base Case
    if (number == 1)
    {
        return 1;
    }
    // General Case
    return number + sum(number - 1);
}

int main()
{
    int num;
    std::cout << "Enter a number greater than 1: ";
    std::cin >> num;
    std::cout << sum(num);
}
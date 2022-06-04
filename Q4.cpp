// Write a program to find the sum of digits of a number

#include <iostream>

int sumDigits(int number)
{
    // Base Case
    if (number == 0)
    {
        return 0;
    }
    // General Case
    return number % 10 + sumDigits(number / 10);
}

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << sumDigits(num);
}
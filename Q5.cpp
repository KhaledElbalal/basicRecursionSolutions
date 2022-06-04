// Write a program to find the number of digits of a number

#include <iostream>

int numDigits(int number)
{
    // Base Case
    if (number == 0)
        return 0;
    // General Case
    return 1 + numDigits(number / 10);
}

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << numDigits(num);
}
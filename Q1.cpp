// Write a program to calculate factorial of a given number.

#include <iostream>


int fact(int number)
{
    // Base Case
    if (number == 1 || number == 0)
    {
        return 1;
    }
    // General Case
    return number * fact(number - 1);
}

int main()
{
    int num;
    std::cout << "Enter the positive integer that you want the factorial for: ";
    std::cin >> num; 
    std::cout << fact(num);
}
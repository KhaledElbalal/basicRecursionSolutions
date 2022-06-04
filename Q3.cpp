// Write a program to print first N terms of fibonacci sequence
// fibonacci sequence is a recursive sequence, each term N is expressed as the sum of the previous two terms
// The first two terms are both 1

#include <iostream>


int fibonacci(int number, int nextTerm = 1, int currentTerm = 1)
{
    // Base Case
    if (number == 1)
    {
        return currentTerm;
    }
    // General Case
    // Print current term
    std::cout << currentTerm << " ";
    // Calculate next term
    int temp = currentTerm;
    currentTerm = nextTerm;
    nextTerm = currentTerm + temp;
    // Call the function
    return fibonacci(number - 1, nextTerm, currentTerm);
}

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << fibonacci(num);
}
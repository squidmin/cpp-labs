#include <iostream>
#include "Example01.h"

void Example01::run()
{
    int firstNumber;
    double secondNumber;
    std::cout << "Enter a number (must be an integer): ";
    std::cin >> firstNumber;
    std::cout << "Enter another number (can include a decimal value): ";
    std::cin >> secondNumber;
    std::cout << "The first number is " << firstNumber << std::endl;
    std::cout << "The second number is " << secondNumber << std::endl;
    std::cout << "firstNumber * secondNumber = " << firstNumber * secondNumber << std::endl;
}

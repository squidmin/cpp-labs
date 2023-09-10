#include <iostream>
#include "BinaryArithmeticOperators.h"

int main()
{
    int a = 10, b = 20;

    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "a + b = " << add(a, b) << std::endl;       // Addition
    std::cout << "a - b = " << subtract(a, b) << std::endl;  // Subtraction
    std::cout << "a * b = " << multiply(a, b) << std::endl;  // Multiplication
    std::cout << "a / b = " << divide(a, b) << std::endl;    // Division
    std::cout << "a % b = " << modulus(a, b) << std::endl;   // Modulus

    return 0;
}

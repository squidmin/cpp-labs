#include "BinaryArithmeticOperators.h"

// Demonstrates using arithmetic operations.
// Note that a, b, c, and so on are not very descriptive variable names.
// They are used here to simply hold values.
void BinaryArithmeticOperators::run()
{
    int a = 2, b = 4, c = 10, intResult;
    double d = 2.0, e = 4.4, f = 12.8, doubleResult;
    float g = 2.0f, h = 4.4f, i = 12.8f, floatResult;
    intResult = a + b;
    std::cout << intResult << std::endl;
    intResult = a * b;
    std::cout << intResult << std::endl;
    intResult = c / a;
    std::cout << intResult << std::endl;
}

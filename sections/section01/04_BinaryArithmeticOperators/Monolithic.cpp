#include <iostream>

int main() {
    int a = 2, b = 4, c = 10, intResult;
    double d = 2.0, e = 4.4, f = 12.8, doubleResult;
    float g = 2.0f, h = 4.4f, i = 12.8f, floatResult;
    intResult = a + b;
    std::cout << intResult << std::endl;
    intResult = a * b;
    std::cout << intResult << std::endl;
    intResult = c / a;
    std::cout << intResult << std::endl;
    intResult = c / b;
    std::cout << intResult << std::endl;
    floatResult = g / a;
    std::cout << floatResult << std::endl;
    floatResult = h / g;
    std::cout << floatResult << std::endl;
    doubleResult = a * d;
    std::cout << doubleResult << std::endl;
    doubleResult = f / a;
    std::cout << doubleResult << std::endl;
    doubleResult = e + h;
    std::cout << doubleResult << std::endl;
    return 0;
}

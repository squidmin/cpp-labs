#include <iostream>
#include "OtherUnaryOperators.h"

int run()
{
    int x = 5;
    int y = 775;
    std::cout << "The value of x is " << x << " and the value of y is " << y << std::endl;
    std::cout << "The address of x is " << &x << " and the address of y is " << &y << std::endl;

    std::cout << "Running 'x = +(-10);'..." << std::endl;
    x = +(-10);
    std::cout << "The value of x is " << x << std::endl;
    return 0;
}

#include <iostream>
#include "DoWhileLoops.h"

void DoWhileLoops::promptUntilNegative() {
    int number;

    do {
        std::cout << "Enter a number (negative number to stop): ";
        std::cin >> number;
    } while (number >= 0);

    std::cout << "You entered a negative number. Exiting..." << std::endl;
}
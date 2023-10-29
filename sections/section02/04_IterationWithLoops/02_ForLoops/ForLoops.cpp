#include <iostream>
#include "ForLoops.h"

void ForLoops::printNumbers(int limit) {
    std::cout << "Numbers from 1 to " << limit << " are:" << std::endl;

    for (int number = 1; number <= limit; number++) {
        std::cout << number << " ";
    }

    std::cout << std::endl; // Print a new line for clarity.
}

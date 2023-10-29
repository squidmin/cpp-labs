#include <iostream>
#include "WhileLoops.h"

void WhileLoops::printNumbers(int limit) {
    int number = 1; // Start from 1
    std::cout << "Numbers from 1 to " << limit << " are:" << std::endl;
    while (number <= limit) {
        std::cout << number << " ";
        number++; // Increment the number
    }
    std::cout << std::endl; // Print a new line for clarity
}

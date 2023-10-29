#include <iostream>
#include "Counters.h"

void Counters::countEvenNumbers(int limit) {
    int counter = 0; // Counter variable initialized to zero.

    for (int number = 1; number <= limit; ++number) {
        if (number % 2 == 0) { // Check if the number is even.
            counter++;
        }
    }

    std::cout << "Number of even numbers from 1 to " << limit << ": " << counter << std::endl;
}

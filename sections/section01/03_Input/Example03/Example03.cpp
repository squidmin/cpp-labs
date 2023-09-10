#include <iostream>
#include <string>
#include "Example03.h"

void Example03::run()
{
    // Variables to hold user input:
    std::string stringInput;
    int integerInput;

    // Prompting user for input:
    std::cout << "Enter a string: ";
    std::getline(std::cin, stringInput);  // Using getline to capture full string (with spaces).

    // Prompting user for second input:
    std::cout << "Second input: ";
    std::cin >> integerInput;  // Directly using the extraction operator for integer input.

    // Output the gathered info.
    std::cout << "First input: " << stringInput << std::endl;
    std::cout << "Second input: " << integerInput << std::endl;
}

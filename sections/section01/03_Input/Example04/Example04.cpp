#include <sstream>
#include <iostream>
#include "Example04.h"

std::optional<int> Example04::verify_is_integer(const std::string& input_str) {
    std::istringstream stream(input_str);
    int int_val;
    std::string temp;
    if (stream >> int_val && !(stream >> temp)) {  // Ensure entire input is an integer
        return int_val;
    } else {
        return std::nullopt;
    }
}

void Example04::run() {
    std::string string_value;
    std::string integer_value;

    std::cout << "Enter a string value: ";
    std::getline(std::cin, string_value);

    std::cout << "Enter an integer value: ";
    std::getline(std::cin, integer_value);

    auto int_val = verify_is_integer(integer_value);

    if (int_val) {
        std::cout << "String value: " << string_value << std::endl;
        std::cout << "Integer value:  " << *int_val << std::endl;
    } else {
        std::cout << "The value entered is not an integer. Please enter a correct integer value." << std::endl;
    }
}

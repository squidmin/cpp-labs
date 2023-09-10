# Input: Handling User Input with `std::optional` in C++17

This guide presents a simple C++17 example that demonstrates how to take console input for a `string` value and an `int` value.
The key feature is the use of `std::optional` to handle potentially invalid `int` input.

## Prerequisites

Ensure that you have a C++17-compatible compiler, as `std::optional` is a C++17 feature.

---

### Source code

#### `Example04.h`

```cpp
#pragma once

#include <string>
#include <optional>

class Example04 {
public:
    std::optional<int> verify_is_integer(const std::string& input);
    void run();
};
```

#### `Example04.cpp`

```cpp
#include <sstream>
#include <iostream>
#include "Example04.h"

std::optional<int> Example04::verify_is_integer(const std::string& input_str) {
    std::istringstream stream(input_str);
    int age;
    std::string temp;
    if (stream >> age && !(stream >> temp)) {  // Ensure entire input is an integer
        return age;
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
```

#### `main.cpp`

```cpp
#include "Example04.h"

int main()
{
    Example04 instance;
    instance.run();
    return 0;
}
```

---

## Explanation

The example includes three main components:

A header file (`Example04.h`) that declares the function `verify_is_integer` which returns an `std::optional<int>`.

An implementation file (`Example04.cpp`) that defines the `verify_is_integer` function.
This function tries to parse the entered `string` value and returns an `std::optional<int>`.
If the parsing is successful, the `optional` contains the `string` value.
Otherwise, it holds `std::nullopt`.

A `main.cpp` file that contains the main program.
It prompts the user for their two `string` values, and then uses the `verify_is_integer` function to verify that one of the `string` values is a integer.

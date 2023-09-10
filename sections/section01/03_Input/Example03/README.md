# Input: Example 3

This code first prompts the user to enter a `string` value, capturing the input with std::getline() to account for string containing spaces.

Then, it prompts the user to input an `int` value using the `>>` extraction operator.

Finally, it outputs the gathered information back to the user.

#### `Example03.h`

```cpp
#pragma once

class Example03 {
public:
    void run();
};
```

#### `Example03.cpp`

```cpp
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
```

#### `main.cpp`

```cpp
#include "Example03.h"

int main()
{
    Example03 instance;
    instance.run();
    return 0;
}
```

<img src="./img/gif/build_and_run.gif" alt="" width="px">

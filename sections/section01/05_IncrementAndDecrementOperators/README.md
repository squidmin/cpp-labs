# Increment (`++`) and Decrement (`--`) operators

This guide provides an overview and description of a simple C++ program that demonstrates the different ways to increment or decrement a numeric value (`int`, `float`, `double`, etc.).

This is the build configuration file used by CMake to generate build files for the project:

#### `CMakeLists.txt`

```cmake
add_executable(IncrementAndDecrementOperators main.cpp IncrementAndDecrementOperators.cpp)
```

It indicates that an executable named `IncrementAndDecrementOperators` should be built using the source files `main.cpp` and `IncrementAndDecrementOperators.cpp`.

---

## Source code

#### `IncrementAndDecrementOperators.h`

```cpp
#ifndef INCREMENT_AND_DECREMENT_OPERATORS_H
#define INCREMENT_AND_DECREMENT_OPERATORS_H

int run();

#endif // INCREMENT_AND_DECREMENT_OPERATORS_H
```

#### `IncrementAndDecrementOperators.cpp`

```cpp
#include <iostream>
#include "IncrementAndDecrementOperators.h"

int run()
{
    int count = 0;
    std::cout << "count = " << count << std::endl;
    // Various methods to increment the variable 'count'
    std::cout << "Running 'count = count + 1;'..." << std::endl;
    count = count + 1;
    std::cout << "count = " << count << std::endl;

    std::cout << "Running 'count += 1;'..." << std::endl;
    count += 1;
    std::cout << "count = " << count << std::endl;

    std::cout << "Running '++count;'..." << std::endl;
    ++count;
    std::cout << "count = " << count << std::endl;

    std::cout << "Running 'count++;'..." << std::endl;
    count++;
    std::cout << "count = " << count << std::endl;

    return 0;
}
```

#### `main.cpp`

This is the main driver program:

```cpp
#include <iostream>
#include "IncrementAndDecrementOperators.h"

int main()
{
    return run();
}
```

It simply calls the `run()` function from the `IncrementAndDecrementOperators.cpp` file and is the starting point of the application.

---

## Run the example



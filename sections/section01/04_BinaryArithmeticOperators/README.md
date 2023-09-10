# Binary arithmetic operators

In C++, arithmetic operators are used to perform mathematical operations on values and variables.
This guide will give you an understanding of the binary arithmetic operators available in C++ and how to use them effectively.

## Overview of Binary Arithmetic Operators

Binary arithmetic operators are those that require two operands. Here are the basic binary arithmetic operators in C++:

- `+` : Addition
- `-` : Subtraction
- `*` : Multiplication
- `/` : Division
- `%` : Modulus (remainder)

---

## Example code

Below is a simple C++ program that demonstrates the use of binary arithmetic operators:

#### `main.cpp`

```cpp
#include <iostream>

int main() {
    int a = 2, b = 4, c = 10, intResult;
    double d = 2.0, e = 4.4, f = 12.8, doubleResult;
    float g = 2.0f, h = 4.4f, i = 12.8f, floatResult;
    intResult = a + b;
    std::cout << intResult << std::endl;
    intResult = a * b;
    std::cout << intResult << std::endl;
    intResult = c / a;
    std::cout << intResult << std::endl;
}
```

---

## Run the executable

<img src="./img/gif/run_monolithic.gif" alt="Build and run the 'Binary Arithmetic Operators' example." width="800px">

---

## Refactoring for modularity

This refactored example has separated the arithmetic operations into individual functions, which are declared in the `ArithmeticOperations.h` header file and defined in the `ArithmeticOperations.cpp` source file.

The `main.cpp` file demonstrates the usage of these functions.

>Note: In the implementation of the divide and modulus functions, division by zero is handled by returning `0` for simplicity. In a more comprehensive application, you'd likely want more robust error handling.

This refactored approach promotes code modularity and makes the operations reusable across different parts of the application or even different applications.

### Source code

#### `BinaryArithmeticOperators.h`

```cpp
#ifndef ARITHMETIC_OPERATIONS_H
#define ARITHMETIC_OPERATIONS_H

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int modulus(int a, int b);

#endif // ARITHMETIC_OPERATIONS_H
```

#### `BinaryArithmeticOperators.cpp`

```cpp
#include "BinaryArithmeticOperators.h"

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) return a / b;
    // Handling division by zero (for simplicity, returning 0)
    return 0;
}

int modulus(int a, int b) {
    if (b != 0) return a % b;
    // Handling modulus by zero (for simplicity, returning 0)
    return 0;
}
```

#### `main.cpp`

```cpp
#include <iostream>
#include "BinaryArithmeticOperators.h"

int main() {
    int a = 10, b = 20;

    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "a + b = " << add(a, b) << std::endl;       // Addition
    std::cout << "a - b = " << subtract(a, b) << std::endl;  // Subtraction
    std::cout << "a * b = " << multiply(a, b) << std::endl;  // Multiplication
    std::cout << "a / b = " << divide(a, b) << std::endl;    // Division
    std::cout << "a % b = " << modulus(a, b) << std::endl;   // Modulus

    return 0;
}
```

## Run the executable

<img src="./img/gif/run_modular.gif" alt="Run the example." width="800px">

---

## Explanation

In the example above:

- **Addition**: `a + b` adds the value of `a` and `b`.
- **Subtraction**: `a - b` subtracts the value of `b` from `a`.
- **Multiplication**: `a * b` multiplies the values of `a` and `b`.
- **Division**: `a / b` divides the value of `a` by `b`. Note that since both `a` and `b` are integers, this will perform integer division. If `a` or `b` were floating-point numbers, it would perform floating-point division.
- **Modulus**: `a % b` provides the remainder when `a` is divided by `b`. This operator is particularly useful for determining if a number is even or odd.

---

## Points to Remember

Ensure the divisor is not zero when using the division (`/`) or modulus (`%`) operators.
Dividing by zero leads to undefined behavior.

Remember that dividing integers will not yield a floating-point result.
If you need a fractional result, one or both of the operands must be a floating-point number.

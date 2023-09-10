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

#### `BinaryArithmeticOperators.h`

```cpp
#pragma once

#include <iostream>

class BinaryArithmeticOperators {
public:
    void run();
};
```

#### `BinaryArithmeticOperators.cpp`

```cpp
#include "BinaryArithmeticOperators.h"

void BinaryArithmeticOperators::run()
{
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

#### `main.cpp`

```cpp
#include "BinaryArithmeticOperators.h"

int main() {
    BinaryArithmeticOperators instance;
    instance.run();
    return 0;
}
```

---

## Run the executable

<img src="./img/gif/build_and_run.gif" alt="Build and run the 'Binary Arithmetic Operators' example." width="800px">

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

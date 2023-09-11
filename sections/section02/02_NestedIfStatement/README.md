# Nested `if` statements in C++17

In programming, there are often scenarios where we need to check multiple conditions, some dependent on the outcome of others.
In C++, one way to achieve this is by using nested if statements.
This document explains the concept and usage of nested if statements in C++17 with examples.

### What is a nested `if` statement?

A nested `if` statement is an `if` or `if-else` statement inside another `if` or `if-else` statement.
By nesting these statements, you can test multiple conditions in a hierarchical or sequential manner.

---

## Basic Syntax

```cpp
if (condition1)
{
    // code to be executed if condition1 is true
    if (condition2)
    {
        // code to be executed if condition1 and condition2 are true
    }
}
```

---

## Nested `if-else`

`if-else` statements can also be nested:

```cpp
if (condition1)
{
    // code if condition1 is true
}
else if (condition2)
{
    if (condition3)
    {
        // code if condition2 and condition3 are true
    }
}
else
{
    // code if none of the conditions are true
}
```

---

## Source code

#### `NestedIfStatement.h`

```cpp
#pragma once

class NestedIfStatement {
public:
    NestedIfStatement(int credits, int tasksCompleted);

    bool hasHighCredits() const;
    bool hasSufficientProgress() const;
    void checkEligibility() const;

private:
    int credits;
    int tasksCompleted;
};
```

#### `NestedIfStatement.cpp`

```cpp
#include "NestedIfStatement.h"
#include <iostream>

NestedIfStatement::NestedIfStatement(int credits, int tasksCompleted)
    : credits(credits), tasksCompleted(tasksCompleted) {}

bool NestedIfStatement::hasHighCredits() const {
    return credits > 90;
}

bool NestedIfStatement::hasSufficientProgress() const {
    return tasksCompleted >= 10;
}

void NestedIfStatement::checkEligibility() const {
    if (hasHighCredits()) {
        if (hasSufficientProgress()) {
            std::cout << "The player is eligible for advancement." << std::endl;
        } else {
            std::cout << "The player is not eligible due to insufficient progress." << std::endl;
        }
    } else {
        std::cout << "The player is not eligible due to low credits." << std::endl;
    }
}
```

In this example, the outer `if` statement checks the grade, and the inner `if` statement checks the number of activities.

#### `main.cpp`

```cpp
#include "NestedIfStatement.h"

int main() {
    NestedIfStatement player_1(95, 12);
    player_1.checkEligibility();

    NestedIfStatement player_2(85, 15);
    player_2.checkEligibility();

    return 0;
}
```

---

## Best Practices

1. **Indentation**: Always use consistent indentation. This helps in visually identifying blocks of code corresponding to each `if` or `else` condition.

2. **Braces** `{}`: Even if an `if` or `else` block contains a single statement, it's good practice to use braces. This makes the code more readable and reduces the risk of errors.

3. **Comments**: Use comments to explain the purpose of each nested `if` statement, especially if the logic is complex.

4. **Limit Nesting**: Overly nested `if` statements can make the code hard to read and maintain. If you find yourself deeply nesting, consider using logical operators (like `&&` and `||`) or refactoring the code.

---

## Conclusion

Nested `if` statements allow you to test multiple conditions in a structured manner.
By understanding and following the principles and best practices outlined above, you can write clean and efficient conditional logic in your C++ programs.

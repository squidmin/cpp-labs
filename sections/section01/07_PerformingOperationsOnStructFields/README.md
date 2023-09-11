# Performing operations on structs

In this example, we demonstrate how to define a simple struct and perform operations on its fields.
The project is organized into several files, each with its specific purpose.

---

## Source code

#### `CMakeLists.txt`

```cmake
add_executable(PerformingOperationsOnStructFields main.cpp PerformingOperationsOnStructFields.cpp)
```

#### `ExampleStruct.h`

The `struct` has three fields (`id`, `name`, and `value`) and a constructor for initializing them.

```cpp
#pragma once
#include <string>

struct ExampleStruct {
    int id;                    // An integer field for an identifier
    std::string name;          // A string field for a name
    double value;              // A double field for some value

    // Constructor to initialize the fields
    ExampleStruct(int i, const std::string& n, double v) 
        : id(i), name(n), value(v) {}
};
```

#### `PerformingOperationsOnStructFields.h`

The header file for the function that will perform operations on the `struct`:

```cpp
#include <iostream>
#include "ExampleStruct.h"

int run();
```

#### `PerformingOperationsOnStructFields.cpp`

This source file implements the `run()` function, showcasing the creation of a `struct` instance and updating its fields:

```cpp
#include "PerformingOperationsOnStructFields.h"

int run()
{
    ExampleStruct example(1, "SampleName", 42.0);
    std::cout << "ID: " << example.id << ", Name: " << example.name << ", Value: " << example.value << std::endl;
    std::cout << "Updating struct value..." << std::endl;
    ++example.value;
    std::cout << "Here's the updated struct..." << std::endl;
    std::cout << "ID: " << example.id << ", Name: " << example.name << ", Value: " << example.value << std::endl;
    return 0;
}
```

#### `main.cpp`

The main driver program:

```cpp
#include <iostream>
#include "PerformingOperationsOnStructFields.h"

int main() {
    return run();
}
```

It simply invokes the `run()` function, which in turn performs operations on the `ExampleStruct`.

---

## Run the example

<img src="./img/gif/../performing_operations_on_struct_fields-build_and_run.gif" alt="Running the example source code." width="900px">

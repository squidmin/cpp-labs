# `HelloWorld`

The "Hello, World!" program is often used as a simple introduction to a programming language. It's a basic example to demonstrate the syntax and structure of a language. In this tutorial, we'll walk you through how to write, compile, and run a "Hello, World!" program in C++ using CMake v3.10 and C++ v17.

## Prerequisites

1. A compiler supporting C++17.
2. CMake v3.10 or higher.

---

## Step-by-step Guide

### 1. Create the source files

   `HelloWorld.h`

   ```cpp
   #pragma once

   class HelloWorld {
   public:
      void print();
   };
   ```

   `HelloWorld.cpp`

   ```cpp
   #include <iostream>
   #include "HelloWorld.h"

   void HelloWorld::print() {
       std::cout << "Hello, World!" << std::endl;
   }
   ```

   `main.cpp`

   ```cpp
   #include "HelloWorld.h"

   int main() {
       HelloWorld hello;
       hello.print();
       return 0;
   }
   ```

### 2. Create the CMake configuration

#### `examples/chapterXX/CMakeLists.txt`

```cmake
add_subdirectory(Section01)
add_subdirectory(Section02)
# Add other subdirectories at this level as needed.
```

e.g.,

#### `examples/chapter01/CMakeLists.txt`

```cmake
add_subdirectory(HelloWorld)
add_subdirectory(NextSection)
add_subdirectory(YetAnotherSection)
```

Add a `CMakeLists.txt` for specific sections:

#### `examples/chapterXX/SectionName/CMakeLists.txt`

```cmake
add_executable(SectionName main.cpp SectionName.cpp)
```

e.g.,

#### `examples/chapter01/HelloWorld/CMakeLists.txt`

```cmake
add_executable(HelloWorld main.cpp HelloWorld.cpp)
```

### 3. Build and run

To build and run the project, use the following commands:

```shell
mkdir build
cd build
cmake ..
make
./SectionName
```

Replace `SectionName` with the actual section name, e.g.:

```shell
mkdir build
...
./HelloWorld
```

After running the executable, you should see text output:

```
Hello, World!
```

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

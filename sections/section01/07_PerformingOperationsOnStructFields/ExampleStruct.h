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

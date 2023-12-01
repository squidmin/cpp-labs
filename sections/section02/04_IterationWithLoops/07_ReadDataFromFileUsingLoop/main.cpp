// This program uses a loop to read and display all the numbers in a
// file. The ifstream eof member function is used to control the loop.

#include <iostream>
#include <fstream>
#include <cstring>
#include <cerrno>
#include <filesystem> // For std::filesystem

int main()
{
    std::cout << "Current working directory: " << std::filesystem::current_path() << std::endl;

    int number;
    std::ifstream inputFile("numbers.txt");  // Open the file

    if (!inputFile)  // Test for errors in opening the file
    {
        std::cout << "Error opening file.\n";
        return 1;  // Return a non-zero value to indicate failure
    }

    while (inputFile >> number)  // While read was good
    {
        std::cout << number << "   ";  // Display the number
    }

    if (!inputFile.eof())  // Check if reading stopped due to an error
    {
        std::cout << "Error reading the file.\n";
        return 1;
    }

    std::cout << std::endl;
    inputFile.close();  // Close the file
    return 0;  // Indicate successful completion
}

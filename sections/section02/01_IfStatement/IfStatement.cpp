#include <iostream>

int run() {
    int num_1, num_2;
    std::cout << "Enter a number: ";
    std::cin >> num_1;
    std::cout << "Enter another number: ";
    std::cin >> num_2;

    int result = -1;
    if (num_1 < 10)
    {
        ++result;
    }
    else
    {
        --result;
    }
    std::cout << "Result is: " << result << std::endl;
    return 0;
}

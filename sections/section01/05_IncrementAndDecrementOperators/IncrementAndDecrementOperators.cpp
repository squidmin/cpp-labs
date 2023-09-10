#include <iostream>
#include "IncrementAndDecrementOperators.h"

int run()
{
    int count = 0;
    std::cout << "count = " << count << std::endl;
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

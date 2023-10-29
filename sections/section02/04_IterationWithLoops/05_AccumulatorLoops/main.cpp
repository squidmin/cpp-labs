#include <iostream>
#include "AccumulatorLoops.h"

int main() {
    AccumulatorLoops demo;
    int limit = 10;
    int sum = demo.computeSum(limit);
    std::cout << "The sum of numbers from 1 to " << limit << " is " << sum << std::endl;
    return 0;
}

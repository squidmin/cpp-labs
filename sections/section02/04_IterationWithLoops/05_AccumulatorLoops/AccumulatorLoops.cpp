#include "AccumulatorLoops.h"

int AccumulatorLoops::computeSum(int limit) {
    int accumulator = 0; // Accumulator variable initialized to zero.

    for (int number = 1; number <= limit; ++number) {
        accumulator += number; // Add the current number to the accumulator.
    }

    return accumulator;
}

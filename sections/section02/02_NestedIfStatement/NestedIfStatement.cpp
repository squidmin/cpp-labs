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

#pragma once

class NestedIfStatement {
public:
    NestedIfStatement(int credits, int tasksCompleted);

    bool hasHighCredits() const;
    bool hasSufficientProgress() const;
    void checkEligibility() const;

private:
    int credits;
    int tasksCompleted;
};

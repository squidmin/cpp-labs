#include <iostream>
#include "SwitchStatement.h"

int main()
{
    int dayNumber;
    std::cout << "Enter a number (1-7): ";
    std::cin >> dayNumber;

    SwitchStatement::printDay(dayNumber);

    return 0;
}

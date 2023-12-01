#include <iostream>

int main()
{
    int game = 1,   // Game counter
        points,     // Holds number of points for a specific game
        total = 0;  // Accumulates total points for all games

    // Read in the points for game 1
    std::cout << "Enter the number of points your team has earned\n";
    std::cout << "so far this session. THen enter -1 when finished.\n\n";
    std::cout << "Enter the points for game " << game << ": ";
    std::cin  >> points;

    // Loop as long as the end sentinel has not yet been entered
    while (points != -1)
    {   // Add point just read in to the accumulator
        total += points;

        // Enter the points for the next game
        std::cout << "Enter the points for game " << ++game << ": ";
        std::cin  >> points;
    }
    // Display the total points
    std::cout << "\nThe total points are " << total << std::endl;
    return 0;
}

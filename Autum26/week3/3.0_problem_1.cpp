#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

int main()
{
    int knight_x, knight_y, pos_x, pos_y, diff_x, diff_y;

    // Seed the random number generator
    std::srand(std::time(NULL));

    // get knight position
    knight_x = std::rand() % 6 + 2;
    knight_y = std::rand() % 6 + 2;
    int tries = 0;

    // // check for out of range
    // while ((knight_x < 1) || (knight_x > 8) || (knight_y < 1) || (knight_y > 8))
    // {
    //     std::cout << "This is an invalid location, try again:" << std::endl;
    //     std::cin >> knight_x >> knight_y;
    // }

    // get position inputs
    
    bool valid = false;
    bool end_game = false;

    while(!end_game){
    // test position logic
    std::cout << "The knight is at: (" << knight_x << "," << knight_y << ") - where would you like to move next?" << std::endl;
    std::cin >> pos_x >> pos_y;
    valid = false;

    while (!valid)
    {
        // take magnitude of difference in position
        diff_x = std::abs(pos_x - knight_x);
        diff_y = std::abs(pos_y - knight_y);
        if ((pos_x < 1) || (pos_x > 8) || (pos_y < 1) || (pos_y > 8))
        {
            std::cout << "This is out of range." << std::endl;
            std::cin >> pos_x >> pos_y;
        }
        else if ((diff_x == 2) && (diff_y == 1))
        {
            std::cout << "This is a valid move" << std::endl;
            valid = true;
            knight_x = pos_x;
            knight_y = pos_y;
            tries++;
        }
        else if ((diff_y == 2) && (diff_x == 1))
        {
            std::cout << "This is a valid move" << std::endl;
            valid = true;
            knight_x = pos_x;
            knight_y = pos_y;
            tries++;
        }
        else
        {
            std::cout << "This is not a valid move try again:" << std::endl;
            std::cin >> pos_x >> pos_y;
        }
    }
    if((knight_x ==1) && (knight_y == 1) || (knight_x == 8) && (knight_y == 8) || (knight_x == 1) && (knight_y == 8) || (knight_x == 8) && (knight_y ==1) || (tries == 5)){
        end_game = true;
    }
    }
    if (tries < 5){
        std::cout << "Congrats you escaped" << std::endl;
    }
    else
    {
        std::cout << "Game Over: Trapped forever" << std::endl;
    }
}
#include <iostream>
#include <cmath>

int main(){
    int knight_x, knight_y, pos_x, pos_y, diff_x, diff_y;

// get knight inputs
    std::cout << "please enter the x and y positions of the knight:" << std::endl;
    std::cin >> knight_x >> knight_y;
    // check for out of range
    while ((knight_x < 1) || (knight_x > 8) || (knight_y < 1) || (knight_y > 8)){ 
        std::cout << "This is an invalid location, try again:" << std::endl;
        std::cin >> knight_x >> knight_y;
    }

// get position inputs
    std::cout<< "please enter a destintation for the knight:" << std::endl;
    std::cin >> pos_x >> pos_y;
    bool valid = false;

// test position logic
    while (!valid){
       
        // take magnitude of difference in position
        diff_x = std::abs(pos_x - knight_x);
        diff_y = std::abs(pos_y - knight_y);
        if ((pos_x < 1) || (pos_x > 8) || (pos_y < 1) || (pos_y > 8))
        {
            std::cout << "This is out of range, try again:" << std::endl;
            std::cin >> pos_x >> pos_y;
        }
        else if ((diff_x == 2) && (diff_y == 1))
        {
            std::cout << "This is a valid move" << std::endl;
            valid = true;
        }
        else if ((diff_y == 2) && (diff_x == 1))
        {
            std::cout << "This is a valid move" << std::endl;
            valid = true;
        }
        else
        {
            std::cout << "This is not a valid move try again:" << std::endl;
            std::cin >> pos_x >> pos_y;
        }
        
    }
}
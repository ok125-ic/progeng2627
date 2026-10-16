#include <iostream>
#include <cmath>
#include <string>

void bishop(int init_x, int init_y, int pos_x, int pos_y) {
    bool valid = false;
    int diff_x, diff_y;

    while (!valid)
    {
        // take magnitude of difference in position
        diff_x = std::abs(pos_x - init_x);
        diff_y = std::abs(pos_y - init_y);

        if ((pos_x < 1) || (pos_x > 8) || (pos_y < 1) || (pos_y > 8))
        {
            std::cout << "This is out of range, try again:" << std::endl;
            std::cin >> pos_x >> pos_y;
        } else if ((diff_x == diff_y) && (diff_x != 0)){
            std::cout << "This is a valid move" << std::endl;
            valid = true;
        } else {
            std::cout << "This is not a valid move try again:" << std::endl;
            std::cin >> pos_x >> pos_y;
        }
    }
}
void rook(int init_x, int init_y, int pos_x, int pos_y){

}
void king(int init_x, int init_y, int pos_x, int pos_y){

}
void queen(int init_x, int init_y, int pos_x, int pos_y){
}
void knight(int init_x, int init_y, int pos_x, int pos_y)
{
    bool valid = false;
    int diff_x, diff_y;
    // test position logic
    while (!valid)
    {
        // take magnitude of difference in position
        diff_x = std::abs(pos_x - init_x);
        diff_y = std::abs(pos_y - init_y);

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
   

int main(){
    int init_x, init_y, pos_x, pos_y;
    std::string piece;

    std::cout << "Which piece are you looking to move?" << std::endl;
    std::cin >> piece;


    // get piece inputs
    std::cout << "please enter initial x and y positions of your piece:" << std::endl;
    std::cin >> init_x >> init_y;
    // check for out of range
    while ((init_x < 1) || (init_x > 8) || (init_y < 1) || (init_y > 8))
    {
        std::cout << "This is an invalid location, try again:" << std::endl;
        std::cin >> init_x >> init_y;
    }

    // get position inputs
    std::cout << "please enter a destintation for the piece:" << std::endl;
    std::cin >> pos_x >> pos_y;

    if (piece == "Knight"){
        knight(init_x, init_y, pos_x, pos_y);
    } else if (piece == "Bishop"){
        bishop(init_x, init_y, pos_x, pos_y);
    } else{
        std::cout << "Not a valid piece" << std::endl;
        }
}
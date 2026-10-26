#include <iostream>

double max(double a, double b){
    if (a > b){
        return a;
    }
    else
    {
        return b;
    }
} 

int main (){

    std::cout << "max of 1 and 2 is: " << max(1, 2) << std::endl;
    std::cout << "max of 2 and 1 is: " << max(2, 1) << std::endl;
    std::cout << "max of 1 and -1 is: " << max(1, -1) << std::endl;
    std::cout << "max of -1 and 1 is: " << max(-1, 1) << std::endl;
    std::cout << "max of 0 and 1 is: " << max(0, 1) << std::endl;
    std::cout << "max of 1 and 0 is: " << max(1, 0) << std::endl;
    std::cout << "max of 0 and 0 is: " << max(0, 0) << std::endl;
    std::cout << "max of -1 and -2 is: " << max(-1, -2) << std::endl;
    std::cout << "max of -2 and -1 is: " << max(-2, -1) << std::endl;
}
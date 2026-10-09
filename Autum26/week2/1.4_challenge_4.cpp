#include <iostream>

int main(){
    double celsius;
    std::cout << "What degree's in celsius would you like to convert?" << std::endl;
    std::cin >> celsius;
    std::cout << "That's " << celsius * 1.8 + 32 << " Farenheit" << std::endl;
}
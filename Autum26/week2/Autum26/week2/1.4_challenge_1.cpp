#include <iostream>

int main(){
    double a, b, c;

    a = 1;
    b = 2;
    c = a + b;

    std::cout << c << std::endl;

    a = 2;

    std::cout << c << std::endl;
    // I expect 3 to be printed

    c = a + b;
    std::cout << c << std::endl;

    // I expect 4 to be printed
    
}
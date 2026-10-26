#include <iostream>

void int_div(int a, int b, int& div, int& rem){
    div = a / b;
    rem = a % b;
}

int main(){
    int div, rem;

    int_div(2, 4, div, rem);
    std::cout << "2/4 is: " << div << "r" << rem << std::endl;

    int_div(4, 2, div, rem);
    std::cout << "4/2 is: " << div << "r" << rem << std::endl;

    int_div(16, 33, div, rem);
    std::cout << "16/33 is: " << div << "r" << rem << std::endl;

    int_div(33, 16, div, rem);
    std::cout << "33/16 is: " << div << "r" << rem << std::endl;
}
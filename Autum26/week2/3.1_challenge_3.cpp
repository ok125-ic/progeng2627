#include <iostream>

int main(){
    int i=0, r=0, n1_input, n1,  n2;

    std::cin >> n1_input >> n2;

    n1 = n1_input;

    while (n1 > n2){
        n1 = n1 - n2;
        i++;
    }
    r = n1;
    std::cout << n1_input << "/" << n2 << " = " << i << "r" << r << std::endl;
}
#include <iostream>

int main(){
    int n = 0, sum = 1;
    std::cout << "Enter a number x" << std::endl;
    std::cin >> n;

    for (int i = n; i > 0; i--){
        sum = sum * i;
    }
    std::cout << n << "! is: " << sum << std::endl;
}
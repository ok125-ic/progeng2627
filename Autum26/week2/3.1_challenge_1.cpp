#include <iostream>

int main() {
    int i, sum = 0;

    while (i != 0) {
        std::cout << "enter a number:" << std::endl;
        std::cin >> i;
        if (i == 0){
            break;
        }
        sum = sum + i;
        std::cout << "the sum so far is " << std::endl;
        std::cout << sum << std::endl;
    }
}
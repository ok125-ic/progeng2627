#include <iostream>

int main(){
    int x, sum = 1, n = 0;
    std::cout << "Please enter a number for x:" << std::endl;
    std::cin >> x;
    while (n == 0)
    {
        std::cout << "Please enter a number for n:" << std::endl;
        std::cin >> n;

    }
    for (int i = 0; i < n; i++){
        sum = (sum * x);
    }

    std::cout << x << "^" << n << " = " << sum << std::endl;
}
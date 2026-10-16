#include <iostream>

int main(){
    int n;
    std::cin >> n;
    for (int c2 = 0; c2 < n; c2++)
    {

        for (int c = 0; c < n; c++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
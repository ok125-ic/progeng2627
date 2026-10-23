#include <iostream>

int main(){
    int c1 = 0, c2 = 0, n;
    std::cin >> n;

    while(c1 != n){
        c1++;
        while (c2 !=n){
            std::cout << "*";
            c2++;
        }
        c2 = 0;
        std::cout << std::endl;
    }
}
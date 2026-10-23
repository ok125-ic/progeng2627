#include <iostream>

int main(){
    int n, m=1;
    std::cin >> n;

    for (int i = 0; i < n; i++){

        for (int j = 1; j < n+1; j++){
            std::cout << (j * m) << "\t";
        }
        m += 1;
        std::cout << std::endl;
    } 
}
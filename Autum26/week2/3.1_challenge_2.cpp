#include <iostream>

int main(){
    int i, n = 0;
    double sum = 0, average = 0;

    while (i != 0){
        std::cout << "enter a number:" << std::endl;
        std::cin >> i;
        if (i == 0)
        {
            break;
        }
        n++;
        sum = sum + i;
        average = (sum / n);
        std::cout << "the average so far is:" << std::endl;
        std::cout << average << std::endl;
    }

}
#include <iostream>

void swap_numbers(double& a, double& b){
    double tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void sort_two_numbers(double& a, double& b){
    if (a > b){
        swap_numbers(a, b);
    }
}

int main()
{
    double n1, n2;
    std::cout << "please enter two numbers:" << std::endl;
    std::cin >> n1 >> n2;
    sort_two_numbers(n1, n2);
    std::cout << n1 << " " << n2 << std::endl;
}
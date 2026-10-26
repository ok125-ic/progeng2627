#include <iostream>

void swap_numbers(double &a, double &b)
{
    double tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void sort_three_numbers(double &a, double &b, double&c)
{
    if ((a > b) && (a >c))
    {
        swap_numbers(a, c);
    } 
    if (a > b) {
        swap_numbers(a, b);
    }
    if (b > c) {
        swap_numbers(b, c);
    }
}

int main()
{
    double n1, n2, n3;
    std::cout << "please enter three numbers:" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
}
#include <iostream>

double pow(double base, int exp)
{
    double sum = 1;
    bool negexp = false;
    
    if (exp < 0)
    {
        exp = -exp;
        negexp = true;
    }
    for (int i = 1; i < exp + 1; i++)
    {
        sum = sum * base;
    }
    if (negexp){
        sum = 1 / sum;
    }
    return sum;
}

int main()
{
    // we test examples with integer (and non-negative) exponent

    std::cout << "2^-3: " << pow(2, -3) << std::endl;
    std::cout << "0.5^-2: " << pow(0.5, -2) << std::endl;
    std::cout << "1^0: " << pow(1, 0) << std::endl;
}
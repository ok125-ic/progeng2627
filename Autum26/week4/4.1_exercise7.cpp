#include <iostream>

double pow(double base, double exp)
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

    if (negexp)
    {
        sum = 1 / sum;
    }
    return sum;
}
double sum_of_pow(double base, double terms){
    double sum = 0;
    for (int i = 1; i < terms + 1; i++)
    {
        sum += pow(base, i);
    }
    return sum;
}

int main()
{
    std::cout << "The sum of the first power of 2 is: " << sum_of_pow(2, 1) << std::endl;
    std::cout << "The sum of the first 2 powers of 2 is: " << sum_of_pow(2, 2) << std::endl;
    std::cout << "The sum of the first 3 powers of 2 is: " << sum_of_pow(2, 3) << std::endl;
    std::cout << "The sum of the first 4 powers of 2 is: " << sum_of_pow(2, 4) << std::endl;

    std::cout << "The sum of the first power of -1 is: " << sum_of_pow(-1, 1) << std::endl;
    std::cout << "The sum of the first 2 powers of -1 is: " << sum_of_pow(-1, 2) << std::endl;
    std::cout << "The sum of the first 3 powers of -1 is: " << sum_of_pow(-1, 3) << std::endl;
    std::cout << "The sum of the first 4 powers of -1 is: " << sum_of_pow(-1, 4) << std::endl;
}

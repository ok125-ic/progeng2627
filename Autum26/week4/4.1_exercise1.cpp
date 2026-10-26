#include <iostream>

double pow(double base, double exp);

int main (){

    double x, n, sum = 0;
    std::cout << "Please enter the base and the number of terms" << std::endl;
    std::cin >> x >> n;

    for (int i = 1; i < n + 1; i++)
    {
        sum += pow(x, i);
    }
    std::cout << "The sum of the first " << n << " powers of " << x << " is " << sum << std::endl;

}

double pow(double base, double exp){
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
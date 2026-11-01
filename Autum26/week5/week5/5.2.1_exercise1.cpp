#include <iostream>
#include <vector>

double sum_vector(std::vector<double> vin)
{
    double sum = 0;

    for (int i = 0; i < vin.size(); i++)
    {
        sum = sum + vin[i];
    }

    return sum;
}

int main()
{
    std::vector<double> v;
    int n;
    double tmp;

    std::cout << "How many elements would you like? " << std::endl;
    std::cin >> n;

    for (int i=0; i < n; i++){
        std::cout << "enter a number: " << std::endl;
        std::cin >> tmp;
        v.push_back(tmp);
    }

        std::cout << "the sum is: " << sum_vector(v) << std::endl;
}
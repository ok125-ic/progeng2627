#include <iostream>
#include <vector>

double sum_vector(const std::vector<double> &vin)
{

    double sum = 0;

    for (int i = 0; i < vin.size(); i++)
    {
        sum = sum + vin[i];
    }
    vin.push_back(20);

    return sum;
}

int main()
{
    std::vector<double> v;

    v.push_back(3);
    v.push_back(0.5);
    v.push_back(-1);

    std::cout << "the sum is: " << sum_vector(v) << std::endl;
}
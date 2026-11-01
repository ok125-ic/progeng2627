#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    double min, tmp;
    int index;
    if(vin.size() == 0){
        return -1;
    }
    for (int i = 0; i < vin.size(); i++)
    {
        if(vin[i] < min){
            index = i;
            min = vin[i];
        }
    }
    return index;
}

int main (){

    std::vector<double> v;

    std::cout << "Index of smallest number is: " << min_vector_element(v) << std::endl;
    v.push_back(-10);
    v.push_back(20);
    std::cout << "Index of smallest number is: " << min_vector_element(v) << std::endl;
    v.push_back(-20);
    std::cout << "Index of smallest number is: " << min_vector_element(v) << std::endl;
    v.push_back(20);
    v.push_back(0);
    std::cout << "Index of smallest number is: " << min_vector_element(v) << std::endl;
    v.push_back(120);
    std::cout << "Index of smallest number is: " << min_vector_element(v) << std::endl;
    v.push_back(1);
    std::cout << "Index of smallest number is: " << min_vector_element(v) << std::endl;
    v.push_back(-100);
    std::cout << "Index of smallest number is: " << min_vector_element(v) << std::endl;
}
#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for (int i = 0; i < vin.size(); i++){
        if(vin[i] < t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){

    int n = 4;
    std::vector<double> vout, vin;
    vin = {1, 2, 3, 4, 5, 6, 7, 8, 9, -1, -12, 0};

    std::cout << "The numbers in the vector that are less than 4 are: " << std::endl;
    filter_v(vin, n, vout);
    for (int i = 0; i < vout.size(); i++)
    {
        std::cout << vout[i] << std::endl;
    }
}
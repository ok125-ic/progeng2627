#include <iostream>
#include <vector>

void append_vectors(const std::vector<int> &vin1, const std::vector<int> &vin2, std::vector<int> &vout){
    if (vin1.size() > 0)
    {
        for (int i = 0; i < vin1.size(); i++)
        {
            vout.push_back(vin1[i]);
        }
    }
    if (vin2.size() > 0){
        for (int i = 0; i < vin2.size(); i++){
            vout.push_back(vin2[i]);
        
        }    
    }
}

int main(){
    std::vector<int> v, vin1, vin2;

    vin1 = {1, 7, 3, 4};
    vin2 = {2, -2, 19};
    append_vectors(vin1, vin2, v);

    std::cout << "first vector appended by second vector is:" << std::endl;

    for (int i = 0; i< v.size(); i++) {
        std::cout << v[i] << std::endl;
    }
}
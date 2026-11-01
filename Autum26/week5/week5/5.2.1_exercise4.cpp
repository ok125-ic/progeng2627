#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    int index = -1;
    if (vin.size() == 0)
    {
        return index;
    }
    for (int i = 0; i < vin.size(); i++){
        if(vin[i] == n){
            index = i;
        }
    }
    return index;
}

int main(){

    std::vector<int> v;
    int n;
    v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    n = 0;
    std::cout << "The first time " << n << " appears is at index: " << search_vector(n, v) << std::endl;

    n = 2;
    std::cout << "The first time " << n << " appears is at index: " << search_vector(n, v) << std::endl;

    n = 9;
    std::cout << "The first time " << n << " appears is at index: " << search_vector(n, v) << std::endl;
}
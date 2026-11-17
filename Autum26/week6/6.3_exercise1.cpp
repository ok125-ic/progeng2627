#include <vector>
#include <iostream>
#include <cstdlib>

void merge_vectors_int(const std::vector<int> &v1, const std::vector<int> &v2, std::vector<int> &merged){
    int t = v1.size() + v2.size();
    int iv1 = 0, iv2 = 0;
    while (merged.size() < t)
    {
        if(iv1 == v1.size()){
            for (int i = iv2; i < v2.size(); i++){
                merged.push_back(v2[i]);
            }
            return;
        } else if (iv2 == v2.size()){
            for (int i = iv1; i < v1.size(); i++)
            {
                merged.push_back(v1[i]);
            }
            return;
        }
        if(v1[iv1] < v2[iv2]){
            merged.push_back(v1[iv1]);
            iv1++;
        }
        else if (v1[iv1] > v2[iv2]){
            merged.push_back(v2[iv2]);
            iv2++;
        }
        else if (v1[iv1] == v2[iv2])
        {
            merged.push_back(v1[iv1]);
            merged.push_back(v2[iv2]);
            iv1++;
            iv2++;
        }
    }
}

int main(){
    std::vector<int> v1, v2, out, expected_output;
    v1 = {1, 3, 5, 6,8};
    v2 = {4, 6, 10, 12, 14, 18};

    expected_output = {1, 3, 4, 5, 6, 6, 8, 10, 12, 14 ,18};

    merge_vectors_int(v1, v2, out);
        if (out == expected_output)
        {
            std::cout << "passed" << std::endl;
        }
        else
        {
            std::cout << "not passed" << std::endl;
        }

}
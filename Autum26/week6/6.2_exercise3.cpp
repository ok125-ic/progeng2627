#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>

int search_vector(std::string s, const std::vector<std::string> &vin)
{
    for (int i = 0; i < vin.size(); i++)
    {
        if (vin[i] == s)
        {
            return 1;
        }
    }
    return 0;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i=0; i < vin1.size(); i++){
        if(!search_vector(vin1[i], vout)){
            vout.push_back(vin1[i]);
        }
    }
    for (int i = 0; i < vin2.size(); i++){
        if (!search_vector(vin2[i], vout))
        {
            vout.push_back(vin2[i]);
        }
    }
}
void intersection_vector(const std::vector<std::string> &vin1, const std::vector<std::string> &vin2, std::vector<std::string> &vout){
    for (int i = 0; i < vin1.size(); i++)
    {
        for (int j = 0; j < vin2.size(); j++){
            if(vin1[i]== vin2[j]){
                vout.push_back(vin1[i]);
            }
        }
    }
}

int main(){

    std::vector<std::string> v1;
    std::vector<std::string> v2;
    std::string tmp;

    std::ifstream infile1;
    std::ifstream infile2;
    std::ofstream outfile1;
    std::ofstream outfile2;

    infile1.open("warehouse1.txt");
    if(!infile1.is_open()){
        std::cout << "Couldn't open file" << std::endl;
        return EXIT_FAILURE;
    }

    while(infile1 >> tmp){
        v1.push_back(tmp);
    }
    infile1.close();

    infile2.open("warehouse2.txt");
    if(!infile2.is_open()){
        std::cout << "Couldn't open file" << std::endl;
        return EXIT_FAILURE;
    }

    while(infile2 >> tmp){
        v2.push_back(tmp);
    }
    infile2.close();

    std::vector<std::string> u_vect;
    std::vector<std::string> i_vect;

    union_vector(v1, v2, u_vect);
    intersection_vector(v1, v2, i_vect);

    outfile1.open("union.txt");
    for (int i = 0; i < u_vect.size(); i++){
        outfile1 << u_vect[i] << std::endl;
    }
    outfile1.close();

    outfile2.open("intersection.txt");
    for (int i = 0; i < i_vect.size(); i++){
        outfile2 << i_vect[i] << std::endl;
    }
}

#include <iostream>
#include <fstream>
#include <vector>
#include <string>


int main(){
    std::ifstream infile;

    infile.open("words.txt");

    if (!infile.is_open()){
        std::cout << "Could not open file" << std::endl;
    }
    std::vector<std::string> v;
    std::string tmp;

    while(infile >> tmp){
        v.push_back(tmp);
    }
    infile.close();

    for (int i = v.size(); i > 0; i--)
    {
        std::cout << v[i - 1] << std::endl;
    }
}
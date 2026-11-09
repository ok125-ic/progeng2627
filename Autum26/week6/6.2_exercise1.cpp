#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main()
{
    std::ofstream outfile;
    std::ifstream infile;
    std::vector<std::string> v;
    std::string tmp;

    infile.open("words.txt");
    outfile.open("output.txt");

    if (!outfile.is_open())
    {
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    if (!infile.is_open()){
        outfile << "hello" << std::endl;
    return EXIT_FAILURE;
    }


    while(infile >> tmp){
        v.push_back(tmp);
    }
    infile.close();

    for (int i = v.size(); i > 0; i--){
        outfile << v[i - 1] << std::endl;
    }
        outfile.close();
}
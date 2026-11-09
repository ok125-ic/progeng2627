#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>

int main(){
    std::ofstream outfile;
    std::ifstream infile;
    std::vector<std::string> v;
    std::string tmp;
    std::string inputfile;
    std::string outputfile;

    std::cout << "Enter name of input file: " << std::endl;
    std::cin >> inputfile;

    std::cout << "Enter name of output file: " << std::endl;
    std::cin >> outputfile;

    infile.open(inputfile);
    outfile.open(outputfile);

    if (!outfile.is_open())
    {
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    if (!infile.is_open())
    {
        outfile << "hello" << std::endl;
        return EXIT_FAILURE;
    }

    while (infile >> tmp)
    {
        v.push_back(tmp);
    }
    infile.close();

    for (int i = v.size(); i > 0; i--)
    {
        outfile << v[i - 1] << std::endl;
    }
    outfile.close();
}
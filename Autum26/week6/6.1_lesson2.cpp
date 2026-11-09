#include <iostream>
#include <fstream>
#include <cstdlib>

int main(){
    std::ifstream infile;
    infile.open("input2.txt");

    if (!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    int tmp;
    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close();
}
#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]){

    std::ifstream infile;
    infile.open(argv[1]);
    std::string tmp;

    if(!infile.is_open()){
        return EXIT_FAILURE;
    }

    while (infile >> tmp){
        std::cout << tmp << std::endl;
    }
}
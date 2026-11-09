#include <iostream>
#include <fstream>
#include <cstdlib>

int main(){
    std::ofstream outfile;

    outfile.open("output.txt");
    
    if(!outfile.is_open()){
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    outfile << "hello" << std::endl;
    outfile.close();
}
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

void openfile(std::string filename){
    std::ifstream infile;
    infile.open(filename);

    if (!infile.is_open())
    {
        std::cout << "Error opening file: " << filename << std::endl;
    } else {
    int tmp;

    while (infile >> tmp)
    {
        std::cout << tmp << std::endl;
    }
    }
}

int main(){
    std::string txtfile;

    std::cout << "Please enter the name of the text file you'd like to read from: " << std::endl;
    std::cin >> txtfile;
    openfile(txtfile);

}
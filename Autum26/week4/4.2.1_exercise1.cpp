#include <iostream>
#include <string>

void string_swap(std::string& a, std::string& b){
    std::string tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main(){
    std::string str1, str2;
    std::cout << "please enter two strings" << std::endl;
    std::cin >> str1 >> str2;

    std::cout << "You entered" << std::endl;
    std::cout << "S1: " << str1 << std::endl;
    std::cout << "S2: " << str2 << std::endl;

    string_swap(str1, str2);

    std::cout << "After swapping we now have" << std::endl;
    std::cout << "S1: " << str1 << std::endl;
    std::cout << "S2: " << str2 << std::endl;
}
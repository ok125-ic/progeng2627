#include <iostream>
#include <string>

int main(){
    std::string user_name;
    std::string surname;

    std::cout << "What's your first name?" << std::endl;
    std::cin >> user_name;

    std::cout << "What is your surname?" << std::endl;
    std::cin >> surname;

    std::cout << "Hello " << user_name << " " << surname << std::endl;
    
    }
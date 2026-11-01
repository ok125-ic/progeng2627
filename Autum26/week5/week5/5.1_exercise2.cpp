#include <iostream>
#include <vector>

int main(){

    std::vector<int> v;
    int n, tmp, s;

    std::cout << "Please enter a size for your vector" << std::endl;
    std::cin >> n;

    for (int i = 0; i < n; i++){
        std::cout << "what integer would you like to put into your vector at element " << i << std::endl;
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cout << "From index 0 how many of the numbers would you like back?" << std::endl;
    std::cin >> s;


        for (int i = 0; i < s; i++)
    {
        std::cout << v.at(i) << std::endl;
    }
}
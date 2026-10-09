#include <iostream>

int main(){
    int length1, length2, area, perimeter;

    std::cout << "What is the first length?" << std::endl;
    std::cin >> length1;
    std::cout << "What is the adjacent lenth?" << std::endl;
    std::cin >> length2;

    area = length1 * length2;
    perimeter = 2 * length1 + 2 * length2;
    std::cout << "The area is " << area << " units squared" << std::endl;
    std::cout << "The perimeter is " << perimeter << " units" << std::endl;
}
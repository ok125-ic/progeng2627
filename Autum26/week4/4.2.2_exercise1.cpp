#include <iostream>

void perimeter_and_area(double a, double b, double& area, double&perimeter){

    area = a * b;
    perimeter = (2 * a) + (2 * b);
}

int main(){
    double area, perimeter;
    perimeter_and_area(2, 4, area, perimeter);
    std::cout << "The area of a 2x4 is: " << area << std::endl;
    std::cout << "The perimeter of a 2x4 is " << perimeter << std::endl;

    perimeter_and_area(1, 2, area, perimeter);
    std::cout << "The area of a 1x2 is: " << area << std::endl;
    std::cout << "The perimeter of a 1x2 is " << perimeter << std::endl;

    perimeter_and_area(10, 1, area, perimeter);
    std::cout << "The area of a 10x1 is: " << area << std::endl;
    std::cout << "The perimeter of a 10x1 is " << perimeter << std::endl;
}
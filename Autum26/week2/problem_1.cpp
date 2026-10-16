#include <iostream>
#include <cmath>

int main(){
    double a, b, c, p, sp, area;
    std::string type = "default";

    std::cout << "Enter three side lengths: ";
    std::cin >> a >> b >> c;
    
    if((a+b > c) && (a+c > b) && (b+c > a)){
        if ((a == b) && (b == c)){
            type = "equilateral";
        }
        else if ( (a == b) || (b == c) || (a == c)){
            type = "isoscelese";
        } else {
            type = "scalene";
        }
        p = a + b + c;
        sp = p / 2;
        area = std::sqrt(sp * (sp - a) * (sp - b) * (sp - c));
        std::cout<< "this is a(n) " << type << " triangle" << std::endl;
        std::cout << "the perimeter is " << p << " units" << std::endl;
        std::cout << "the area is " << area << " units^2" << std::endl;
    }
    else
    {
        std::cout << "this is not a valid triangle" << std::endl;
    }
}
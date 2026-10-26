#include <iostream>

int smallest_factor(int n){

    for (int cf = 2; cf < n; cf++)
    {
        if ((n % cf) == 0){
        
            return cf;
            
        }
    }
    return 0;
}

int main(){

    int n = 0;

    std::cout << "smallest factor of 2 is: " << smallest_factor(2) << std::endl;
    std::cout << "smallest factor of 3 is: " << smallest_factor(3) << std::endl;
    std::cout << "smallest factor of 4 is: " << smallest_factor(4) << std::endl;
    std::cout << "smallest factor of 5 is: " << smallest_factor(5) << std::endl;
    std::cout << "smallest factor of 6 is: " << smallest_factor(6) << std::endl;
    std::cout << "smallest factor of 7 is: " << smallest_factor(7) << std::endl;
    std::cout << "smallest factor of 8 is: " << smallest_factor(8) << std::endl;
    std::cout << "smallest factor of 9 is: " << smallest_factor(9) << std::endl;
    std::cout << "smallest factor of 10 is: " << smallest_factor(10) << std::endl;

}
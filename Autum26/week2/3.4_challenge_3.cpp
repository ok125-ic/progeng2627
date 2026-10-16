#include <iostream>
#include <string>

int main(){
    int guess1, guess2, mid;
    std::string higher_or_lower;
    std::cout << "Please enter the upper and lower bounds to get started:" << std::endl;
    std::cin >> guess1 >> guess2;
    guess1 = guess1 - 1;
    guess2 = guess2 + 1;
    mid = (guess1 + guess2) / 2;

    std::cout << "Is your number " << mid << "?" << " Or is it higher or lower?"  << std::endl;
    std::cin >> higher_or_lower;

    while (higher_or_lower != "yes")
    {
       if(higher_or_lower == "lower"){
           guess2 = mid;
           mid = (guess1 + guess2) / 2;
       } else if(higher_or_lower =="higher"){
           guess1 = mid;
           mid = (guess1 + guess2) / 2;
           }
       std::cout << "Is your number " << mid << "?" << " Or is it higher or lower?" << std::endl;
       std::cin >> higher_or_lower;
    }
}
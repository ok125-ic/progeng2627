#include <iostream>

int main(){
    int n, i, maxsum, steps_count=0;
    maxsum = i;
    std::cin >> i;
    n = i;
    while (i > 1)
    {
        if ((i % 2 == 0) && (i/2 !=0)){
            i = i / 2;
        }
        else if (i % 2 == 1)
        {
            i = (3 * i) + 1;
        }
        if (i > maxsum){
            maxsum = i;
        }
        std::cout << i << "\t";
        steps_count++;
    }
    std::cout << std::endl;
    std::cout << "The number " << n << " took " << steps_count << " steps to reach 1" << std::endl;
    std::cout << "The greater number was: " << maxsum << std::endl;
}
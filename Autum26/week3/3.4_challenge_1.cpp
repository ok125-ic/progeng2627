#include <iostream>

int main()
{
    int n, curmax, curmin;
    std::cout << "please enter a number:" << std::endl;
    std::cin >> n;

    curmax = n;
    curmin = n;

    std::cout << "maximum so far is: " << curmax << std::endl;
    std::cout << "minimum so far is: " << curmax << std::endl;

    while (n != 0)
    {
        std::cout << "please enter a number:" << std::endl;
        std::cin >> n;

        if (n > curmax)
        {
            curmax = n;
        } else if (n < curmin){
            curmin = n;
        }
        std::cout << "maximum so far is: " << curmax << std::endl;
        std::cout << "minumum so far is: " << curmin << std::endl;
    }
}
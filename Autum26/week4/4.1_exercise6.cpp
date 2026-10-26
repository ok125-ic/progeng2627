#include <iostream>

double max(double a, double b, double c)
{
    double max = 0;
    max = a;
    if ((a > b) && (a > c))
    {
        max = a;
    }
    else if ((b > a) && (b > c)) {
        max = b;
    }
    else if (max < c) {
        return c;
    }
    return max;
}

int main()
{
    std::cout << "These should all return 3" << std::endl;
    std::cout << "max of 1, 2 and 3 is: " << max(1, 2, 3) << std::endl;
    std::cout << "max of 1, 3 and 2 is: " << max(1, 3, 2) << std::endl;
    std::cout << "max of 2, 1 and 3 is: " << max(2, 1, 3) << std::endl;
    std::cout << "max of 2, 3 and 1 is: " << max(2, 3, 1) << std::endl;
    std::cout << "max of 3, 2 and 1 is: " << max(3, 2, 1) << std::endl;
    std::cout << "max of 3, 1 and 2 is: " << max(3, 1, 2) << std::endl;

    std::cout << "These should all return 1" << std::endl;
    std::cout << "max of 1, 1 and 1 is: " << max(1, 1, 1) << std::endl;
    std::cout << "max of 1, 1 and -1 is: " << max(1, 1, -1) << std::endl;
    std::cout << "max of 1, -1 and 1 is: " << max(1, -1, 1) << std::endl;
    std::cout << "max of 1, -1 and -1 is: " << max(1, -1, -1) << std::endl;
    std::cout << "max of -1, 1 and 1 is: " << max(-1, 1, 1) << std::endl;
    std::cout << "max of -1, 1 and -1 is: " << max(-1, 1, -1) << std::endl;
    std::cout << "max of -1, -1 and 1 is: " << max(-1, -1, 1) << std::endl;

}
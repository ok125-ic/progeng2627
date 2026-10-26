#include <iostream>

int smallest_factor(int n)
{

    for (int cf = 2; cf < n; cf++)
    {
        if ((n % cf) == 0)
        {

            return cf;
        }
    }
    return 0;
}

int main()
{

    int n1, n2;
    std::cin >> n1 >> n2;

    for (; n1 < n2 + 1; n1++)
    {
        if (smallest_factor(n1) ==0 ){
            std::cout << n1 << std::endl;
        }
    }
}
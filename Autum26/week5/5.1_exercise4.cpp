#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v, v2;
    int n, s, tmp, count = 0;

    std::cout << "please enter n" << std::endl;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << "please enter a number" << std::endl;
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cout << "please enter s" << std::endl;
    std::cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s == v.at(i))
        {
            count++;
            v2.push_back(i);
        }
    }

    if (count == 0)
    {
        std::cout << "there are no occurences of " << s << std::endl;
    }
    else
    {
        std::cout << "there are " << count << " occurences of " << s << " at indices:" << std::endl;
        for (int i = 0; i < count; i++){
            std::cout << v2.at(i) << std::endl;
        }
        }
}

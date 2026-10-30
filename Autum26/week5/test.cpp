#include <iostream>
#include <vector>
int main()
{
    std::vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    for (int i = 1; i < v.size(); i++)
    {
        v[i] = v[v.size() - i];
    }
    std::cout << v[v.size() - 1] << std::endl;
}
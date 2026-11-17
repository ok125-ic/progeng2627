#include <iostream>
#include <string>

int count_occurrences(std::string s, char letter)
{
    int out = 0;
    for (int i = 0; i < s.size(); i++)
    {
        // s[i] is a char and can't be compared with std::string
        if (s[i] == letter)
        {
            out++;
        }
    }
    return out;
}

int main()
{

    std::string s = "hello";
    char letter = 'l';
    std::cout << "there are " << count_occurrences(s, letter) << " of " << letter << " in " << s << std::endl;
}
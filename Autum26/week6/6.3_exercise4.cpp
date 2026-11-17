#include <iostream>
#include <string>
#include <vector>

#include <utility>

std::string char_to_string(char c){
    std::string s;
    s.push_back(c);
    return s;
}

bool is_palindrome(std::string s){
    std::vector<std::string> v;
    for (int i = 0; i < s.length(); i++)
    {
        if(char_to_string(s[i]) != " "){
            v.push_back(char_to_string(s[i]));
        }
    }
    int i = 0, j = v.size() - 1;
    while(i < j){
        if(v[i] != v[j]){
            return false;
        } else {
            i++;
            j--;
        }
    }
    return true;
}

int main(){
    std::vector<std::pair<std::string, bool>> test_cases = {
        {"a man a plan a canal panama", true},
        {"a man plan a canal panama", false},
        {"a toyota", true},
        {"never odd or even", true},
        {"never even or odd", false}};
    for (int i = 0; i < test_cases.size(); i++){
        bool test = is_palindrome(test_cases[i].first);
        if (test == test_cases[i].second){
            std::cout << "passed" << std::endl;
        }
        else {
            std::cout << "FAILED" << std::endl;
            std::cout << test_cases[i].first << std::endl;
            std::cout << "expected: " << test_cases[i].second << std::endl;
            std::cout << "got : " << test << std::endl;
        }
    }
}
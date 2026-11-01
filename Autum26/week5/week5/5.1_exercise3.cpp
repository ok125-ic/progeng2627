#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    int n, s, tmp, count=0;

    std::cout << "please enter n" << std::endl;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << "please enter a number"<< std::endl;
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cout << "please enter s" << std::endl;
    std::cin >> s;

    for (int i = 0; i < n;i++){
        if(s == v.at(i)){
            count++;
        }
    }
    
    if(count == 0){
        std::cout << "there are no occurences of " << s << std::endl;
    } else {
        std::cout << "there are " << count << " occurences of " << s << std::endl;
    }
}

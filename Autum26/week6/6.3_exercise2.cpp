#include <vector>
#include <iostream>
#include <string>
#include <fstream>

void count_occurrences(const std::vector<std::string>& search_words){
    std::ifstream infile;
    std::ofstream outfile;
    std::string tmp;
    outfile.open("output.txt");
    for (int i = 0; i < search_words.size(); i++)
    {
        infile.open("text.txt");
        int count = 0;
        if (infile.is_open())
        {
            while (infile >> tmp) {
                if (tmp == search_words[i])
                {
                    count++;
                }
            }
            infile.close();
            outfile << search_words[i] << ": " << count << std::endl;
            }
    }
    outfile.close();
}

int main(){
    std::ifstream infile;
    std::vector<std::string> search_words;
    std::string tmp;
    infile.open("words.txt");

    if(infile.is_open()){
        while(infile >> tmp){
            search_words.push_back(tmp);
        }
    }
    infile.close();
    count_occurrences(search_words);
}
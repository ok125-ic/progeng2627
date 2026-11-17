#include <iostream>
#include <string>
#include <vector>
#include<fstream>

int search_vector(std::string s, int &index, const std::vector<std::string> &vin)
{
    for (int i = 0; i < vin.size(); i++)
    {
        if (vin[i] == s)
        {
            index = i;
            return 1;
        }
    }
    return 0;
}

void translate(std::string advert, std::string translator, std::string output, std::vector<std::string> &v){
    std::ifstream infile;
    std::ofstream outfile;
    infile.open(advert);
    std::vector<std::string> v1, v2;
    std::string tmp;
    int index;

    if(infile.is_open())
    {   
        while(infile >> tmp){
            v1.push_back(tmp);
        }
    }
    infile.close();
    infile.open(translator);
    if (infile.is_open())
    {
        while (infile >> tmp)
        {
            v2.push_back(tmp);
        }
    }
    infile.close();

    outfile.open(output);
    for (int i = 0; i < v1.size(); i++){
        if(search_vector(v1[i], index, v2)){
            outfile << v2[index + 1] << " ";
        } else {
            outfile << v1[i] << " ";
        }
    }
    std::cout << std::endl;
    outfile.close();
}

int main(){
    std::ofstream outfile;
    std::string advert, translator, output_file;
    std::vector<std::string> v;
    std::cout << "Please enter the advert, followed by the real meaning translator" << std::endl;
    std::cin >> advert >> translator;

    std::cout << "In which file would you like the results?" << std::endl;
    std::cin >> output_file;

    translate(advert, translator, output_file, v);
}
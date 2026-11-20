#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include <sstream>
#include <iomanip>

std::vector<double> line_to_vector(std::string s)
{
    std::stringstream ss;
    std::string tmp;
    std::vector<double> out;

    ss << s;
    while (ss >> tmp)
    {
        out.push_back(std::stod(tmp));
    }
    return out;
}

std::vector<std::vector<double>> read_matrix_from_file(std::string input_file)
{
    std::ifstream infile;
    infile.open(input_file);
    if (!infile.is_open())
    {
        std::cout << "error opening file " << input_file << std::endl;
        std::exit(EXIT_FAILURE);
    }

    std::string line;
    std::vector<std::vector<double>> out;

    while (std::getline(infile, line))
    {
        out.push_back(line_to_vector(line));
    }

    return out;
}

std::vector<std::vector<double>> matrix_sum(const std::vector<std::vector<double>> &m1, const std::vector<std::vector<double>> &m2)
{
    std::vector<std::vector<double>> out;

    for (int i = 0; i < m1.size(); i++)
    {
        std::vector<double> row;
        for (int j = 0; j < m1[0].size(); j++)
        {
            row.push_back(m1[i][j] + m2[i][j]);
        }
        out.push_back(row);
    }

    return out;
}

std::string matrix_to_string(std::vector<std::vector<double>> m)
{
    std::stringstream out;

    out << std::fixed << std::setprecision(2);

    for (int i = 0; i < m.size(); i++)
    {
        for (int j = 0; j < m[0].size(); j++)
        {
            out << (m[i][j]) << "\t";
        }
        out << "\n";
    }
    return out.str();
}

std::vector<double> matrix_column(int column, const std::vector<std::vector<double>> &m_in)
{
    std::vector<double> out;

    for (int i = 0; i < m_in[0].size(); i++)
    {
        out.push_back(m_in[i][column]);
    }

    return out;
}

double scalar_product(const std::vector<double> &v1, const std::vector<double> &v2){
    double out = 0;
    if(v1.size()!= v2.size()){
        std::cout << "Vectors are of different size, cannot be multiplied" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = 0; i < v1.size(); i++){
        out = out + (v1[i] * v2[i]);
    }
    return out;
}

int main(int argc, char *argv[])
{

    if (argc != 3)
    {
        std::cout << "two arguments needed" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::vector<double>> m1 = read_matrix_from_file(argv[1]);
    std::vector<std::vector<double>> m2 = read_matrix_from_file(argv[2]);

    std::vector<std::vector<double>> m3 = matrix_sum(m1, m2);


    std::vector<double> m4 = matrix_column(1, m3);
    std::vector<double> m5 = matrix_column(2, m3);

    double dot_product = scalar_product(m4, m5);

    std::cout << "dot product: " << dot_product << std::endl;
}

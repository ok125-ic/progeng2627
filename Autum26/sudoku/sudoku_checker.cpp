#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <vector>

int twod_to_oned(int row, int col, int rowlen)
{
    return row * rowlen + col;
}

int mfind(int n, const std::vector<int> &v)
{
    int index = -1;
    for (int i = 0; i < v.size(); i++){
        if(v[i] == n){
            return i;
        }
    }
    return index;
}

bool check_sequence(const std::vector<int> &v)
{
    for (int i = 0; i < v.size(); i++){
        if(mfind(i+1, v) == -1){
            return false;
        }
    }
    return true;
}

void get_row(int r, const std::vector<int> &in, std::vector<int> &out){
    int row_length = std::sqrt(in.size());

    for (int i = 0; i < row_length; i++)
    {
        int index  = twod_to_oned(r, i, row_length);
        out.push_back(in[index]);
    }
}

void get_col(int c, const std::vector<int> &in, std::vector<int> &out){
    int col_length = std::sqrt(in.size());
    for (int i = 0; i < col_length; i++){
        {
            int index = twod_to_oned(i, c, col_length);
            out.push_back(in[index]);
        }
    }
}

void get_subq(int subs, const std::vector<int> &in, std::vector<int> &out){
    int sub_length = std::sqrt(in.size());
    int subq = std::sqrt(sub_length);

    int starting_column = subq * (subs % subq);
    int starting_row = subq * (subs / subq);

    // std::cout << "starting row: " << starting_row << std::endl;
    // std::cout << "starting column: " << starting_column <<std::endl;

    for (int i = starting_row; i < starting_row+subq; i++){
        for (int j = starting_column; j < starting_column +subq; j++){
            int index = twod_to_oned(i, j, sub_length);
            out.push_back(in[index]);
        }
    }
}

bool valid_sudoku(const std::vector<int> &g)
{
    int side = std::sqrt(g.size());
    std::vector<int> seq;

    // for each row...
    for (int i = 0; i < side; i++)
    {
        seq.clear();
        get_row(i, g, seq);

        if (!check_sequence(seq))
        {
            return false;
        }
    }

    // for each column...
    for (int i = 0; i < side; i++)
    {
        seq.clear();
        get_col(i, g, seq);

        if(!check_sequence(seq)){
            return false;
        }
    }

    // for each subsquare...
    for (int i = 0; i < side; i++)
    {
        seq.clear();
        get_subq(i, g, seq);

        if(!check_sequence(seq)){
            return false;
        }
    }

    return true;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
        {
            std::cout << "one argument needed" << std::endl;
            return EXIT_FAILURE;
        }
        std::vector<int> v;

        std::ifstream infile;
        infile.open(argv[1]);

        if (!infile.is_open())
        {
            std::cout << "error opening file" << std::endl;
            return EXIT_FAILURE;
        }
        int tmp;
        while (infile >> tmp)
        {
            v.push_back(tmp);
        }

        int side = std::sqrt(v.size());

        for (int i = 0; i < side; i++)
        {
            for (int j = 0; j < side; j++)
            {
                std::cout << v[twod_to_oned(i, j, side)] << " ";
            }
            std::cout << std::endl;
        }

            bool valid = valid_sudoku(v);

            if (valid)
            {
                std::cout << "valid" << std::endl;
            }
            else
            {
                std::cout << "not valid" << std::endl;
            }
}

#include <iostream>
#include <string>

int main(){

    double temp_in, temp_out;
    std::string unit_in, unit_out;
    bool valid_unit = true;

    const double f_to_c = 0.555;

    std::cin >> temp_in >> unit_in;

        if ((unit_in == "F") || (unit_in = "f"))
        {
            unit_out = "C";
            temp_out = (temp_in - 32) * f_to_c;
        } else if ((unit_in == "C") || (unit_in == "c")) {
        unit_out = "F";
        temp_out = 32 + (temp_in / f_to_c);
    } else {
        valid_unit = false;
    } 

    if (valid_unit){
        std::cout << temp_out << " " << unit_out << std::endl;
    } else {
        std::cout << "Error: Unrecognised unit" << std::endl;
    }
}
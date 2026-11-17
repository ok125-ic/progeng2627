#include <iostream>
#include <vector>
#include <string>

int power(int base, int exponent){
    int sum = base;
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i < exponent; i++)
        {
            sum *= base;
        }
    }
    return sum;
}

bool digits_in_base(int number, int base, std::vector<int>& digits){
    int remainder, quotient = 1;
    std::vector<int> tmpv;

    if(base > 16 || base < 2){
        return false;
    }

    while (quotient != 0)
    {
        quotient = number / base;
        remainder = number % base;
        tmpv.push_back(remainder);
        number = quotient;
    }
    for (int i = tmpv.size(); i > 0; i--)
    {
        digits.push_back(tmpv[i-1]);
    }
    return true;
}

void print_digits_as_number(const std::vector<int>& digits){
    for (int i = 0; i < digits.size(); i++){
        if(digits[i] == 10){
            std::cout << "A";
        } else if(digits[i] == 11){
            std::cout << "B";
        } else if(digits[i] == 12){
            std::cout << "C";
        } else if(digits[i]==13){
            std::cout << "D";
        } else if (digits[i]==14){
            std::cout << "E";
        } else if (digits[i] == 15){
            std::cout << "F";
        } else {
            std::cout << digits[i];
        }
    }
    std::cout << std::endl;
}

int digits_to_decimal(const std::vector<int>& digits, int base){
    int sum = 0, digit = 0;
    for (int i = 0; i < digits.size(); i++){
        sum += digits[i] * power(base, (digits.size() - 1 -i));
    }
    return sum;
}

bool convert_base(const std::vector<int>& first_digits, int first_base, int second_base, std::vector<int>& second_digits){
    int dec_num = digits_to_decimal(first_digits, first_base);
    if(digits_in_base(dec_num, second_base, second_digits)){
        return true;
    }

    return false;
}

int main()
{
    int num = 16;
    std::vector<int> octal_digits;
    std::vector<int> hex_digits;

    digits_in_base(num, 8, octal_digits);

    std::cout << "Octal: ";
    print_digits_as_number(octal_digits);

    if (convert_base(octal_digits, 8, 5, hex_digits))
    {
        std::cout << "Hexadecimal: ";
        print_digits_as_number(hex_digits);
    }
    else
    {
        std::cout << "Invalid base" << std::endl;
    }

    return 0;
}
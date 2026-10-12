#include <iostream>


int main() {
    double gbp, exchange, euros;
    std::cout << "How much money in GBP?" << std::endl;
    std::cin >> gbp;
    std::cout << "What's the exchange rate from GBP to Euros?" << std::endl;
    std::cin >> exchange;

    euros = gbp * exchange;

    std::cout << "That is €" << euros << std::endl;

}
//
// Created by olehio-p on 10/27/2023.
//
#include <iostream>
#include <string>
#include <cmath>


int main(int argc, char const *argv[])
{
    std::string name;
    int years, compound;
    double principal, rate, compoundInterest, accruedAmount;

    std::cout << "Please enter your name: ";
    std::cin >> name;

    std::cout << "Enter the principal amount: ";
    std::cin >> principal;

    std::cout << "Enter the rate of interest (in percentage): ";
    std::cin >> rate;

    std::cout << "Enter the number of years: ";
    std::cin >> years;

    std::cout << "Enter the number of times interest is compounded per year "
              << "(e.g., 1 for annually, 4 for quarterly, 12 for monthly): ";
    std::cin >> compound;

    accruedAmount = principal * pow((1 + (rate / (100 * compound))), years * compound);
    compoundInterest = accruedAmount - principal;

    std::cout << "-------------------------------------------------------------"
              << "-------------------------------------------------------------" << std::endl;

    std::cout << "Hello, " << name << std::endl;
    printf("The compound interest for a principal of %.2f at a rate of %.2f%% "
           "compounded %d times a year for %d years is: %.2f\n",
           principal, rate, compound, years, compoundInterest);
    printf("The total amount after %d years is: %.2f\n", years, accruedAmount);

    return 0;
}
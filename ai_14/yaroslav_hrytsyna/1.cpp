#include <iostream>
#include <cmath>
#include <cstdio>



using namespace std;

std::string name1;
double pricipal;
double rate;
int years;
int period;
double A;



int main()
{
    std::cin >> name1;
    std::cin >> pricipal;
    std::cin >> rate;
    std::cin >> years;
    std::cin >> period;
    std::cout << (period*years) << endl;
    A = pricipal*pow((1+rate/period),(period*years));
    printf("%.2f",A);
    
}
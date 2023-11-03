#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    // Creating and entering user's name
    string name;
    cout << "Your name: ";
    cin >> name;

    // Creating and entering user's deposit amount
    double sum;
    cout << "Enter deposit amount: ";
    cin >> sum;

    // Creating and entering user's deposit amount of years
    int years;
    cout << "Enter amount of years: ";
    cin >> years;

    // Creating and entering user's deposit rate
    double percent;
    cout << "Enter deposit rate: ";
    cin >> percent;

    // Calulating value that user will recieve
    double result = sum * pow((1 + percent * 0.01), years);

    // Output result value
    printf("Thank you %s \nYou will receive: %lf", (name.c_str()), result);
    return 0;
}

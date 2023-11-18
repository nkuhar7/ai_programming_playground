#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    double principal, rate, time;
    string username;

    cout << "Enter your name: ";
    cin >> username;

    cout << "Hello, " << username << "!" << endl;
    
    cout << "Enter the principal amount: $";
    cin >> principal;

    cout << "Enter APR (%): ";
    cin >> rate;

    cout << "Enter the number of years: ";
    cin >> time;

    rate /= 100;
    double compound_interest = principal * pow(1 + rate, time) - principal;

    cout << "Compound interest: $" << compound_interest << endl;
    
    return 0;
}


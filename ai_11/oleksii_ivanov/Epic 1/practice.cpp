#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string name;
    double principal, rate, amount, years;
    int period;

    cout << "Enter name: ";
    cin >> name;

    // principal is money invested
    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter interest rate in percents: ";
    cin >> rate;
    rate /= 100;

    cout << "And how many years? ";
    cin >> years;

    cout << "Enter the time when interest is compounded per year (1 for annually, 4 for quarterly, 12 for monthly): ";
    cin >> period;

    amount = principal * pow((1 + rate / period), period * years);

    printf("Hello, %s!\n"
           "The compound interest for a principal of %.2f "
           "at a rate of %.2f%% "
           "compounded %d times a year "
           "for %f years is: %.2f\n",
           name.c_str(), principal, rate * 100, period, years, amount);

    return 0;
}

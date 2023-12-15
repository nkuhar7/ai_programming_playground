#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double epsilon = 0.0001;

    double sum = 1;

    for (int n = 1; ; ++n) {
        double term = sum * 1/10 * n;
        cout <<"n = "<< n<< "\tsum of the series: " << term << endl;
        if (abs(term) < epsilon) {
            break;
        }
        if (term == numeric_limits<double>::infinity()) {
            break;
        }

        sum += term;
    }
    double TotalSum = sum;

    cout << "The sum of the series with precision e=" << epsilon << ": " << TotalSum << endl;

    return 0;
}
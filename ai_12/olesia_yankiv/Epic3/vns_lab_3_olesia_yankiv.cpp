#include <iostream>
#include <cmath>

using namespace std;

// Функція для обчислення точного значення y = e^(2x)
double calculateExactValue(double x) {
    return exp(2 * x);
}

// Функція для розкладу у степеневий ряд з фіксованим n
double calculateSeriesExpansionN(int n, double x) {
    double result = 1.0;
    double term = 1.0;

    for (int i = 1; i <= n; ++i) 
    {
        term *= (2 * x) / i;
        result += term;
    }

    return result;
}

// Функція для розкладу у степеневий ряд з точністю epsilon
double calculateSeriesExpansionEpsilon(double epsilon, double x) {
    double result = 1.0;
    double term = 1.0;
    int i = 1;

    while (abs(term) >= epsilon) {
        term *= (2 * x) / i;
        result += term;
        i++;
    }

    return result;
}

int main() {
    const double a = 0.0;
    const double b = 1.0;
    const int k = 10;
    const int n = 20;
    const double epsilon = 0.0001;

    double step = (b - a) / k;

    for (double x = a; x <= b; x += step) {
        double exactValue = calculateExactValue(x);
        double resultN = calculateSeriesExpansionN(n, x);
        double resultEpsilon = calculateSeriesExpansionEpsilon(epsilon, x);

        cout << "x = " << x << endl;
        cout << "  Exact value: " << exactValue << endl;
        cout << "  Power series expansion (n=" << n << "): " << resultN << endl;
        cout << "  Power series expansion (e =" <<epsilon<< "):"<<  resultEpsilon << endl;
    }

    return 0;
}

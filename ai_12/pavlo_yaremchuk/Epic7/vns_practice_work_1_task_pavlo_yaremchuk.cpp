#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double pi = M_PI;
    double x = 0.25;
    double y = 1.31;
    double a = 3.5;
    double b = 0.9;
    double num, denom, addend, P;
    
    num = pow(sin(a * pow(x, 3) + b * pow(y, 2) - a * b), 3);
    denom = pow(pow(a * pow(x, 3) + b * pow(y, 2) - a, 2) + pi, 1 / 3);
    addend = tan(a * pow(x, 3) + b * pow(y, 2) - a * b);

    P = abs(num / denom) + addend;

    cout << P;

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

double calculateFunction(double x) 
{
    double z = fabs(x) + pow(x, 2);
    double y = z * pow(sin(x + 2), 2) / (2 + x);
    return y;
}

int main() 
{
    double x1 = -2.5;
    double x2 = 2.0;
    double h = 0.5;



    for (double x = x1; x <= x2; x += h) 
    {
        double y = calculateFunction(x);

        cout << "If x = " << x << " y = " << y << endl;
        
    }

    return 0;
}
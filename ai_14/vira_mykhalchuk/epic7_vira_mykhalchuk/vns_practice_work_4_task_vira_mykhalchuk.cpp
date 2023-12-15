#include <iostream>
#include <cmath>

using namespace std;

double calculation(double x) 
{
    double y = 2*pow(x,2)-5*x-8;
    return y;
}

int main() 
{
    double x1 = -4;
    double x2 = 4;
    double h = 0.5;



    for (double x = x1; x <= x2; x += h) 
    {
        double y = calculation(x);

        cout << "If x = " << x << " y = " << y << endl;
        
    }

    return 0;
}
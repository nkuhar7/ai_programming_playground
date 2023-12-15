#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y, z, h = 0.5;

    for (x = 1.0; x < 4.1; x += h)
    {
        z = abs(x) + pow(x, 3);
        y = z * (sin(pow(2 + x, 2)) / 2 + x);
        cout << "При x = " << x << "\t" << "==>" << "\t" << "y = " << y << endl;
    }

    return 0;
}
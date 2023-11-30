#include <iostream>
#include <cmath>
using namespace std;

double b = 1.0;
double a = 0.1;
const double epsilon = 0.0001;
double step = (b - a) / 10;

int main()
{
    for (double x = a; x <= b; x += step)
    {
        double sn = 0;
        double se = 0;
        double y = (1 + pow(x, 2) / 2) * atan(x - x / 2);

        // Обчислення SN
        for (int n = 1; n <= 30; n++)
        {
            double Na = (pow(-1, n + 1)) * pow(x, 2 * n + 1) / (4 * pow(x, 2) + 1);
            sn += Na;
        }

        // Обчислення SE
        int n = 1;
        double ne = (pow(-1, n + 1)) * pow(x, 2 * n + 1) / (4 * pow(x, 2) + 1);
        while (fabs(ne) >= epsilon)
        {
            se += ne;
            n++;
            ne = (pow(-1, n + 1)) * pow(x, 2 * n + 1) / (4 * pow(x, 2) + 1);
        }

        cout << "X = " << x << " SN = " << sn << " SE = " << se << " Y = " << y << endl;
    }
    return 0;
}

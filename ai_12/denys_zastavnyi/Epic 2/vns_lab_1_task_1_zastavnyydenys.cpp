#include <iostream>
#include <cmath>

using namespace std;


int main() {
    float a = 100, b = 0.001;
    float chisel = pow((a + b), 4) - (pow(a, 4) + 4 * pow(a, 3) * b);
    float znam = 6 * pow(a, 2) * pow(b, 2) + 4 * a * pow(b, 3) + pow(b, 4);
    float result = chisel / znam;

    cout << "Your result = " << result << endl;

    return 0;
}
#include <iostream>
#include <cmath>
#include <iomanip>
const long double PI_4 = 0.785398163397448309616;
const long double E = 2.71828182845904523536;

int main() {
    short n = 25;
    double x = 0.1, e = 0.0001;
    while(x <= 1) {
        std::cout << "X=" << std::setw(10) << std::left << x;

        double sn = 1 + cos(PI_4) * x, pan = x;
        //an = pan * cos*;
        for(short i = 2; i <= n; i++) {
            pan *= x/n;
            sn += cos(n*PI_4) * pan;
        }
        std::cout << "SN=" << std::setprecision(9) << std::setw(16) << std::left << sn;

        double se = 1 + cos(PI_4) * x, pae = x, i = 2, ae;
        do {
            pae *= x/n;
            ae = pae * cos(n*PI_4);
            se += ae;
        } while (ae > e);
        std::cout << "SE=" << std::setw(16) << std::left << se;

        std::cout << "Y=" << (pow(E, x*cos(PI_4) ) * cos(x*sin(PI_4))) << std::endl;
        x += (1-0.1)/10;
    }
    return 0;
}
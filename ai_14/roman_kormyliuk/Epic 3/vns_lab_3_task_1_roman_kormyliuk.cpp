#include <iostream>
#include <cmath>
using namespace std;
double factorial(int n){
    double factorial = 1;
    for (int i = 0; i < n; i++){
        factorial*=(i + 1);
    }
    return factorial;
}
int main(){
    const double Eps = 0.0001, e = 2.71828;
    double  element;
    for (double x = 0.1; x <= 1; x += 0.1){
        double SE = 0, SN = 0, Y;
        Y = pow(e, cos(x)) * cos(sin(x));
        for (int n = 0; n <= 20; n++){
            SN += cos(n*x) / factorial(n);
        }
        int m = 0;
        element = cos(m*x) / factorial(m);
        while (abs(element) > Eps){
            element = cos(m*x) / factorial(m);
            SE += element;
            m++;
        }
        cout << "x = " << x << " SN = " << SN << " SE = " << SE << " Y = " << Y << endl;
    }
    return 0;
}
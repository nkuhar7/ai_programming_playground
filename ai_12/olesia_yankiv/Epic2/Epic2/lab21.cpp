#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double epsilon = 0.0001;
    double sum = 0.0;
    double term = 0.0;
    int n = 2; 
    do 
    {
        term = static_cast<double>(n) / pow(n - 1, 2); 
        sum += term;
        n++;
    } while (abs(term) >= epsilon); 

   cout << "The sum of the series with accuracy " << epsilon << " is " << sum <<endl;

    return 0;
}
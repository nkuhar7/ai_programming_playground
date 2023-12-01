#include <iostream>
#include <cmath>
using namespace std;

int main(){
    const int n = 13;
    double a[n];
    int k, p;
    double sum = 0;
    k = 1;
    p = 1;
    for(int i = 0; i < n; i++){
        k = k * p;
        a[i] = log(k) / pow(p, 2);
        sum = sum + a[i];
        ++p;
    }
    cout << sum << endl;
    return 0;
}
#include<iostream>
#include <math.h>
using namespace std;

int main() {
   float a, b;
   cout << "Enter a =";
   cin >> a;
    cout << "Enter b =";
   cin >> b;
   
   float c = pow ((a-b), 2);
   cout << "c=" << c << endl;
   float d = pow (a,2);
   cout << "d=" << d << endl;
   float e = (2*a*b);
   cout << "e=" << e << endl;
   float f = pow (b,2);
   cout << "f=" << f << endl;
   float result = ( c - (d -e)) /f;


   cout << "result=" << result << endl;
    return 0; 

} 
#include <stdio.h> 
#include <iostream>
#include <math.h> 
using namespace std;
int main()
{
    double a = 1000;
    double b = 0.0001;
    double numerator1 = pow(a - b, 2.0);
    double numerator2 = (pow(a, 2.0) - 2.0 * a * b);
    double denominator = pow(b, 2);
    double f = (numerator1 - numerator2)/ denominator;

    cout<<f;

    /*
    printf("f= %f\n", f);
    printf("f= %f\n", f);
    printf("a-b= %f\n", a-b);
    printf("numerator1= %Lf\n", numerator1);
    printf("numerator2= %Lf\n", numerator2);
    printf("numerator= %Lf\n", numerator1-numerator2);
    printf("denominator= %Lf\n", denominator);
    return 0;
    */
}
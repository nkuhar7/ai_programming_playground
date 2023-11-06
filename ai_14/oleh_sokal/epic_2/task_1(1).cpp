#include <iostream>
#include <cmath>

int main() {
float a,b,c,d;
a=1000;
b= 0.0001;
d= (2*pow(b,2)+ 6*a*b) / (pow(b,2) - 3*pow(a,2));
c=1-d; 
printf("результат виразу:%.50f", c);
    return 0;
}
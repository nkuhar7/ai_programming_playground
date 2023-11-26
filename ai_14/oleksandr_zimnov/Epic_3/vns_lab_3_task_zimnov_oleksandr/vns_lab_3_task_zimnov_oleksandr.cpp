#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int n=10;
    double k=(0.8-0.1)/n, sum_a=0, x_a=0;
    for(int i=1; i<=n; i++){
        x_a+=k;
        sum_a+=pow(-1,i+1)*((pow(x_a,2*i))/(2*i*(2*i-1)));
    }
    cout<<"a) Sum of number for n=10: "<<sum_a<<endl;
    double x_b=0, sum_b=0;
    int temp=0;
    do{
        x_b+=k;
        temp++;
        sum_b+=pow(-1,temp+1)*((pow(x_b,2*temp))/(2*temp*(2*temp-1)));
    }
    while(sum_b>=0.0001);
    cout<<"b) Sum of number epsilon=0.0001: "<<sum_b;
}

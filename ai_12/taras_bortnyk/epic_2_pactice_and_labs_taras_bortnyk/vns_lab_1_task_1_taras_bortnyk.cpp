#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
    int n, m;
  cout<<"Print number for m \n";
  cin>>m;
  cout<<"Print number for n \n";
  cin>>n;

  cout<<"Result of the first expression: "<<((++n)*(++m))<<endl;
  cout<<"Result of the second expresion:  "<<boolalpha<<((m++)<(n))<<endl;
  cout<<"Result of the third expresion:  "<<boolalpha<<((n++)>(m))<<endl;
  return 0;
}
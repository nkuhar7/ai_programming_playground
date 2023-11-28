#include <stdio.h>
#include <iostream>
#include<cmath>

using namespace std;

int main() {
  int n, sum = 0;
  do {
    sum += n;
    n++;
  } while (n <= 10);

cout<<"The sum of the elements from 1 to 10 is equal to 55: "<<sum<<endl;

  return 0;
}
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
  int a = 1000;
  double b = 0.0001;
  float g = 0;
  double c = pow(a + b, 3);
  double d = pow(a, 3) + (3 * pow(a, 2) * b);
  double e = 3 * a * pow(b, 2);
  double f = pow(b, 3);
  g = (c - d) / (e + f);

  cout << "Result is: " << g << endl;
  return 0;
}

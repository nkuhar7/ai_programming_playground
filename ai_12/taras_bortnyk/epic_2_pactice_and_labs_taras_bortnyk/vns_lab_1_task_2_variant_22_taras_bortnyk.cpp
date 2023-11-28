#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float n = 1.0f, sum = 0.0f;
  do {
    sum += n;
    n++;
  } while (n <= 10);

  cout << "The sum of the elements from 1 to 10 is equal to: " << sum << endl;

  return 0;
}

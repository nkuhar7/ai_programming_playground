#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> myVector(n);
int yellow; 
int blue;
int numberOfchanges = 0;
  myVector[10000] = {0};

    
    cin >> yellow;

    for (int i = 0; i < n; i += (2 * yellow)) {
        for (int j = i; j < i + yellow && j < n; j++) {
            myVector[j] += 1;
        }
    }

   

    cin >> blue;

    for (int i = 0; i < n; i += (2 * blue)) {
        for (int j = i; j < i + blue && j < n; j++) {
            myVector[j] += 2;
        }
    }
    
    for (int k = 0; k < n-1; k++) {
        if (myVector[k] != myVector[k+1]) {
            numberOfchanges++;
        }
    }
    cout << "" << numberOfchanges << endl;

    return 0;
}
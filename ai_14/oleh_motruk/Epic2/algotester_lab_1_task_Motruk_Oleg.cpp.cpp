#include <iostream>
#include <string>

using namespace std;

int main() {
    const int n = 5;
    long long numbers[n];
    string check;

    cout << "Enter a side of cube:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        if (numbers[i] <= 0) {
            cout << "ERROR" << endl;
            exit(0);
        }
    }

    for (int i = 0; i < n; i++) {
        if (numbers[i] > numbers[i -1] ){
            check = "LOSS";
        }
        else if (numbers[i] < numbers[i - 1]){
            check = "WIN";
        }
    }

    
    cout << check << endl;

    return 0;
}

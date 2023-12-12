#include <iostream>
using namespace std;

void readArray(int arr[], int& n) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int countSimilar(int arr[], int n, int arr1[], int n1) {
    int similar = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n; j++) {
            similar += (arr1[i] == arr[j]);
        }
    }
    return similar;
}

void compareArrays() {
    int arr[100], arr1[100];
    int n, n1;

    readArray(arr, n);
    readArray(arr1, n1);

    int similar = countSimilar(arr, n, arr1, n1);
    int unique = n + n1 - similar;

    cout << similar << endl << unique << endl;
}

int main() {
    compareArrays();
    return 0;
}

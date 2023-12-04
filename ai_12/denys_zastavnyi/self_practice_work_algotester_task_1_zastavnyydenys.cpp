#include<iostream>
#include <iostream>
using namespace std;

int main() {
    int n, a, totalCookies = 0;

    cout << "Enter the number of cookie packs: ";
    cin >> n;

    cout << "Enter the number of cookies in each pack:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Pack " << (i + 1) << ": ";
        cin >> a;
        totalCookies += (a - 1);
    }

    cout << "Total cookies: " << totalCookies << endl;

    return 0;
    }
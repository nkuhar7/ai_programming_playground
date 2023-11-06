#include <iostream>

using namespace std;
int main() {
    int health, mana;
    int allH = 0, allM = 0;
    bool usedB = false; 
    cin >> health>>mana;
    for (int i = 0; i < 3; i++) {
        int usedH, usedM;

        cin >> usedH>>usedM;

        if (usedH > 0 && usedM> 0) {
            usedB = true;
        }

        allH += usedH;
        allM += usedM;

        health -= usedH;
        mana -= usedM;
    }

    if (usedB) {
        cout << "NO" << endl;
    } else if (allH > 0 || allM > 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int fgcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int flcm(int k, ...) {
    int *p = &k;
    int lcm = 1;

    for (; k != 0; k--) {
        p += 2;
        int num = *p;
        int gcd = fgcd(lcm, num);
        lcm = (lcm * num) / gcd;
    }

    return lcm;
}

int main() {
    int result1 = flcm(3, 2, 3, 4);
    int result2 = flcm(4, 5, 10, 15, 20);
    int result3 = flcm(5, 7, 14, 21, 28, 35);

    cout << "НСК для 2, 3, та 4: " << result1 << endl;
    cout << "НСК для 5, 6, 7, та 8: " << result2 << endl;
    cout << "НСК для 9, 10, 11, 12, та 13: " << result3 << endl;

    return 0;
}

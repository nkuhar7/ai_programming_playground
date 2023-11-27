#include <iostream>

using namespace std;

int main() {

    int h1, h2, h3, h4;
    cout << "Enter height of nizhka: ";
    cin >> h1 >> h2 >> h3 >> h4;

    int hmin = h1;
    if (h2 < hmin) hmin = h2;
    if (h3 < hmin) hmin = h3;
    if (h4 < hmin) hmin = h4;

    int hmax = h1;
    if (h2 > hmax) hmax = h2;
    if (h3 > hmax) hmax = h3;
    if (h4 > hmax) hmax = h4;

    if (hmax >= 2 * hmin) {
        cout << "NO" << endl;
        return 0;
    }

    int d1, d2, d3, d4;
    cout << "Enter height of vidpil: ";
    cin >> d1 >> d2 >> d3 >> d4;

    if (d1 > h1 || d2 > h2 || d3 > h3 || d4 > h4) {
        cout << "ERROR" << endl;
        return 0;
    }

    h1 -= d1;
    h2 -= d2;
    h3 -= d3;
    h4 -= d4;

    if (hmax >= 2 * hmin) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}

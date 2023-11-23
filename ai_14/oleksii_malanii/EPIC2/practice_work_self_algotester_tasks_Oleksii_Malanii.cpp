#include <iostream>
using namespace std;
int main() {
    string win = "YES";
    long long h, m;
    long long spell_h[3], spell_m[3];
    cin >> h >> m;
    for (int i = 0; i < 3; ++i) cin >> spell_h[i] >> spell_m[i];
    for (int i = 0; i < 3; ++i) {
        if (spell_h[i] != 0 && spell_m[i] != 0) win = "NO";
        h -= spell_h[i];
        m -= spell_m[i];
    }
    if (h < 0 || m < 0) win = "NO";
    cout << win;
    return 0;
}
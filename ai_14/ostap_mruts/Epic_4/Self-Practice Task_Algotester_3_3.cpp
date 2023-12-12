#include <iostream>
#include <string>

using namespace std;

void compress(const string& str) {
    int count = 1;
    for (int i = 0; i < str.length(); ++i) {
        if (i + 1 < str.length() && str[i] == str[i + 1]) {
            count++;
        } else {
            cout << str[i];
            if (count > 1) {
                cout << count;
            }
            count = 1;
        }
    }
}

int main() {
    string str;
    cin >> str;

    compress(str);

    return 0;
}

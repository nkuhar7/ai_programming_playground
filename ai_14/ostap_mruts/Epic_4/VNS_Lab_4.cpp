#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> circular_array = {1, 5, 12, 97, 18, 36, 77, 19, 56, 23};

    cout << "Початкове кільце: ";
    for (int i = 0; i < circular_array.size(); ++i) {
        cout << circular_array[i] << " ";
    }
    cout << endl;

    int K = 3;

    cout << "Елементи від K до K+1: ";
    for (int i = K; i <= K + 1; ++i) {
        cout << circular_array[i % circular_array.size()] << " ";
    }
    cout << endl;

    circular_array.push_back(circular_array[0]);
    circular_array.push_back(circular_array[circular_array.size() - 2]);

    vector<int> updated_array;
    for (int num : circular_array) {
        if (num % 2 == 0) {
            updated_array.push_back(num);
        }
    }

    cout << "Оновлене кільце без непарних елементів: ";
    for (int i = 0; i < updated_array.size(); ++i) {
        cout << updated_array[i] << " ";
    }
    cout << endl;

    cout << "Елементи від K до K+1 після змін: ";
    for (int i = K; i <= K + 1; ++i) {
        cout << updated_array[i % updated_array.size()] << " ";
    }
    cout << endl;

    return 0;
}

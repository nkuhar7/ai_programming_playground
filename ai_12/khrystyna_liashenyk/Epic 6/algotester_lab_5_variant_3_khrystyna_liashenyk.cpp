#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int N, M, x, y;
    cin >> N >> M >> x >> y;

    vector<int> matrix(N * M);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            matrix[i * M + j] = abs(i - (x - 1)) + abs(j - (y - 1));
        }
    }

    int max_val = 0;
    for (int i = 0; i < N * M; ++i) {
        if (max_val < matrix[i])
            max_val = matrix[i];
    }

    for (int i = 0; i < N * M; ++i) {
        cout << abs(matrix[i] - max_val) << " ";
        if ((i + 1) % M == 0)
            cout << endl;
    }

    return 0;
}



#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;

    vector<int> r(N);
    int a, b, c;
    for (int i = 0; i < N; i++) {
        cin >> r[i];
    }

    
    cin >> a >> b >> c;

    for (int i = 0; i < N; i++) {
        if (r[i] == a || r[i] == b || r[i] == c) {
            r.erase(r.begin() + i);
            i--;
            N--;
        }
    }
    int M = N - 1;
    vector<int> sums(M);
    for (int i = 0; i < M; i++) {
        sums[i] = r[i] + r[i + 1];
        cout << sums[i] << " ";
    }
    cout << endl;

    return 0;
}

    

        
        



    
    



#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> array(N);
    for (int i=0; i<N; ++i) {
        cin >> array[i];
    }

    int drone1=1, drone2=N;

    while(true) {
        if (drone1==drone2) {
            cout << drone1 << " " << drone2 << endl;
            cout << "Collision";
            break;
        } else if (drone1>drone2) {
            cout << drone1 << " " << drone2 << endl;
            cout << "Miss";
            break;
        } else if ((drone1==drone2-1)) {
            cout << drone1 << " " << drone2 << endl;
            cout << "Stopped";
            break;
        }

        drone1 += array[drone1-1];
        drone2 -= array[drone2-1];
    }
    return 0;
}


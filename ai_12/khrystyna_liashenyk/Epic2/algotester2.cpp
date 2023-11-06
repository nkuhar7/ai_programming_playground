#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    int dr1 = 1; 
    int dr2 = n; 

    while(true){
        int di1 = array[dr1 - 1];
        int di2 = array[dr2 - 1];

        dr1 += di1;
        dr2 -= di2;

        if (dr1 == dr2) {
            cout<< dr1<<" "<< dr2 << endl;
            cout << "Collision";
            break;
        } else if (abs(dr1 - dr2) == 1) {
            cout<< dr1<<" "<< dr2 << endl;
            cout << "Stopped";
            break;
        } else if ( dr1 > dr2) {
            cout<< dr1<<" "<< dr2<< endl;
            cout << "Miss";
            break;
        }
    }

    return 0;
}

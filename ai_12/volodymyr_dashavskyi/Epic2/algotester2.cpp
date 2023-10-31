#include <iostream>
#include <vector>

using namespace std;

int main() {
        int N;
        cout<<"Enter array size: \n";
    cin >> N;

    if (N>1000 || N<1){

        cout<< "Invalid array size ";
        return 0;
    }

    int elements; 
     cout<<"Enter ellements for array: \n";
    for (int i = 0; i < N; i++) {
        cin >> elements[i];
        if(i>5){
     cout<<"Your ellement must be on the scale of 1 to 5! \n";
     
     return 0;
     }
    }
    
    
    int drone1 = 1;
    int drone2 = N;

    while (true) {
        drone1 += elements[drone1 - 1];
        drone2 -= elements[drone2 - 1];

        if (drone1 > drone2) {
            cout << drone1 << " " << drone2 << endl;
            cout << "Miss" << endl;
            break;
        }

        if (drone1 == drone2++) {
            cout << drone1 << " " << drone2 << endl;
            cout << "Stopped" << endl;
            break;
        }

        if (drone1 == drone2) {
            cout << drone1 << " " << drone2 << endl;
            cout << "Collision" << endl;
            break;
        }
    }

    return 0;
}
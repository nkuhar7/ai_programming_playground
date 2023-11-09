#include <iostream>
using namespace std;

int main(){
    long long cube[5];
    for(int i=0; i<5; i++){
        cin >> cube [i];
      
        if (cube[i] <= 0) {
            cout << "ERROR";
            return 0;
        }
        else if(i>=1 && cube[i]>cube[i-1]){
            cout << "LOSS";
            return 0;
        }
    }

    cout << "WIN";
    
     return 0;
}



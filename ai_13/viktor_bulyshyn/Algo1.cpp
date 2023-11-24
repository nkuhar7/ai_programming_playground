#include <iostream>
using namespace std;

int main() {
    long long int playerM, playerH;
    cout <<"Enter your Mana"<< endl;
    cin >> playerM;
    
    cout <<"Enter your HP"<< endl;
    cin >> playerH;
    cout <<endl;
    
    bool Life = false;

    for (int round = 0; round < 3; round++) {
        long long int roundImpactM, roundImpactH;
        cout <<"Mana and Hp costs"<<endl;
        cin >> roundImpactM >> roundImpactH;

        if (roundImpactM > 0 && roundImpactH > 0) {
    Life = true;
    playerH -= roundImpactH;
    playerM -= roundImpactM;
} else {
    cout<<"No";
break;
}

    }

   if (Life && playerH > 0 && playerM > 0) {
    cout << "Yes";
} else {
    cout << "No";
}


    return 0;
}
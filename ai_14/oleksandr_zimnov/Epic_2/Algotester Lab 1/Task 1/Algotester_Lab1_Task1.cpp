#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int H, M, temp1, temp2, hitpoints=0, mana=0;
    bool end=true;
    cout << "Enter your hitpoints: ";
    cin >> H;
    while(H<1 || H>pow(10,12)){
        cout << "Enter your hitpoints correct (from 1 to 10^12): ";
        cin >> H;
    }
    cout << "Enter your mana: ";
    cin >> M;
    while(M<1 || M>pow(10,12)){
        cout << "Enter your mana correct (from 1 to 10^12): ";
        cin >> M;
    }
    for(int i=1; i<=3; i++){
        cout << "Enter amount of hitpoints you will spend on turn " << i << ": ";
        cin >> temp1;
    while(temp1<0 || temp1>pow(10,12)){
        cout << "Enter your hitpoints correct (from 0 to 10^12): ";
        cin >> temp1;
    }
        hitpoints+=temp1;
        cout << "Enter amount of mana you will spend on turn " << i << ": ";
        cin >> temp2;
    while(temp2<0 || temp2>pow(10,12)){
        cout << "Enter your mana correct (from 0 to 10^12): ";
        cin >> temp2;
    }
        mana+=temp2;
    if(temp1!=0 && temp2!=0){
        end=false;
    }}
    if(H-hitpoints>=0 && M-mana>=0 && end==true){
        cout << "YES";
    }else{
        cout << "NO";
    }
}
#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int a1, a2, a3, a4, a5;
    do{
    cout<<"Enter the volume of the first cube: ";
    cin>>a1;
    }
    while(a1<-pow(10,12) || a1>pow(10,12));
    do{
    cout<<"Enter the volume of the second cube: ";
    cin>>a2;
    }
    while(a2<-pow(10,12) || a2>pow(10,12));
    do{
    cout<<"Enter the volume of the thirt cube: ";
    cin>>a3;
    }
    while(a3<-pow(10,12) || a3>pow(10,12));
    do{
    cout<<"Enter the volume of the fourth cube: ";
    cin>>a4;
    }
    while(a4<-pow(10,12) || a4>pow(10,12));
    do{
    cout<<"Enter the volume of the fifth cube: ";
    cin>>a5;
    }   
    while(a5<-pow(10,12) || a5>pow(10,12)); 
    if(a1<=0 || a2<=0 || a3<=0 || a4<=0 || a5<=0){
        cout<<"ERROR";
    }else if(a1>=a2 && a2>=a3 && a3>=a4 && a4>=a5){
        cout<<"WIN";
    }else{
        cout<<"LOSS";
    }
}
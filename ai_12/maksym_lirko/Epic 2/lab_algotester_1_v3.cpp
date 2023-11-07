#include<iostream>
using namespace std;

int main()
{    
    int a[5];
    cout<<"Enter numbers in array: "<<endl;
    for(int i=0; i<5; i++)
    {
        
        cin>>a[i]; 
       
        if (a[i]<=0)
        {
            cout<<"ERROR"<<endl;
            return 0;
        }
    }
     if (a[0]>=a[1]&&a[1]>=a[2]&&a[2]>=a[3]&&a[3]>=a[4])
    {
        cout<<"WIN"<<endl;
    }
    else{
        cout<<"LOSS"<<endl;
    }
     
    return 0;
}
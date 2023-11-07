#include <iostream>

using namespace std;

int main()
{
    long long stick1,stick2,stick3,stick4,slice1,slice2,slice3,slice4;
    int i;
    long long sticks[4]={};    
    long long slices[4]={};

    for( i =0;i<4;i++)
    {
        cout<<"Enter stick №"<<i+1<<endl;
        cin>>sticks[i];
        if(sticks[i]<0 || sticks[i]>1000000000000)
        {
        cout<<"Your input is anvalid";
        return -1;
        }
    }
    for( i =0;i<4;i++)
    {
        cout<<"Enter slice №"<<i+1<<endl;
        cin>>slices[i];
        if(slices[i]<0 || slices[i]>1000000000000)
        {
        cout<<"Your input is anvalid";
        return -1;
        }
    }

    long long sticks_new[]={sticks[0]-slices[0],sticks[1]-slices[1],sticks[2]-slices[2],sticks[3]-slices[3]};
    long long stick_max=sticks_new[0],stick_min=sticks_new[0];
    
    for( i =1;i<4;i++)
    {
        if(sticks_new[i]>stick_max)
        {
        stick_max=sticks_new[i];
        }
    }
    for( i =1;i<4;i++)
    {
        if(sticks_new[i]<stick_min)
        {
        stick_min=sticks_new[i];
        }
    }

    for( i = 0;i<4;i++){
        cout<<sticks[i]<<" ";
    }
    cout<<endl;
    for( i = 0;i<4;i++){
        cout<<slices[i]<<" ";
    }
    
    
    cout<<endl;
    
    for( i = 0;i<4;i++)
    {
        cout<<sticks_new[i]<<" ";
    }
    
    cout<<endl<<stick_max<<endl<<stick_min;
   
    cout<<endl;
   
    bool isTableGood;
    if(stick_max>=stick_min*2)
    {
        bool isTableGood = false;
    }


    if(isTableGood != false && stick_min!=0)
    {
        cout<<"YES";
    }
    else if(sticks_new[1]<0 || sticks_new[2]<0 || sticks_new[3]<0 || sticks_new[0]<0 )
    {
        cout<<"ERROR";
    }
    else
    {
        cout<<"NO";
    }
     
    
}
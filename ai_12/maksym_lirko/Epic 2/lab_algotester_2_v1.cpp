#include<iostream>
using namespace std;

int main(){

    int N,m;

        cout<<"Enter the long of road: "<<endl;
        cin>>N;

    int *r= new int[N];
    
    cout<<"Enter every elemenst of road: "<<endl;

    for (int i = 0; i < N; i++)
    {
        cin>>r[i];
    }

    int min1;
    int min2;

        for (int i = 0; i < N; i++)
        {
          if(r[i]<min1)
          {
            min2=min1;
            min1=r[i];
          }
          else if(r[i]<min2)
          {
            min2=r[i];
          }
        }

        int max1;
        int max2;

        for (int i = 0; i < N; i++)
        {
            if (r[i]>max1)
            {
                max2=max1;
                max1=r[i];
            }
            else if(r[i]>max2)
            {
                max2=r[i];
            }
            
        }
        
        if (max1-min2<max2-min1)
        {
            m=max1-min2;
            cout<<m;
        }
        else
        {
            m=max2-min1;
            cout<<m;
        }
        
        return 0;
}
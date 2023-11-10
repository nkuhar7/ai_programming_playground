#include <iostream>
using namespace std;

int main ()
{
   int h1, h2, h3, h4;
   int d1, d2, d3, d4;

   cin>>h1;
   cin>>h2;
   cin>>h3;
   cin>>h4;

   cin>>d1;
   cin>>d2;
   cin>>d3;
   cin>>d4;

   int t1=h1-d1, t2=h2-d2, t3=h3-d3, t4=h4-d4;
   if (t1>h1||t2>h2||t3>h3||t4>h4)
   {
      cout<<"ERROR"<<endl;
   } else if (t1<= h2/2 && t2<=h3/2 && t3<=h4/2)
   {
      cout<<"NO"<<endl;
   } else if (t1>0 && t2>0 && t3>0 && t4>0 && t1==t2 && t2==t3 && t3==t4)
   {
      cout<<"YES"<<endl;
   } else
   {
      cout<<"NO"<<endl;
   }
   
   return 0;
}
#include <iostream>
using namespace std;
int main(){
    float n;
    float m;
    cout<<"n = ";
    cin>>n;
    cout<<"m = ";
    cin>>m;
    float a = m+--n;
    float b = m++<++n;
    float c = n--<--m;
    cout<<"Results are : "<<a<<endl<<b<<endl<<c<<endl;
    
    return 0;


}
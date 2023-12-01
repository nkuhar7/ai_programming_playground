#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a 6 figure number: "<<endl;
    cin>>a;

    if(a < 100000 || a > 999999)
    {
        cout<<"Error. Enter a 6 figure number: "<<endl;
        return 1;
    }
    int symbol6 = a %10;
    int symbol5 = (a / 10) % 10;
    int symbol4 = (a / 100) % 10;
    int symbol3 = (a / 1000) % 10;
    int symbol2 = (a / 10000) % 10;
    int symbol1 = (a/ 100000) % 10;

    if(symbol1 + symbol2 + symbol3 == symbol4 + symbol5 + symbol6)
    {
        cout<<"That is a lucky number!!"<<endl;
    } else
    {
        cout<<"Sorry, that is not a lucky number :("<<endl;
    }
    return 0;
}
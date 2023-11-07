#include <iostream>
#include <cmath>
using namespace std;

int main()
{
long long H, M, hi, mi;

    cout<<"Хітпойнти та мана персонажа \n";
    cin>>H>>M;
    cout<<"Витратити хітпоінтів та мани \n";

    for (int i=0; i<3; i++) 
    {
        cin>>hi>>mi;
if (H>pow(10, 12)||H<1||M>pow(10, 12)||M<1||hi>pow(10, 12)||hi<0||mi>pow(10, 12)||mi<0)
{
    cout<<"Введені данні не входять у обмеження";
    return 0;
}
        else if (hi<=H)
        {
            H-=hi;
        }
        else if (mi<=M)
        {
            M-=mi;
        }
        else 
        {
            cout << "NO\n";
        
        return 0;
        }
    }

    if (H>0 && M>0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
return 0;
}
/*#include <iostream>

int main()
{

    long long a[5];
    for (int i = 0; i < 5; i++)
    {

        std::cin >> a[i];
        if(a[i] <= 0)
        {
            std::cout<< "ERROR";
            return 0;
            
        }
        if(i >= 0 && a[i] > a[i-1])
        {
            std::cout << "LOSS";
            return 0;    
        }    
    }
    std::cout << "WIN";
    return 0;
}
*/
#include <iostream>
using namespace std;

int main()
{
    
    
    long long a[5];
    for (int i = 0; i < 5; i++)
    {
       cin >> a[i];
       if(a[i] <= 0)
        {
            cout<< "ERROR";
            return 0;    
        }
    
        else if(i>=1 && a[i] > a[i-1])
        {
            cout<<"LOSS";
            return 0;
        }          
    }
cout<< "WIN";
return 0;
}
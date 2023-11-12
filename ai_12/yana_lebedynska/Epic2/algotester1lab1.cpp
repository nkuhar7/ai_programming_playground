#include <iostream>
#include <cmath>
using namespace std;

//Варіант 1

int main()
{
    long long health, magic, h1, h2, h3, m1, m2, m3;

    cin >> health >> magic;
    cin >> h1 >> m1;
    cin >> h2 >> m2;
    cin >> h3 >> m3;

    while(health <= 1 || health >= pow(10, 12))
    {
        cout << "The number of health isn't correct\n";
        cout << "Enter correct number: ";
        cin >> health;
    }
        
    while(magic <= 1 || magic >= pow(10, 12))
    {
       cout << "The number of magic isn't correct\n";
       cout << "Enter correct number: ";
       cin >> magic;
    }


    while(h1 < 0 || h1 > pow(10, 12))
    {
        cout << "The number of h1 isn't correct\n";
        cout << "Enter correct number: ";
        cin >> h1; 
    }

    while(m1 < 0 || m1 > pow(10, 12))
    {
       cout << "Tht number of m1 isn't correct\n";
       cout << "Enter correct number: ";
       cin >> m1;
    }
    


    while(h2 < 0 || h2 > pow(10, 12))
    {
        cout << "The number of h2 isn't correct\n";
        cout << "Enter correct number: ";
        cin >> h2; 
    }

    while(m2 < 0 || m2 > pow(10, 12))
    {
       cout << "Tht number of m2 isn't correct\n";
       cout << "Enter correct number: ";
       cin >> m2;
    }

    

    while(h3 < 0 || h3 > pow(10, 12))
    {
        cout << "The number of h3 isn't correct\n";
        cout << "Enter correct number: ";
        cin >> h3; 
    }

    while(m3 < 0 || m3 > pow(10, 12))
    {
       cout << "Tht number of m3 isn't correct\n";
       cout << "Enter correct number: ";
       cin >> m3;
    }
    

    if(h1!=0 && m1!=0)
    {
        cout << "NO";
    }
    else if(h2!=0 && m2!=0 )
    {
        cout << "NO";
    }
    else if(h3!=0 && m3!=0 )
    {
        cout << "NO";
    }
    else if(h1 > health || h2 > health || h3 > health)
    {
        cout << "NO";
    }
    else if(m1 > health || m2 > health || m3 > health)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    
    return 0;

}

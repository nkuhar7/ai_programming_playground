/*
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    int Ri, a, b, c;

    cout << "Enter the amount of numbers of the array: ";
    cin >> N;
    int* r = new int[N];

    while(N <= 0 || N >= pow(10, 5) + 1)
    {
        cout << "Your number isn't correcrt!\n";
        cout << "Enter the amount of numbers of the array: ";
        cin >> N;
    }

    
   
    for(int Ri = 0; Ri < N; Ri++)
    {

        do
        {
            cout << "Enter the integer number of the array:";
            cin >> r[Ri];

            if(r[Ri] <= -1 || r[Ri] >= pow(10, 5) + 1)
            {
            cout << "You entered the wrong number!";
            }
        }    
        while(r[Ri] <= -1 || r[Ri] >= pow(10, 5) + 1);
    }

    
    cout << "Enter three numbers you want to delete from the array: ";
    cin >> a >> b >> c;

    while(a != r[Ri])
    {
        cout << "You entered the wrong number!\n";
        cout << "Try again: ";
        cin >> a;
    }



/*
    int Delete = -1;
    for(int Ri = 0; Ri < N; Ri++)
    {
        if(a == Delete)
        {
            Ri = Delete;
            break;
        }
    }
*/




#include <iostream>

int main()
{
    int r[100]={0};
    unsigned N;
    int a, b, c;

    cout << "Enteer the amount of numbers of the array: ";
    cin >> N;
    int* r = new int[N];



    cout << "Enter the numbers of array: ";
    cin >> a >> b >> c;

    for(int i=0; i<N; i++)
    {
        if(r[i]==a || r[i]==b || r[i]==c)
        {
            
        }
    }
}
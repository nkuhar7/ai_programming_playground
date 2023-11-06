#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter 2 numbers: " << endl;
    cin >> n >> m;
    
    int num1 = n---m;
    cout << "n - m = " << num1 << endl;
    
    if (m-- < n)
    {
        cout << "m--<n = true" << endl;
    }
    else
    {
        cout << "m--<n = false" << endl;
    }

    if (n++ > m)
    {
        cout << "n++>m = true" << endl;
    }

    else
    {
        cout << " n++>m = false" << endl;
    }


    return 0;
}
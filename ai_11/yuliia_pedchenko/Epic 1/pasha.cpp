#include <iostream>

using namespace std;
int main()
{

    int n;
    int m;
    cout << "your min number" << "\n";
    cin >> n;
    cout << "your max number" << "\n";
    cin >> m;
    
    for (int i = n-1; i <= m; i++)
    {
       
        for (int j = n-1; j <= m; j++)
        {
            // <3
            cout << " ";
            if (i==n-1 && j==n-1) {
                cout << "*";
            }
            else if(i==n-1) {
                cout << j;
            }
            else if (j==n-1) {
                cout << i;
            }
            else {
                 cout << i*j;
            }
            
        }
        cout << endl;
    }
    
}
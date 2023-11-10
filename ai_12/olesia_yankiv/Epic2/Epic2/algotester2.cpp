#include <iostream>
using namespace std;
int main() {
    const int maxSize = 100;
    int arr[maxSize];
    int n, m = 0;
    cin >> n;

    for (int i = 0; i < n; ++i) 
    {
        cin >> arr[i];
    }

    
    int deleteNums[3];
    for (int i = 0; i < 3; ++i) 
    {
        cin >> deleteNums[i];
        for (int j = 0; j < n; ++j) 
        {
            if (arr[j] == deleteNums[i]) 
            {
                
                for (int k = j; k < n - 1; ++k) 
                {
                    arr[k] = arr[k + 1];
                }
               
                --n;
                --j; 
            }
        }
    }

    
    int arrayNew[maxSize];
    for (int i = 0; i < n - 1; ++i)
    {
        arrayNew[i] = arr[i] + arr[i + 1];
    }
    m = n - 1;
    
   cout << m << "\n";
    for (int i = 0; i < m; ++i) 
    {
        cout << arrayNew[i] << " ";
    }

    return 0;
}





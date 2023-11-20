#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, M;
    cin >> N;
    double* array1 = new double[N];
    for (int i = 0; i < N; i++)
    {
        cin >> array1[i];
    }
    cin >> M;
    double* array2 = new double[M];
    for (int i = 0; i < M; i++)
    {
        cin >> array2[i];
    }
    
    int k = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (array1[i] == array2[j])
            {
                k++;
            }
        }
    }
    int f = N + M - k;
    cout << k << endl;
    cout << f;
        
}
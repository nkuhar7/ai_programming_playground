#include <iostream>
#include <algorithm>
using namespace std;

void deleteRowFromMatrix(int **matrix, int n, int m, int startInd, int endInd);

// const int h = 4, w = 4;
// int newArr[h][w] = {
//     {1, 2, 3, 4},
//     {1, 2, 3, 4},
//     {1, 2, 3, 4},
//     {1, 2, 3, 4},
// };

int main()
{
    int **arr;
    int n, m;

    cout << "Enter size of matrix: ";
    cin >> n >> m;

    arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            int input;
            cin >> input;
            arr[i][j] = input;
        }
    }

    deleteRowFromMatrix(arr, n, m, 2, 3);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<<"\n";
    }

    return 0;
}

void deleteRowFromMatrix(int **arr, int n, int m, int start, int end)
{
    if (start >= n || end || start < 0 || end < 0)
        return;

    int lastRow = n - 1;
    for (int i = start; i < end; i++)
    {
        for (int j = 0; j < m; j++)
            arr[i][j] = 0;
        swap(arr[i], arr[lastRow--]);
    }
}
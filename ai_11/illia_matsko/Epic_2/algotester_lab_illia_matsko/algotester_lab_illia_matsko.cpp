#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<long> arr;
    long k;

    for (int i = 0; i < 5; i++)
    {
        cin >> k;
        if (i > 0 && k > arr[i - 1])
        {
            cout << "LOSS";
            return 0;
        }
        if (k <= 0)
        {
            cout << "ERROR";
            return 0;
        }

        arr.push_back(k);
    }

    cout << "WIN";
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    A = A / C;
    B = B / C;

    if (A > B)
    {
        cout << A << endl;
    }
    else
    {
        cout << B << endl;
    }

    return 0;
}
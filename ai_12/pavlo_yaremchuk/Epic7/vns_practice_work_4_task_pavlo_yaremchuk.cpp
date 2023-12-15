#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int two;

    cout << "степінь:" << " степінь двійки:" << endl;

    for (int i = 0; i < 11; ++i)
    {
        two = pow(2, i);
        cout << i << "\t " << two << endl;
    }

    return 0;
}
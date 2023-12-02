#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    
    int squaresAmount;
    squaresAmount = n*(n + 1)*(2 * n + 1)/6;

    cout<<squaresAmount<<endl;

    return 0;
}

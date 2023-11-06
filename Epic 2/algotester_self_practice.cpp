#include<iostream>
using namespace std;

int main() {
    int n, n1=0;
    cin >> n;  
    if (1<=n || n<=1000000000)
    {
         int money[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i < 9; i++) {
        n1 += n / money[i];

        n %= money[i];
    }

    cout <<"Minimum number of bills: "<<n1 << endl;
    }
    else
    {
        cout<<"ERROR"<<endl;
    }

    return 0;
}
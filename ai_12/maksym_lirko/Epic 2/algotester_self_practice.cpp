#include<iostream>
using namespace std;

int main() {
    int n, sum=0;
    cin >> n;  
    
         int bills[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i < 9; i++) {
       if (n >= bills[i]) {
            n -= bills[i];
            sum++;
    }
    }
    cout <<sum << endl;
    
    return 0;

}
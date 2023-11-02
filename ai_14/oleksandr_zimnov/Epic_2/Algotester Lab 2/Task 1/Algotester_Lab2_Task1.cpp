#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int N;
    cout << "Enter size of massive: ";
    cin >> N;
    while(N < 1 || N > pow(10, 5)){
        cout << "Enter size of massive again (it's must be from 1 to 100000): ";
        cin >> N;
    }
    int* r = new int[N];
    cout << "Enter numbers for the massive: " << endl;
    for (int i = 0; i < N; i++) {
        cout << "Enter " << i+1 << " number: ";
        cin >> r[i];
        while(r[i] < 0 || r[i] > pow(10, 5)){
            cout << "Enter " << i+1 << " number again (it's must be from 0 to 100000): ";
            cin >> r[i];
        }
    }
    for (int i = 0; i < N - 1; i++) {
    for (int j = 0; j < N - i - 1; j++) {
        if (r[j] > r[j + 1]) {
            int temp = r[j];
            r[j] = r[j + 1];
            r[j + 1] = temp;
        }
    }
}
if(r[N-1]-r[1]>r[N-2]-r[0] && N>2){
    cout << r[N-2]-r[0];
}else if(N>2){
    cout << r[N-1]-r[1];
}else if(N==2){
    cout << r[0];
}else{
    cout << r[N-1]-r[0];
}
    return 0;
}

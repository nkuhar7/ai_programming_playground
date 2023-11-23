#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;           

    for (int i = 0; i < n; i++)
    {
        if (n % 2 == 0) {
        cout << "Error\n";
        cin >> n;
    }
    }
    
vector<int> a(n);      
vector<int> b(n);

 for (int i = 0; i < n; i++) {
        cin >> a[i];
         if (a[i] > 2*n){
        cout << "Error\n";
        cin >> a[i]; }
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (b[i] > 2*n) {
        cout << "Error\n";
        cin >> b[i]; }
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++) {
         if (a[i] == a[i-1] || b[i] == b[i-1] || a[i] == b[i-1] || b[i] == a[i-1] || a[i] == b[i]) {    //тут помилка
        cout << "Error\n"; 
        return 0;
        } 
        }

int yourWins = 0;
int opponentWins = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {    //тут помилка
            yourWins++;
        } else if (a[i] < b[i]) {
            opponentWins++;
             }
    }
    if (yourWins > opponentWins) {
        cout << "Possible";
    } else if (yourWins < opponentWins) {
        cout << "Impossible";
      }    
    return 0;
}





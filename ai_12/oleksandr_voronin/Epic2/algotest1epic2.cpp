#include <iostream>
using namespace std;

int main() {
  long long int h1, h2, h3, h4;
  long long int d1, d2, d3, d4;
    
    //cout << "Type size of chair legs: ";
    cin >> h1 >> h2 >> h3 >> h4;

  
    cin >> d1;
    cin >> d2;
    cin >> d3;
    cin >> d4;

    long long int a1= h1-d1;
    long long int a2= h2-d2;
    long long int a3= h3-d3;
    long long int a4= h4-d4;
    
    long long int minLeg = min(min(min(h1, h2), h3), h4);
    long long int maxLeg = max(max(max(h1, h2), h3), h4);

    

    // Перевірка на ERROR
    if (d1 > h1 || d2 > h2 || d3 > h3 || d4 > h4) {
        cout << "ERROR" << endl;
    }
    // Перевірка чи ніжки не перевернуться
    else if (maxLeg >= 2 * minLeg) 
    {
        cout << "NO" << endl;
    }
    // Перевірка чи ніжки рівні чи ні
    else if(a1 == a2 && a2 == a3 && a3 == a4)
    {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
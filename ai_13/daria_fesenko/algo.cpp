#include <iostream>
using namespace std;


string result;
string sides(long long a1, long long a2, long long a3, long long a4, long long a5) {

    if (a1 <= 0 || a2 <=0 || a3 <=0 || a4 <=0 || a5 <=0){
        return "ERROR";
    }
    if (a2 > a1 || a3 > a2 || a4 > a3 || a5 > a4) {
        return "LOSS";  
    }
        return "WIN"; 
    }

int main() {

    long long a1, a2, a3, a4, a5;
    cout << "Enter 5 sides of cubes: ";
    cin >> a1 >> a2 >> a3 >> a4 >> a5;

    result = sides (a1, a2, a3, a4, a5);
    cout << "result: " << result << endl;
    return 0;
}






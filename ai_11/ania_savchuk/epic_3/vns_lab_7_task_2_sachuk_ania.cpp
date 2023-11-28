#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//для масиву цілих чисел знаходить мінімальний елемент;

int min_element ( int n, int a[ ]){
    int min=a[0];

    for (int i=1; i<n; i++){
        if (a[i]<min) min=a[i];
    }
    return min;
}

//для рядка знаходить довжину найкоротшого слова .
int shortest_word(string str){
    int len = INT_MAX;
    stringstream ss(str);
    string word;
    while (ss >> word) {
        if(word.length() < len){
            len = (int) word.length();
        }
    }
    return len;
}


int main(){
    double n=5;
    int a[]={10, 20, 30, 40, 50};
    cout << "Minimal element: " << min_element( 5, a ) << endl;
    string str;
    cout << "Please enter the string: " << endl;
    getline (cin, str);
    cout << "Length of the shortest word in the string: " << shortest_word(str) <<endl;
    return 0;
}



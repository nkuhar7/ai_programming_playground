#include <iostream> 
#include <string>
using namespace std;

void Show(int array[], int size){
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] < 0) count++;
        else continue;
    }
    cout << "\n\nAmount of negative elements of the array is: " << count << endl;
}

void Show(string str){
    int count = 0;
    int indicator;
    str += ' ';
    bool StartOfTheWord = false;
    int Size = str.size();
    for (int i = 0; i < Size; i++) {
        if (str[i] != ' ' && StartOfTheWord == false) {
            indicator = i;
            StartOfTheWord = true;
        }
        if (str[i] == ' ' && StartOfTheWord == true) {
            StartOfTheWord = false;
            if (str[indicator] == str[i - 1]) count++;
        }
    }
    cout << "\nAmount of words starting and ending with the same letter is: " << count;
}

int main(){
    int size;
    cout << "Enter length of array: ";
    cin >> size;
    int array[size];

    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << "   ";
    }
    Show(array, size);
    cout << endl;
    string sentence;
    cin >> sentence;
    Show(sentence);
    return 0;
}
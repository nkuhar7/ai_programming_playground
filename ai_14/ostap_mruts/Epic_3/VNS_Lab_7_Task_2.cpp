#include <iostream>
#include <climits>
#include <cstring>

using namespace std;

int findMin(const int arr[], int size) {
    if (size <= 0) {
        cout << "Array is empty" << endl;
        return INT_MIN; // Повертаємо мінімальне значення для int, щоб позначити помилку
    }

    int minVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int findShortestWordLength(const char* str) {
    if (str == nullptr || strlen(str) == 0) {
        cout << "Empty string" << endl;
        return 0; // Повертаємо 0 для позначення порожнього рядка
    }

    int shortestLength = INT_MAX;
    int currentWordLength = 0;
    int len = strlen(str);

    for (int i = 0; i <= len; ++i) {
        if (str[i] != ' ' && str[i] != '\0') {
            currentWordLength++;
        } else {
            if (currentWordLength < shortestLength && currentWordLength > 0) {
                shortestLength = currentWordLength;
            }
            currentWordLength = 0;
        }
    }
    return shortestLength;
}

int main() {
    // Приклад для знаходження мінімального елемента у масиві
    int intArray[] = {3, 7, -5, 2, 10, 1};
    int arraySize = sizeof(intArray) / sizeof(int);
    int minElement = findMin(intArray, arraySize);
    if (minElement != INT_MIN) {
        cout << "The minimum element is: " << minElement << endl;
    }

    // Приклад для знаходження довжини найкоротшого слова у рядку
    const char* sentence = "This is a sample sentence";
    int shortestWordLength = findShortestWordLength(sentence);
    if (shortestWordLength > 0) {
        cout << "The shortest word is: " << shortestWordLength << endl;
    }

    return 0;
}

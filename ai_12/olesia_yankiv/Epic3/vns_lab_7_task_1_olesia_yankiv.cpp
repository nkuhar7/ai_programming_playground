//1 variant

#include <iostream>
using namespace std;
// Функція sum приймає кількість аргументів та самі аргументи
int sum(int count, ...) {
    int result = 0;

// Створення вказівника ptr і встановлення його на початок аргументів
    int* ptr = &count;
    // Цикл, який проходить через аргументи та обчислює суму
    for (int i = 0; i < count; ++i) {
        result += *++ptr;
    }

    return result;
}

int main() {
    //Виклик сум та їх вивід
    int sum1 = sum(3, 1, 2, 3);
    int sum2 = sum(7, 1, 2, 3, 4, 5, 6, 7);
    int sum3 = sum(11, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11);

    cout << "Sum 1: " << sum1 <<endl;
    cout << "Sum 2: " << sum2 << endl;
    cout << "Sum 3: " << sum3 <<endl;

    return 0;
}

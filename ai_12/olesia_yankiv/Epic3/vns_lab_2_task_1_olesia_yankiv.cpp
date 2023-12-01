#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Ініціалізація змінних
    double epsilon = 0.0001;
    double sum = 0.0;
    double term = 0.0;
    int n = 2;
     // Цикл do-while, який виконується, поки значення поточного члена не задовольняє умову точності
    do {
        term = static_cast<double>(n) / pow(n - 1, 2);   // Обчислення поточного члена
        sum += term; //Додавання поточного члена до суми
        n++; // Збільшення номеру члена для обчислення наступного члена
    } while (abs(term) >= epsilon);
    // Виведення результату
    cout << "Sum of the series: " << sum << endl;

    return 0;
}

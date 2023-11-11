#include <iostream>
#include <cmath>
using namespace std;

// Функція для обчислення факторіалу
unsigned long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    double epsilon = 0.0001;
    double sum = 0.0;
    int n = 1;
    double an;

    do {
        // Обчислення an
        an = pow(factorial(n), 2) / pow(2, n + 2);
        
        // Додавання an до суми
        sum += an;
        
        n++;
    } while (an >= epsilon);

    cout << "Сума ряду з точністю ε=" << epsilon << " дорівнює: " << sum << endl;

    return 0;
}

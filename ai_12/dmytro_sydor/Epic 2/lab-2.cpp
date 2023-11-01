#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int fact(int f)
{
    if (f == 1)
    {
        return 1;
    }
    return f * fact(f - 1);
    // Функція обчислення факторіалу;
}
int main()
{
    int n;
    cout << "Write a number n: " << endl;
    cin >> n;
    cout << "\n";
    double a, r;

    for (int i = 1; i <= n; i++)
    {
        a = (pow(fact(i), 2)) / pow(2, pow(i, 2));
        // Обчислює по черзі кожен член ряду від 1 до n;
        r += a;
        // Обчислює суму членів ряду
        cout << setprecision(4) << a << endl;
        // Виводить число яке виходить в формулі в залежності від n;
    }

    cout << "\n Result is: " << setprecision(4) << r << endl;
    return 0;
}
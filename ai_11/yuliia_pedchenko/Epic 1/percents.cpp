#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double sum;
    double percent;
    int years;

    cout << "Введіть суму депозиту: ";
    cin >> sum;
    cout << "Введіь кількість років: ";
    cin >> years;
    cout << "Введіть процент: ";
    cin >> percent;

    double result = sum *pow((1 + percent * 0.01), years);

    printf("Ви отримаєте: %lf", result);
    return 0;
}
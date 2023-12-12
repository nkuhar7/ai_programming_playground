#include <iostream>
using namespace std;

int main()
{
    int start = 0; // початок діапазону
    int finish = 0; // кінець діапазону
    int sumUneven = 0;

    cout << "Введіть початок діапазону: ";
    cin >> start;
    cout << "Введіть кінець діапазону: ";
    cin >> finish;

    int i = start; // управляюча змінна

    while (i <= finish)
    {
        if (i % 2 != 0)
        {
            cout << i << "  "; // показати непарні числа через пробіл
            sumUneven += i; // накопичувати їх суму
        }
        i++;
    }

    cout << "\nСума непарних чисел у діапазоні від " << start << " до " << finish;
    cout << " = " << sumUneven << endl << endl;

    return 0;
}


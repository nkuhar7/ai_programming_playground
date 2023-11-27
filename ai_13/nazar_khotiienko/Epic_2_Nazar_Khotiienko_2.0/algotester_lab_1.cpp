#include <iostream>
using namespace std;
int main()
{
    unsigned long H, M; // мана та хітпоінти
    unsigned long h1, h2, h3, m1, m2, m3; //використання мана та хітпоінти
    cout << "Введіть кількість хітпоінтів та ману\n";
    cin >> H >> M;
    cout << "Введіть вартість 1 закляття\n";
    cin >> h1 >> m1;
    cout << "Введіть вартість 2 закляття\n";
    cin >> h2 >> m2;
    cout << "Введіть вартість 3 закляття\n";
    cin >> h3 >> m3;

    if (H - h1 - h2 - h3 == 0 or M - m1 - m2 - m3 == 0) // Перевірка додатньої суми
    {
        cout << "Game Over\n";
    }
    else if ((h1 and m1) or (h2 and m2) or (h3 and m3)) // Перевірка 2 чисел ((h1 > 0 and m1 > 0) or (h2 > 0 and m2 > 0) or (h3 > 0 and m3 > 0)) 
   {
        cout << "Game Over\n";
    }
    else
    {
        cout << "You'r Win\n";
    }

    return (0);
}
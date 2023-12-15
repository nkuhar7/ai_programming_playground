#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a1, a2, angle;
    double S;
    double pi = M_PI;
    cout << "Обчислення площі трикутника." << endl;
    cout << "Введіть (через пропуск) довжини двох сторін (см) трикутника > ";
    cin >> a1 >> a2;
    cout << "Введіть величину кута між сторонами трикутника > ";
    cin >> angle;
    double angleRadian;
    angleRadian = (pi * angle) / 180; 
    S = 0.5 * a1 * a2 * sin(angleRadian);
    cout << "Площа трикутника: " << S << " кв.см." << endl;


    cout << endl;
    int H, B, S2, count, bolt = 2;
    double V;
    cout << "Обчислення o6'єму ящика." << endl;
    cout << "Введіть (через пропуск) висоту, ширину i довжину (см) ящика > ";
    cin >> H >> B >> S2;
    V = H * B * S2;
    count = V / bolt;
    cout << "B ящику " << count << " болтів";

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    double vnesok;
    double time;
    double rate, suma;
    printf("Please enter deposit: ");
    scanf_s("%lf", &vnesok);
    suma = vnesok;
    printf("Please enter years: ");
    scanf_s("%lf", &time);
    printf("Please enter rate: ");
    scanf_s("%lf", &rate);
    string name;
    printf("Enter your name: ");
    cin >> name;

    for (int i = 0; i < time; i++)
    {
        suma = suma + (suma / 100 * rate);
    }
    printf("Hi %s, your summa = %f", name.c_str(), suma);

    return 0;
}

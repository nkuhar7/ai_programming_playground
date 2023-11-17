#include <iostream>

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
    char name[100];  
    printf("Enter your name: ");
    scanf_s("%s", name, _countof(name));


    for (int i = 0; i < time; i++)
    {
        suma = suma + (suma / 100 * rate);
    }
    printf("Hi %s, your summa = %f", name, suma);
    return 0;
}

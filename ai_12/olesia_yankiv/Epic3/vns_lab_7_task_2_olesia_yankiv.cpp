// 1 variant

#include <iostream>
using namespace std;

// Перевантажена функція для додавання цілих чисел
int add(int a, int b) 
{
    return a + b;
}

// Структура, яка представляє комплексне число
struct Complex 
{
    double real;         
    double imaginary;    
};

// Перевантажений оператор + для додавання комплексних чисел
Complex operator+(const Complex& c1, const Complex& c2) 
{
    Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

int main() 
{
    // Додавання цілих чисел
    int result = add(5, 3);
    cout << "Result of adding intigers: "<<result<< endl;

    // Додавання комплексних чисел
    Complex c1 = {2.5, 3.7};
    Complex c2 = {4.2, 6.9};
    Complex sum = c1 + c2;

    cout << "Result of adding complex numbers: " << sum.real << " + " << sum.imaginary << "i" <<endl;

    return 0;
}


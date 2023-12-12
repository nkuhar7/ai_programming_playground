#include <iostream>

// Клас для представлення комплексних чисел
class Complex {
public:
    double real;
    double imag;

    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Перевантажена функція для множення комплексних чисел
    Complex operator*(const Complex& other) const {
        Complex result;
        result.real = (real * other.real) - (imag * other.imag);
        result.imag = (real * other.imag) + (imag * other.real);
        return result;
    }

    // Перевантажена функція для виводу комплексного числа
    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
};

std::ostream& operator<<(std::ostream& os, const Complex& c) {
    os << c.real << " + " << c.imag << "i";
    return os;
}

// Перевантажена функція для множення цілих чисел
int multiply(int a, int b) {
    return a * b;
}

int main() {
    // Виклик функції для множення цілих чисел
    int resultInt = multiply(5, 7);
    std::cout << "Multiplication of integers: " << resultInt << std::endl;

    // Виклик функції для множення комплексних чисел
    Complex complex1(2.0, 3.0);
    Complex complex2(4.0, 5.0);
    Complex resultComplex = complex1 * complex2;
    std::cout << "Multiplication of complex numbers: " << resultComplex << std::endl;

    return 0;
}

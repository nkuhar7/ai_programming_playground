#include <iostream>
#include <cmath>

int main()
{
    float a = 1000;
    float b = 0.0001;
    float x = pow(a+b,2) , y = pow(a, 2) + 2*a*b , z = pow(b, 2) , R;

    R = (x-y)/z;

    std::cout << "Результат: " << R << std::endl;

    return 0;

    


}

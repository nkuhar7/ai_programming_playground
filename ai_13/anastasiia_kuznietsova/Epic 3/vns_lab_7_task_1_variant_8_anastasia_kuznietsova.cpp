#include <iostream>
#include <cstdarg>
using namespace std;

int max_value(int k, ...) 
{
    va_list numbers;
    va_start(numbers, k);

    int max = va_arg(numbers, int);
    for (int i=1; i<k; i++) 
    {
        int value = va_arg(numbers, int);
        if (value>max) 
        {
            max = value;
        }
    }

    va_end(numbers);

    return max;
}

int main() 
{
    int five = max_value(5, 3, 8, 15, 6, 2);
    int ten = max_value(10, 19, 8, 3, 17, 0, 2, 55, 31, 50, 30);
    int twelve = max_value(12, 44, 61, 21, 1, 5, 8, 3, 10, 92, 52, 17, 87);

    cout<<five<<"\n";
    cout<<ten<<"\n";
    cout<<twelve<<"\n";

    return 0;
}
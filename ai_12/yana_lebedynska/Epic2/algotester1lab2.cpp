#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> array(n);

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int delNum1, delNum2, delNum3;
    cout << "Enter three numbers you want to delete: ";
    cin >> delNum1 >> delNum2 >> delNum3;

    int newSize = n;
    for(int i = 0; i < newSize;)
    {
        if(array[i] == delNum1 || array[i] == delNum2 || array[i] == delNum3)
        {
            newSize --;
            for(int a = i; a < newSize; a++)
            {
                array[a] = array[a + 1];
            }
            
        }
        else
        {
            i++;
        }
    }

    cout << newSize << endl;

    vector<int> sum_of_nums(newSize - 1);
    for(int i = 0; i < newSize - 1; i++)
    {
        sum_of_nums[i] = array[i] + array[i + 1]; 
    }

    cout << "The sum of adjacent elements is: ";
    for(int i = 0; i < newSize - 1; i++)
    {
        cout << sum_of_nums[i] << " ";
    }
    
    return 0;
}

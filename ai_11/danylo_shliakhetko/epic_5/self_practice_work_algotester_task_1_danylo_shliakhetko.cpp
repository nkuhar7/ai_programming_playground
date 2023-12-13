#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int start, int end)
{
    int currentElement = arr[end];
    int i = start - 1;

    for (int j = start; j < end; j++)
    {
        if (arr[j] <= currentElement)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]);
    return i + 1;
}

vector<int> quickSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int currentElementIndex = partition(arr, start, end);

        quickSort(arr, start, currentElementIndex - 1);
        quickSort(arr, currentElementIndex + 1, end);
    }
    return arr;
}

vector<int> quickSort(vector<int> &arr)
{
    return quickSort(arr, 0, arr.size() - 1);
}

int main()
{
    vector<int> arr = {5, 6, 3, 9, 1, 4, 2, 8, 7, 0};
    vector<int> sortedArr = quickSort(arr);
    for (int i = 0; i < sortedArr.size(); i++)
    {
        cout << sortedArr[i] << " ";
    }
    
    return 0;
}
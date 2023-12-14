#include <iostream>

using namespace std;

template <typename T>  
class Array
{
    public:

    T *container;
    int capacity;
    int size;
    Array (T value)
    {   
        capacity = 1;
        container = new T[capacity];
        size = 0;
    }
    public:
    int expand()
    {
        int newCapacity = capacity * 2;
        T *newArray = new T[newCapacity];
        for (int i = 0; i < size; i++)
        {
            newArray[i] = container[i];
        }
        container = newArray;
        capacity = newCapacity;
        return capacity;
    }
    void insert(int index, int number)
    {
        size += number;
        while (size >= capacity)
        {
            if (size >= capacity)
                {
                    capacity = expand();
                }  
        }
        for (int i = size - 1; i > index - 1; i--)
            {
                container[i] = container[i - number];
            }
        T arr[number];

        for (int j = 0; j < number; j++)
        {
            cin >> arr[j];
            container[index + j] = arr[j];
        }
    }
    void print()
    {
        for(int i = 0; i < size; i++)
        {
            cout << container[i] << " ";
        }
        cout << endl;   
    }

    void erase(int index, int n)
    {
        for(int i = index; i < index + n; i++)
        {
            container[i] = container[i + n];
        }
        size -= n;
    }

    int getCapacity()
    {
        return capacity;
    }

    int getSize()
    {
        return size;
    }

    T get(int index)
    {
        return container[index];
    }

    void set(int index, T newData)
    {
        container[index] = newData;
    }
};
int main()
{
    Array<int> initialArray(0);
    int q;
    cin >> q;
    for (int i = 0; i < q; i ++)
    {   
        string input;
        cin >> input;

        if (input == "size")
        {
            cout << initialArray.getSize() << endl;
        }
        else if (input == "capacity")
        {
            cout << initialArray.getCapacity() << endl;
        }
        else if (input == "insert")
        {
            int index, n;
            cin >> index >> n;
            initialArray.insert(index, n);
        }
        else if (input == "print")
        {
            initialArray.print();
        }
        else if (input == "set")
        {
            int index, data;
            cin >> index >> data;
            initialArray.set(index, data);
        }
        else if (input == "erase")
        {
            int index, n;
            cin >> index >> n;
            initialArray.erase(index, n);
        }
        else if (input == "get")
        {
            int index;
            cin >> index;
            cout << initialArray.get(index) << endl;
        }
    }
    return 0;
}


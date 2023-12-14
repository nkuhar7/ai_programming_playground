#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Array
{
public:
    T *container;
    int capacity;
    int size;

    Array(T value)
    {
        capacity = 1;
        container = new T[capacity];
        size = 0;
    }

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
                expand();
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

    string print()
    {
        string out;
        for (int i = 0; i < size; i++)
        {
            out +=to_string(container[i]);
            out += " ";
        }
        return out;
    }

    void erase(int index, int n)
    {
        for (int i = index; i < index + n; i++)
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
    vector<string> output;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        string input;
        cin >> input;

        if (input == "size")
        {
            output.push_back(to_string(initialArray.getSize()));
        }
        else if (input == "capacity")
        {
            output.push_back(to_string(initialArray.getCapacity()));
        }
        else if (input == "insert")
        {
            int index, n;
            cin >> index >> n;
            initialArray.insert(index, n);
        }
        else if (input == "print")
        {
            output.push_back(initialArray.print());
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
            output.push_back(to_string(initialArray.get(index)));
        }
    }
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}

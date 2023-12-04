#include <iostream>
#include <vector>

using namespace std;

int main()
{
<<<<<<< HEAD
    vector<long long> tableLegs = {};

    for (int i = 0; i < 4; i++)
    {
        long long tableLeg;
=======
    vector<int> tableLegs = {};
    for (int i = 0; i < 4; i++)
    {
        int tableLeg;
>>>>>>> 45dbc78efeca21bbd191edf1130e7b647bc3ae26
        cin >> tableLeg;
        tableLegs.push_back(tableLeg);
    }

<<<<<<< HEAD
    vector<long long> tableCuts = {};

    for (int i = 0; i < 4; i++)
    {
        long long tableCut;
=======
    vector<int> tableCuts = {};

    for (int i = 0; i < 4; i++)
    {
        int tableCut;
>>>>>>> 45dbc78efeca21bbd191edf1130e7b647bc3ae26
        cin >> tableCut;
        tableCuts.push_back(tableCut);
    }

<<<<<<< HEAD
    for (int i = 0; i < 4; i++)
    {
        if (tableCuts[i] > tableLegs[i])
=======
    int maxLeg = tableLegs[0];
    int minLeg = tableLegs[0];

    for (int i = 0; i < tableLegs.size(); i++)
    {
        int currentLeg = tableLegs[i] - tableCuts[i];
        if (currentLeg <= 0)
>>>>>>> 45dbc78efeca21bbd191edf1130e7b647bc3ae26
        {
            cout << "ERROR";
            return 0;
        }
<<<<<<< HEAD
    }

    long long minLeg = 0;
    long long maxLeg = 0;

    minLeg = tableLegs[0];

    for (int i = 0; i < 4; i++)
    {

        tableLegs[i] = tableLegs[i] - tableCuts[i];

        if (minLeg > tableLegs[i])
        {
            minLeg = tableLegs[i];
        }

        maxLeg = tableLegs[0];

        for (int j = 0; j < 4; j++)
        {
            if (maxLeg < tableLegs[j])
            {
                maxLeg = tableLegs[j];
            }
        }

        if (minLeg <= maxLeg / 2)
        {
            cout << "NO";
            return 0;
        }
    }

    if (tableLegs[0] == tableLegs[1] && tableLegs[1] == tableLegs[2] && tableLegs[2] == tableLegs[3] && tableLegs[0] != 0 && minLeg > maxLeg / 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
=======
        if (maxLeg < currentLeg)
        {
            maxLeg = currentLeg;
        }
        if (minLeg > currentLeg)
        {
            minLeg = currentLeg;
        }
    }

    if (maxLeg > 2 * minLeg)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}
>>>>>>> 45dbc78efeca21bbd191edf1130e7b647bc3ae26

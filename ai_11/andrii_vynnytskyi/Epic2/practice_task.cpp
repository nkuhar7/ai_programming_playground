#include<iostream>
using namespace std;


int main() {
    string weather;
    cout << "Please enter the current weather\n- sunny\n- rainy\n- cloudy\n- snowy\n- windy\n: ";
    cin >> weather;

    if (weather == "snowy" || weather == "rainy") {
        cout << "Yes, you need wear a coat today\n";
    } else {
        cout << "No, you don't need a coat today\n";
    }


    if (weather == "sunny")
    {
        cout << "You can go for a walk today\n";
    }
    else if (weather == "rainy")
    {
        cout << "You can learn how to write a program or watch films\n";
    }
    else if (weather == "cloudy")
    {
        cout << "It is a good day for shopping\n";
    }
    else if (weather == "snowy")
    {
        cout << "It is a bad idea to go out\n";
    }
    else if (weather == "windy") {
        cout << "Try to stay on Earth, do not fly\n";
    }



    switch (weather[0]) {
        case 's':
            if(weather == "sunny")
            {
                cout << "Wear your favourite T-shirt, shorts and sandals\n";
            }
            else
            {
                cout << "Wear coat, beautiful sweater, blue jeans and boots\n";
            }
            break;
        case 'r':
            cout << "Take umbrella, wear raincoat and rain boots\n";
            break;
        case 'c':
            cout << "You can wear suit or something else\n";
            break;
        case 'w':
            cout << "Wear something warm\n";
            break;
        default:
            cout << "This weather are not in list\n";
            break;
    }


    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string weather;
    cout << "Please provide the current weather condition: ";
    cin >> weather;

    if (weather == "snowy" || weather == "rainy") {
        cout << "It might be a good idea to wear a jacket.\n";
    } else {
        cout << "No need for a jacket.\n";
    }

   switch (weather[0]) {
    case 's':
        cout << "Perfect weather for a picnic!\n";
        break;
    case 'r':
        cout << "Ideal conditions for reading a book indoors!\n";
        break;
    case 'c':
        cout << "Maybe visit a museum?\n";
        break;
    case 'sn':
        cout << "How about creating a snowman?\n";
        break;
    case 'w':
        cout << "Fly a kite if you have one!\n";
        break;
    default:
        cout << "Please enter a valid weather condition.\n";
}


    switch (weather[0]) {
        case 's':
            cout << "Put on your favorite sneakers!\n";
            break;
        case 'r':
            cout << "Rain boots would be a good choice!\n";
            break;
        case 'c':
            cout << "Any footwear suits today.\n";
            break;
        case 'sn':
            cout << "Snow boots will keep your feet warm!\n";
            break;
        case 'w':
            cout << "Consider wearing something sturdy!\n";
            break;
        default:
            cout << "Please enter a valid weather condition.\n";
    }

    return 0;
}

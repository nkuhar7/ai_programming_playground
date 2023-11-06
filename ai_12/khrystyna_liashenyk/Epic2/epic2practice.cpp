#include <iostream>
#include <string>

using namespace std;

int main() {
    string weather = "";
    char weather1;
    cout << "What is the weather like today? (sunny, rainy, windy, cloudy) " << endl;
    cin >> weather1;
    weather = weather + weather1;
 if ( weather != "r" && weather != "c" && weather != "s" && weather != "w") {
        cout << "Please enter a valid weather condition." << endl;
        cin >> weather1;
    weather = weather + weather1;
    }
    if (weather == "r")
        cout << "You need to wear a coat" << endl;
    else 
        cout << "You don't need to wear a coat" << endl;
    if (weather == "s")
        cout << "A great day to have a picnic" << endl;
    else if (weather == "r")
        cout << "The weather outside is perfect for staying indoors and enjoying a good book" << endl;
    else if (weather == "c")
        cout << "Would you like to consider visiting a museum?" << endl;
    else if (weather == "w")
        cout << "If you have a kite, go ahead and fly it" << endl;

    switch (weather1) {
        case 's':
            cout << "Put on your best sneakers" << endl;
            break;
        case 'c':
            cout << "Today, any type of shoe can be worn" << endl;
            break;
        case 'w':
            cout << "Make sure to wear something sturdy" << endl;
            break;
        case 'r':
            cout << "Trust me, you won't regret wearing rain boots" << endl;
            break;
        default:
            break;
    }

    return 0;
}

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

vector<string> weatherStrings = {"rainy", "cloudy", "sunny", "snowy", "windy"};
enum weather {Rainy, Cloudy, Sunny, Snowy, Windy};

int main() {
    string weather;
    cin >> weather;

    if (weather == "rainy") {
        cout << endl << "Wear a rainy coat";
    }
    if (weather == "cloudy") {
        cout << endl << "Wear a jacket";
    }
    if (weather == "sunny") {
        cout << endl << "Wear a T-shirt";
    }
    if (weather == "snowy") {
        cout << endl << "Wear a snow jacket";
    }
    if (weather == "windy") {
         cout << endl << "Wear a scarf";
    }
    else if (weather == "rainy") {
        cout << endl << "Go to record the weather";
    }
    else if (weather == "cloudy") {
        cout << endl << "Go to the park";
    }
    else if (weather == "sunny") {
        cout << endl << "Go on a picnic";
    }
    else if (weather == "snowy") {
        cout << endl << "Throw snowballs";
    }
    else if (weather == "windy") {
        cout << endl << "Take a pictures around";
    }

    size_t weatherIndex = std::find(weatherStrings.begin(), weatherStrings.end(), weather) - weatherStrings.begin();
    auto weather1 = (enum weather)weatherIndex;
    switch (weather1) {
        case Rainy :
            cout << endl << "Wear rubber boots";
            break;
        case Cloudy:
            cout << endl << "Wear sneakers";
            break;
        case Sunny:
            cout << endl << "Wear sandals";
            break;
        case Snowy:
            cout << endl << "Wear winter boots";
            break;
        case Windy:
            cout << endl << "Wear trainers";
            break;
    }


    return 0;
}

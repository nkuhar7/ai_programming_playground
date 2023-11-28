#include <iostream>
#include <string>  
using namespace std;

int main() {
    string weather;
    cout << "Write weather condition (sunny, rainy, cloudy, snowy, windy)\n";
    cin >> weather;
    int shoes = 0;  

    
    if (weather == "sunny" || weather == "cloudy") {
        cout << "You don't need a jacket\n";
    } else {
        cout << "You need a jacket\n";
    }

    
    if (weather == "sunny") {
        cout << "You can wear a t-shirt and shorts\n";
        shoes = 1;
    } else if (weather == "rainy") {
        cout << "You better take an umbrella and a jacket\n";
        shoes = 2;
    } else if (weather == "cloudy") {
        cout << "You better take a jacket\n";
        shoes = 3;
    } else if (weather == "snowy") {
        cout << "You better dress warmly and drink some tea\n";
        shoes = 4;
    } else if (weather == "windy") {
        cout << "You better stay at home\n";
        shoes = 5;
    } else {
        cout << "You wrote a wrong condition\n";
        shoes = 6;
    }

    
    switch (shoes) {
        case 1:
            cout << "You can wear flip flops\n";
            break;
        case 2:
            cout << "You can wear rubber boots\n";
            break;
        case 3:
            cout << "You should wear sneakers\n";
            break;
        case 4:
            cout << "You should wear boots\n";  
            break;
        case 5:
            cout << "You can wear boots\n";
            break;
        case 6:
            cout << "I don't know what type of shoes you need for this condition\n";
            break;
        default:  
            cout << "Unknown condition\n";
            break;
    }

    return 0;
}

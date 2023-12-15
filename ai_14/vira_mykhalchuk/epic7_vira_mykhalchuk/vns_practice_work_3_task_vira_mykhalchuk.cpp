#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double r; 
    double h;
    double pi = 3.14;

    cout << "Enter the radius of the base of the cylinder : ";
    cin >> r;
    cout << endl;

    cout << "Enter the height of the cylinder: ";
    cin >> h; 
    cout << endl;
 
    double V = pi*pow(r,2)*h;

    cout << "Cylinder volume: " << V << endl;
    cout << endl;


    double resis1;
    double resis2;
    double resis3;

    cout << "Enter the resistance of the first resistor: " ;
    cin >> resis1;
    cout << endl;
    cout << "Enter the resistance of the second resistor: ";
    cin >> resis2;
    cout << endl;
    cout << "Enter the resistance of the third resistor: ";
    cin >> resis3;
    cout << endl;

    double resistance = resis1 + resis2 + resis3;

    cout << "The resistance of the electric circuit consisting of 3 resistors conected in series = " << resistance << " Om" << endl;

    cout << "Press the \"Enter\" key to exit" << endl;

    cin.get();
    cin.get();

    return 0;
}
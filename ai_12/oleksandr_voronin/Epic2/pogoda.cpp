#include <iostream>
#include <string>
using namespace std;

int main(){

string weather;
cout <<"Whrite your weathe conditions \n";
cin >> weather;
if (weather=="snowly"||"windly"){
cout << "you need cuphead \n";
}
else {cout << "you dont need cuphead \n";}
 if (weather=="sunny")
{
    cout << "you can wear T-shirt,shorts and crocs \n";
} else if (weather=="rainy")
{
cout << "wear boots and umbrella \n";
}
 else if (weather=="cloudly"){
    cout << "wear pants and hoodie \n";

 }
 else if (weather=="snowly"){
    cout << "wear boots,pants and jacket \n";
 }
 else if (weather=="windly"){
    cout << "Look at the window bro,you dont need that \n";
 }
}
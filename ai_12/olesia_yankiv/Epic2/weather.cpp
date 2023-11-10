#include <iostream>
using namespace std;

int main()
{
    string weather;
    cout<< "Choose the weather for today: sunny,rainy,cloudy,windy or snowy "<<endl;
    cin>>weather;

    
    if (weather=="sunny"||"cloudy")
    {
       cout<<"You can go on a walk, the weather is good"<<endl;
    } 
    else
    {
        cout<<"You better stay at home"<<endl;
    }  

    char a;
    int shoes;
    if(weather=="sunny")
    {
        cout<<"You can wear a top and shorts"<<endl;
        shoes = 1;
    }
    else if(weather=="rainy")
    {
        cout<<"You have to wear a raincoat and take umbrella"<<endl;
        shoes = 2;
    }
    else if(weather=="cloudy")
    {
        cout<<"You have to wear a sweater and a jacket"<<endl;
        shoes = 3;
    }
    else if(weather=="windy")
    {
        cout<<"You may need a coat with a hood"<<endl;
        shoes = 4;
    }
    else if(weather=="snowy")
    {
        cout<<"You need to wear warm coat, hat, scarf and gloves"<<endl;
        shoes = 5;
    }
    else
    {
     cout<<"Something went wrong"<<endl;
     shoes =6;

    }

    switch(shoes)
    {
        case 1:
        cout<<"You can wear sandals"<<endl;
        break;

        case 2:
        cout<<"You need to wear boots"<<endl;
        break;

        case 3:
        cout<<"You can wear sneakers"<<endl;
        break;

        case 4:
        cout<<"You should wear heavy boots"<<endl;
        break;

        case 5:
        cout<<"You have to wear winter boots"<<endl;
        break;

        case 6:
        cout<<"I do not know what you should wear in this condition"<<endl;
        break;
    }

    return 0;



}





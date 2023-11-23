#include <iostream>
#include <vector>

using namespace std;


auto min(int a[] , int n){

    auto min = a[0];

    for (int i = 1; i < n; i++){
        if (a[i] < min)
            min = a[i]; 
    }

    return min;

}

int main(){

    int x[] = {17 ,15 ,16 ,8 ,9};

    auto  min_x = min(x , 5);

    cout << min_x << endl;

    int y[] = {105 , 66 ,88 , 93 , 34 , 43 ,65, 27 , 56 , 38};

    auto min_y = min(y, 10);

    cout << min_y << endl;

    int g[] = {345 , 214 ,345 , 234 , 456 , 567 ,234 ,564 ,785, 143, 457, 235};

    auto min_g = min(g , 12);

    cout << min_g;
    
    return 0;
}
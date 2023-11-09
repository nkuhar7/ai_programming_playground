#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, first_drone = 0, second_drone = 0, temp1 = 0, temp2; // N - розмір масиву, temp1 - тимчасова позиція дрона, пишем 0 бо числа додаються, temp2 - є знизу, 1 ми пишем коли є множення чисел
    cout << "Choose size of massive: ";
    cin >> N;
    while(N < 1 || N > 1000){ // обмеження масиву від 1 до 1000
        cout << "Choose size of massive again (from 1 to 1000): ";
        cin >> N;
    }
    int* array = new int[N]; // значення масиву, пишем * бо ми вводим елемент масиву
    cout << "Choose numbers for the massive: " << endl;
    for (int i = 0; i < N; i++) { // починаючи з 0 елемента, доки елемент менший за масив, перейти на кожен наступний елемент
        cout << "Choose " << i+1 << " number: ";
        cin >> array[i]; // ввід елемента масиву 
        while(array[i] < 1 || array[i] > 5){ // елемент масиву має бути від 1 до 5 
            cout << "Choose " << i+1 << " number again (from 1 to 5): ";
            cin >> array[i];
        }
    }
    temp2= N-1; // оскільки елемент масиву починається з 0
    for (int i = 0; i < N; i++) {
        if (temp1+1 < temp2) { // коли вони поряд
            temp1+= first_drone; // додавання позицій, де розташований перший дрон
            temp2-= second_drone;  // додавання позицій, де розташований другий дрон
            if(temp1 > N-1){ // перший дрон вилетів за масив зправа
                temp1=N-1;
            }
            if(temp2 < 0){ // другий дрон вилетів за масив зліва
                temp2=0;
            }
            first_drone = array[temp1]; // елемент на якому зупиниться перший дрон
            second_drone = array[temp2]; // елемент на якому зупиниться другий дрон
        } else { 
            break;
        }
    }
    if(temp1+1==temp2){ // дрони один біля одного
        cout << "Position of first_drone: " << temp1+1 << endl << "Position of second_drone: " << temp2+1<<endl;
        cout << "Stopped";
    }else{
        if(temp1==temp2){ // дрони врізались
        cout << "Position of first_drone: " << temp1+1 << endl << "Position of second_drone: " << temp2+1<<endl;
        cout << "Collision";
        }else{ // один з дронів/дрони перелетів
        cout << "Position of first_drone: " << temp1+1 << endl << "Position of second_drone: " << temp2+1<<endl;
        cout << "Miss";
        }
    }
    return 0;
}

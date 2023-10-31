#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    char name[100];
    int FinalAmount; 

    int time, money, period, stepin;
    float percent, percent0;

    printf("відсоткова ставка?:");
    scanf("%f", &percent0); 
    percent = percent0 / 100;
    
    printf("тривалість депозиту(роки)?:");
    scanf("%d", &time);

    printf("кількість внесених коштів?:");
    scanf("%d", &money);

    printf("нараховування нараховується періодичністю (1,2,3,4,6,12) (в місяцях)?:");
    scanf("%d", &period);

    switch (period) {
        case 1:
            period = 12;
            break;
        case 2:
            period = 6;
            break;
        case 3:
            period = 4;
            break;
        case 4:
            period = 3;
            break;
        case 6:
            period = 2;
            break;
        case 12:
            period = 1;
            break;
        default:
            std::cout << "Невідомий період" << std::endl;
            return 1;
    }

    printf("Ваше Ім'я?:");
    scanf("%s", name);

    stepin = time * period;
    FinalAmount = money * pow(1 + percent, stepin);

    printf("%s, Вашою кінцевою сумою депозиту буде: %d\n", name, FinalAmount); 
    return 0;
}
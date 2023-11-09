#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    char name[100];
    double FinalAmount; 

    int time, money, period, Pow, Trueperiod;
    float percent, percent0;

    printf("відсоткова ставк?:");
    scanf("%f", &percent0); 
    percent = percent0 / 100;
    
    printf("тривалість депозиту(роки)?:");
    scanf("%d", &time);

    printf("кількість внесених коштів?:");
    scanf("%d", &money);

    printf("нараховування нараховується періодичністю (в місяцях)?:");
    scanf("%d", &period);

Trueperiod= 12/period;

    printf("Ваше Ім'я?:");
    scanf("%s", name);

    Pow = time * Trueperiod;
    FinalAmount = money * pow(1 + percent, Pow);

    printf("%s, Вашою кінцевою сумою депозиту за %f %% за %d років буде : %.5f\n", name, percent0, time, FinalAmount); 
                                                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                                                    return 0;
}
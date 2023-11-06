#include <stdio.h>

int main() {
    int mana, hp, minusmana, minushp;
    mana = 100;
    hp = 100;
    for (int i = 0;i < 3 ; i++) {
        printf("Enter mana spent: ");
        scanf("%d", &minusmana);
                mana -= minusmana;
           if (mana < 0) {
            printf("NO!\n");
            break;
        }
        printf("Enter HP spent: ");
        scanf("%d", &minushp);
        hp -= minushp;
        
                   if (hp < 0) {
        printf("NO!\n");
        break;}
    }
        if(hp>0 && mana >0) {
            printf("YES!\n");
        }
        

    return 0;
}

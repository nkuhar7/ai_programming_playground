#include<stdio.h>
int main(){ 
    float n,m,result;
    int var;
    printf("задача:(1,2,3)");
    scanf("%d", &var); 
if(var==1){
    printf("n:");
    scanf("%f", &n); 
    printf("m:");
    scanf("%f", &m);
    n -=1;
    result = n-m;
    printf("результат виразу:%f\n", result ); 
    return 0;
    }

if(var==2){
    printf("n:");
    scanf("%f", &n); 
    printf("m:");
    scanf("%f", &m);
    m -=1;
    if(m<n){ 
     printf("TRUE!");
     return 0;
    }
    if(m>n){
     printf("FALSE!");
     return 0;
    }
    }
    
if(var==3){
    printf("n:");
    scanf("%f", &n); 
    printf("m:");
    scanf("%f", &m);
    n +=1;
    if(m<n){ 
     printf("TRUE!");
     return 0;
    }
    if(m>n){
     printf("FALSE!");
     return 0;
    }
    
    }
else{
    printf("не та задача");
    return 0;
}

    return 0;

}
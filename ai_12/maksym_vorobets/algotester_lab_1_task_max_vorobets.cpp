#include <stdio.h>

int main(){
    unsigned h1, h2, h3, h4;
    unsigned d1, d2, d3, d4;
    scanf("%d %d %d %d", &h1, &h2, &h3, &h4);
    scanf("%d %d %d %d", &d1, &d2, &d3, &d4);
        int min_h=h1;
        if(h2<min_h){min_h=h2;}
        if(h3<min_h){min_h=h3;}
        if(h4<min_h){min_h=h4;}
        
        int max_h=h1;
        if(h2>max_h){max_h=h2;}
        if(h3>max_h){max_h=h3;}
        if(h4>max_h){max_h=h4;}
    if(2*min_h>=max_h&&min_h!=0){
        printf("YES\n");
    }else if(d1>h1||d2>h2||d3>h3||d4>h4){
        printf("ERROR\n");
    }else{
        printf("NO\n");
    }
    
    return 0;
}







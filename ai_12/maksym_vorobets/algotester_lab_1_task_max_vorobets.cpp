#include <stdio.h>

int main(){
    long long h1, h2, h3, h4;
    long long d1, d2, d3, d4;
    scanf("%lld %lld %lld %lld", &h1, &h2, &h3, &h4);
    scanf("%lld %lld %lld %lld", &d1, &d2, &d3, &d4);
        int min_h=h1;
        if(h2<min_h){min_h=h2;}
        if(h3<min_h){min_h=h3;}
        if(h4<min_h){min_h=h4;}
        
        int max_h=h1;
        if(h2>max_h){max_h=h2;}
        if(h3>max_h){max_h=h3;}
        if(h4>max_h){max_h=h4;}

    if(2*min_h>max_h&&min_h!=0&&2*h1-2*d1>max_h&&2*h2-2*d2>max_h&&2*h3-2*d3>max_h&&2*h4-2*d4>max_h){
        printf("YES\n");
    }else if(d1>h1||d2>h2||d3>h3||d4>h4){
        printf("ERROR\n");
    }else{
        printf("NO\n");
    }
    
    return 0;
}








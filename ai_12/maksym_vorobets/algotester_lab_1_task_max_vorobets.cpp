#include <stdio.h>

int main(){
    unsigned long long h1, h2, h3, h4;
    unsigned long long d1, d2, d3, d4;
    scanf("%lld %lld %lld %lld", &h1, &h2, &h3, &h4);
    scanf("%lld %lld %lld %lld", &d1, &d2, &d3, &d4);
        unsigned long long min_h=h1;
        if(h2<min_h){min_h=h2;}
        if(h3<min_h){min_h=h3;}
        if(h4<min_h){min_h=h4;}
        unsigned long long max_h=h1;
        if(h2>max_h){max_h=h2;}
        if(h3>max_h){max_h=h3;}
        if(h4>max_h){max_h=h4;}
        unsigned long long h11=h1-d1;
        unsigned long long h12=h2-d2;
        unsigned long long h13=h3-d3;
        unsigned long long h14=h4-d4;
        unsigned long long max_new=h11;
        if(h12>max_new){max_new=h12;}
        if(h13>max_new){max_new=h13;}
        if(h14>max_new){max_new=h14;}
        unsigned long long min_new=h11;
        if(h12<min_new){min_new=h12;}
        if(h13<min_new){min_new=h13;}
        if(h14<min_new){min_new=h14;}

    if(2*min_h>max_h&&min_h!=0&&2*h1>max_h&&2*h2>max_h&&2*h3>max_h&&2*h4>max_h&&2*min_new>max_new&&min_new!=0&&2*h11>max_new&&2*h12>max_new&&2*h13>max_new&&2*h14>max_new&&2*h11>max_h&&2*h12>max_h&&2*h13>max_h&&2*h14>max_h){
        printf("YES\n");
    } else if(d1>h1||d2>h2||d3>h3||d4>h4){
        printf("ERROR\n");}
    else{
        printf("NO\n");
    }
    
    return 0;
}









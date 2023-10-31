#include<iostream>
using namespace std;
void inputRoad(int road[],long length ){
    int i;
    for(i=0; i<length; i++){
        cin>> road[i];
    }
}
void bubbleSort(int road[], long length){
     int i, j;
    bool swapped;
    for(i=0; i<length-1;i++){
        swapped = false;
        for(j=0; j<length-i-1; j++){
            if(road[j]>road[j+1]){
                swap(road[j], road[j+1]);
                swapped=true;
            } 
        }
        if (swapped== false)
break;
   }
}

int main(){
    printf("enter the length of the road \n");
    long length;
     cin>> length;    
    int road[length];
    inputRoad(road,  length);
    bubbleSort(road,  length);   
long a = road[length-2]-road[0]; 
long b = road[length-1]-road[1];
cout<< min(a,b);
}
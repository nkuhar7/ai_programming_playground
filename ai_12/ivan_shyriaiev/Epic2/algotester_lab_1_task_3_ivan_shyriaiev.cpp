#include<iostream> 
using namespace std;
void inputArray(long long cubesSideLengths[]){
    int i;
for(i=0; i<5; i++){
cin>>cubesSideLengths[i];
}
}
int main(){
    long long  cubesSideLengths[5];
    bool moreORequal;
    int j;

    printf("enter the side lengths of your cubesSideLengths:\n");
    inputArray(cubesSideLengths);

    for(j=0; j<4; j++){
        if(cubesSideLengths[j]>=cubesSideLengths[j+1]){
 moreORequal = true;
        } else {
             moreORequal = false;
            break;
        }
    }
    
    if(cubesSideLengths[0]>0 && cubesSideLengths[1]>0 && cubesSideLengths[2]>0 && cubesSideLengths[3]>0 && cubesSideLengths[4]>0){     
if(  moreORequal == true ){
cout<<"WIN";

    } else {
        cout<<"LOSS";
    }
     } else{
        cout<<"ERROR";
         }
    }


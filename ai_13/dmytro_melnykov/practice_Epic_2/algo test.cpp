#include <iostream>

int main(){
    
    int i;
    long long a[5];
    for (i = 0; i < 5; i++)
    {
       std::cin >> a[i];
       if(a[i] <= 0)
        {
            std::cout<< "ERROR";
            return 0;    
        }
    }
    
    bool win = true;
    
    for(i = 0; i < 4; i++)
    {
        if(a[i] > a[i+1])
        {
           win = false;
        }          
    }
    }

    if (win){
        std::cout<< "WIN"<< std::endl;
    }
    else{
        std::cout<<"LOSS" << std::endl;
    }
}

#include <iostream>

int main()
{
    
    int i;
    long long a[5];
    for (i = 0; i < 5; i++)
    {
       std::cin >> a[i];
       if(a[i] <= 0)
        {
            std::cout<< "ERROR";
            return 0;    
        }
    }
    
    bool win = true;
    
    for(i = 0; i < 4; i++)
    {
        if(a[i] < a[i+1])
        {
           win = false;
        }          
    }

    if (win)
    {
        std::cout<< "WIN"<< std::endl;
    }
    else
    {
        std::cout<<"LOSS" << std::endl;
    }
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int packs;

    cout << "Enter the number of packs of cookies: ";
    cin >> packs;
    cout << "Enter the number of cookies in each pack: ";
    
    std::vector<int> cookies(packs);
    for (int i = 0; i < packs; i++) {
        std::cin >> cookies[i];
    }

    int can_eat = 0;
    for (int i = 0; i < packs; i++)
    {
        int max = cookies[i] - 1;
        can_eat += max;
    }
    
    cout << "The max number of cookies the girl can eat is: " << can_eat;

    return 0;
}
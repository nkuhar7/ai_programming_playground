#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int packs;

    cin >> packs;
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
    
    cout << can_eat;

    return 0;
    
}

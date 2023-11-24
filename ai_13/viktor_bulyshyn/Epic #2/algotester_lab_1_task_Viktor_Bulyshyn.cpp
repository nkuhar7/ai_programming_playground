#include <iostream>

int main() {
    long long H, M;
    std::cin >> H >> M;

    long long h1, m1, h2, m2, h3, m3;
    std::cin >> h1 >> m1 >> h2 >> m2 >> h3 >> m3;
    
    
    

    // Перевірка для кожного з трьох можливих випадків
    if ((h1 + h2 + h3 < H && m1 + m2 + m3 < M)) {
        std::cout << "YES" << std::endl;
    } else if (m1*h1 > 0 || m2*h2 > 0 || m3*h3 > 0)  {
        std::cout << "NO" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }


    return 0;
}

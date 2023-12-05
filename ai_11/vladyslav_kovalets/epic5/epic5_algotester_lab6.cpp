#include <iostream>
#include <string>
#include <cctype>
#include <set>

int main() 
{
    unsigned long long N, K;
    bool off = false;  

    // Зчитуємо кількість слів (N) та мінімальну кількість повторень (K)
    std::cin >> N;
    unsigned long long count[100000] = {};  

    std::cin >> K;

    // Створюємо динамічний масив для зберігання слів
    std::string* words = new std::string[N];

    // Зчитуємо слова у масив
    for (int i = 0; i < N; i++) 
    {
        std::cin >> words[i];
    }

    // Обчислюємо кількість повторень для кожного слова
    for (int i = 0; i < N; i++) 
    {
        if (words[i] == "") 
        {
            continue;
        }

        count[i] = 1;

        for (int j = i + 1; j < N; j++) 
        {
            if (!words[j].empty())
            {
                // Convert each character in words[j] to uppercase and compare
                bool areEqual = true;
                for (int k = 0; k < 11; k++)
                {
                    if (std::toupper(words[j][k]) != std::toupper(words[i][k]))
                    {
                        areEqual = false;
                        break;
                    }
                }

                if (areEqual)
                {
                    count[i]++;
                    words[j] = "";
                }
            }
        }
    }

    int number = 0;
    for (int i = 0; i < N; i++) 
    {
        if (count[i] >= K) 
        {
            std::set<char, std::greater<char>> uniqueChars;
            for (char c : words[i]) 
            {
                uniqueChars.insert(std::tolower(c));
            }
            // Виводимо кількість унікальних букв
            number += uniqueChars.size();
        }     
    }

    if (number != 0)
        std::cout << number << std::endl;
    else
        std::cout << "Empty!" << std::endl;

    // Виводимо унікальні букви для слів, які мають принаймні K повторень
    for (int i = 0; i < N; i++) 
    {
        if (count[i] >= K) 
        {
            std::set<char, std::greater<char>> uniqueChars;

            // Заповнюємо множину унікальними буквами слова
            for (char c : words[i]) 
            {
                uniqueChars.insert(std::tolower(c));
            }

            // Виводимо унікальні букви
            for (char c : uniqueChars) 
            {
                std::cout << c << " ";
            }

            off = true;   
        }
    }

    // Звільняємо виділену пам'ять для масиву слів
    delete[] words;

    return 0;
}

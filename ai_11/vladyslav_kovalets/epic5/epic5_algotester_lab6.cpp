#include <iostream>
#include <string>
#include <cctype>
#include <map>
#include <vector>
#include <algorithm>

int main() 
{
    unsigned int N, K;

    // Зчитуємо кількість слів (N) та мінімальну кількість повторень (K)
    std::cin >> N;
    std::vector<unsigned long long> count(N, 0);
    std::cin >> K;

    // Створюємо вектор для зберігання слів
    std::vector<std::string> words(N);

    // Виводимо унікальні букви для слів, які мають принаймні K повторень
    std::map<char, bool> uniqueChars;

    // Зчитуємо слова у вектор
    for (int i = 0; i < N; ++i) 
    {
        std::cin >> words[i];
    }

    // Обчислюємо кількість повторень для кожного слова
    for (int i = 0; i < N; ++i) 
    {
        if (words[i].empty()) 
        {
            continue;
        }

        count[i] = 1;

        for (int j = i + 1; j < N; ++j) 
        {
            if (words[j].empty()) 
            {
                continue;
            }

            if (std::equal(words[i].begin(), words[i].end(), words[j].begin(),
                           [](char a, char b) { return std::toupper(a) == std::toupper(b); })) 
            {
                count[i]++;
                words[j] = "";
            }
        }

        if (count[i] >= K) 
        {
            for (char c : words[i]) 
            {
                uniqueChars[std::tolower(c)] = false; // Додаємо символ до map
            }
        }
    }

    // Виводимо результат
    if (uniqueChars.size() == 0) 
    {
        std::cout << "Empty!" << std::endl;
        return 0;
    }

    // Виводимо кількість символів
    std::cout << uniqueChars.size() << std::endl;

    // Створюємо вектор для зберігання унікальних букв у порядку
    std::vector<char> sortedChars;
    for (const auto& entry : uniqueChars) 
    {
        sortedChars.push_back(entry.first);
    }

    // Сортуємо вектор у зворотньому порядку
    std::sort(sortedChars.rbegin(), sortedChars.rend());

    // Виводимо унікальні букви в зворотньому порядку
    for (char c : sortedChars) 
    {
        std::cout << c << " ";
    }

    return 0;
}

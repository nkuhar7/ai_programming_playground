#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

int countVowels(const std::string& str) {
    int vowelCount = 0;
    for (char ch : str) {
        // Перевіряємо, чи символ є голосним
        if (std::isalpha(ch) && (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                                 ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            vowelCount++;
        }
    }
    return vowelCount;
}

int main() {
    std::ifstream inputFile("F1.txt"); // Відкриваємо вхідний файл для читання
    std::ofstream outputFile("F2.txt",std::ios::out | std::ios::trunc); // Відкриваємо вихідний файл для запису

    if (!inputFile.is_open() || !outputFile.is_open()) {
        std::cerr << "Error!" << std::endl;
        return 1;
    }

    std::string line;
    int lineCount = 0;
    int maxVowelCount = 0;
    int lineWithMaxVowels = 0;

    // Читаємо рядки з файлу та знаходимо рядок з найбільше голосними
    while (std::getline(inputFile, line)) {
        lineCount++;
        int currentVowelCount = countVowels(line);

        // Порівнюємо з поточним найбільшим числом голосних символів
        if (currentVowelCount > maxVowelCount) {
            maxVowelCount = currentVowelCount;
            lineWithMaxVowels = lineCount;
        }
    }

    // Повторно відкриваємо вхідний файл для повторного читання
    inputFile.clear();
    inputFile.seekg(0);

    // Читаємо рядки з файлу та записуємо їх у вихідний файл, крім рядка з найбільше голосними
    lineCount = 0;
    while (std::getline(inputFile, line)) {
        lineCount++;
        if (lineCount != lineWithMaxVowels) {
            outputFile << line << std::endl;
        }
      
        
    }

    // Закриваємо файли
    inputFile.close();
    outputFile.close();

    std::cout << "Видалено рядок № " << lineWithMaxVowels
              << " з " << maxVowelCount << " голосними буквами." << std::endl;

    return 0;
}

#include <iostream>
#include <sstream>

void printMatchingWords(const std::string& str) {
    std::istringstream iss(str);
    std::string firstWord;
    iss >> firstWord;

    if (!firstWord.empty()) {
        std::cout << "Words matching with the first word \"" << firstWord << "\":\n";

        std::string word;
        while (iss >> word) {
            if (word == firstWord) {
                std::cout << word << std::endl;
            }
        }
    }
}

int main() {
    char inputString[256];

    std::cout << "Enter a string (up to 255 characters): ";
       gets(inputString);

    // Call the function for processing and printing matching words
    printMatchingWords(inputString);

    return 0;
}
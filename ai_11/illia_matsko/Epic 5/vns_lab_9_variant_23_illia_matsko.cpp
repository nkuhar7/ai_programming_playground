#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

void copyLinesWithSameWords(const string& inputFile, const string& outputFile) {
    ifstream inFile(inputFile);
    ofstream outFile(outputFile);

    if (!inFile.is_open() || !outFile.is_open()) {
        cerr << "Error opening files." << endl;
        return;
    }

    string line;
    while (getline(inFile, line)) {
        istringstream iss(line);
        vector<string> words(istream_iterator<string>{iss}, istream_iterator<string>{});

        if (adjacent_find(words.begin(), words.end()) != words.end()) {
            outFile << line << endl;
        }
    }

    cout << "Copied lines with same words to " << outputFile << endl;

    inFile.close();
    outFile.close();
}

int findWordWithMostA(const string& inputFile) {
    ifstream inFile(inputFile);

    if (!inFile.is_open()) {
        cerr << "Error opening file." << endl;
        return -1;
    }

    string line;
    int wordNumber = -1;
    int maxACount = 0;

    while (getline(inFile, line)) {
        istringstream iss(line);
        string word;
        int currentWordNumber = 0;

        while (iss >> word) {
            int aCount = count(word.begin(), word.end(), 'a');
            if (aCount > maxACount) {
                maxACount = aCount;
                wordNumber = currentWordNumber;
            }

            currentWordNumber++;
        }
    }

    inFile.close();

    return wordNumber;
}

int main() {
    ofstream f1("F1.txt");
    f1 << "Apple Apple Cherry" << endl;
    f1 << "Orange Grape Apple" << endl;
    f1 << "Banana Lemon Cherry" << endl;
    f1 << "Strawberry Raspberry" << endl;
    f1 << "Peach Bananaaaaaaaa Grapefruit" << endl;
    f1 << "Lemon Lime Banana aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" << endl;
    f1 << "Cherry Apple Mango" << endl;
    f1 << "Mango Grape Pineapple" << endl;
    f1 << "Grape Banana Orange" << endl;
    f1 << "Lemon Orange Grape" << endl;
    f1.close();


    copyLinesWithSameWords("F1.txt", "F2.txt");

    int wordNumberWithMostA = findWordWithMostA("F1.txt");
    if (wordNumberWithMostA != -1) {
        cout << "Word number with most 'A': " << wordNumberWithMostA << endl;
    } else {
        cerr << "Error finding word with most 'A'." << endl;
    }

    return 0;
}
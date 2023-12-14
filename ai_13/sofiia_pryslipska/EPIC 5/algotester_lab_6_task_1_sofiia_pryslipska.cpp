#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>  
#include <unordered_map>
#include <set>

using namespace std;

int main() {
    int k, n;
    cin >> k >> n;

    vector<string> words;         
    unordered_map<string, int> count_words;

    
    for (int i = 0; i < k; ++i) {
        string word;
        cin >> word;
        transform(word.begin(), word.end(), word.begin(), ::tolower);  
        words.push_back(word);
        count_words[word]++;
    }

    vector<string> word_result;

  
    for (const pair<string, int>& entry : count_words) {
        if (entry.second >= n) {
            word_result.push_back(entry.first);
        }
    }

   
    if (word_result.empty()) {
        cout << "Empty!" << endl;
        return 0;
    }

    set<char> letters;

    for (const string& word : word_result) {
        letters.insert(word.begin(), word.end());
    }

   
    vector<char> sorted_letters(letters.begin(), letters.end());
    sort(sorted_letters.begin(), sorted_letters.end(), greater<char>());

   
    cout << sorted_letters.size() << endl;

    for (const char& letter : sorted_letters) {
        cout << letter << " ";
    }

    cout << endl;

    return 0;
}


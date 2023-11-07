#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> array = {20, 33, 11, 9, 40, 50};
    int n = array.size();
    vector<int> sequences(n, 1);

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (array[i] > array[j]) {
                    sequences[i] = max(sequences[i], sequences[j] + 1);
                }
            }
        }

    int result = *max_element(sequences.begin(), sequences.end());
    
    cout << "The Longest Increasing Subsequence: " << result << endl;
    return 0;
}

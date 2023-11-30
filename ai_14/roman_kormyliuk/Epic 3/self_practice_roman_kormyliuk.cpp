#include <iostream>
#include <vector>
using namespace std;

int numIdenticalPairs(vector<int>& nums){
    int count = 0;
    for(int i = 0; i != nums.size(); ++i){
        for(int j = i + 1; j != nums.size(); ++j){
            if(nums[i] == nums[j]) ++count;
        }
    }
    return count;
}

int main(){
    cout << "Введи діапазон чисел (закінчіть діапазон любим символом тільки не числовим):\n";
    vector<int> nums;
    int numb;
    while (cin >> numb){
        nums.push_back(numb);
    }
    
    int result = numIdenticalPairs(nums);
    cout << "Кількість ідентичних пар: " << result << endl;
    return 0;
}
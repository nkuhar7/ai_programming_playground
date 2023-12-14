#include <iostream>
#include <algorithm>
#include <vector>

void readArray(std::vector<int>& arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

void printArray(const std::vector<int>& arr) {
    std::cout << arr.size() << std::endl;
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int N, M;
    std::cin >> N;
    std::vector<int> arrayN(N);
    readArray(arrayN, N);

    std::cin >> M;
    std::vector<int> arrayM(M);
    readArray(arrayM, M);

    std::sort(arrayN.begin(), arrayN.end());
    std::sort(arrayM.begin(), arrayM.end());

    std::vector<int> differenceNM, differenceMN, intersection, Union, symmetricDifference;

    std::set_difference(arrayN.begin(), arrayN.end(), arrayM.begin(), arrayM.end(), std::back_inserter(differenceNM));
    printArray(differenceNM);

    std::set_difference(arrayM.begin(), arrayM.end(), arrayN.begin(), arrayN.end(), std::back_inserter(differenceMN));
    printArray(differenceMN);

    std::set_intersection(arrayN.begin(), arrayN.end(), arrayM.begin(), arrayM.end(), std::back_inserter(intersection));
    printArray(intersection);

    std::set_union(arrayN.begin(), arrayN.end(), arrayM.begin(), arrayM.end(), std::back_inserter(Union));
    printArray(Union);

    std::set_symmetric_difference(arrayN.begin(), arrayN.end(), arrayM.begin(), arrayM.end(), std::back_inserter(symmetricDifference));
    printArray(symmetricDifference);

    return 0;
}

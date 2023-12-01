#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> v(8);
    for(string& s : v) cin >> s;

    int Q;
    cin >> Q;

    vector<pair<int, int>> requests(Q);
    for(auto& p : requests) {
        cin >> p.first >> p.second;


    }



    return 0;
}

#include <iostream>

using namespace std;

int main(){
    char cave[1000][1000];
    int N, M;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> cave[i][j];
        }
    }

    for(int i = 0; i < M; i++){
        for(int k = 0; k < N-1; k++){
            for(int j = 0; j < N-k-1; j++){
                if(cave[j][i]=='S' && cave[j+1][i]=='O'){
                    char tmp = cave[j][i];
                    cave[j][i] = cave[j+1][i];
                    cave[j+1][i] = tmp;
                }
            }
        }
    }
    cout << endl;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << cave[i][j];
        }
        cout << endl;
    }
    return 0;
}
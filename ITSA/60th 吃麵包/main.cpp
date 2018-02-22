#include<iostream>
using namespace std;

int main(){
    int S, N, M, Q, R;
    cin >> S;
    for(int i = 0; i < S; i++){
        cin >> N >> M;
        int *full = NULL;
        full = new int[N];
        for(int j = 0; j < N; j++){
            cin >> full[j];
        }
        for(int j = 0; j < M; j++){
            cin >> Q >> R;
            Q--;
            R--;
            int sum = 0;
            for(int k = Q; k <= R; k++){
                sum += full[k];
            }
            cout << sum << endl;
        }
        delete [] full;
    }
    
    return 0;
}

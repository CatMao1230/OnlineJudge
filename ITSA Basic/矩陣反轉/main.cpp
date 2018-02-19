#include<iostream>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    int n[100][100] = { 0 };
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++)
            cin >> n[i][j];
    }
    for(int i = 0; i < w; i++){
        for(int j = 0; j < h; j++){
            cout << n[j][i];
            if(j != h - 1){
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main(){
    int X[26] = { 10, 11, 12, 13, 14, 15, 16, 17, 34,
                  18, 19, 20, 21, 22, 35, 23, 24, 25,
                  26, 27, 28, 29, 32, 30, 31, 33}; // 英文對應的代號
    int N[9];
    string str;
    cin >> str;
    
    for(int i = 0; i < 9; i++){
        N[i] = str[i + 1] - 48;
    }
    
    int X1 = X[str[0] - 65] / 10;
    int X2 = X[str[0] - 65] % 10;
    if((X1 + 9 * X2 + 8 * N[0] + 7 * N[1] + 6 * N[2] + 5 * N[3] + 4 * N[4] + 3 * N[5] + 2 * N[6] + N[7] + N[8]) % 10 == 0){
        cout << "CORRECT!!!" << endl;
    }
    else{
        cout << "WRONG!!!" << endl;
    }
    
    return 0;
}

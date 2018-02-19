#include<iostream>
using namespace std;

int main(){
    int cell[9] = { -1 };
    for(int i = 0; i < 9; i++){
        cin >> cell[i];
    }
    if((cell[0] == cell[1] && cell[0] == cell[2]) ||
       (cell[3] == cell[4] && cell[3] == cell[5]) ||
       (cell[6] == cell[7] && cell[6] == cell[8]) ||
       (cell[0] == cell[4] && cell[0] == cell[8]) ||
       (cell[2] == cell[4] && cell[2] == cell[6]) ||
       (cell[0] == cell[3] && cell[0] == cell[6]) ||
       (cell[1] == cell[4] && cell[1] == cell[7]) ||
       (cell[2] == cell[5] && cell[2] == cell[8])){
        cout << "True" << endl;
    }
    else cout << "False" << endl;
    
    return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main(){
    int price[7] = { 2000000, 200000, 40000, 10000, 4000, 1000, 200};
    string award[4] = { "" };
    int reward[10] = { 0 };
    int n = 0, sum = 0;
    for(int i = 0; i < 4; i++){
        cin >> award[i];
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;
        if(temp == award[0]){
            reward[0]++;
        }
        else{
            int max = 0;
            for(int j = 1; j < 4; j++){
                int bingo = 0;
                for(int k = 7; k >= 0; k--){
                    if(temp[k] == award[j][k]){
                        bingo++;
                    }
                    else{
                        break;
                    }
                }
                if(bingo > max){
                    max = bingo;
                }
            }
            reward[9 - max]++;
        }
    }
    for(int i = 0; i < 7; i++){
        cout << reward[i];
        sum += reward[i] * price[i];
        if(i != 6){
            cout << " ";
        }
        else{
            cout << endl;
        }
    }
    cout << sum << endl;
    
    return 0;
}

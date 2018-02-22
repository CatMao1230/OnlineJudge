#include<iostream>
using namespace std;

int main(){
    int n[4] = { 0 }, dice[6] = { 0 }, number = 0, same = 0, temp = 0;
    string answer = "";
    for(int i = 0; i < 4; i++){
        cin >> n[i];
    }
    for(int i = 0; i < 4; i++){
        dice[n[i] - 1]++;
    }
    for(int i = 0; i < 6; i++){
        if(dice[i] == 1){
            same++;
        }
        if(dice[i] == 2){
            temp = 0;
            for(int j = 0; j < 4; j++){
                if(n[j] != i + 1){
                    temp += n[j];
                }
            }
            if(temp > number){
                number = temp;
            }
        }
        if(dice[i] == 3){
            answer = "R";
            break;
        }
        if(dice[i] == 4){
            answer = "WIN";
            break;
        }
    }
    if(same == 4){
        answer = "R";
    }
    if(answer != ""){
        cout << answer << endl;
    }
    else{
        cout << number << endl;
    }
    
    
    return 0;
}

#include<iostream>
#include<string>
using namespace std;  
  
int main(){
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int score[3] = { 0 }, pass = 0, sum = 0;
        string answer = "";
        for(int j = 0; j < 3; j++){
            cin >> score[j];
            if(score[j] >= 60){
                pass++;
            }
            sum += score[j];
        }
        if(pass == 3){
            answer = "P";
        }
        else if(pass == 2){
            if(sum >= 220){
                answer = "P";
            }
            else{
                answer = "M";
            }
        }
        else if(pass == 1){
            answer = "F";
            for(int j = 0; j < 3; j++){
                if(80 <= score[j]){
                    answer = "M";
                    break;
                }
            }
        }
        else{
            answer = "F";
        }
        cout << answer << endl;
    }
  
    return 0;  
}  

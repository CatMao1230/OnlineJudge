#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    int n;
    string str, temp;
    cin >> n;
    getline(cin, str);
    for(int i = 0; i < n; i++){
        int ans[4][13] = { { 0 }, { 0 }, { 0 }, { 0 } };
        getline(cin, str);
        istringstream iss(str);
        while(!iss.eof()){
            iss >> temp;
            char color = temp[0];
            int number = atoi(temp.substr(1, 3).c_str());
            switch(color){
                case 'S':
                    ans[0][number - 1] = number;
                    break;
                case 'H':
                    ans[1][number - 1] = number;
                    break;
                case 'D':
                    ans[2][number - 1] = number;
                    break;
                case 'C':
                    ans[3][number - 1] = number;
                    break;
                default:
                    break;
            }
        }
        bool isFirst = true;
        for(int j = 0; j < 4; j++){
            char color = ' ';
            switch(j){
                case 0:
                    color = 'S';
                    break;
                case 1:
                    color = 'H';
                    break;
                case 2:
                    color = 'D';
                    break;
                case 3:
                    color = 'C';
                    break;
                default:
                    break;
            }
            for(int k = 12; k >= 0; k--){
                if(ans[j][k] != 0){
                    if(!isFirst){
                        cout << " " << color << ans[j][k];
                    }
                    else{
                        cout << color << ans[j][k];
                        isFirst = false;
                    }
                }
            }
        }
        cout << endl;
    }
    
    return 0;
}

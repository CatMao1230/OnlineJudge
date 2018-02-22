#include<iostream>
#include<string>
using namespace std;

int main(){
    string ans = "", temp = "";
    cin >> ans;
    while(cin >> temp){
        int A = 0, B = 0;
        if(temp == "0000"){
            break;
        }
        for(int i = 0; i < 4; i++){
            if(ans[i] == temp[i]){
                A++;
            }
            else{
                for(int j = 0; j < 4; j++){
                    if(ans[i] == temp[j]){
                        B++;
                    }
                }
            }
        }
        cout << A << "A" << B << "B" << endl;
    }
    
    return 0;
}

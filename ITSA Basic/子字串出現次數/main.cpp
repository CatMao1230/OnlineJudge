#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string child, str;
    int count = 0;
    cin >> child >> str;
    for(int i = 0, len = str.length(); i < len; i++){
        if(str[i] == child[0]){
            bool isSame = true;
            for(int j = 0, chlen = child.length(); j < chlen; j++){
                if(str[j + i] != child[j]){
                    isSame = false;
                    break;
                }
            }
            if(isSame){
                count++;
            }
        }
    }
    cout << count << endl;
    
    return 0;
}

#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string str;
    bool isPali = true;
    cin >> str;
    
    for(int i = 0, len = str.length() / 2; i < len; i++){
        if(str[i] != str[str.length() - i - 1]){
            isPali = false;
        }
    }
    cout << (isPali ? "YES" : "NO") << endl;
    
    return 0;
}

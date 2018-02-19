#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    map<char, char> qwerty;
    string str;
    
    string key = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./ ";
    string ans = "1234567890-==wertyuiop[]\\\\sdfghjkl;\'\'xcvbnm,.// ";
    for(int i = 0, len = key.length(); i < len; i++){
        qwerty[key[i]] = ans[i];
    }
    
    getline(cin, str);
    for(int i = 0, len = str.length(); i < len; i++){
        str[i] = tolower(str[i]);
        cout << qwerty.find(str[i])->second;
    }
    cout << endl;
    
    return 0;
}

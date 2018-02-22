#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    int n;
    getline(cin, str);
    cin >> n;
    for(int i = 0, len = str.length(); i < len; i++){
        char c = str[i];
        int code = c + n;
        if('a' <= c && c <= 'z'){
            while(code > 'z'){
                code -= 26;
            }
            cout << (char)code;
        }
        else if('A' <= c && c <= 'Z'){
            while(code > 'Z'){
                code -= 26;
            }
            cout << (char)code;
        }
        else if('0' <= c && c <= '9'){
            while(code > '9'){
                code -= 10;
            }
            cout << (char)code;
        }
        else{
            cout << c;
        }
    }
    cout << endl;
    
    return 0;
}

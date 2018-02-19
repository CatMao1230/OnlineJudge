#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    int count[53] = {0};
    string str;
    getline(cin, str);
    for(int i = 0; i < str.length(); i++){
        int ascii = (int)str[i];
        if(65 <= ascii && ascii <= 90){
            count[ascii - 65]++;
        }
        else if(97 <= ascii && ascii <= 122){
            count[ascii - 97 + 26]++;
        }
        else if(ascii == 32){
            count[52]++;
        }
    }
    cout << count[52] + 1 << endl;
    for(int i = 0; i < 26; i++){
        if(count[i+26] != 0)
            cout << (char)(i + 97) << " : " << count[i + 26] << endl;
        if(count[i] != 0)
            cout << (char)(i + 65) << " : " << count[i] << endl;
    }
    
    return 0;
}

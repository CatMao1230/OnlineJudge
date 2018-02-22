#include<iostream>
#include<string>
using namespace std;

int main(){
    int n = 0;
    string str;
    cin >> n;
    getline(cin, str);
    for(int i = 0; i < n; i++){
        getline(cin, str);
        for(int j = str.length() - 1; j >= 0; j--){
            cout << str[j];
        }
        cout << endl;
    }
    
    return 0;
}

#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        string str;
        int sum = 0;
        getline(cin, str);
        for(int j = 0, len = str.length(); j < len; j++){
            sum += (int)str[j];
        }
        cout << sum << endl;
    }
    
    return 0;
}

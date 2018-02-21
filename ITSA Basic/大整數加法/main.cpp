#include<iostream>
#include<string>
using namespace std;  
  
int main(){
    int n;
    cin >> n;  
    for(int i = 0; i < n; i++){
        string strA, strB;
        cin >> strA >> strB;
        int a[31] = { 0 }, b[31] = { 0 }, c[31] = { 0 };
        for(int j = 0, len = strA.length(); j < len; j++){
            a[len - 1 - j] = (int)strA[j] - 48;
        }
        for(int j = 0, len = strB.length(); j < len; j++){
            b[len - 1 - j] = (int)strB[j] - 48;
        }

        int temp = 0;
        for(int j = 0; j < 31; j++){
            c[j] = a[j] + b[j] + temp;
            temp = 0;
            if(c[j] >= 10){
                temp++;
                c[j] -= 10;
            }
        }
        bool isFirst = false;
        for(int j = 30; j >= 0; j--){
            if(!isFirst && c[j] != 0){
                isFirst = true;
            }
            if(isFirst){
                cout << c[j];
            }
        }
        cout << endl;
    }
  
    return 0;  
}  

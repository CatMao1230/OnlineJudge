#include<iostream>
using namespace std;

int main(){
    string str;
    int number[10] = { 0 };
    for(int i = 0; i < 10; i++){
        cin >> str;
        if(str == "X"){
            number[i] = 10;
        }
        else{
            number[i] = atoi(str.c_str());
        }
    }
    for(int j = 0; j < 2; j++){
        for(int i = 1; i < 10; i++){
            number[i] += number[i - 1];
        }
    }
    if(number[9] % 11 == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}

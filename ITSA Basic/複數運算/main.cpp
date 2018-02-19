#include<iostream>
using namespace std;

int main(){
    int n;
    char ch;
    int num[4] = { 0 };
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> ch;
        cin >> num[0] >> num[1] >> num[2] >> num[3];
        switch(ch){
            case '-':
                cout << num[0] - num[2] << " " << num[1] - num[3] << endl;
                break;
            case '+':
                cout << num[0] + num[2] << " " << num[1] + num[3] << endl;
                break;
            case '*':
                cout << num[0] * num[2]  -num[1] * num[3] << " " << num[1] * num[2] + num[0] * num[3] << endl;
                break;
            default:
                break;
        }
    }
    
    return 0;
}

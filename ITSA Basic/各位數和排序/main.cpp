#include<iostream>
#include<string>
using namespace std;

int main(){
    int n = 0;
    int num[10][2] = { 0 };
    cin >> n;
    for(int i = 0; i < n; i++){
        int sum = 0, temp = 0;
        cin >> temp;
        num[i][0] = temp;
        while(temp > 0){
            num[i][1] += temp % 10;
            temp /= 10;
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(num[i][1] > num[j][1]){
                int temp = num[i][1];
                num[i][1] = num[j][1];
                num[j][1] = temp;
                temp = num[i][0];
                num[i][0] = num[j][0];
                num[j][0] = temp;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(num[i][1] == num[j][1]){
                if(num[i][0] > num[j][0]){
                    int temp = num[i][1];
                    num[i][1] = num[j][1];
                    num[j][1] = temp;
                    temp = num[i][0];
                    num[i][0] = num[j][0];
                    num[j][0] = temp;
                }
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        cout << num[i][0];
        if(i != n - 1){
            cout << " ";
        }
        else{
            cout << endl;
        }
    }
    
    
    return 0;
}

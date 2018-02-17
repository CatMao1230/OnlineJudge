#include<iostream>
using namespace std;  
  
int main(){  
    int time[4], min = 0, money = 0;  
    int price[24] = {30, 30, 30, 30, 40, 40, 40, 40, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60, 60};  
    for(int i = 0; i < 4; i++){  
        cin >> time[i];  
    }  
    min = time[3] - time[1];  
    min += (time[2] - time[0]) * 60;  
    for(int i = 0; i < min / 30; i++){  
        money += price[i];  
    }  
    cout << money << endl;  
    
    return 0;  
}  
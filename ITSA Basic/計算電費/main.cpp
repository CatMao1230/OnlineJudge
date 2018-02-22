#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n = 0;
    float total[2] = { 0 };
    float price[2][5] = {
        { 2.10f, 3.02f, 4.39f, 4.97f, 5.63f },
        { 2.10f, 2.68f, 3.61f, 4.01f, 4.50f }
    };
    cin >> n;
    if(n >= 701){
        for(int i = 0; i < 2; i++){
            total[i] += (n - 700) * price[i][4];
        }
        n = 700;
    }
    if(n >= 501){
        for(int i = 0; i < 2; i++){
            total[i] += (n - 500) * price[i][3];
        }
        n = 500;
    }
    if(n >= 331){
        for(int i = 0; i < 2; i++){
            total[i] += (n - 330) * price[i][2];
        }
        n = 330;
    }
    if(n >= 121){
        for(int i = 0; i < 2; i++){
            total[i] += (n - 120) * price[i][1];
        }
        n = 120;
    }
    for(int i = 0; i < 2; i++){
        total[i] += n * price[i][0];
    }
    cout << "Summer months:" << fixed << setprecision(2) << total[0] << endl;
    cout << "Non-Summer months:" << fixed << setprecision(2) << total[1] << endl;
    
    return 0;
}

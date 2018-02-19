#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int h, gender;
    while(cin >> h >> gender){
        if(gender == 1){
            cout << fixed <<  setprecision(1) << (h - 80) * 0.7 << endl;
        }
        else{
            cout << fixed <<  setprecision(1) << (h - 70) * 0.6 << endl;
        }
    }
    
    return 0;
}

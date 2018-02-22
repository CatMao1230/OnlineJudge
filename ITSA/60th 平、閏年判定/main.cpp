#include<iostream>
using namespace std;

int main(){
    int year = 0, n = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> year;
        if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){ // 閏年
            cout << "Bissextile Year" << endl;
        }
        else{
            cout << "Common Year" << endl;
        }
    }
    
    return 0;
}

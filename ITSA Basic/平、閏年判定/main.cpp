#include<iostream>
using namespace std;

int main(){
    int year;
    while(cin >> year){
        if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){ // 閏年
            cout << "Bissextile Year" << endl;
        }
        else{
            cout << "Common Year" << endl;
        }
    }
    
    return 0;
}

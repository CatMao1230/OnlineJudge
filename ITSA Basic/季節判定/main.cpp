#include<iostream>  
#include<string>  
#include<sstream>  
using namespace std;  
  
int main(){  
    string season[12] = {"Winter", "Winter", "Spring", "Spring", "Spring", "Summer", "Summer", "Summer", "Autumn", "Autumn", "Autumn", "Winter"};  
    int n;  
  
    cin >> n;  
    cout << season[n - 1] << endl;  
  
    return 0;  
}  
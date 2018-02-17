#include<iostream>
using namespace std;  
  
int main(){  
    int x, y, r = 100;  
    while(cin >> x >> y)  
        cout << (((x * x + y * y) <= r * r) ? "inside" : "outside") << endl;  
    
    return 0;  
}  
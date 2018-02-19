#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    for(int i = 3; i <= n; i += 3){
        sum += i;
    }
    cout << sum << endl;
    
    return 0;
}

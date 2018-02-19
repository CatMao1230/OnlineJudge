#include<iostream>
using namespace std;

int main(){
    double r, sum = 0;
    long long int n, p;
    cin >> r >> n >> p;
    
    for(int i = 0; i < n; i++){
        sum += p;
        sum *= (1. + r);
    }
    cout << (long long int)sum << endl;
    
    return 0;
}

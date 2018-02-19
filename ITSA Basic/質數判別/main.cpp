#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n > 2){
        bool isFound = false;
        for(int i = 2, max = n / 2; i < max; i++){
            if(n % i == 0){
                isFound = true;
                break;
            }
        }
        cout << (isFound ? "NO" : "YES") << endl;
    }
    else if(n == 2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}

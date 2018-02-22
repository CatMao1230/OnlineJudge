#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int T = 0, m = 0, k = 0, sum = 0;
        cin >> T >> m >> k;
        int *price = NULL;
        price = new int[k];
        for(int j = 0; j < k; j++){
            cin >> price[j];
        }
        for(int j = 0; j < m; j++){
            int min = 999999;
            int minI = 999999;
            for(int h = 0; h < k; h++){
                if(price[h] < min){
                    min = price[h];
                    minI = h;
                }
            }
            sum += price[minI];
            price[minI] = 999999;
        }
        if(T >= sum){
            cout << sum << endl;
        }
        else{
            cout << "Impossible" << endl;
        }
        delete [] price;
    }
    
    return 0;
}

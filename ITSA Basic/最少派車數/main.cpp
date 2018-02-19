#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n, s, d;
    while (cin >> n) {
        int count[25] = { 0 };
        for (int i = 0; i < n; i++) {
            cin >> s >> d;
            for (int j = s; j < d; j++) {
                count[j]++;
            }
        }
        int max = -1;
        for (int i = 0; i <= 24; i++) {
            if (count[i] > max) {
                max = count[i];
            }
        }
        cout << max << endl;
    }
    
    return 0;
}

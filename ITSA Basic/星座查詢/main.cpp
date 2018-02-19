#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
    
    int B[12] = {21, 19, 21, 21, 22, 22, 23, 24, 24, 24, 23, 22};
    string Const[12] = {"Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius", "Capricorn"};
    
    int M, D;
    cin >> M >> D;
    cout << Const[(M + (int)floor((float)D / (float)B[M - 1]) + 10) % 12] << endl;
    
    return 0;
}

#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>
using namespace std;

int main(){
    string str;
    
    while(getline(cin, str)){
        int count = 0, temp;
        float avg = 0;
        
        istringstream iss(str);
        while(!iss.eof()){
            iss >> temp;
            avg += temp;
            count++;
        }
        avg /= count;
        
        cout << fixed << setprecision(3) << "Size: " << count << endl;
        cout << fixed << setprecision(3) << "Average: " << avg << endl;
    }
    
    return 0;
}

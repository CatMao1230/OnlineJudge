#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string str;
    while(getline(cin, str)){
        int temp, index = 0, count = 0;
        int num[10][2] = { { 0 }, { 0 } };
        
        istringstream iss(str);
        while(!iss.eof()){
            iss >> temp;
            bool isFound = false;
            for(int i = 0; i < index; i++){
                if(temp == num[i][0]){
                    num[i][1]++;
                    isFound = true;
                }
            }
            if(!isFound){
                num[index][0] = temp;
                num[index][1]++;
                index++;
            }
            count++;
        }
        count /= 2;

        bool isFound = false;
        for(int i = 0; i < index; i++){
            if(num[i][1] > count){
                cout << num[i][0] << endl;
                isFound = true;
                break;
            }
        }
        if(!isFound){
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

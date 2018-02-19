#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    
    string str, strs[100], temp;
    int index = 0;
    getline(cin, str);
    istringstream iss(str);
    while (!iss.eof())
    {
        bool isFound = false;
        iss >> temp;
        for(int i = 0, len = temp.length(); i < len; i++){
            if(65 <= (int)temp[i] && (int)temp[i] <= 90){
                temp[i] = temp[i] + 32;
            }
        }
        for(int i = 0; i < index; i++){
            if(temp == strs[i]){
                isFound = true;
                break;
            }
        }
        if(!isFound){
            strs[index] = temp;
            index++;
        }
    }
    for(int i = 0; i < index - 1; i++){
        cout << strs[i] << " ";
    }
    cout << strs[index - 1] << endl;
    
    return 0;
}

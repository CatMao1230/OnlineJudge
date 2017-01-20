#include<iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int n;
	string str;
	int index;

	// 輸入食物價值
	while(cin >> n){
		if (n == 0) {
			break;
		}

		// 輸入珠寶價值
		cin.get(); // 裝載 ENTER
		getline(cin, str);

		int BoxValue[100];
		index = 0;
		istringstream iss(str);
		while (!iss.eof())
		{
			iss >> sTmp;
			
			index++;
		}
		
		// 檢測要拿第幾個箱子到第幾個箱子
		bool isFound = false;
		int First = 0;
		int Last = 0;
		int sum = 0;
		for (int i = 0; i < index; i++) {
			sum = BoxValue[i]; // 拿的第一個箱子
			First = i;
			if (sum == n) {
				Last = i;
				isFound = true;
				break;
			}
			for (int j = i + 1; j < index; j++) { // 第一個箱子之後
				sum += BoxValue[j];
				if (sum == n) {
					Last = j;
					isFound = true;
				}
				if (sum > n) { // 超出食物值
					break;
				}
			}
			if (isFound) {
				break;
			}
		}

		// 輸出答案
		if (isFound) {
			cout << First + 1 << " " << Last + 1 << endl;
		}
		else {
			cout << "找不到相符合的箱子" << endl;
		}
	}

	return 0;
}
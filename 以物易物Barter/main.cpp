#include<iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int n;
	string str;
	int index;

	// ��J��������
	while(cin >> n){
		if (n == 0) {
			break;
		}

		// ��J�]�_����
		cin.get(); // �˸� ENTER
		getline(cin, str);

		int BoxValue[100];
		index = 0;
		istringstream iss(str);
		while (!iss.eof())
		{
			iss >> sTmp;
			
			index++;
		}
		
		// �˴��n���ĴX�ӽc�l��ĴX�ӽc�l
		bool isFound = false;
		int First = 0;
		int Last = 0;
		int sum = 0;
		for (int i = 0; i < index; i++) {
			sum = BoxValue[i]; // �����Ĥ@�ӽc�l
			First = i;
			if (sum == n) {
				Last = i;
				isFound = true;
				break;
			}
			for (int j = i + 1; j < index; j++) { // �Ĥ@�ӽc�l����
				sum += BoxValue[j];
				if (sum == n) {
					Last = j;
					isFound = true;
				}
				if (sum > n) { // �W�X������
					break;
				}
			}
			if (isFound) {
				break;
			}
		}

		// ��X����
		if (isFound) {
			cout << First + 1 << " " << Last + 1 << endl;
		}
		else {
			cout << "�䤣��۲ŦX���c�l" << endl;
		}
	}

	return 0;
}
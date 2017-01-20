#include<iostream>
using namespace std;

unsigned long ThreeNPlusOne(unsigned long n) {
	int len = 1; // �쥻���Ʀr�]��@��
	while (true) {
		if (n == 1) {
			return len;
		}
		else {
			if (n % 2 == 1) { // �O�_��
				n = 3 * n + 1;
			}
			else {
				n /= 2;
			}
			len++;
		}
	}
}

int main()
{
	unsigned long i, j;
	while (cin >> i >> j) {
		cout << i << " " << j << " ";
		if (i > j) { // �T�O j �� i �j
			int temp = i;
			i = j;
			j = temp;
		}
		int Max = 0;
		for (int a = i; a <= j; a++) {
			int temp = ThreeNPlusOne(a);
			if (temp > Max) {
				Max = temp;
			}
		}
		cout << Max << endl;
	}

	return 0;
}
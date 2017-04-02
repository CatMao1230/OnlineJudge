/*

�̵u���|�j�M
https://catmaoblog.wordpress.com/2017/04/02/multiple-shortest-routes/
---------------------------------------------------------------------
By. CatMao

*/
#include<iostream>
#define Infinity 2147483647
using namespace std;

int main() {

	int C; // �X������
	cin >> C;
	for (int count = 0; count < C; count++) {

		bool More = false; // �O�_���ĤG�����|
		int Route = Infinity; // �̵u���|

		int n; // �ؿv�� node
		int des; // �ت��a
		int m; // ���
		cin >> n >> des >> m;

		// �ʺA�x�}
		int ** edge; // ��
		edge = new int *[n];
		for (int i = 0; i < n; i++)
		{
			edge[i] = new int[n];
		}

		for (int i = 0; i < n; i++) { // ��l��
			for (int j = 0; j < n; j++) {
				edge[i][j] = -1;
			}
			edge[i][i] = Infinity;
		}
		edge[0][0] = 0; // �_�I���̵u���|�� 0

		int * front; // �e�����I
		front = new int[n];
		for (int i = 0; i < n; i++) {
			front[n] = -1; // ���w�S���e�@���I
		}

		// �w�q m ����
		for (int i = 0; i < m; i++) {
			int node1, node2, num;
			cin >> node1 >> node2 >> num;
			edge[node1][node2] = num;
		}

		// �̵u���|�t��k
		for (int i = 0; i < n - 1; i++) {
			for (int u = 0; u < n; u++) {
				for (int v = 0; v < n; v++) {
					if (u != v && edge[u][v] != -1) { // ����
						if (edge[v][v] > edge[u][u] + edge[u][v]) {
							edge[v][v] = edge[u][u] + edge[u][v];
							front[v] = u;
						}
					}
				}
			}
		}
		Route = edge[des][des];

		// �d�ݬO�_����إH�W�̵u���|
		int now = des; // �q���I���e����|
		int FrontCount = 0; // �q���I��_�I���̵u���
		int DifCount = 0; // �ⱼ��Ƴ̤p���|���ۦP
		while (0 <= front[now] && front[now] < n) {
			int temp = edge[front[now]][now];
			edge[front[now]][now] = -1; // �����䤤�@����

										// �̵u���|�t��k

			for (int i = 0; i < n; i++) { // ��l��
				edge[i][i] = Infinity;
			}
			edge[0][0] = 0;

			for (int i = 0; i < n - 1; i++) {
				for (int u = 0; u < n; u++) {
					for (int v = 0; v < n; v++) {
						if (u != v && edge[u][v] != -1) { // ����
							if (edge[v][v] > edge[u][u] + edge[u][v]) {
								edge[v][v] = edge[u][u] + edge[u][v];
							}
						}
					}
				}
			}
			if (edge[des][des] != Route) { // �ⱼ��̤p���|�ܤj �N���䥲���s�b
				DifCount++;
			}
			edge[front[now]][now] = temp;
			FrontCount++;
			now = front[now];
			if (now == 0) {
				if (FrontCount != DifCount) {
					More = true;
				}
				break;
			}
		}

		cout << (More ? "yes" : "no") << endl;
		if (Route == Infinity) cout << "x" << endl;
		else cout << Route << endl;

		// ����ʺA�}�C
		for (int i = 0; i < n; i++)
			delete[] edge[i];
		delete [] edge;
		delete front;

	}

	return 0;
}
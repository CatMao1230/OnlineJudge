/*

最短路徑搜尋
https://catmaoblog.wordpress.com/2017/04/02/multiple-shortest-routes/
---------------------------------------------------------------------
By. CatMao

*/
#include<iostream>
#define Infinity 2147483647
using namespace std;

int main() {

	int C; // 幾筆測資
	cin >> C;
	for (int count = 0; count < C; count++) {

		bool More = false; // 是否有第二條路徑
		int Route = Infinity; // 最短路徑

		int n; // 建築物 node
		int des; // 目的地
		int m; // 邊數
		cin >> n >> des >> m;

		// 動態矩陣
		int ** edge; // 邊
		edge = new int *[n];
		for (int i = 0; i < n; i++)
		{
			edge[i] = new int[n];
		}

		for (int i = 0; i < n; i++) { // 初始值
			for (int j = 0; j < n; j++) {
				edge[i][j] = -1;
			}
			edge[i][i] = Infinity;
		}
		edge[0][0] = 0; // 起點的最短路徑為 0

		int * front; // 前面的點
		front = new int[n];
		for (int i = 0; i < n; i++) {
			front[n] = -1; // 假定沒有前一個點
		}

		// 定義 m 個邊
		for (int i = 0; i < m; i++) {
			int node1, node2, num;
			cin >> node1 >> node2 >> num;
			edge[node1][node2] = num;
		}

		// 最短路徑演算法
		for (int i = 0; i < n - 1; i++) {
			for (int u = 0; u < n; u++) {
				for (int v = 0; v < n; v++) {
					if (u != v && edge[u][v] != -1) { // 有邊
						if (edge[v][v] > edge[u][u] + edge[u][v]) {
							edge[v][v] = edge[u][u] + edge[u][v];
							front[v] = u;
						}
					}
				}
			}
		}
		Route = edge[des][des];

		// 查看是否有兩種以上最短路徑
		int now = des; // 從終點往前找路徑
		int FrontCount = 0; // 從終點到起點的最短邊數
		int DifCount = 0; // 抽掉邊數最小路徑不相同
		while (0 <= front[now] && front[now] < n) {
			int temp = edge[front[now]][now];
			edge[front[now]][now] = -1; // 拿掉其中一個邊

										// 最短路徑演算法

			for (int i = 0; i < n; i++) { // 初始值
				edge[i][i] = Infinity;
			}
			edge[0][0] = 0;

			for (int i = 0; i < n - 1; i++) {
				for (int u = 0; u < n; u++) {
					for (int v = 0; v < n; v++) {
						if (u != v && edge[u][v] != -1) { // 有邊
							if (edge[v][v] > edge[u][u] + edge[u][v]) {
								edge[v][v] = edge[u][u] + edge[u][v];
							}
						}
					}
				}
			}
			if (edge[des][des] != Route) { // 抽掉後最小路徑變大 代表此邊必須存在
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

		// 釋放動態陣列
		for (int i = 0; i < n; i++)
			delete[] edge[i];
		delete [] edge;
		delete front;

	}

	return 0;
}
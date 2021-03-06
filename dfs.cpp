#include <bits/stdc++.h>

#define F first
#define S second
#define pb push_back
#define INF (1 << 30)
#define SQR(a) ((a) * (a))

using namespace std;

const int N = 1111;

int a[N][N]; //матрица смежности
bool f[N];
int n, m; //кол-во вершин и ребер

void dfs(int v)
{
	if (f[v])
		return;
	cout << v << endl;
	f[v] = true;

	for (int i = 0; i < n; i++)
		if (a[i][v] == 1)
			dfs(i);
}

int main()
{
	//depth-first-search
	//поиск в глубину
	freopen("input.txt", "r", stdin);
	cin >> n >> m;			
	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		x--, y--;
		a[x][y] = a[y][x] = 1;
	}

	stack<int> q;

	while (true)
	{
		bool flag = false;
		for (int i = 0; i < n; i++)
		{
			if (f[i] == false)
			{
				q.push(i);
				f[i] = true;
				flag = true;
				break;
			}
		}
		if (!flag)
			break;

		while (!q.empty())
		{
			int cur = q.top();
			q.pop();
			cout << cur + 1 << " ";
			for (int i = 0; i < n; i++)
			{
				if (a[i][cur] == 1 && f[i] == false)
				{
					q.push(i);
					f[i] = true;	
				}
			}
		}
		cout << endl << "End of connectivity component" << endl;
	}

	return 0;
}

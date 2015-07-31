#include <bits/stdc++.h>

#define F first
#define S second
#define pb push_back
#define INF (1 << 30)
#define SQR(a) ((a) * (a))

using namespace std;

const int N = 50;

int w[N], c[N];
int volume, n;		
int ans = 0;

void rec(int next = 0, int weight = 0, int cost = 0)
{
	if (next == n)
	{
		if (weight <= volume)
			ans = max(ans, cost);
		return;
	}
	rec(next + 1, weight + w[next], cost + c[next]);
	rec(next + 1, weight, cost);
}

int main()
{
	freopen("input.txt", "r", stdin);

	cin >> n >> volume;
	for (int i = 0; i < n; i++)
	{
		cin >> w[i] >> c[i];
	}

	rec();

	cout << ans;

	return 0;
}

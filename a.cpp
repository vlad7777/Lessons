#include <bits/stdc++.h>

#define F first
#define S second
#define pb push_back
#define INF (1 << 30)
#define SQR(a) ((a) * (a))

using namespace std;

const int N = 21;

int n;
int ans;
int a[N];
int b[N];
vector<int> v;

void check()
{
	v.clear();
	v.reserve(n);
	for (int i = 0; i < n; i++)
		if (b[i])
			v.push_back(a[i]);
	while (true)
	{
		bool flag = false;
		int sum = 0;
		for (auto &e : v)
		{
			sum += e % 10;
			e /= 10;
			if (e != 0)
				flag = true;
		}
		if (sum > 9)
			return;
		if (!flag)
			break;
	}	
	ans = max(ans, (int)v.size());
}

void rec(int current)
{
	if (current == n)
	{
		check();
		return;
	}	
	b[current] = 0;
	rec(current + 1);
	b[current] = 1;
	rec(current + 1);
}

void sleep(double seconds)
{
	int c = clock();
	while (double(clock() - c) / CLOCKS_PER_SEC < seconds);
}

int main()
{
	//freopen("input.txt", "r", stdin);
	int c1 = clock();
	cin >> n;
	
	for (int i = 0; i < n; i++)
		cin >> a[i];

	rec(0);

	cout << ans;

	cerr << endl << double(clock() - c1) / CLOCKS_PER_SEC;

	return 0;
}

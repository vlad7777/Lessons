#include <bits/stdc++.h>

#define F first
#define S second
#define pb push_back
#define INF (1 << 30)
#define SQR(a) ((a) * (a))

using namespace std;

int check(int a)
{
	cout << "My guess is " << a << endl;
	char c;
	cin >> c;
	if (c == '=')
		return 0;
	else if (c == '>')
		return 1;
	else if (c == '<')
		return -1;
	else
		exit(1);
}

int main()
{
	int l = 0, r = 1000;
	while (l < r)
	{
		int m = (l + r) / 2;
		int res = check(m);
		if (res == 0)
		{
			cout << "Your number is " << m << endl;
			return 0;	
		}
		else if (res == -1)
		{
			r = m - 1;	
		}
		else
		{
			l = m + 1;
		}
	}
	cout << "Your number is " << l << endl;
	return 0;
}

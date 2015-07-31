#include <bits/stdc++.h>

#define F first
#define S second
#define pb push_back
#define INF (1 << 30)
#define SQR(a) ((a) * (a))

using namespace std;

const int N = 1111;

int main()
{
	pair<int, int> p(1, 2);	
	tuple<int, int, int, double, int, double> t = make_tuple(1, 2, 3, 2, 2, 2);
	cout << get<0>(t) << endl;
	cout << p.first << endl;
	cout << p.second << endl;
	stack<pair<int, int>> s;
	pair<int, int> pp = {1, 2};
	int e = 4;
	s.push({e, min(e, s.top().second)});
	return 0;
}

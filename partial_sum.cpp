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
	vector<int> a = {1, 3, 4, 5, 6, 9, 1, 3, 5, 6, 7, 8};
	vector<int> sum(a.size());
	vector<int> ps(a.size());
	partial_sum(a.begin(), a.end(), ps.begin());
	for (int i = 0; i < a.size(); i++)
	{
		sum[i] = a[i];
		if (i > 0)
			sum[i] += sum[i - 1];
	}
	for (int i = 0; i < a.size(); i++)
		cout << sum[i] << " ";
	cout << endl;
	for (int i = 0; i < a.size(); i++)
		cout << ps[i] << " ";

	return 0;
}

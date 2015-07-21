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
	vector<int> v = {1, 2, 2, 5, 10, 11, 15, 20};		
	vector<int>::iterator it = find(v.begin(), v.end(), 15); //n
	cout << binary_search(v.begin(), v.end(), 9); //log(n)
	auto it1 = lower_bound(v.begin(), v.end(), 2); //log(n)
	auto it2 = upper_bound(v.begin(), v.end(), 2); //log(n)
	cout << endl;
	for (auto it = it1; it != it2; it++)
		cout << *it << " ";
	cout << endl;
	cout << v.end() - v.begin() << endl;
	int ind2 = lower_bound(v.begin(), v.end(), 5) - v.begin();
	cout << endl << ind2;
	return 0;
}

#include <bits/stdc++.h>

#define F first
#define S second
#define pb push_back
#define INF (1 << 30)
#define SQR(a) ((a) * (a))

using namespace std;

const int N = 1111;

string bitS(int a)
{
	string s;
	for (int i = 31; i >= 0; i--)
	{
		if (a & (1 << i))
			s += '1';
		else
			s += '0';
	}
	return s;
}

void setBitTrue(int &val, int pos)
{
	val |= (1 << pos);	//OR
}

void setBitFalse(int &val, int pos)
{
	val &= ~(1 << pos);
}

int getBit(int &val, int pos)
{
	return (val & (1 << pos)) != 0;
}

int main()
{
	int a = 0;
	setBitTrue(a, 5);
	cout << bitS(a) << endl;
	cout << getBit(a, 5);
	return 0;
}

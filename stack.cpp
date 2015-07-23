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
	//FILO
	//First
	//In
	//Last
	//Out
	stack<int> s;		
	s.push(2); //засунуть void
	s.pop(); //удаляет void
	s.size(); //размер int
	s.top(); //верх int
	s.empty(); //bool - пустой или нет
	
	while (1)
	{
		char c;
		cin >> c;
		switch (c)
		{
			case 'a': 
				int x;
				cout << "Enter value " << endl;
				cin >> x;
				s.push(x);
				break;
			case 'p':
				x = s.top();
				s.pop();
				cout << "deleted " << x << endl;
				break;
			case 's':
				cout << "top is " << s.top() << endl;
				break;
			case 'q':
				exit(0);
				break;
			default:

				break;
		}		
	}

	return 0;
}

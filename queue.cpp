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
	//FIFO
	//First
	//In
	//First
	//Out
	queue<int> q;		
	q.push(2); //засунуть void
	q.pop(); //удаляет void
	q.size(); //размер int
	q.front(); //перед int
	q.empty(); //bool - пустой или нет
	
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
				q.push(x);
				break;
			case 'p':
				x = q.front();
				q.pop();
				cout << "deleted " << x << endl;
				break;
			case 's':
				cout << "top is " << q.front() << endl;
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

#include <bits/stdc++.h>

#define F first
#define S second
#define pb push_back
#define INF (1 << 30)
#define SQR(a) ((a) * (a))

using namespace std;

const int N = 11111;

class heap
{
	public:
		int a[N];
		int length = 0;

		int priority(int a)
		{
			return -a;
		}

		int top()
		{
			return a[1];
		}

		bool isEmpty()
		{
			return (length == 0);
		}

		void floatUp(int ind)
		{
			int parentInd = ind / 2;
			if (parentInd == 0)
				return;
			if (priority(a[ind]) > priority(a[parentInd]))
				swap(a[ind], a[parentInd]);
			floatUp(parentInd);	
		}

		void push(int val)
		{
			a[++length] = val;
			floatUp(length);
		}

		void sink(int ind)
		{
			if (ind * 2 <= length && priority(a[ind * 2]) > priority(a[ind]) && (ind * 2 + 1 > length || priority(a[ind * 2]) > priority(a[ind * 2 + 1])))
			{
				swap(a[ind], a[ind * 2]);
				sink(ind * 2);
			}
			else if (ind * 2 + 1 <= length && priority(a[ind * 2 + 1]) > priority(a[ind]) && priority(a[ind * 2 + 1] > priority(a[ind * 2])))
			{
				swap(a[ind], a[ind * 2 + 1]);
				sink(ind * 2 + 1);
			}
		}

		void pop()
		{
			swap(a[1], a[length]);
			length--;
			sink(1);
		}
};

int main()
{
	priority_queue<int> q;
	//priority_queue<int, vector<int>, greater<int>> q;
	//по возрастанию

	/*q.push(1);
	  q.push(3);
	  q.push(0);
	  q.push(-4);
	  q.push(40);
	  q.push(123);
	  q.push(34);

	  while (!q.empty())
	  {
	  cout << q.top() << " ";
	  q.pop();
	  }*/

	heap h;
	h.push(1);
	h.push(94);
	h.push(43);
	h.push(12);
	h.push(123);
	h.push(4);
	h.push(133);
	h.push(9123);
	h.push(0);
	h.push(-5);

	while (!h.isEmpty())
	{
		cout << h.top() << " ";
		h.pop();
	}

	return 0;
}

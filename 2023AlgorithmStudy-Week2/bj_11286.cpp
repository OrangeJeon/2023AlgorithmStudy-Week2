#include<iostream>
#include<queue>
#include<vector>
using namespace std;

struct cmp
{
	bool operator() (int a, int b)
	{
		if (abs(a) == abs(b))
			return a > b;
		return abs(a) > abs(b);
	}
};

int main()
{
	int N, x;
	priority_queue<int, vector<int>, cmp> q;
	vector<int> v;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> x;
		if (x == 0)
		{
			if (q.empty())
				v.push_back(0);
			else 
			{
				v.push_back(q.top());
				q.pop();
			}
		}
		else
		{
			q.push(x);
		}
	}
	for (int i = 0; i < v.size(); i++)
	{
		printf("%d\n", v[i]);
	}
	return 0;
}
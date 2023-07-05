#include<iostream>
#include<queue>
#include<vector>
using namespace std;

struct cmp
{
	bool operator() (int a, int b)
	{
		return  a > b; //swap
 	}
};

int main()
{
	vector<int> result;
	int N, x;
	cin >> N;

	priority_queue<int, vector<int>, cmp> q;
	for (int i = 0; i < N; i++)
	{
		cin >> x;
		if (x != 0)
			q.push(x);
		else
		{
			if (q.empty())
				result.push_back(0);
			else
			{
				result.push_back(q.top());
				q.pop();
			}
		}
	}
	for (int i = 0; i < result.size(); i++)
		printf("%d\n", result[i]);
	return 0;
}
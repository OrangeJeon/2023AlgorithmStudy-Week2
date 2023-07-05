#include<iostream>
#include<queue>
#include<functional>
using namespace std;

int main()
{
	priority_queue<int, vector<int>, greater<>> q;
	int N, sum = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num = 0;
		cin >> num;
		q.push(num);
	}
	while (true)
	{
		if (q.size() == 1)
		{
			printf("%d", sum);
			break;
		}
		int temp1, temp2;
		temp1 = q.top();
		q.pop();
		temp2 = q.top();
		q.pop();
		int temp_sum = temp1 + temp2;
		sum += temp_sum;
		q.push(temp_sum);
	}
	return 0;
}

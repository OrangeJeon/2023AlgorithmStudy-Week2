#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int listen, see, time = 0;
	string name;

	vector<string>result;
	map<string, bool> same;

	cin >> listen >> see;

	for (int i = 0; i < listen; i++)
	{
		cin >> name;
		same.insert(make_pair(name, true));
	}

	for (int i = 0; i < see; i++)
	{
		cin >> name;
		if (same[name])
		{
			result.push_back(name);
			time++;
		}
	}
	printf("%d\n", time);
	sort(result.begin(), result.end());
	for (int i = 0; i < result.size(); i++)
	{
		cout <<result[i] << endl;;
	}
	return 0;
}
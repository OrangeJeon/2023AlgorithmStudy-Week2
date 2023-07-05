#include<iostream>
#include<map>
using namespace std;

int main()
{
	int n;
	string s, ans;

	map<string, int> m;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		m[s]++;
	}

	for (int i = 0; i < n - 1; i++)
	{
		cin >> s;
		m[s]--;
	}
	for (auto el : m) if (el.second != 0) ans = el.first;
	cout << ans << endl;

	return 0;
}
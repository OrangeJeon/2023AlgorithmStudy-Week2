#include<iostream>
#include<map>
#include<string>
//#include<iterator>
using namespace std;

int main()
{
	string s;
	float num;

	map<string, int> tree;

	while (getline(cin, s)) 
	{
		num++;

		if (tree.count(s) == 0)
		{
			tree[s] = 1;
		}
		else
		{
			tree[s]++;
		}
	}
	cout << fixed;
	cout.precision(4);

	for (auto it = tree.begin(); it != tree.end(); it++)
	{
		cout << it->first << " " << (it->second) * 100 / num << endl;
	}
	return 0;
}
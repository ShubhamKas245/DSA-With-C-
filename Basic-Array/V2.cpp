#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int ele;
		cin >> ele;
		v.push_back(ele);
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}
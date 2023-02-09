// Find Good Pair  a[i]+a[j]=b
// [1,2,3,4] B=7

#include <iostream>
using namespace std;

bool goodPair(int arr[], int n, int b)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] + arr[j] == b)
				return 1;
		}
	}
	return 0;
}

int main()
{
	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int b;
	cin >> b;
	cout << goodPair(arr, n, b) << endl;
}
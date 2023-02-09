// Array size N. count no of pairs (i,j) such that arr[i]+arr[j]==k    i!=j
// k=10 arr[7]=> 3 -2 1 4 3 6 8 ans=1
// K=10 arr[10] ==> 3 5 2 1 -3 7 8 15 6 13 ans=3

#include <iostream>
using namespace std;

int countPair(int arr[], int n, int k)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] + arr[j] == k)
			{
				cnt++;
			}
		}
	}
	return cnt;
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
	int k;
	cin >> k;
	int cnt = countPair(arr, n, k);
	cout << cnt << endl;

	return 0;
}
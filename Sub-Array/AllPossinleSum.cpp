// Print the all possible Sub-Array sum
// 3 -2 4 -1 2 6
#include <iostream>
using namespace std;

void sum(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = i; j < n; j++)
		{
			sum += arr[j];
		}
		cout << sum << " ";
	}
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
	sum(arr, n);

	return 0;
}
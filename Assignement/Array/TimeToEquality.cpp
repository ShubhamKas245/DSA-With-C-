// Time to Equality

#include <iostream>
using namespace std;

int equality(int arr[], int n)
{
	int maxValue = arr[0];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		maxValue = max(maxValue, arr[i]);
		sum = sum + arr[i];
	}
	return (maxValue * n - sum);
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
	int minSecond = equality(arr, n);
	cout << "Minimum seconds required to equal is " << minSecond << endl;
}
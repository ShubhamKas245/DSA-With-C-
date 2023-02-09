// Print sum all subrarray sums
// 3 -2 4 -1 2 6
#include <iostream>
using namespace std;

void totaLSum(int arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = i; j < n; j++)
		{
			sum = sum + arr[j];
			total += sum;
		}
	}
	cout << total << " ";
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
	totaLSum(arr, n);

	return 0;
}
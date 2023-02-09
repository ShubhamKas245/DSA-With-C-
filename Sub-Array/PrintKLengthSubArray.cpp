// Printing the starting index and ending index whose length is k
// 3 4 2 -1 6 7  8 9 3 2 -1 4 (K=6)

#include <iostream>
using namespace std;

void kTimes(int arr[], int n, int k)
{
	for (int i = 0; i <= n - k; i++)
	{
		int start = i;
		int end = i + k - 1;
		cout << start << " " << end << ", ";
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
	int k;
	cin >> k;
	kTimes(arr, n, k);

	// for (int i = 0; i < n; i++)
	// {
	// 	cout << arr[i] << " ";
	// }
	return 0;
}
// Rotate array by K times (K=3)
// 3 -2 1 4 6 9 8

#include <iostream>
using namespace std;

void rotate(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void reverse(int arr[], int n, int k)
{
	k = k % n;
	rotate(arr, 0, n - 1);
	rotate(arr, 0, k - 1);
	rotate(arr, k, n - 1);
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
	reverse(arr, n, k);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
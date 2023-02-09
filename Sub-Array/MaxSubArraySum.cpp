// Find the maximum subarray sum whose length is K
// -3 4 -2 5 3 -2 8 2 -1 4

#include <iostream>
using namespace std;

// Approach 1
void maxSum(int arr[], int n, int k)
{
	int maxSum = 0;
	for (int i = 0; i <= n - k; i++)
	{
		int start = i;
		int end = i + k - 1;
		int sum = 0;
		for (int j = start; j <= end; j++)
		{
			sum = sum + arr[j];
		}
		if (sum > maxSum)
			maxSum = sum;
	}
	cout << "The maximum subarray sum is " << maxSum << " ";
}
// Approach 2
// Sliding window approach
void maxSubArraySum(int arr[], int n, int k)
{
	int sum = 0;
	for (int i = 0; i < k; i++)
	{
		sum += arr[i];
	}
	int maxSum = sum;
	for (int i = 1; i <= n - k; i++)
	{
		sum = sum + arr[i + k - 1] - arr[i - 1];
		if (sum > maxSum)
			maxSum = sum;
	}
	cout << "The maximum subarray sum is " << maxSum << " ";
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
	maxSubArraySum(arr, n, k);

	return 0;
}
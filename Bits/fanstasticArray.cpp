// Given an array of size n, the task is to find the minimum number of steps required to make
// all the elements of the array divisible by 4. A step is defined as removal of any two elements
// from the array and adding the sum of these elements to the array.

#include <iostream>
using namespace std;

int fanstatic(int a[], int n)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 4 != 0)
		{
			cnt++;
		}
		if (cnt > n / 2)
		{
			return -1;
		}
	}
	return cnt / 2;
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

	cout << fanstatic(arr, n) << endl;

	return 0;
}
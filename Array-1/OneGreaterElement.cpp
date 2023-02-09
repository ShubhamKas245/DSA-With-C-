// Given an array with size N. count number of elements that have
//  that have atleast 1 greater element greater than Itself
// arr[7]= 3 -2 6 8 4 8 5
// arr[10]= 2 5 1 4 8 0 8 1 3 8

#include <iostream>
using namespace std;

int greaterThanItself(int arr[], int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == max)
			cnt++;
	}
	return cnt;
}

// Write only single loop ====> homework

// int greaterbyItself(int arr[], int n)
// {
// 	int max = arr[0];
// 	int cnt = 0;
// 	for (int i = 0; i < n; i++)
// 	{
// 		if (arr[i] > max)
// 		{
// 			max = arr[i];
// 		}
// 		if (arr[i] == max)
// 		{
// 			cnt++;
// 		}
// 	}
// 	return cnt++;
// }
int main()
{
	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int count = greaterThanItself(arr, n);
	// int count = greaterbyItself(arr, n);
	cout << "Total greater element by itself is " << (n - count) << endl;

	return 0;
}
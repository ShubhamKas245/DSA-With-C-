// Print all subarray

#include <iostream>
using namespace std;

void printAllSubArray(int arr[], int n)
{
	int start, end;
	for (start = 0; start < n; start++)
	{
		for (end = start; end < n; end++)
		{
			for (int k = start; k <= end; k++)
			{
				cout << arr[k] << " ";
			}
		}
		cout << endl;
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
	cout << "Printing all sub-array" << endl;
	printAllSubArray(arr, n);

	return 0;
}
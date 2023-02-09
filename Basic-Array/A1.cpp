#include <iostream>
using namespace std;

int main()
{
	// int arr[] = {1, 2, 3, 4, 5};
	// cout << sizeof(arr) << endl;
	// cout << sizeof(arr) / sizeof(arr[0]) << endl;
	// int size = sizeof(arr) / sizeof(arr[0]);
	// int maximum = 0;
	// for (int i = 0; i < size; i++)
	// {
	// 	if (arr[i] > maximum)
	// 		maximum = arr[i];
	// }
	// cout << maximum << endl;

	// char vowels[5];
	// for (int i = 0; i < 5; i++)
	// {
	// 	cout << vowels[i] << " ";
	// }

	// Find element in array
	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
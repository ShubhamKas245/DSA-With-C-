// Find Missing Number

#include <iostream>
using namespace std;

int missingNumber(int arr[], int n)
{
	int Xor = 0;
	for (int i = 0; i < n - 1; i++)
	{
		Xor = Xor ^ (i + 1);
		Xor = Xor ^ arr[i];
	}
	return Xor ^ n;
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
	int missingNum = missingNumber(arr, n);
	cout << "Missing No is " << missingNum << endl;
}
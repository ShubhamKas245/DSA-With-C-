// Rotation Game
#include <iostream>
using namespace std;

void rotation(int arr[], int s, int e)
{
	while (s <= e)
	{
		int temp = arr[s];
		arr[s] = arr[e];
		arr[e] = temp;
		s++;
		e--;
	}
}
void reverseNum(int arr[], int n, int k)
{
	k = k % n;
	rotation(arr, 0, n - 1);
	rotation(arr, 0, k - 1);
	rotation(arr, k, n - 1);
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
	reverseNum(arr, n, k);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
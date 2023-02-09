// Reverse the whole array
#include <iostream>
using namespace std;
// void Swap(int arr[] int i,int j )
// {

// 	  a = arr[i]^arr[b];
//      b=a^b;
// 	a=a^b;
// }

void reverseArray(int a[], int n)
{
	int i = 0;
	int j = n - 1;
	while (i <= j)
	{
		swap(a[i], a[j]);
		i++;
		j--;
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
	reverseArray(arr, n);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
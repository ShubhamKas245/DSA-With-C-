
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int oddPs[n];
	int evenPs[n];
	oddPs[0] = 0;
	evenPs[0] = arr[0];
	int q, l, r;
	cin >> q >> l >> r;
	while (q--)
	{
		for (int i = l; i <= r; i++)
		{
			if (i % 2 == 0)
			{
				oddPs[i] = oddPs[i - 1];
				evenPs[i] = evenPs[i - 1] + arr[i];
			}
			else
			{
				oddPs[i] = oddPs[i - 1] + arr[i];
				evenPs[i] = evenPs[i - 1];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << oddPs[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << evenPs[i] << " ";
	}
}
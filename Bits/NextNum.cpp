// Next Number should not be 0
#include <iostream>
#include <string>
using namespace std;

int fun(int a)
{
	int newNumber = a + 1;
	string stringNum = to_string(newNumber);
	for (int i = 0; i < stringNum.length(); i++)
	{
		if (stringNum[i] == '0')
		{
			stringNum[i] = '1';
		}
	}
	return stoi(stringNum);
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

	for (int i = 0; i < n; i++)
	{
		cout << fun(arr[i]) << " ";
	}

	return 0;
}
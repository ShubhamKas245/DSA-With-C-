// FIND N NO OF SUM
#include <iostream>
using namespace std;

int sumN(int n)
{
	if (n == 0)
	{
		return 0;
	}
	return sumN(n - 1) + n;
}

int main()
{
	int n;
	cin >> n;
	cout << sumN(n) << endl;
	return 0;
}
// Find GCD
#include <iostream>
using namespace std;

int findGcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return findGcd(b, a % b);
}

int main()
{
	int a, b;
	cin >> a >> b;

	int gcd = findGcd(a, b);
	cout << gcd << endl;

	return 0;
}
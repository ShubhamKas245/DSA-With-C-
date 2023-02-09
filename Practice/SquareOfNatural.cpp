// Print Square of first 5 natural Numbers
#include <iostream>
using namespace std;

int square(int x)
{
	return x * x;
}

int main()
{
	int x = 1;
	for (int i = 1; i <= 5; i++)
	{
		// cout << square(i) << " ";
		x = i * i;
		cout << x << " ";
	}
	return 0;
}
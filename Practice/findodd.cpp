#include <iostream>
using namespace std;

bool odd(int n)
{
	if (n % 2 == 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		if (odd(i))
		{
			cout << i << " ";
		}
	}
	return 0;
}
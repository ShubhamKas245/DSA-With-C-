#include <iostream>
using namespace std;

bool isPrime(int n)
{
	for (int i = 2; i <= (n - 1); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

bool isPrimebtr(int num)
{
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{

	int a = 2;
	int b = 40;
	for (int i = a; i <= b; i++)
	{
		if (isPrimebtr(i))
			cout << i << " ";
	}
	return 0;
}
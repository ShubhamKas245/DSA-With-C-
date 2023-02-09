// Array N find prime number from 1 to N
// #include <iostream>
// using namespace std;

// void totalPrimeNo(int n)
// {
// 	bool p[n + 1];
// 	p[0] = false;
// 	p[1] = false;
// 	int count;

// 	for (int i = 2; i * i <= n; i++)
// 	{
// 		if (p[i] == true)
// 		{
// 			for (int j = i * i; j <= n; j = j + i)
// 			{
// 				p[j] = false;
// 			}
// 		}
// 	}
// 	cout << "The prime numbers under 30 are:" << endl;

// 	for (int i = 2; i <= n; i++)
// 	{
// 		if (p[i] == true)

// 			cout << i << " ";
// 	}
// }

// int main()
// {
// 	int n;
// 	cin >> n;
// 	totalPrimeNo(n);
// }

#include <iostream>
#include <vector>
using namespace std;

vector<int> sieve(int n)
{
	vector<bool> isPrime(n + 1, true);
	vector<int> primes;

	isPrime[0] = isPrime[1] = false;
	for (int i = 2; i <= n; i++)
	{
		if (isPrime[i])
		{
			primes.push_back(i);
			for (int j = 2 * i; j <= n; j += i)
			{
				isPrime[j] = false;
			}
		}
	}
	return primes;
}

int main()
{
	int n;
	cout << "Enter the value of N: ";
	cin >> n;

	vector<int> primes = sieve(n);
	cout << "Prime numbers from 1 to " << n << " are: ";
	for (int i = 0; i < primes.size(); i++)
	{
		cout << primes[i] << " ";
	}
	return 0;
}
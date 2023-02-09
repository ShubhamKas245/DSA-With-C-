// given a positive integer A, return an array of strings with all the integers from 1 to N.but multiple  of 3 the array should have "FIZZ" instead of the number.For the multiple of 5, the array should have "BUZZ" instead of number  (input is 5)

#include <iostream>
using namespace std;
#include <vector>

vector<string> fizzBuzz(int A)
{
	vector<string> result;

	for (int i = 1; i <= A; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			result.push_back("FIZZBUZZ");
		}
		else if (i % 3 == 0)
		{
			result.push_back("FIZZ");
		}
		else if (i % 5 == 0)
		{
			result.push_back("BIZZ");
		}
		else
		{
			result.push_back(to_string(i));
		}
	}
	return result;
}

int main()
{
	int A;
	cin >> A;
	int arr[A];

	for (int i = 0; i < A; i++)
	{
		cin >> arr[i];
	}

	vector<string> result = fizzBuzz(A);

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
	}
	return 0;
}
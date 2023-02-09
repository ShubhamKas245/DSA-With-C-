// Check given string is palindrome or not

#include <iostream>
using namespace std;

bool checkpal(string s, int start, int end)
{
	if (start >= end)
		return true;
	return s[start] == s[end] & checkpal(s, start + 1, end - 1);
}

int main()
{
	string s;
	cin >> s;
	bool result = checkpal(s, 0, s.length() - 1);
	if (result)
	{
		cout << "string is palindrome" << endl;
	}
	else
	{
		cout << "string is not palindrome" << endl;
	}

	return 0;
}
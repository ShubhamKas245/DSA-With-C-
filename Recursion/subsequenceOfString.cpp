// Check subsequence of given string

#include <iostream>
using namespace std;

bool isSubsequence(string str1, string str2, int m, int n)
{
	if (m == 0)
		return true;
	if (n == 0)
		return false;
	if (str1[m - 1] == str2[n - 1])
	{
		return isSubsequence(str1, str2, m - 1, n - 1);
	}
	return isSubsequence(str1, str2, m, n - 1);
}

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int m = s1.length();
	int n = s2.length();
	bool result = isSubsequence(s1, s2, m, n);
	if (result)
	{
		cout << "subsequence" << endl;
	}
	else
	{
		cout << "Not Subsequence" << endl;
	}

	return 0;
}
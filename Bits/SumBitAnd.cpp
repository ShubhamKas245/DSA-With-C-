// Given an array of n elements. The task is to print the maximum sum by selecting two
//  subsequences of the array (not necessarily different) such that the sum of bitwise AND
//  of all elements of the first subsequence and bitwise OR of all the elements of the second
//  subsequence is maximum.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maximum(int arr[], int n)
{
	int orVal = 0, andValue = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		andValue = max(andValue, arr[i]);
		orVal |= arr[i];
	}
	return (orVal + andValue);
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

	cout << maximum(arr, n) << endl;
	return 0;
}
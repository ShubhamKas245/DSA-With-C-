// Minimum cost
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int mimimumCost(int p[],int q[],int r[],int n){
// 	int ans = 0;
// 	for (q = 2; q < n-1;q++){

// 	}
// }

// int main(){
// 	int n;
// 	cin >> n;
// 	int arr[n];
// 	for (int i = 0; i < n;i++){
// 		cin >> arr[i];
// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;

// int min_cost(int arr[], int cost[], int n)
// {
// 	sort(arr, arr + n);
// 	sort(cost, cost + n);
// 	int min_cost = INT_MAX;
// 	for (int i = 0; i < n - 2; i++)
// 	{
// 		int left = i + 1, right = n - 1;
// 		while (left < right)
// 		{
// 			int sum = arr[i] + arr[left] + arr[right];
// 			int current_cost = cost[i] + cost[left] + cost[right];
// 			min_cost = min(min_cost, current_cost);
// 			if (sum < 0)
// 			{
// 				left++;
// 			}
// 			else if (sum > 0)
// 			{
// 				right--;
// 			}
// 			else
// 			{
// 				break;
// 			}
// 		}
// 	}
// 	return min_cost;
// }

// int main()
// {
// 	int n;
// 	cin >> n;
// 	int arr[n], cost[n];
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> arr[i];
// 	}
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> cost[i];
// 	}
// 	cout << min_cost(arr, cost, n) << endl;
// 	return 0;
// }
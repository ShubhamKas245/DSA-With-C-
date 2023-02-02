// Given array length of Strings count  pair of ag
// using carry forward techniques

#include <iostream>
using namespace std;

void count_Pairs(string arr[], int n)
{
    int count = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == "a")
        {
            ans++;
        }
        else if (arr[i] == "g")
        {
            count += ans;
        }
    }
    cout << count << endl;
}

int main()
{
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    count_Pairs(arr, n);
}
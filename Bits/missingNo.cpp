
#include <iostream>
using namespace std;

int findNo(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ans = ans ^ (i + 1);
        ans = ans ^ arr[i];
    }
    return ans ^ n;
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
    int MissingNum = findNo(arr, n);
    cout << "Missing No is " << MissingNum << endl;
    return 0;
}
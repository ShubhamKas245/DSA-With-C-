#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    int brr[n];

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> brr[j];
    }

    for (int i = 0; i < n; i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < m; i++)
    {
        ans.push_back(brr[i]);
    }
    cout << "Printing the array" << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
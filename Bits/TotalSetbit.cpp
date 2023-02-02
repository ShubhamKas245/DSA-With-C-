// Find total no of setbits

#include <iostream>
using namespace std;

// Ist Approach
int totalSetbits(int n)
{
    int cnt = 0;
    for (int i = 0; i <= 30; i++)
    {
        if (n & 1)
            cnt++;
        n = n >> 1;
    }
    return cnt;
}

// Better Approach

int totalbits(int n)
{
    int count = 0;
    for (int i = 0; i <= 30; i++)
    {
        while (n > 0)
        {
            n = n & (n - 1);
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int totalSetbit = totalbits(n);
    cout << "Total set bits is " << totalSetbit << endl;
    return 0;
}
